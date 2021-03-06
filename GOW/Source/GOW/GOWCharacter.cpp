// Copyright Epic Games, Inc. All Rights Reserved.

#include "GOWCharacter.h"

#include "AbilitySystemComponent.h"
#include "GASAttributeSet.h"
#include "GASGameplayAbility.h"
#include "Abilities/GameplayAbility.h"

#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"

#include "GOW.h"

#include "GameplayEffectTypes.h"
#include "GameFramework/SpringArmComponent.h"

//////////////////////////////////////////////////////////////////////////
// AGOWCharacter

AGOWCharacter::AGOWCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	// Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystem"));
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Minimal);

	Attributes= CreateDefaultSubobject<UGASAttributeSet>("Attributes");

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)
}

//////////////////////////////////////////////////////////////////////////
// Input

void AGOWCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveForward", this, &AGOWCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AGOWCharacter::MoveRight);

	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);

	if(AbilitySystemComponent && InputComponent)
	{
		const FGameplayAbilityInputBinds Binds
		("Confirm",
			"Cancel",
			"EGASAbilityInputID",
			static_cast<int32>(EGASAbilityInputID::Confirm),
			static_cast<int32>(EGASAbilityInputID::Cancel)
		);

		AbilitySystemComponent->BindAbilityActivationToInputComponent(InputComponent,Binds);
	}
	
}

UAbilitySystemComponent* AGOWCharacter::GetAbilitySystemComponent() const
{
	return  AbilitySystemComponent;
}


void AGOWCharacter::InitializeAttributes()
{
	if(AbilitySystemComponent&& DefaultAttributeEffect)
	{
		FGameplayEffectContextHandle EffectContextHandle = AbilitySystemComponent->MakeEffectContext();
		EffectContextHandle.AddSourceObject(this);

		FGameplayEffectSpecHandle SpecHandle= AbilitySystemComponent->MakeOutgoingSpec(DefaultAttributeEffect,1,EffectContextHandle);

		if(SpecHandle.IsValid())
		{
			FActiveGameplayEffectHandle GEHandle=AbilitySystemComponent->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
		}
	}
	
}

void AGOWCharacter::GiveAbilities()
{
	if(HasAuthority() && AbilitySystemComponent )
	{
		for(TSubclassOf<UGASGameplayAbility>& StartupAbility: DefaultAbilities)
		{
			AbilitySystemComponent->GiveAbility(
				FGameplayAbilitySpec(StartupAbility,1,static_cast<int32>(StartupAbility.GetDefaultObject()->AbilityInputID),this));
		}
	}
	
}

void AGOWCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	AbilitySystemComponent->InitAbilityActorInfo(this,this);

	InitializeAttributes();
	GiveAbilities();
	
}

void AGOWCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	AbilitySystemComponent->InitAbilityActorInfo(this,this);

	InitializeAttributes();
	if(AbilitySystemComponent&& InputComponent)
	{
		const FGameplayAbilityInputBinds Binds
        ("Confirm",
            "Cancel",
            "EGASAbilityInputID",
            static_cast<int32>(EGASAbilityInputID::Confirm),
            static_cast<int32>(EGASAbilityInputID::Cancel)
        );

		AbilitySystemComponent->BindAbilityActivationToInputComponent(InputComponent,Binds);
	}
	
}

void AGOWCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	

}

void AGOWCharacter::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void AGOWCharacter::MoveRight(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}

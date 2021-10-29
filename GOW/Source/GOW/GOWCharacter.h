// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "Engine/DataTable.h"
#include "GameFramework/Character.h"
#include "GOWCharacter.generated.h"

UCLASS(config=Game)
class AGOWCharacter : public ACharacter, public  IAbilitySystemInterface
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;



public:
	AGOWCharacter();

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;

	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Attributes, meta = (AllowPrivateAccess = "true"))
	class UAbilitySystemComponent* AbilitySystem;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Attributes, meta = (AllowPrivateAccess = "true"))
	UDataTable* AttributeDataTable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Attributes | Debugging")
	bool bAttrDebugging;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Attributes | Debugging")
	TArray<TSubclassOf<class UGameplayAbility>> DebuggingPassiveAbilities;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Attributes ")
	TArray<TSubclassOf<class UGameplayAbility>> StartingPassiveAbilities;
	

	

protected:

	virtual void BeginPlay() override;


	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);


protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual  UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	// End of APawn interface

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
};

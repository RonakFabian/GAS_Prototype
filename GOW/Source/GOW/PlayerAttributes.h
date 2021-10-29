// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "PlayerAttributes.generated.h"

/**
 * 
 */
UCLASS()
class GOW_API UPlayerAttributes : public UAttributeSet
{
	GENERATED_BODY()

	public:
	
	UPROPERTY(Category="Abilites | Stats",EditAnywhere,BlueprintReadWrite)
	FGameplayAttributeData Speed;

	UPROPERTY(Category="Abilites | Stats",EditAnywhere,BlueprintReadWrite)
	FGameplayAttributeData Health;

	UPROPERTY(Category="Abilites | Stats",EditAnywhere,BlueprintReadWrite)
	FGameplayAttributeData Damage;

	UFUNCTION(Category="Abilites Functions")
	FGameplayAttribute SpeedAttribute();

	UFUNCTION(Category="Abilites Functions")
    FGameplayAttribute HealthAttribute();

	UFUNCTION(Category="Abilites Functions")
    FGameplayAttribute DamageAttribute();
	

	
	
};

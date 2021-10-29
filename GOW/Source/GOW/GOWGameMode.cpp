// Copyright Epic Games, Inc. All Rights Reserved.

#include "GOWGameMode.h"
#include "GOWCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGOWGameMode::AGOWGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

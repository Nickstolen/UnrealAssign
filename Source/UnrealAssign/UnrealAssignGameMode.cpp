// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealAssignGameMode.h"
#include "UnrealAssignCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealAssignGameMode::AUnrealAssignGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

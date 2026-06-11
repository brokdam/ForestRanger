// Copyright Epic Games, Inc. All Rights Reserved.

#include "ForestRangerGameMode.h"
#include "ForestRangerCharacter.h"
#include "UObject/ConstructorHelpers.h"

AForestRangerGameMode::AForestRangerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

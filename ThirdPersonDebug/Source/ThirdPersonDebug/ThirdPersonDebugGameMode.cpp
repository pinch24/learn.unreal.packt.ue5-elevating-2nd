// Copyright Epic Games, Inc. All Rights Reserved.

#include "ThirdPersonDebugGameMode.h"
#include "ThirdPersonDebugCharacter.h"
#include "UObject/ConstructorHelpers.h"

AThirdPersonDebugGameMode::AThirdPersonDebugGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

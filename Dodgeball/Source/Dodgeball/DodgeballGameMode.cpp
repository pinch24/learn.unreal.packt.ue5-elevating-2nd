// Copyright Epic Games, Inc. All Rights Reserved.

#include "DodgeballGameMode.h"
#include "DodgeballCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADodgeballGameMode::ADodgeballGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

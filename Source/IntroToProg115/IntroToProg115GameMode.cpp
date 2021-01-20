// Copyright Epic Games, Inc. All Rights Reserved.

#include "IntroToProg115GameMode.h"
#include "IntroToProg115Character.h"
#include "UObject/ConstructorHelpers.h"

AIntroToProg115GameMode::AIntroToProg115GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

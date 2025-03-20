// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestMapGameMode.h"
#include "TestMapCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestMapGameMode::ATestMapGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

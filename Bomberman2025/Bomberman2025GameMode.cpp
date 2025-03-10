// Copyright Epic Games, Inc. All Rights Reserved.

#include "Bomberman2025GameMode.h"
#include "Bomberman2025Character.h"
#include "UObject/ConstructorHelpers.h"

ABomberman2025GameMode::ABomberman2025GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

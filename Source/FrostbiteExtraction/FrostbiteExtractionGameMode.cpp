// Copyright Epic Games, Inc. All Rights Reserved.

#include "FrostbiteExtractionGameMode.h"
#include "FrostbiteExtractionCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFrostbiteExtractionGameMode::AFrostbiteExtractionGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}

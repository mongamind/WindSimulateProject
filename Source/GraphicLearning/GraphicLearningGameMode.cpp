// Copyright Epic Games, Inc. All Rights Reserved.

#include "GraphicLearningGameMode.h"
#include "GraphicLearningHUD.h"
#include "GraphicLearningCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGraphicLearningGameMode::AGraphicLearningGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGraphicLearningHUD::StaticClass();
}

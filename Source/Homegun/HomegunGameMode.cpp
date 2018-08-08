// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "HomegunGameMode.h"
#include "HomegunHUD.h"
#include "HomegunCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHomegunGameMode::AHomegunGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AHomegunHUD::StaticClass();
}

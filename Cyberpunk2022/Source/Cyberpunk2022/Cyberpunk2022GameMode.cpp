// Copyright Epic Games, Inc. All Rights Reserved.

#include "Cyberpunk2022GameMode.h"
#include "Cyberpunk2022HUD.h"
#include "Cyberpunk2022Character.h"
#include "UObject/ConstructorHelpers.h"

ACyberpunk2022GameMode::ACyberpunk2022GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ACyberpunk2022HUD::StaticClass();
}

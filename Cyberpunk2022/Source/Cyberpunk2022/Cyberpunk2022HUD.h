// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Cyberpunk2022HUD.generated.h"

UCLASS()
class ACyberpunk2022HUD : public AHUD
{
	GENERATED_BODY()

public:
	ACyberpunk2022HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};


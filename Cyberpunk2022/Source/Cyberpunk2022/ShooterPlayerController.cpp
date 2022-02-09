// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterPlayerController.h"
#include "Blueprint/UserWidget.h"

AShooterPlayerController::AShooterPlayerController()
{

}

void AShooterPlayerController::BeginPlay()
{
	Super::BeginPlay();

	if(_HUDOverlayClass)
	{
		_HUDOverlay = CreateWidget<UUserWidget>(this, _HUDOverlayClass);
		if(_HUDOverlay)
		{
			_HUDOverlay->AddToViewport();
			_HUDOverlay->SetVisibility(ESlateVisibility::Visible);
		}
	}
}


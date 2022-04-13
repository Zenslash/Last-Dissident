// Fill out your copyright notice in the Description page of Project Settings.


#include "SpeedBuff.h"

#include "SpeedPickup.h"

void USpeedBuff::ApplyEffect()
{
	Super::ApplyEffect();

	if (_sourceItem == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("SourceItem is null!"));
		return;
	}

	ASpeedPickup* pickup = Cast<ASpeedPickup>(_sourceItem);
	if (pickup == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Invalid cast! Trying cast sourceItem to ASpeedPickup"));
		return;
	}
	_characterStats->SetSpeedMultiplier(pickup->GetSpeedMultiplier());

	//Init Timer
	pickup->GetWorld()->GetTimerManager().SetTimer(_timerHandle, this, &USpeedBuff::RemoveEffect, pickup->GetBuffDuration());
}

void USpeedBuff::RemoveEffect()
{
	Super::RemoveEffect();

	if(_characterStats == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("CharacterStats is nullptr!"));
		return;
	}
	_characterStats->SetSpeedMultiplier(1.f);
}

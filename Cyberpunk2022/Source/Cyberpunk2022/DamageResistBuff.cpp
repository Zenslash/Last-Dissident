// Fill out your copyright notice in the Description page of Project Settings.


#include "DamageResistBuff.h"

#include "ShieldPickup.h"

void UDamageResistBuff::ApplyEffect()
{
	Super::ApplyEffect();

	if(_sourceActor == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("SourceActor is null!"));
		return;
	}
	if(_sourceItem == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("SourceItem is null!"));
		return;
	}

	AShieldPickup* pickup = Cast<AShieldPickup>(_sourceItem);
	if(pickup == nullptr)
	{
		UE_LOG(LogTemp,Warning,TEXT("Invalid cast! Trying cast sourceItem to AShieldPickup"));
		return;
	}
	_characterStats->SetDamageResistMultiplier(pickup->GetShieldResist());

	//Init Timer
	_sourceActor->GetWorld()->GetTimerManager().SetTimer(_timerHandle, this, &UDamageResistBuff::RemoveEffect, pickup->GetShieldDuration());
}

void UDamageResistBuff::RemoveEffect()
{
	Super::RemoveEffect();

	if (_characterStats == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("CharacterStats is nullptr!"));
		return;
	}
	_characterStats->SetDamageResistMultiplier(0);
}

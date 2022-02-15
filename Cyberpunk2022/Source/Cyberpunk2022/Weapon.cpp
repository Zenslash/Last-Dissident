// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"
#include "Curves/CurveFloat.h"
#include "Camera/CameraShake.h"

AWeapon::AWeapon()
{
	_ammo = 0;
	_weaponType = EWeaponType::EWT_SMG;
	_ammoType = EAmmoType::EAT_SMG;
	_reloadMontageSection = TEXT("Reload SMG");
	_magazineCapacity = 30;
}

void AWeapon::DecrementAmmo()
{
	_ammo -= 1;
	if(_ammo < 0)
	{
		_ammo = 0;
	}
}

void AWeapon::ReloadAmmo(int32 amount)
{
	checkf(_ammo + amount <= _magazineCapacity, TEXT("Attempted to reload woth more than magazine capacity"));

	_ammo += amount;
}

FVector AWeapon::GetRecoilOffset()
{
	FVector resultVector = FVector::ZeroVector;
	float t = 1 - ((float)_ammo / _magazineCapacity);
	float valueX = _recoilX->GetFloatValue(t);
	float valueY = _recoilY->GetFloatValue(t);
	float randX = -valueX + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (valueX - (-valueX))));
	float randY = -valueY + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (valueY - (-valueY))));
	UE_LOG(LogTemp, Log, TEXT("randX: %f"), randX);
	UE_LOG(LogTemp, Log, TEXT("randY: %f"), randY);
	resultVector += FVector(0.f, randX, randY);
	return resultVector;
}

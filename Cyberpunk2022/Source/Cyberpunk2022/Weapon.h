// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "Weapon.generated.h"

/**
 * 
 */
UCLASS()
class CYBERPUNK2022_API AWeapon : public AItem
{
	GENERATED_BODY()


private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	class USoundCue* _fireSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	class UParticleSystem* _muzzleFlash;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	UParticleSystem* _impactParticles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	UParticleSystem* _beamParticles;

public:
	USoundCue* GetFireSound() const
	{
		return _fireSound;
	}
	UParticleSystem* GetMuzzleFlash() const
	{
		return _muzzleFlash;
	}
	UParticleSystem* GetImpactParticles() const
	{
		return _impactParticles;
	}
	UParticleSystem* GetBeamParticles() const
	{
		return _beamParticles;
	}
};

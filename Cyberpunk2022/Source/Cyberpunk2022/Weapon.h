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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	float _fireRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Properties", meta = (AllowPrivateAccess = "true"))
	int32 _ammo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Properties", meta = (AllowPrivateAccess = "true"))
	int32 _damagePerBullet;

public:
	AWeapon();

	FORCEINLINE USoundCue* GetFireSound() const
	{
		return _fireSound;
	}
	FORCEINLINE UParticleSystem* GetMuzzleFlash() const
	{
		return _muzzleFlash;
	}
	FORCEINLINE UParticleSystem* GetImpactParticles() const
	{
		return _impactParticles;
	}
	FORCEINLINE UParticleSystem* GetBeamParticles() const
	{
		return _beamParticles;
	}
	FORCEINLINE float GetFireRate() const
	{
		return _fireRate;
	}
	FORCEINLINE int32 GetAmmo() const { return _ammo; }
	FORCEINLINE int32 GetDamagePerBullet() const { return _damagePerBullet; }

	void DecrementAmmo();
};

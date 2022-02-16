// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "AmmoType.h"
//#include "Camera/CameraShake.h"
#include "Weapon.generated.h"


UENUM(BlueprintType)
enum class EWeaponType : uint8
{
	EWT_SMG UMETA(DisplayName = "SMG"),

	EWT_MAX UMETA(DisplayName = "DefaultMax")
};

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
	int32 _magazineCapacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Properties", meta = (AllowPrivateAccess = "true"))
	EWeaponType _weaponType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Properties", meta = (AllowPrivateAccess = "true"))
	EAmmoType _ammoType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Properties", meta = (AllowPrivateAccess = "true"))
	FName _reloadMontageSection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Properties", meta = (AllowPrivateAccess = "true"))
	int32 _damagePerBullet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Properties", meta = (AllowPrivateAccess = "true"))
	class UCurveFloat* _recoilX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Properties", meta = (AllowPrivateAccess = "true"))
	UCurveFloat* _recoilY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon Properties", meta = (AllowPrivateAccess = "true"))
	class UDataTable* _bulletHolesDT;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation Properties", meta = (AllowPrivateAccess = "true"))
	UAnimMontage* _reloadAnimation;

	UPROPERTY(EditDefaultsOnly, Category = "Camera Shake")
	TSubclassOf<UCameraShakeBase> _cameraShakeClass;


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
	FORCEINLINE int32 GetMagazineCapacity() const { return _magazineCapacity; }
	FORCEINLINE int32 GetDamagePerBullet() const { return _damagePerBullet; }
	FORCEINLINE EWeaponType GetWeaponType() const { return _weaponType; }
	FORCEINLINE EAmmoType GetAmmoType() const { return _ammoType; }
	FORCEINLINE FName GetReloadMontage() const { return _reloadMontageSection; }
	FORCEINLINE UAnimMontage* GetReloadAnimation() const { return _reloadAnimation; }
	FORCEINLINE TSubclassOf<UCameraShakeBase> GetShakeClass() const { return _cameraShakeClass; }

	FORCEINLINE void DecrementAmmo();

	void ReloadAmmo(int32 amount);

	FVector GetRecoilOffset();

	UMaterialInterface* GetBulletHoleDecal(FName surfaceName);
};

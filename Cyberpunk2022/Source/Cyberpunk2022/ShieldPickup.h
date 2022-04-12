// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "ShieldPickup.generated.h"

/**
 * 
 */
UCLASS()
class CYBERPUNK2022_API AShieldPickup : public AItem
{
	GENERATED_BODY()

public:
	AShieldPickup();

	virtual void Tick(float deltaSeconds) override;

protected:
	virtual void BeginPlay() override;

	virtual void SetItemProperties(EItemState state) override;

	UFUNCTION(BlueprintCallable)
		void OnPickupSphereOverlap(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Ammo, meta = (AllowPrivateAccess = "true"))
		UStaticMeshComponent* _pickupMesh;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Ammo, meta = (AllowPrivateAccess = "true"))
		class USphereComponent* _collisionSphere;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Shield, meta = (AllowPrivateAccess = "true"))
	float _shieldResist;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Shield, meta = (AllowPrivateAccess = "true"))
	float _shieldDuration;

public:
	FORCEINLINE UStaticMeshComponent* GetPickupMesh() const { return _pickupMesh; }
	FORCEINLINE float GetShieldResist() const { return _shieldResist; }
	FORCEINLINE float GetShieldDuration() const { return _shieldDuration; }
};

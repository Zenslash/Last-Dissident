// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Item.h"
#include "SpeedPickup.generated.h"

/**
 * 
 */
UCLASS()
class CYBERPUNK2022_API ASpeedPickup : public AItem
{
	GENERATED_BODY()

public:
	ASpeedPickup();

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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Buff, meta = (AllowPrivateAccess = "true"))
		float _speedMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Buff, meta = (AllowPrivateAccess = "true"))
		float _buffDuration;

public:
	FORCEINLINE UStaticMeshComponent* GetPickupMesh() const { return _pickupMesh; }
	FORCEINLINE float GetSpeedMultiplier() const { return _speedMultiplier; }
	FORCEINLINE float GetBuffDuration() const { return _buffDuration; }
	
};

	// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MWeapon.h"
#include "Gun.generated.h"

class UDecalComponent;

UCLASS()
class MOSTRICIATTOLO5_API AGun : public AMWeapon
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGun();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	

	
	UPROPERTY(EditAnywhere)
	class UArrowComponent* MuzzleLoc;
	

	UFUNCTION(BlueprintImplementableEvent)
	void BP_ShootEffect();
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float RecoilAmount = -0.6f;

	
	
	UPROPERTY(EditDefaultsOnly, Category = "MissingChance")
	float Walk = 15.f;
	UPROPERTY(EditDefaultsOnly, Category = "MissingChance")
	float Run = 15.f;
	UPROPERTY(EditDefaultsOnly, Category = "MissingChance")
	float MediumRange = 15.f;
	UPROPERTY(EditDefaultsOnly, Category = "MissingChance")
	float LongRange = 20.f;
	//originale Blueprintcallable
	virtual void SetIsAiming(bool IsAiming) override;
	virtual void WeaponAttack(bool AIAttack) override;
	FVector ShotDirection;
	FName HitBoneBName;

	UPROPERTY(EditAnywhere)
	UDecalComponent* LaserDot;

	class AMostriciattolo5Character* OwnerCharacter = nullptr;

private:
	UPROPERTY(EditAnywhere)
	UParticleSystem* MuzzleFlash;
	UPROPERTY(EditAnywhere)
	UParticleSystem* ProjectileEffect;

	UPROPERTY(EditAnywhere)
	float WeaponDamage = 15.f;

	void PullTrigger(bool bAIShooting);

	void LaserAiming();

	
	

	bool GunLineTrace(bool AIShooting, FHitResult &OUTHitRes);

	bool AIHitCheck();

	void SetOwnerCharacter();

	float RandShootError = 0.f;
};

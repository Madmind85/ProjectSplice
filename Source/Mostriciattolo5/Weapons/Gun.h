	// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Gun.generated.h"

UCLASS()
class MOSTRICIATTOLO5_API AGun : public AActor
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

	void PullTrigger(bool bAIShooting);

	UPROPERTY(EditAnywhere)
	float MaxWeaponRange = 5000.f;

	UFUNCTION(BlueprintImplementableEvent)
	void BP_ShootEffect();
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float RecoilAmount = -0.6f;
	
	FVector ShotDirection;
	FName HitBoneBName;
private:
	UPROPERTY(VisibleAnywhere)
	USceneComponent* Root;

	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* Mesh;
	UPROPERTY(EditAnywhere)
	UParticleSystem* MuzzleFlash;
	UPROPERTY(EditAnywhere)
	UParticleSystem* ProjectileEffect;
	
	UPROPERTY(EditAnywhere)
	float WeaponDamage = 15.f;

};

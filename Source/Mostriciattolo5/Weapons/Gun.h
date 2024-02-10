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

	void SetupShootValues(float GunChargeValue);

	UFUNCTION(BlueprintCallable)
	void SetLaserAim(bool Active);
	
	
	UPROPERTY(EditAnywhere)
	class UArrowComponent* MuzzleLoc;
	

	UFUNCTION(BlueprintImplementableEvent)
	void BP_ShootEffect();
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Effects")
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
	virtual void WeaponAttack(bool AIAttack, AActor* AI_Target) override;
	FVector ShotDirection;
	FName HitBoneBName;

	


private:
	UPROPERTY(EditAnywhere,  Category = "Effects")
	UParticleSystem* MuzzleFlash = nullptr;
	UPROPERTY(EditAnywhere, Category = "Effects")
	UParticleSystem* ProjectileEffect = nullptr;
	UPROPERTY(EditAnywhere, Category = "Effects")
	class UPoseableMeshComponent* LaserRay = nullptr;
	UPROPERTY(EditAnywhere, Category = "Effects")
	UDecalComponent* LaserDot = nullptr;

	
	UPROPERTY(EditAnywhere, Category = "Charge Values")
	float Recoil_1 = -0.6f;
	UPROPERTY(EditAnywhere, Category = "Charge Values")
	float Recoil_2 = -1.f;
	UPROPERTY(EditAnywhere, Category = "Charge Values")
	float Recoil_3 = -1.5f;
	UPROPERTY(EditAnywhere, Category = "Charge Values")
	float Damage_1 = 15.f;
	UPROPERTY(EditAnywhere, Category = "Charge Values")
	float Damage_2 = 20.f;
	UPROPERTY(EditAnywhere, Category = "Charge Values")
	float Damage_3 = 30.f;
	UPROPERTY(EditAnywhere, Category = "Charge Values")
	FName CameraShake_1 = FName("Shoot1");
	UPROPERTY(EditAnywhere, Category = "Charge Values")
	FName CameraShake_2 = FName("Shoot2");
	UPROPERTY(EditAnywhere, Category = "Charge Values")
	FName CameraShake_3 = FName("Shoot3");
	UPROPERTY(EditAnywhere, Category = "Charge Values")
	FVector2D Force_1 = FVector2D(3500.f, 3500.f);
	UPROPERTY(EditAnywhere, Category = "Charge Values")
	FVector2D Force_2 =  FVector2D(4500.f, 4000.f);
	UPROPERTY(EditAnywhere, Category = "Charge Values")
	FVector2D Force_3 = FVector2D(6000.f, 5000.f);
	UPROPERTY(EditAnywhere, Category = "Charge Values")
	USoundBase* ShotSound_1 = nullptr;
	UPROPERTY(EditAnywhere, Category = "Charge Values")
	USoundBase* ShotSound_2 = nullptr;
	UPROPERTY(EditAnywhere, Category = "Charge Values")
	USoundBase* ShotSound_3 = nullptr;
	UPROPERTY(EditAnywhere, Category = "Charge Values")
	float Charge_2 = 1.5f;
	UPROPERTY(EditAnywhere, Category = "Charge Values")
	float Charge_3 = 3.0f;



	void PullTrigger(bool bAIShooting,AActor* AI_Target);

	void LaserAiming();

	bool GunLineTrace(bool AIShooting, FHitResult &OUTHitRes, AActor* AI_Target);

	bool AIHitCheck();

	void H_SetShootValues(float Recoil, float Damage, FVector2D Force, FName CameraShake, USoundBase* ShotSound);

	float RandShootError = 0.f;
};

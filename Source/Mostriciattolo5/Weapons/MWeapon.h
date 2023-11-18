// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MWeapon.generated.h"

UCLASS()
class MOSTRICIATTOLO5_API AMWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	bool bIsAiming = false;
	bool bCanAttack = true;
	void ResetCanAttack();
	UPROPERTY(VisibleAnywhere)
	USceneComponent* Root;
	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* Mesh;
	


public:	

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditAnywhere)
	float MaxWeaponRange = 5000.f;

	UFUNCTION(BlueprintCallable)
	virtual void SetIsAiming(bool IsAiming);
	UFUNCTION(BlueprintCallable)
	virtual void WeaponAttack(bool AIAttack);
	UPROPERTY(EditDefaultsOnly)
	float AttackDelay = 0.5f;


private:
	
};

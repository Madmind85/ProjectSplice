// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Mostriciattolo5/MObjects/InteractableBase.h"
#include "MWeapon.generated.h"

UCLASS()
class MOSTRICIATTOLO5_API AMWeapon : public AInteractableBase
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
	USkeletalMeshComponent* Mesh;
	
	UPROPERTY(EditAnywhere)
	float WeaponDamage = 15.f;

	UFUNCTION(BlueprintImplementableEvent)
	void BP_WeaponEffect();

	class AMostriciattolo5Character* OwnerCharacter = nullptr;

	void SetOwnerCharacter();


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

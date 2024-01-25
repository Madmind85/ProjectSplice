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

	UPROPERTY(BlueprintReadWrite)
	bool BeingHeld = false;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	bool bIsAiming = false;
	bool bCanAttack = true;
	void ResetCanAttack();
	
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//USkeletalMeshComponent* Mesh;
	
	UPROPERTY(EditAnywhere)
	float WeaponDamage = 15.f;

	UFUNCTION(BlueprintImplementableEvent)
	void BP_WeaponEffect();
	UFUNCTION(BlueprintImplementableEvent)
	void BP_WeaponAnim();

	class AMostriciattolo5Character* OwnerCharacter = nullptr;

	void SetOwnerCharacter();


public:	

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	float MaxWeaponRange = 1.f;

	UFUNCTION(BlueprintCallable)
	virtual void SetIsAiming(bool IsAiming);
	UFUNCTION(BlueprintCallable)
	bool GetIsAiming();
	UFUNCTION(BlueprintCallable)
	virtual void WeaponAttack(bool AIAttack, AActor* AI_Target);
	UFUNCTION(BlueprintCallable)
	void Bash();

	UPROPERTY(BlueprintReadWrite)
	bool CanHitMelee = false;

	UPROPERTY(EditDefaultsOnly)
	float AttackDelay = 0.5f;
	/**La forza che viene applicata alla hit reaction da vivo(X) e sul colpo letale(Y)*/
	UPROPERTY(EditDefaultsOnly)
	FVector2D AliveNDeadHitStrength = FVector2D(3500.f, 3500.f);

	UFUNCTION(BlueprintCallable)
	virtual void SetOwnerChar(AActor* NewOwner);
	


private:

	

};

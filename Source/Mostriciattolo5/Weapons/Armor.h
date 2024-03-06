// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Armor.generated.h"


UCLASS()
class MOSTRICIATTOLO5_API AArmor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AArmor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadWrite)
	class AMostriciattolo5Character* OwnerChar;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//UCapsuleComponent* CapsuleC;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName AttchSocketName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CurrentHP = 0.f;

	UFUNCTION(BlueprintCallable)
	void TakeDamage(float Damage);
	UFUNCTION(BlueprintCallable)
	void SetRandomMesh(USkeletalMeshComponent* SKMesh);

	UFUNCTION(BlueprintImplementableEvent)
	void BP_SetPhysics();

private:
	UPROPERTY(EditAnyWhere)
	TArray<USkeletalMesh*> ArmorMeshes;
	UPROPERTY(EditAnywhere)
	float MaxHp = 15.f;
	
};

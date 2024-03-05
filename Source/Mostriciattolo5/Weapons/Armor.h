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
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USkeletalMeshComponent* SK_Mesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName AttchSocketName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CurrentHP = 0.f;

	UFUNCTION(BlueprintCallable)
	void TakeDamage(float Damage);

private:
	UPROPERTY(EditAnyWhere)
	TArray<USkeletalMesh*> ArmorMeshes;
	UPROPERTY(EditAnywhere)
	float MaxHp = 15.f;
	
};

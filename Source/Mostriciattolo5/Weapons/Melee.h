// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MWeapon.h"
#include "Melee.generated.h"

/**
 * 
 */
UCLASS()
class MOSTRICIATTOLO5_API AMelee : public AMWeapon
{
	GENERATED_BODY()

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void SetHitCollisionActive(bool NewCollisionActive);

protected:

private:
	void HitCollisionCheck();
	bool bHitCollisionActive = false;
	
};

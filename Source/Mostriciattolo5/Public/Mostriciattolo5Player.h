// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Mostriciattolo5\Mostriciattolo5Character.h"
#include "Mostriciattolo5Player.generated.h"

/**
 * 
 */
UCLASS()
class MOSTRICIATTOLO5_API AMostriciattolo5Player : public AMostriciattolo5Character
{
	GENERATED_BODY()

public:
	virtual void Tick(float DeltaSeconds) override;

	//UFUNCTION(BlueprintImplementableEvent)
	void AttachToPossessPoint();

	UPROPERTY(BlueprintReadWrite)
	bool IsPossessing = false;

	/**portata della possessione, da quanto lontano dal possess socket puo' possedere*/
	UPROPERTY(EditDefaultsOnly, Category = "Possession")
	float PossessReach = 45.f;
	//altezza dal centro della prima line trace per intercettare il possess socket per la possessione
	UPROPERTY(EditDefaultsOnly, Category = "Possession")
	float PossessLineHeight1 = 40.f;
	//altezza dal centro della seconda line trace per intercettare il possess socket per la possessione
	UPROPERTY(EditDefaultsOnly, Category = "Possession")
	float PossessLineHeight2 = 20.f;
	UPROPERTY(EditDefaultsOnly, Category = "Camera")
	float SpringArmLengthForCameraBlend = 800.f;
	UPROPERTY(EditDefaultsOnly, Category = "Camera")
	float NormalSpringArmValue = 350.f;
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Camera")
	float MBlendCameraTime = 0.4f;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Anim")
	TArray<UAnimMontage*> AnimList;
	UPROPERTY(BlueprintReadWrite, Category = "Possession")
	float PossessAnimDelay = 1.f;
	UPROPERTY(BlueprintReadWrite)
	bool NoCollisionTarget = false;

	UFUNCTION(BlueprintCallable)
	AMostriciattolo5Character* GetCurrentPossessed();

	UFUNCTION(BlueprintCallable)
	void SetCurrentPossessed(AMostriciattolo5Character* CharacterToSet);
	UFUNCTION(BlueprintImplementableEvent)
	void BP_LockToPossessSocket(AMostriciattolo5Character* Target);
	UFUNCTION(BlueprintImplementableEvent)
	void BP_AttachAnimation();
	UFUNCTION(BlueprintImplementableEvent)
	void BP_PossessFront();

	void JumpOut();

	UFUNCTION(BlueprintCallable)
	void InterceptPossessPoint();
	UFUNCTION(BlueprintCallable)
	void ControllNPCDelayed();
	UFUNCTION(BlueprintCallable)
	void ControllMainDelayed();


	virtual void OnTeleportFinished()override;


protected:
	// To add mapping context
	virtual void BeginPlay()override;
	


private:
	
	bool bFrontPossession = false;
	AMostriciattolo5Character* CurrentPossessed = nullptr;
	void SetViewToTheMonster();
	void PossessLineTrace(FHitResult Hit);
};

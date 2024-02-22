// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractableBase.h"
#include "Mostriciattolo5/Interfaces/Int_MCharacter.h"
#include "FactionResetTool.generated.h"

/**
 * 
 */
UCLASS()
class MOSTRICIATTOLO5_API AFactionResetTool : public AInteractableBase
{
	GENERATED_BODY()
	
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
protected:
	UFUNCTION(BlueprintCallable)
	void UseResetFactionTool(AActor* ActorToReset);
	UFUNCTION(BlueprintCallable)
	void StopUsingResetFactionTool();
private:
	/**tempo che bisogna tenere premuto perchè rilasciando il tasto la factione venga resettata*/
	UPROPERTY(EditAnywhere)
	float ButtonHoldTime = 3.0f;

	float CurrentButtonHoldTime = 0.f;

	void ResetActorFaction();
	void HoldButton();
	bool bCanCheckReset = false;
	AActor* ActorToBeReset = nullptr;
};

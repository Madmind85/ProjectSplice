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

protected:
	UFUNCTION(BlueprintCallable)
	void ResetActorFaction(AActor* ToReset);

};

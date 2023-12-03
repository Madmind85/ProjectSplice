// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Mostriciattolo5/Interfaces/Int_Guardie.h"
#include "Mostriciattolo5/Public/M_Enums.h"
#include "MostriciattoloAIController.generated.h"

/**
 * 
 */
UCLASS()
class MOSTRICIATTOLO5_API AMostriciattoloAIController : public AAIController
{
	GENERATED_BODY()

public:
	UPROPERTY()
	NPCStatus CurrentNPCStatus = NPCStatus::Tranquillo;


	//Guardie Interface
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	NPCStatus Int_GetNpcAIStatus();
	virtual NPCStatus Int_GetNpcAIStatus_Implementation();
protected:
	
	virtual void BeginPlay()override;

private:

};

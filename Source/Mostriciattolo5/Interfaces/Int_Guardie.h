// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Mostriciattolo5/Public/M_Enums.h"
#include "Int_Guardie.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInt_Guardie : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class MOSTRICIATTOLO5_API IInt_Guardie
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	AActor* Int_GetCurrentNPCTarget();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void Int_SetCurrentNPCTarget(AActor* NewTarget);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void Int_SetNPCSatateAsTranquillo();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void Int_SetNPCSatateAsFermo(bool IsFermo);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void Int_SetNPCDead();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void Int_SetNPCSatateAsAggressivo(AActor* CurrentEnemy);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	NPCStatus Int_GetCurrentNPCState();
	
	


};

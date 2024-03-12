// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Int_Interacteble.generated.h"

/**
 * 
 */

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInt_Interacteble : public UInterface
{
	GENERATED_BODY()
};

/**
 *
 */

class AMWeapon;

class MOSTRICIATTOLO5_API IInt_Interacteble
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void Int_UseObject();

};
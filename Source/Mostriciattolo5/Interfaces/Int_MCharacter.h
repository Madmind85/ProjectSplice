// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Int_MCharacter.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInt_MCharacter : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class MOSTRICIATTOLO5_API IInt_MCharacter
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	bool Int_IsActorDead();

	
};

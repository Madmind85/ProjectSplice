// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Mostriciattolo5/Public/M_Enums.h"
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

class AMWeapon;

class MOSTRICIATTOLO5_API IInt_MCharacter
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	bool Int_IsActorDead();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	ActorFaction Int_GetIsTarget();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void SetIsAiming(bool IsAiming);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void SetRunning(bool IsRunning);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	bool Int_IsActorPossessed();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	AActor* Int_GetKillerActor();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void Int_ResetKillerActor();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void Int_SetFaction(ActorFaction NewFaction);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void Int_AIAttack(AAIController* AICon, AActor* Target);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	bool Int_IsPatroller();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	AMostriciattoloAIController* Int_GetAIController();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void Int_PlayIdleAnim();
};

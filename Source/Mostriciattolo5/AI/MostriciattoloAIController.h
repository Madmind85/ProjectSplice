// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Mostriciattolo5/Interfaces/Int_Guardie.h"
#include "Mostriciattolo5/Public/M_Enums.h"
#include "Mostriciattolo5/Interfaces/Int_MCharacter.h"
#include "MostriciattoloAIController.generated.h"


//class UBehaviorTree;


UCLASS()
class MOSTRICIATTOLO5_API AMostriciattoloAIController : public AAIController
{
	GENERATED_BODY()

public:
	

	//Guardie Interface
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	AActor* Int_GetCurrentNPCTarget();
	virtual AActor* Int_GetCurrentNPCTarget_Implementation();


	UPROPERTY(EditAnywhere)
	UBehaviorTree* AI_Behavior = nullptr;

	/**vede se CharacterInSight è all'interno dell'anmgolo "InnerConeDegrees" e non olte la percentuale "innerConeLength" sulla lunghezza di vista totale*/
	UFUNCTION(BlueprintCallable)
	bool CheckInnerSightAngle(APawn* CharacterInSight, float PS_SightRadius);

protected:
	
	virtual void BeginPlay()override;

	UFUNCTION(BlueprintPure)
	NPCStatus GetNpcAIStatus();

	UFUNCTION(BlueprintCallable)
	bool IsMCharacterDead(AActor* ActorToTest);

private:

	/**quanto ci mette prima di tornare quello che stava facendo dopo che vede piu questo npc*/
	UPROPERTY(EditDefaultsOnly, Category = "Behaviour")
	float LooseTargetTime = 3.f;
	/**quanto ci mette prima non calcolare piu questo npc come target dopo che e stato posseduto*/
	UPROPERTY(EditDefaultsOnly, Category = "Behaviour")
	float NotTargetTime = 0.5f;
	/**Angolo in gradi del cono di vista interno (quello che se ci sei dentro ti insegue subito)*/
	UPROPERTY(EditDefaultsOnly, Category = "Behaviour")
	float InnerConeDegrees = 45.f;
	/**percentuale della sight radius (settabile su pawn sensing) appartenente al cono interno*/
	UPROPERTY(EditDefaultsOnly,  Category = "Behaviour")
	float InnerConeLength = 75.f;

	AActor* CurrentNPCTarget = nullptr;
};

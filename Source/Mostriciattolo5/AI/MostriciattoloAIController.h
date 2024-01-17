// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Mostriciattolo5/Interfaces/Int_Guardie.h"
#include "Mostriciattolo5/Public/M_Enums.h"
#include "Perception/AIPerceptionTypes.h"
#include  "Mostriciattolo5/Interfaces/Int_Guardie.h"
#include "Mostriciattolo5/Interfaces/Int_MCharacter.h"
#include "MostriciattoloAIController.generated.h"


//class UBehaviorTree;
class UAIPerceptionComponent;

UCLASS()
class MOSTRICIATTOLO5_API AMostriciattoloAIController : public AAIController, public IInt_Guardie, public IInt_MCharacter
{
	GENERATED_BODY()

public:
	
	virtual void Tick(float DeltaTime) override;

	//Guardie Interface
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	AActor* Int_GetCurrentNPCTarget();
	virtual AActor* Int_GetCurrentNPCTarget_Implementation();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void Int_SetCurrentNPCTarget(AActor* NewTarget);
	virtual void Int_SetCurrentNPCTarget_Implementation(AActor* NewTarget);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void Int_SetNPCSatateAsTranquillo();
	virtual void Int_SetNPCSatateAsTranquillo_Implementation();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void Int_SetNPCSatateAsFermo(bool IsFermo);
	virtual void Int_SetNPCSatateAsFermo_Implementation(bool IsFermo);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void Int_SetNPCDead();
	virtual void Int_SetNPCDead_Implementation();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void Int_SetNPCSatateAsAggressivo(AActor* CurrentEnemy);
	virtual void Int_SetNPCSatateAsAggressivo_Implementation(AActor* CurrentEnemy);

	UFUNCTION(BlueprintCallable)
	void OnDeathController();
	void RunAI_BehaviorTree();
	bool SelfDestruct();
	void UpdateLastSeenT();

	UPROPERTY(EditAnywhere)
	UBehaviorTree* AI_Behavior = nullptr;

	/**vede se CharacterInSight è all'interno dell'anmgolo "InnerConeDegrees" e non olte la percentuale "innerConeLength" sulla lunghezza di vista totale*/
	UFUNCTION(BlueprintCallable)
	bool CheckInnerSightAngle(AActor* CharacterInSight, float PS_SightRadius);


	//NPCStates /Morto = 0 /Fermo = 1 /Tranquillo = 2 /Minacciato = 3 /Attento = 4 /Minaccioso = 5 /Aggressivo = 6/Inseguendo = 7
	UFUNCTION(BlueprintCallable)
	void SetNPCSatateAsMorto();
	UFUNCTION(BlueprintCallable)
	void SetNPCSatateAsFermo();
	UFUNCTION(BlueprintCallable)
	void SetNPCSatateAsTranquillo();
	UFUNCTION(BlueprintCallable)
	void SetNPCSatateAsMinacciato();
	UFUNCTION(BlueprintCallable)
	void SetNPCSatateAsAttento(FVector MoveToLoc, FVector Suspect_Point, AActor* SuspectActor, float reactionTime);
	UFUNCTION(BlueprintCallable)
	void SetNPCSatateAsMinaccioso(AActor* ThreatenedActor);
	UFUNCTION(BlueprintCallable)
	void SetNPCSatateAsAggressivo(AActor* Target);
	UFUNCTION(BlueprintCallable)
	void SetNPCSatateAsInseguendo(AActor* Target);

	UFUNCTION(BlueprintPure)
	NPCStatus GetNpcAIStatus();

	UPROPERTY(BlueprintReadWrite, Category = "Behaviour")
	float LastSeenTime = 0.f;

	void AlertClosestGuards(ActorFaction Faction);

protected:
	
	virtual void BeginPlay()override;

	
	UFUNCTION(BlueprintCallable)
	bool IsMCharacterDead(AActor* ActorToTest);
	UFUNCTION(BlueprintCallable)
	void OnActorSeen(TArray<AActor*> SeenActors);


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
	
	UPROPERTY(EditDefaultsOnly, Category = "Behaviour")
	float QuitChaseTime = 4.f;
	/**quanto ci mette prima di reagire alla vista periferica o ad un suono*/
	UPROPERTY(EditDefaultsOnly, Category = "Behaviour")
	float ReactionTime = 2.f;

	void ProcessLastVisionStimulus();
	void ProcessLastHearingStimulus();

	AActor* SensedActor = nullptr;
	
	FAIStimulus CurrentStimulus;
	AActor* CurrentNPCTarget = nullptr;

	void SetPawnAim(bool bPawnAiming);
	bool IsPawnPossessed();
	FVector ProjPointToNavigation(FVector Point);

	
	bool CanAlertGuards = true;

	void SetNPCStateAsAttivo();
	float LastSeenT = 0.f;
};

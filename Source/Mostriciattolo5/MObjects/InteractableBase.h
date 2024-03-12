// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Mostriciattolo5/Interfaces/Int_Interacteble.h"
#include "InteractableBase.generated.h"


UCLASS()
class MOSTRICIATTOLO5_API AInteractableBase : public AActor, public IInt_Interacteble
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInteractableBase();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USkeletalMeshComponent* Root;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName InteractableActorName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool CanPickUp = true;

	void ActivateInteractablePhysic();
	void DeactivateInteractablePhysic();

	// Int_Interactable
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void  Int_UseObject();
	virtual void Int_UseObject_Implementation();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


private:

	

};

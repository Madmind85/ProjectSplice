// Fill out your copyright notice in the Description page of Project Settings.


#include "Mostriciattolo5/MObjects/InteractableBase.h"
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"

// Sets default values
AInteractableBase::AInteractableBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	/*
	Root = CreateDefaultSubobject<UBoxComponent>(TEXT("Root"));
	SetRootComponent(Root);
	Root->SetBoxExtent(FVector(30.f, 10.f, 10.f), true);
	*/
}

// Called when the game starts or when spawned
void AInteractableBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInteractableBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AInteractableBase::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Stampa un messaggio sulla console
	UE_LOG(LogTemp, Warning, TEXT("BADA Collisione Ok"));
}
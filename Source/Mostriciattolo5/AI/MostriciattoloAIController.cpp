// Fill out your copyright notice in the Description page of Project Settings.


#include "Mostriciattolo5/AI/MostriciattoloAIController.h"
#include "Kismet/GameplayStatics.h"

void AMostriciattoloAIController::BeginPlay()
{

	Super::BeginPlay();

	APawn* MPlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

	
}

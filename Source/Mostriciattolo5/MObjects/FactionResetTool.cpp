// Fill out your copyright notice in the Description page of Project Settings.


#include "FactionResetTool.h"

void AFactionResetTool::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bCanCheckReset)
	{
		HoldButton();
	}
	
}

void AFactionResetTool::UseResetFactionTool(AActor* ActorToReset)
{
	CurrentButtonHoldTime = GetWorld()->GetTimeSeconds() + ButtonHoldTime;
	ActorToBeReset = ActorToReset;
	bCanCheckReset = true;
}

void AFactionResetTool::StopUsingResetFactionTool()
{
	bCanCheckReset = false;
	CurrentButtonHoldTime = 0.f;
}

void AFactionResetTool::ResetActorFaction()
{
	if (ActorToBeReset)
	{
		IInt_MCharacter::Execute_Int_SetFaction(ActorToBeReset, ActorFaction::Neutrale);
	}
}

void AFactionResetTool::HoldButton()
{
	 UE_LOG(LogTemp, Warning, TEXT("Faction seconds = %f"), GetWorld()->GetTimeSeconds())
		  UE_LOG(LogTemp, Warning, TEXT("Faction target time  = %f"), CurrentButtonHoldTime)
	if (GetWorld()->GetTimeSeconds() > CurrentButtonHoldTime)
	{
		 UE_LOG(LogTemp, Warning, TEXT("Faction Reset")) 
		bCanCheckReset = false;
		ResetActorFaction();
	}
}

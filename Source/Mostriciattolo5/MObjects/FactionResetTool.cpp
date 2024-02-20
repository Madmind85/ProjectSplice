// Fill out your copyright notice in the Description page of Project Settings.


#include "FactionResetTool.h"

void AFactionResetTool::ResetActorFaction(AActor* ToReset)
{
	if (ToReset)
	{
		IInt_MCharacter::Execute_Int_SetFaction(ToReset, ActorFaction::Neutrale);
	}
}

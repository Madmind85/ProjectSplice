// Fill out your copyright notice in the Description page of Project Settings.


#include "Mostriciattolo5/Weapons/Melee.h"
#include "Kismet/KismetSystemLibrary.h"

void AMelee::Tick(float DeltaTime)
{
	
	Super::Tick(DeltaTime);
	
}

void AMelee::SetHitCollisionActive(bool NewCollisionActive)
{
	bHitCollisionActive = NewCollisionActive;
}

void AMelee::WeaponAttack(bool AIAttack, AActor* AI_Target)
{
	Super::WeaponAttack(AIAttack, AI_Target);

}

void AMelee::HitCollisionCheck()
{
	if (bHitCollisionActive)
	{
		bHitCollisionActive = false;
		//sweep per intercettare 
	}
	
}


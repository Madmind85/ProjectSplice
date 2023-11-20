// Fill out your copyright notice in the Description page of Project Settings.


#include "Mostriciattolo5/Weapons/Melee.h"

void AMelee::Tick(float DeltaTime)
{
}

void AMelee::SetHitCollisionActive(bool NewCollisionActive)
{
	bHitCollisionActive = NewCollisionActive;
}

void AMelee::HitCollisionCheck()
{
	if (bHitCollisionActive)
	{
		bHitCollisionActive = false;
		//sweep per intercettare 
	}
	
}

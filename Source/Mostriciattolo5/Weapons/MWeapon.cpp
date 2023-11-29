// Fill out your copyright notice in the Description page of Project Settings.


#include "Mostriciattolo5/Weapons/MWeapon.h"
#include "Mostriciattolo5/Mostriciattolo5Character.h"

// Sets default values
AMWeapon::AMWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	
}

// Called when the game starts or when spawned
void AMWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

void AMWeapon::SetIsAiming(bool IsAiming)
{
	if (OwnerCharacter)
	{
		OwnerCharacter->bIsAiming = true;
	}

}

bool AMWeapon::GetIsAiming()
{
	return bIsAiming;
}


void AMWeapon::WeaponAttack(bool AIAttack, AActor* AI_Target)
{
	if (bCanAttack)
	{
		bCanAttack = false;
		BP_WeaponAnim();
		FTimerHandle Timer;
		GetWorld()->GetTimerManager().SetTimer(Timer, this, &AMWeapon::ResetCanAttack,AttackDelay,false);
	}
}
void AMWeapon::SetOwnerChar(AActor* NewOwner)
{
	SetOwner(NewOwner);
	SetOwnerCharacter();
}
void AMWeapon::ResetCanAttack()
{
	bCanAttack = true;

}

void  AMWeapon::SetOwnerCharacter()
{
	if (GetOwner())
	{
		OwnerCharacter = Cast<AMostriciattolo5Character>(GetOwner());
	}
	else
	{
		OwnerCharacter = nullptr;
	}
}
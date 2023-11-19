// Fill out your copyright notice in the Description page of Project Settings.


#include "Mostriciattolo5/Weapons/MWeapon.h"
#include "Mostriciattolo5/Mostriciattolo5Character.h"

// Sets default values
AMWeapon::AMWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root);
	
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

}

void AMWeapon::WeaponAttack(bool AIAttack)
{
	if (bCanAttack)
	{
		bCanAttack = false;
		BP_WeaponEffect();
		FTimerHandle Timer;
		GetWorld()->GetTimerManager().SetTimer(Timer, this, &AMWeapon::ResetCanAttack,AttackDelay,false);
	}
}
void AMWeapon::ResetCanAttack()
{
	bCanAttack = true;

}

void  AMWeapon::SetOwnerCharacter()
{
	OwnerCharacter = Cast<AMostriciattolo5Character>(GetOwner());
}
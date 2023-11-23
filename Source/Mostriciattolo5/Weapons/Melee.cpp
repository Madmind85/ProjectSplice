// Fill out your copyright notice in the Description page of Project Settings.


#include "Mostriciattolo5/Weapons/Melee.h"
#include "Engine/DamageEvents.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"
#include "Mostriciattolo5/Mostriciattolo5Character.h"
#include "Kismet/KismetSystemLibrary.h"

void AMelee::Tick(float DeltaTime)
{
	if (CanHitMelee) { InterceptTarget(); }
	
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

void AMelee::InterceptTarget()
{
	FHitResult Hit;
	FVector Start = GetActorLocation();
	FVector End = GetActorLocation() + CollisionSphereLength;
	TArray<AActor*> ActorsToIgnore;
	ActorsToIgnore.Add(this);
	ActorsToIgnore.Add(GetOwner());
	TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
	ObjectTypes.Add(ObjectTypeQuery_MAX);

	APawn* OwnerPawn = Cast<APawn>(GetOwner());
	if (!OwnerPawn) { return; }
	AController* OwnerController = OwnerPawn->GetController();
	if (!OwnerController) { return; }


	bool bHit = UKismetSystemLibrary::SphereTraceSingleByProfile(this, Start, End, CollisionSphereRadius, FName("Pawn"), false, ActorsToIgnore, EDrawDebugTrace::None, Hit, true, FColor::Red, FColor::Green, 0.2f);

	FPointDamageEvent DamageEvent(WeaponDamage, Hit, GetOwner()->GetActorRotation().Vector(), nullptr);
	
	if (Hit.GetActor() && Hit.GetActor() != this) 
	{
		UParticleSystemComponent* HitEffectComponent = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), HitEffect, Hit.Location, GetActorRotation());
		HitEffectComponent->SetRelativeScale3D(FVector(0.1f, 0.1f, 0.1f));
		Hit.GetActor()->TakeDamage(WeaponDamage, DamageEvent, OwnerController, this);
		BP_WeaponEffect();
		AMostriciattolo5Character* HitCharacter = Cast<AMostriciattolo5Character>(Hit.GetActor());
		if (HitCharacter)
		{
			HitCharacter->BP_HitEvent(Hit, OwnerPawn);
		}
		CanHitMelee = false;
	}
	
}

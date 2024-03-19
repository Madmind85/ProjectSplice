// Fill out your copyright notice in the Description page of Project Settings.


#include "Mostriciattolo5/Weapons/MWeapon.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/DamageEvents.h"
#include "DrawDebugHelpers.h"
#include "Particles/ParticleSystemComponent.h"
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
	
	if (CanHitMelee) { InterceptTarget(); }
}

void AMWeapon::SetIsAiming(bool IsAiming)
{
	if (OwnerCharacter)
	{
		OwnerCharacter->bIsAiming = IsAiming;
	}

}

bool AMWeapon::GetIsAiming()
{
	return bIsAiming;
}


void AMWeapon::WeaponAttack(bool AIAttack, AActor* AI_Target)
{
	WeaponAnim();
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

void AMWeapon::Bash()
{
	BP_WeaponAnim();
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
void AMWeapon::InterceptTarget()
{
	FHitResult Hit;
	FVector Start = GetActorLocation();
	FVector End = GetActorLocation() + CollisionSphereLength;
	//TArray<AActor*> ActorsToIgnore;
	//ActorsToIgnore.Add(this);
	//ActorsToIgnore.Add(GetOwner());
	//TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;
	//ObjectTypes.Add(ObjectTypeQuery_MAX);

	APawn* OwnerPawn = Cast<APawn>(GetOwner());
	if (!OwnerPawn) { return; }
	AController* OwnerController = OwnerPawn->GetController();
	if (!OwnerController) { return; }
	//WorldLT
	FQuat Rot;
	FCollisionShape CollSphere = FCollisionShape::MakeSphere(CollisionSphereRadius);
	FCollisionQueryParams CQParams;
	CQParams.AddIgnoredActor(this);
	CQParams.AddIgnoredActor(GetOwner());

	bool bHit = GetWorld()->SweepSingleByChannel(Hit, Start, End, Rot, ECollisionChannel::ECC_GameTraceChannel1, CollSphere, CQParams);
	DrawDebugSphere(GetWorld(), Start, 10.f, 20, FColor::Emerald, false, 0.6f);
	//UKismetSystemLibrary::SphereTraceSingleByProfile(this, Start, End, CollisionSphereRadius, FName("Pawn"), false, ActorsToIgnore, EDrawDebugTrace::None, Hit, true, FColor::Red, FColor::Green, 0.2f);

	FPointDamageEvent DamageEvent(WeaponDamage, Hit, GetOwner()->GetActorRotation().Vector(), nullptr);

	if (Hit.GetActor() && Hit.GetActor() != this)
	{	
		UParticleSystemComponent* HitEffectComponent = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), HitEffect, Hit.Location, GetActorRotation());
		if (HitEffectComponent)
		{
			HitEffectComponent->SetRelativeScale3D(FVector(0.1f, 0.1f, 0.1f));
		}
		
		Hit.GetActor()->TakeDamage(WeaponDamage, DamageEvent, OwnerController, this);
		BP_WeaponEffect();
		AMostriciattolo5Character* HitCharacter = Cast<AMostriciattolo5Character>(Hit.GetActor());
		if (HitCharacter)
		{
			Hit.TraceStart = Owner->GetActorLocation();
			Hit.TraceEnd = HitCharacter->GetActorLocation();
			HitCharacter->BP_HitEvent(Hit, OwnerPawn, AliveNDeadHitStrength);
		}
		CanHitMelee = false;
	}

}


void AMWeapon::SetHitCollisionActive(bool NewCollisionActive)
{
	bHitCollisionActive = NewCollisionActive;
}
void AMWeapon::HitCollisionCheck()
{
	if (bHitCollisionActive)
	{
		bHitCollisionActive = false;
		//sweep per intercettare 
	}

}

void AMWeapon::WeaponAnim()
{
	if (bCanAttack)
	{
		bCanAttack = false;
		BP_WeaponAnim();
		FTimerHandle Timer;
		//reset canattackSpostato su animazione e per il fucile su gun
		//GetWorld()->GetTimerManager().SetTimer(Timer, this, &AMWeapon::ResetCanAttack, AttackDelay, false);
	}
}

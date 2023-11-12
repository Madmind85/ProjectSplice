// Fill out your copyright notice in the Description page of Project Settings.


#include "Mostriciattolo5/Weapons/Gun.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"
#include "Engine/DamageEvents.h"
#include "Mostriciattolo5/Mostriciattolo5Character.h"
#include "Components/SkeletalMeshComponent.h"

// Sets default values
AGun::AGun()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root);

	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AGun::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGun::PullTrigger(bool bAIShooting)
{

	UParticleSystemComponent* MuzzleFlashComponent = UGameplayStatics::SpawnEmitterAttached(MuzzleFlash, Mesh, TEXT("MuzzleSocket"));
	MuzzleFlashComponent->SetRelativeScale3D(FVector(0.07f, 0.07f, 0.07f));
	

	APawn* OwnerPawn = Cast<APawn>(GetOwner());
	if (!OwnerPawn) { return; }
	AController* OwnerController = OwnerPawn->GetController();
	if (!OwnerController) { return; }

	FVector Location;
	FRotator Rotation;
	OwnerController->GetPlayerViewPoint(Location, Rotation);

	BP_ShootEffect()	;
	
	FHitResult Hit;
	FVector End = Location + Rotation.Vector() * MaxWeaponRange;
	if (bAIShooting)
	{
		End = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0)->GetActorLocation();
	}
	
	//ShotDirection = -Rotation.Vector();
	ShotDirection = Location + Rotation.Vector();
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);
	Params.AddIgnoredActor(GetOwner());
	bool bHit = GetWorld()->LineTraceSingleByChannel(Hit, Location, End, ECollisionChannel::ECC_GameTraceChannel1, Params);
	UParticleSystemComponent* ProjectileEffectComponent = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ProjectileEffect, Hit.Location, ShotDirection.Rotation());
	ProjectileEffectComponent->SetRelativeScale3D(FVector(0.05f, 0.05f, 0.05f));
	
	AActor* HitActor = Hit.GetActor();
	if (HitActor)
	{
		if (HitActor == this) { return; }	
		AMostriciattolo5Character* HitCharacter = Cast<AMostriciattolo5Character>(HitActor);
		
		FPointDamageEvent DamageEvent(WeaponDamage, Hit, ShotDirection, nullptr);
		HitActor->TakeDamage(WeaponDamage, DamageEvent, OwnerController, this);
		
		if (HitCharacter)
		{
			HitCharacter->BP_HitEvent(Hit);
		}
		
	}
	
	
}


// Fill out your copyright notice in the Description page of Project Settings.


#include "Mostriciattolo5/Weapons/Gun.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"
#include "Engine/DamageEvents.h"
#include "Mostriciattolo5/Mostriciattolo5Character.h"
#include "Components/ArrowComponent.h"
#include "Components/DecalComponent.h"
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

	MuzzleLoc = CreateDefaultSubobject<UArrowComponent>(TEXT("MuzzleLoc"));
	MuzzleLoc->SetupAttachment(Mesh);

	LaserDot = CreateDefaultSubobject<UDecalComponent>(TEXT("LaserDot"));
	LaserDot->SetupAttachment(Root);
}

// Called when the game starts or when spawned
void AGun::BeginPlay()
{
	Super::BeginPlay();
	SetOwnerCharacter();
	if (LaserDot)
	{
		LaserDot->SetVisibility(false);
	}
} 

// Called every frame
void AGun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (bIsAiming)
	{
		LaserAiming();
	}

}
void AGun::SetIsAiming(bool IsAiming)
{
	bIsAiming = IsAiming;
	if (LaserDot)
	{	
		LaserDot->SetVisibility(IsAiming);
	}
}
void AGun::LaserAiming()
{
	
	if (MuzzleLoc)
	{
		if (!OwnerCharacter) { SetOwnerCharacter(); }

		FVector End = (MuzzleLoc->GetComponentLocation() + MuzzleLoc->GetForwardVector() * -10000.f);
		//DrawDebugLine(GetWorld(), MuzzleLoc->GetComponentLocation(), End, FColor::Emerald, false, 0.03f);
		FHitResult Hit;
		bool bHit;
	
		OwnerCharacter->IsBeingPossessed ? bHit = GunLineTrace(false, Hit) : bHit = GunLineTrace(true, Hit);
		
		if (bHit)
		{
			LaserDot->SetWorldLocation(Hit.Location);
		}
		
	}
}
	
// rifattorizzare
void AGun::PullTrigger(bool bAIShooting)
{
	if (bIsAiming)
	{

		if (bCanShoot)
		{

			UParticleSystemComponent* MuzzleFlashComponent = UGameplayStatics::SpawnEmitterAttached(MuzzleFlash, Mesh, TEXT("MuzzleSocket"));
			MuzzleFlashComponent->SetRelativeScale3D(FVector(0.07f, 0.07f, 0.07f));


			APawn* OwnerPawn = Cast<APawn>(GetOwner());
			if (!OwnerPawn) { return; }
			AController* OwnerController = OwnerPawn->GetController();
			if (!OwnerController) { return; }

			FVector Location;
			FHitResult Hit;
			bool bHit = GunLineTrace(bAIShooting, Hit);

			UParticleSystemComponent* ProjectileEffectComponent = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ProjectileEffect, Hit.Location, ShotDirection.Rotation());
			ProjectileEffectComponent->SetRelativeScale3D(FVector(0.05f, 0.05f, 0.05f));

			AActor* HitActor = Hit.GetActor();
			if (HitActor)
			{
				if (HitActor == this) { return; }

				AMostriciattolo5Character* HitCharacter = Cast<AMostriciattolo5Character>(HitActor);

				FPointDamageEvent DamageEvent(WeaponDamage, Hit, ShotDirection, nullptr);

				HitActor->TakeDamage(WeaponDamage, DamageEvent, OwnerController, this);
				BP_ShootEffect();
				if (HitCharacter)
				{
					HitCharacter->BP_HitEvent(Hit, OwnerPawn);
				}

			}

			bCanShoot = false;
			FTimerHandle TimerH;
			GetWorld()->GetTimerManager().SetTimer(TimerH, this, &AGun::ResetCanShoot, ShootDelay, false);
		}
	}
}
void AGun::ResetCanShoot()
{
	bCanShoot = true;

}
void AGun::SetOwnerCharacter()
{
	OwnerCharacter = Cast<AMostriciattolo5Character>(GetOwner());
}
bool AGun::GunLineTrace(bool AIShooting, FHitResult& OUTHitRes)
{
	FVector Location;
	FVector End;
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);
	Params.AddIgnoredActor(GetOwner());

	//aggiunto
	Location = MuzzleLoc->GetComponentLocation();

	FHitResult Hit;

	if (AIShooting)
	{
		ACharacter* Char = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
		FVector CharLoc = Char->GetActorLocation();
		End = CharLoc;
	}
	else
	{
		//FVector End = Location + Rotation.Vector() * MaxWeaponRange;
		End = (MuzzleLoc->GetComponentLocation() + MuzzleLoc->GetForwardVector() * -10000.f);
	}

	bool bHit = GetWorld()->LineTraceSingleByChannel(Hit, Location, End, ECollisionChannel::ECC_GameTraceChannel1, Params);
	OUTHitRes = Hit;
	return bHit;
}
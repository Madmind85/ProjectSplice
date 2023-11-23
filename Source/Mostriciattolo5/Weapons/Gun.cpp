// Fill out your copyright notice in the Description page of Project Settings.


#include "Mostriciattolo5/Weapons/Gun.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"
#include "Engine/DamageEvents.h"
#include "Mostriciattolo5/Mostriciattolo5Character.h"
#include "Components/ArrowComponent.h"
#include "Components/DecalComponent.h"
#include "Components/BoxComponent.h"
#include "Components/SkeletalMeshComponent.h"

// Sets default values
AGun::AGun()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	

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

void AGun::LaserAiming()
{
	if (!GetOwner()) { return; }

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

void AGun::SetIsAiming(bool IsAiming)
{
	bIsAiming = IsAiming;
	if (LaserDot)
	{
		LaserDot->SetVisibility(IsAiming);
	}
}

void AGun::WeaponAttack(bool AIAttack)
{
	PullTrigger(AIAttack);
}
	
// rifattorizzare
void AGun::PullTrigger(bool bAIShooting)
{
	if (bIsAiming)
	{

		if (bCanAttack)
		{
			RandShootError = FMath::RandRange(-40.f, 40.f);

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

			bCanAttack = false;
			FTimerHandle TimerH;
			GetWorld()->GetTimerManager().SetTimer(TimerH, this, &AGun::ResetCanAttack, AttackDelay, false);
		}
	}
}

bool AGun::AIHitCheck()
{
	//prima line trace per vedere se scorre o è lontano non colpisce direttamente ma calcola se si puo' colpire
	FHitResult Hit;
	FVector Location;
	FVector End;
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);
	if (GetOwner())
	{
		Params.AddIgnoredActor(GetOwner());
	}
	Location = MuzzleLoc->GetComponentLocation();
	End = (MuzzleLoc->GetComponentLocation() + MuzzleLoc->GetForwardVector() * -10000.f);

	bool bHit = GetWorld()->LineTraceSingleByChannel(Hit, Location, End, ECollisionChannel::ECC_GameTraceChannel1, Params);

	AActor* HitActor = nullptr;
	
	if (Hit.GetActor())
	{
		HitActor = Hit.GetActor();
	}
	

	float MissingChance = 10.f;

	if (HitActor)
	{
		float ActorDistance = FVector::Dist(GetActorLocation(), HitActor->GetActorLocation());
		float Speed = HitActor->GetVelocity().Length();
		
		if (Speed > 10.f)
		{
			MissingChance += Walk ;
		}
		if (Speed > 200.f)
		{
			MissingChance += Run;
		}
		if (ActorDistance > 400.f)
		{
			MissingChance += MediumRange;
		}
		if (ActorDistance > 700.f)
		{
			MissingChance += LongRange;
		}
	}
	 UE_LOG(LogTemp, Warning, TEXT("missing chance =  %f"), MissingChance) 
	float DiceRoll = FMath::RandRange(1.f, 100.f);

	if (DiceRoll >= MissingChance)
	{
		return true;
	}
	else
	{
		return false;
	}
}




bool AGun::GunLineTrace(bool AIShooting, FHitResult& OUTHitRes)
{
	FVector Location;
	FVector End;
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);
	if (GetOwner())
	{
		Params.AddIgnoredActor(GetOwner());
	}

	//aggiunto
	Location = MuzzleLoc->GetComponentLocation();

	FHitResult Hit;

	if (AIShooting)
	{
		//ERRORRE cosi spara semppre al player e non si sparano fra loro provare a passare la reference del mytARGET
		ACharacter* Char = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
		if (Char)
		{
			FVector CharLoc = Char->GetActorLocation();
			if (AIHitCheck() == true)
			{
				End = CharLoc;
			}
			else
			{
				FVector ShootLoc = CharLoc;
				ShootLoc.Z = -20.f;
				ShootLoc.X += RandShootError; 
				End = ShootLoc;
			}
		}
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
// Fill out your copyright notice in the Description page of Project Settings.


#include "Mostriciattolo5/Weapons/Armor.h"
#include "Mostriciattolo5/Mostriciattolo5Character.h"


// Sets default values
AArmor::AArmor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	
}

// Called when the game starts or when spawned
void AArmor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AArmor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AArmor::TakeDamage(float Damage)
{
	//DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
	BP_SetPhysics();
	//DetachAllSceneComponents(RootComponent, FDetachmentTransformRules::KeepWorldTransform);
	
}

void AArmor::SetRandomMesh(USkeletalMeshComponent* SKMesh)
{
	if (ArmorMeshes.Num() > 0)
	{
		int32 RandomIndex = FMath::RandRange(0, ArmorMeshes.Num() - 1);
		if (ArmorMeshes[RandomIndex])
		{
			USkeletalMesh* RandomMesh = ArmorMeshes[RandomIndex];
			if (RandomMesh && SKMesh)
			{
				SKMesh->SetSkeletalMeshAsset(RandomMesh);
			}
		}
	}
}


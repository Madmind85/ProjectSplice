// Fill out your copyright notice in the Description page of Project Settings.


#include "Mostriciattolo5/Weapons/Armor.h"
// Sets default values
AArmor::AArmor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SK_Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(FName("SK_Mesh"));
	SK_Mesh->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AArmor::BeginPlay()
{
	Super::BeginPlay();

	if (ArmorMeshes.Num() > 0)
	{
		int32 RandomIndex = FMath::RandRange(0,ArmorMeshes.Num()-1);
		if (ArmorMeshes[RandomIndex])
		{
			USkeletalMesh* RandomMesh = ArmorMeshes[RandomIndex];
			if (RandomMesh)
			{
				SK_Mesh->SetSkeletalMeshAsset(RandomMesh);
			}
		}
	}
}

// Called every frame
void AArmor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


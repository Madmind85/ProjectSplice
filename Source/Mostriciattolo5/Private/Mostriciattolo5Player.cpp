// Fill out your copyright notice in the Description page of Project Settings.


#include "Mostriciattolo5Player.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Components/CapsuleComponent.h"
#include "Components/ArrowComponent.h"
#include "D:\Source control\Mostriciattolo5\Source\Mostriciattolo5\Mostriciattolo5GameMode.h"
#include "D:\Source control\Mostriciattolo5\Source\Mostriciattolo5\Public\MostriciattoloPlayerController.h"
#include "GameFramework/GameModeBase.h"


void AMostriciattolo5Player::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

}

void AMostriciattolo5Player::AttachToPossessPoint()
{
    if (!GetCurrentPossessed()) { return; }
    //senno si gira quando lo possiede o lo depossiede
    NoCollisionTarget = true;
    UArrowComponent* PossessS = GetCurrentPossessed()->PossessArrowTarget;
    FVector Target = PossessS->GetComponentLocation();// +PossessS->GetForwardVector() * 50.f;
    //UE_LOG(LogTemp, Warning, TEXT(" targetto %s"), *Target.ToString()) 

    UGameplayStatics::GetPlayerController(GetWorld(), 0)->SetViewTargetWithBlend(GetCurrentPossessed(), MBlendCameraTime, EViewTargetBlendFunction::VTBlend_Linear);
    AttachToComponent(GetCurrentPossessed()->GetPossessSocket(), FAttachmentTransformRules::SnapToTargetNotIncludingScale);

    GetCurrentPossessed()->AfterPossession(this);
    
    if (MGameMode)
    {
        MGameMode->ControllNPC(GetCurrentPossessed());
    }
    
    
    //StartTeleporting(GetActorLocation(), GetCurrentPossessed()->GetActorLocation(), PossessTeleportTime);
}

AMostriciattolo5Character* AMostriciattolo5Player::GetCurrentPossessed()
{
    return CurrentPossessed;
}

void AMostriciattolo5Player::SetCurrentPossessed(AMostriciattolo5Character* CharacterToSet)
{
    CurrentPossessed = CharacterToSet;
}



void AMostriciattolo5Player::JumpOut()
{
    if (GetCurrentPossessed() && GetCurrentPossessed()->GetPossessSocket())
    {
        FVector Target = GetCurrentPossessed()->GetPossessSocket()->GetComponentLocation() + GetCurrentPossessed()->GetPossessSocket()->GetForwardVector() * 1000.f;
        FVector Start = GetCurrentPossessed()->GetActorLocation();//GetPossessSocket()->GetComponentLocation();
        FVector End = Start + GetCurrentPossessed()->GetActorForwardVector() * -1000.f;
        SetActorLocation(Start);
        SetActorRotation(GetCurrentPossessed()->GetActorRotation());
        SetActorHiddenInGame(false);

        UGameplayStatics::GetPlayerController(GetWorld(), 0)->SetViewTargetWithBlend(this, MBlendCameraTime, EViewTargetBlendFunction::VTBlend_Linear);
        //alla fine del teletrasporto triggera on teleport finished()
        //StartTeleporting(Start, End, PossessTeleportTime);
        //logica in bp per riavviare il BT

        MGameMode->ReturnControlToAI();
        //quando si � allontanato lo puo' di nuovo allertare toccandolo
        NoCollisionTarget = false;
        IsTarget = true;

        GetCurrentPossessed()->AfterDepossessed(this);
        DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
        GetCurrentPossessed()->IsTarget = false;
        SetCurrentPossessed(nullptr);
        SetActorHiddenInGame(false);
    }
}

void AMostriciattolo5Player::BeginPlay()
{
	Super::BeginPlay();     
    
    if (MGameMode)
    {
        MGameMode->Mostriciattolo_OS = this;
    }

	SetActorTickEnabled(true);
}

void AMostriciattolo5Player::OnTeleportFinished()
{
    if (GetCurrentPossessed())
    {
       //SetActorHiddenInGame(true);
        //UGameplayStatics::GetPlayerController(GetWorld(), 0)->SetViewTargetWithBlend(CurrentPossessed, 0.1f, EViewTargetBlendFunction::VTBlend_Linear);
        if (MGameMode)
        {
             MGameMode->ControllNPC(GetCurrentPossessed());
        }
       AttachToComponent(GetCurrentPossessed()->GetPossessSocket(), FAttachmentTransformRules::SnapToTargetNotIncludingScale);
        
      GetCurrentPossessed()->AfterPossession(this);

        //SetActorLocation(FVector(0.f, 0.f, 0.f));
    }
    else if (MGameMode)
     {
          MGameMode->ReturnControlToAI();
          //quando si � allontanato lo puo' di nuovo allertare toccandolo
          NoCollisionTarget = false;
          IsTarget = true;
     }
}

void AMostriciattolo5Player::InterceptPossessPoint()
{
    FHitResult Hit;
    FVector Start = GetActorLocation();
    FVector End = GetActorLocation() + GetActorForwardVector() * 45;

    End += FVector(0.f, 0.f, PossessLineHeight1);
    Start += FVector(0.f, 0.f, PossessLineHeight1);
    bool bHit = GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility);
    //seconda line trace
    FVector End2 = End + FVector(0.f, 0.f, PossessLineHeight2);
    FVector Start2 = Start + FVector(0.f, 0.f, PossessLineHeight2);
    bool bHit2 = GetWorld()->LineTraceSingleByChannel(Hit, Start2, End2, ECC_Visibility);

    DrawDebugLine(GetWorld(), Start, End, FColor::Cyan);
    DrawDebugLine(GetWorld(), Start2, End2, FColor::Cyan);

    if (bHit || bHit2)
    {
        if (Hit.GetActor()) { UGameplayStatics::GetPlayerController(GetWorld(), 0)->SetViewTargetWithBlend(Hit.GetActor(), MBlendCameraTime, EViewTargetBlendFunction::VTBlend_Linear);}
         /*
        
        UPrimitiveComponent* HitComponent = Hit.GetComponent();
        
        if (HitComponent && HitComponent->ComponentTags.Contains(TEXT("Possess")))
        {
            AMostriciattolo5Character* Char = Cast<AMostriciattolo5Character>(Hit.GetActor());
            if (Char)
            {
                SetCurrentPossessed(Char);
                //il target diventa il posseduto
                GetCurrentPossessed()->CanBeTarget = true;
                IsTarget = false;
                AttachToPossessPoint();
            }
        }

        */
    }
}


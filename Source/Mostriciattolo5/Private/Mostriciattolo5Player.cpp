    // Fill out your copyright notice in the Description page of Project Settings.


#include "Mostriciattolo5Player.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Components/CapsuleComponent.h"
#include "Components/ArrowComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Mostriciattolo5\Mostriciattolo5GameMode.h"
#include "Mostriciattolo5\Public\MostriciattoloPlayerController.h"
#include "GameFramework/GameModeBase.h"


void AMostriciattolo5Player::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

}

void AMostriciattolo5Player::AttachToPossessPoint()
{

}

void AMostriciattolo5Player::ControllNPCDelayed()
{
    
    if (MGameMode && GetCurrentPossessed())
    {
        SetActorHiddenInGame(true);
        MGameMode->ControllNPC(GetCurrentPossessed());
        GetCurrentPossessed()->AfterPossession(this);
        
    }
}
void AMostriciattolo5Player::ControllMainDelayed()
{
    if (MGameMode)
    { 
        MGameMode->ReturnControlToAI();
    }
    if (GetCurrentPossessed())
    {
        GetCurrentPossessed()->AfterDepossessed(this);
    }
    //quando si è allontanato lo puo' di nuovo allertare toccandolo
    NoCollisionTarget = false;
    IsTarget = true;
    SetCurrentPossessed(nullptr);
}

void AMostriciattolo5Player::SetViewToTheMonster()
{
    UGameplayStatics::GetPlayerController(GetWorld(), 0)->SetViewTargetWithBlend(this, MBlendCameraTime, EViewTargetBlendFunction::VTBlend_Linear);
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
        FVector End = Start + GetCurrentPossessed()->GetActorForwardVector() * -100.f;
        SetActorLocation(GetCurrentPossessed()->GetActorLocation());
        SetActorRotation(GetCurrentPossessed()->GetActorRotation());
        SetActorHiddenInGame(false);
        DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
        AfterDepossessed(this);

        SetViewToTheMonster();
        /*
        //La visuale va al mostriciattolo dopo che è finita l'animazione
        FTimerHandle TH;
        GetWorldTimerManager().SetTimer(TH, this, &AMostriciattolo5Player::SetViewToTheMonster, PossessAnimDelay  , false);
        USpringArmComponent* SArm = GetCurrentPossessed()->FindComponentByClass<USpringArmComponent>();
        if (SArm)
        {
            SArm->TargetArmLength = SpringArmLengthForCameraBlend;
        }
        */
        //quando si è allontanato lo puo' di nuovo allertare toccandolo
        NoCollisionTarget = false;
        IsTarget = true;

        GetCurrentPossessed()->IsTarget = false;
    
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
    //resetta il valore dello spring arm a prima della depossessione
    USpringArmComponent* SArm = GetCurrentPossessed()->FindComponentByClass<USpringArmComponent>();
    if (SArm)
    {
        SArm->TargetArmLength = NormalSpringArmValue;
    }
    UGameplayStatics::GetPlayerController(GetWorld(), 0)->SetViewTargetWithBlend(GetCurrentPossessed(), MBlendCameraTime, EViewTargetBlendFunction::VTBlend_Linear, true);
    AttachToPossessPoint();
    SetCurrentFocus(nullptr);
    if (GetCurrentPossessed())
    {
        GetCurrentPossessed()->BP_ResetTarget();
    }
    BP_AttachAnimation();
}

void AMostriciattolo5Player::InterceptPossessPoint()
{
    if (GetCurrentPossessed()) { return; }
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
       
        UPrimitiveComponent* HitComponent = Hit.GetComponent();
        
        if (HitComponent && HitComponent->ComponentTags.Contains(TEXT("Possess")))
        {
            AMostriciattolo5Character* Char = Cast<AMostriciattolo5Character>(Hit.GetActor());
            if (Char)
            {//il target diventa il posseduto
                SetCurrentPossessed(Char);
                if (GetCurrentPossessed())
                {
                    //per non spammare depossess 
                    GetCurrentPossessed()->IsSpammingDepossess = false;
                    GetCurrentPossessed()->CanBeTarget = true;
                    IsTarget = false;
                    
                    StartTeleportingWithSpeed(GetActorLocation(), GetCurrentPossessed()->GetMesh()->GetSocketLocation(FName(TEXT("PossessSocket"))), 1000.f);
                    
                }
            }
        }
        
    }
}


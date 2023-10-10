    // Fill out your copyright notice in the Description page of Project Settings.


#include "Mostriciattolo5Player.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "Components/CapsuleComponent.h"
#include "Components/ArrowComponent.h"
#include "Mostriciattolo5\Mostriciattolo5GameMode.h"
#include "Mostriciattolo5\Public\MostriciattoloPlayerController.h"
#include "GameFramework/GameModeBase.h"


void AMostriciattolo5Player::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

}

void AMostriciattolo5Player::AttachToPossessPoint()
{
    //BASITO la stessa identica cosa in bp (BP_AttachAnimation) funziona correttamente, questa funzione no
   /* if (!GetCurrentPossessed()) { return; }
    //(GetWorld()->GetFirstPlayerController());
    GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    AttachToComponent(GetCurrentPossessed()->GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, FName(TEXT("PossessSocket")));
    
   
    //GetMesh()->SetSimulatePhysics(false);
    //senno si gira quando lo possiede o lo depossiede
    NoCollisionTarget = true;
    
    
    StartPossessionAnim = true;
    GetCurrentPossessed()->StartPossessedAnim = true;
    */
    BP_AttachAnimation();
    FTimerHandle TimerHandle;
    GetWorldTimerManager().SetTimer(TimerHandle, this, &AMostriciattolo5Player::ControllNPCDelayed, MBlendCameraTime, false);
   
}

void AMostriciattolo5Player::ControllNPCDelayed()
{
    
    if (MGameMode && GetCurrentPossessed())
    {
        StartPossessedAnim = false;
        GetCurrentPossessed()->StartPossessedAnim = false;
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
    //quando si � allontanato lo puo' di nuovo allertare toccandolo
    NoCollisionTarget = false;
    IsTarget = true;
    SetCurrentPossessed(nullptr);
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
        SetActorLocation(End);
        SetActorRotation(GetCurrentPossessed()->GetActorRotation());
        SetActorHiddenInGame(false);

        UGameplayStatics::GetPlayerController(GetWorld(), 0)->SetViewTargetWithBlend(this, MBlendCameraTime, EViewTargetBlendFunction::VTBlend_Linear);
  
        //quando si � allontanato lo puo' di nuovo allertare toccandolo
        NoCollisionTarget = false;
        IsTarget = true;


        // Posticipa la possessione/depossessione del tempo che ci mette a spostarsi la visuale con SetViewTargetWithBlend
        FTimerHandle TimerHandle;
        GetWorldTimerManager().SetTimer(TimerHandle, this, &AMostriciattolo5Player::ControllMainDelayed, MBlendCameraTime, false);

       
        DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
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
    
    AttachToPossessPoint();
   //se lo avevi lockato come focus e lo possiedi resetta
    SetCurrentFocus(nullptr);
    if (GetCurrentPossessed())
    {
        GetCurrentPossessed()->BP_ResetTarget();
    }

    /*
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
    */
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
       
        UPrimitiveComponent* HitComponent = Hit.GetComponent();
        
        if (HitComponent && HitComponent->ComponentTags.Contains(TEXT("Possess")))
        {
            AMostriciattolo5Character* Char = Cast<AMostriciattolo5Character>(Hit.GetActor());
            if (Char)
            {//il target diventa il posseduto
                SetCurrentPossessed(Char);
                if (GetCurrentPossessed())
                {
                    GetCurrentPossessed()->CanBeTarget = true;
                    IsTarget = false;
                   UGameplayStatics::GetPlayerController(GetWorld(), 0)->SetViewTargetWithBlend(GetCurrentPossessed(), 0.2f, EViewTargetBlendFunction::VTBlend_Linear);
                    StartTeleportingWithSpeed(GetActorLocation(), GetCurrentPossessed()->GetMesh()->GetSocketLocation(FName(TEXT("PossessSocket"))), 1000.f);
                    
                }
            }
        }
        
    }
}


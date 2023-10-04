// Copyright Epic Games, Inc. All Rights Reserved.

#include "Mostriciattolo5Character.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include "Public/Mostriciattolo5Player.h"
#include "Kismet/GameplayStatics.h"
#include "Components/ArrowComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "DrawDebugHelpers.h"
#include "Mostriciattolo5\Mostriciattolo5GameMode.h"


//////////////////////////////////////////////////////////////////////////
// AMostriciattolo5Character

AMostriciattolo5Character::AMostriciattolo5Character()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
		
	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f); // ...at this rotation rate

	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
	// instead of recompiling to adjust them
	GetCharacterMovement()->JumpZVelocity = 700.f;
	GetCharacterMovement()->AirControl = 0.35f;
	GetCharacterMovement()->MaxWalkSpeed = 500.f;
	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;

	/* Create a camera boom(pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 400.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller
	*/

	PossessSocket = CreateDefaultSubobject<UCapsuleComponent>(TEXT("PossessSocket"));
	PossessSocket->SetupAttachment(RootComponent);
	PossessSocket->ComponentTags.Add(FName("Possess"));

	PossessArrowTarget = CreateDefaultSubobject<UArrowComponent>(TEXT("PossessArrowTarget"));
	PossessSocket->SetupAttachment(RootComponent);

	/*Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm
	*/
	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named ThirdPersonCharacter (to avoid direct content references in C++)
}

void AMostriciattolo5Character::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);


	if (CanTeleport) 
	{
		MoveActorSmoothly(DeltaSeconds);
	}

}

void AMostriciattolo5Character::StartTeleporting(FVector Start, FVector End, float Time)
{
	MStartLocation = Start;
	MTargetLocation = End;
	MStartTime = GetWorld()->GetTimeSeconds();
	// Adjust MInterpolationTime based on the desired Time and frame time
	//float FrameTime = 1.0f / GetWorld()->GetDeltaSeconds();
	//MInterpolationTime = Time * FrameTime;
	MInterpolationTime = Time;
	CanTeleport = true;
	
}
UCapsuleComponent* AMostriciattolo5Character::GetPossessSocket()
{
	return PossessSocket;
}
void AMostriciattolo5Character::StartTeleportingWithSpeed(FVector Start, FVector End, float Speed)
{
	MStartLocation = Start;
	MTargetLocation = End;
	MStartTime = GetWorld()->GetTimeSeconds();
	MInterpolationTime = FVector::Distance(Start, End) / Speed;
	CanTeleport = true;
}

	AMostriciattolo5Character* AMostriciattolo5Character::FindCharacterToTarget(USceneComponent* Camera)
	{
		/*
		TArray<AActor*> PawnsInView;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), AMostriciattolo5Character::StaticClass(), PawnsInView);
	
		TArray<AMostriciattolo5Character*> EnemyPawns;
	
	
		for (AActor* Pawn : PawnsInView)
		{
		
			AMostriciattolo5Character* Enemy = Cast<AMostriciattolo5Character>(Pawn);
			float MiddleOfScreen;
			float DistFromCent = GetDistanceFromScreenCenter(Pawn, MiddleOfScreen);
		
		
			if (Enemy)
			{
				//Cerca il nemico più vicino allo schhermo
				if (SelectedPawnDistanceToCenter > fabs(DistFromCent))
				{
					SelectedPawn = Enemy;
				}
				SelectedPawnDistanceToCenter = DistFromCent;

				//minore è DistfromCent più a sinistra stanno
			
			}

			EnemyPawns.Sort(this -> bool {
				float MiddleOfScreenA, MiddleOfScreenB;
				float DistA = GetDistanceFromScreenCenter(A, MiddleOfScreenA);
				float DistB = GetDistanceFromScreenCenter(B, MiddleOfScreenB);
				return DistA < DistB;
			});
		}
		return nullptr;
	*/
	/*
		bHit = UKismetSystemLibrary::LineTraceSingle(GetWorld(), Start, End , ETraceTypeQuery::TraceTypeQuery1, false, ActorsToIgnore, EDrawDebugTrace::ForDuration, Hit, true, FLinearColor::Red, FLinearColor::Green, 0.2f);

		bHit = UKismetSystemLibrary::LineTraceSingle(GetWorld(), Start, End+FVector(0.f,0.f,400.f), ETraceTypeQuery::TraceTypeQuery1, false, ActorsToIgnore, EDrawDebugTrace::ForDuration, Hit, true, FLinearColor::Red, FLinearColor::Green, 0.2f);

		bHit = UKismetSystemLibrary::LineTraceSingle(GetWorld(), Start, End + FVector(0.f, 0.f, -400.f), ETraceTypeQuery::TraceTypeQuery1, false, ActorsToIgnore, EDrawDebugTrace::ForDuration, Hit, true, FLinearColor::Red, FLinearColor::Green, 0.2f);
		*/
		//bHit = UKismetSystemLibrary::BoxTraceSingle(this, Start, End, FVector(50.f,50.f,200.f), SelectTargetArrow->GetComponentRotation(), ETraceTypeQuery::TraceTypeQuery_MAX, false, ActorsToIgnore,
			//EDrawDebugTrace::ForDuration, Hit, true, FLinearColor::Blue, FLinearColor::Yellow, 0.4f);

		//bHit = GetWorld()->LineTraceSingleByObjectType(Hit, Start, End, FCollisionObjectQueryParams(ECollisionChannel::ECC_Pawn), Params);
		//bHit = GetWorld()->SweepSingleByObjectType(Hit, Start, End, Rotation, FCollisionObjectQueryParams(ECollisionChannel::ECC_Pawn), CollisionShape, Params);
		//DrawDebugLine(GetWorld(), Start, End, FColor::Yellow, false, 0.5f);

	
	
	if (!SelectTargetArrow) {  UE_LOG(LogTemp, Warning, TEXT("BADA non è settata la SelectTargetArrow in mostriciattolo5character->fidcharactertotarget ")) return nullptr; }

		FHitResult Hit;
		
		FVector Start = SelectTargetArrow->GetComponentLocation();
		FVector End = SelectTargetArrow->GetComponentLocation() + SelectTargetArrow->GetForwardVector()* FindCharacterToTargetReach;
		//casino per trasformare la rotazione della camera in FQuat
		FVector CameraRotation = SelectTargetArrow->GetComponentRotation().Vector();
		FQuat Rotation = FQuat::MakeFromEuler(CameraRotation);

		FCollisionObjectQueryParams ObjectQueryParams;
		ObjectQueryParams.AddObjectTypesToQuery(ECC_Pawn);
		FCollisionShape CollisionShape;
		FCollisionQueryParams Params;
		// Imposta la forma del volume di collisione	
		CollisionShape.MakeCapsule(TargetBoxShape);
		TArray<AActor*> ActorsToIgnore;
		bool bHit;

		for (float EndM : LineTraceTargetEnd)
		{
			bHit = UKismetSystemLibrary::LineTraceSingle(GetWorld(), Start, End + FVector(0.f, 0.f, EndM), ETraceTypeQuery::TraceTypeQuery1, false, ActorsToIgnore, EDrawDebugTrace::ForDuration, Hit, true, FLinearColor::Red, FLinearColor::Green, 0.2f);
			if (bHit)
			{
				AActor* HitActor = Hit.GetActor();

				if (HitActor && HitActor != this)
				{
					AMostriciattolo5Character* HitChar = Cast<AMostriciattolo5Character>(HitActor);
					if (HitChar)
					{
						SetCurrenTarget(HitChar);

						BP_SetTarget();
						return HitChar;
					}
					
				}
			}
		}
		
		 return nullptr; 
}

void AMostriciattolo5Character::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	//Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
	//trova il game mode
	AGameModeBase* GM = GetWorld()->GetAuthGameMode();
	if (GM)
	{
		MGameMode = Cast<AMostriciattolo5GameMode>(GM);
	}
}

bool AMostriciattolo5Character::HasLostTarget()
{
	float NoSeeTime = TargetLastSeen + LooseTargetTime;
	if (GetWorld()->GetTimeSeconds() >= NoSeeTime)
	{
		return true;
	}
	else 
	{ 
		return false; 
	}	
}

bool AMostriciattolo5Character::IsNotTarget()
{
	float NoSeeTime = TargetLastSeen + NotTargetTime;
	if (GetWorld()->GetTimeSeconds() >= NoSeeTime)
	{
		return true;
	}
	else
	{
		return false;
	}
}


void AMostriciattolo5Character::MoveActorSmoothly(float DeltaS)
{
	// Calculate the interpolation factor based on the elapsed time
	CurrentTeleportTime += DeltaS;
	float LerpAlpha = FMath::Clamp(CurrentTeleportTime / MInterpolationTime, 0.0f, 1.0f);

	// Perform the interpolation
	FVector NewLocation = FMath::Lerp(MStartLocation, MTargetLocation, LerpAlpha);

	// Set the actor's new location
	SetActorLocation(NewLocation);
	
	// Check if the interpolation is complete
	if (LerpAlpha >= 0.1f)
	{
		CurrentTeleportTime = 0.f;
		MStartTime = 0.f;
		CanTeleport = false;	
		OnTeleportFinished();
	}
}

//////////////////////////////////////////////////////////////////////////
// Input

void AMostriciattolo5Character::OnTeleportFinished()
{
	
}

void AMostriciattolo5Character::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent)) {
		
		//Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		//Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AMostriciattolo5Character::Move);

		//Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AMostriciattolo5Character::Look);

	}

}

void AMostriciattolo5Character::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	
	if (Controller != nullptr)
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
		// get forward vector
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

		// get right vector 
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		if (GetCurrentTarget())
		{
			RotatePlayerTowardsTarget();
			AddMovementInput(GetActorForwardVector(), MovementVector.Y);
			AddMovementInput(RightDirection, MovementVector.X);
			TurnCameraToTarget();
		}
		else
		{
			// add movement 
			AddMovementInput(ForwardDirection, MovementVector.Y);
			AddMovementInput(RightDirection, MovementVector.X);
		}
	}
}

void AMostriciattolo5Character::Look(const FInputActionValue& Value)
{
	//if (GetCurrentTarget()) { return; }
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}




void  AMostriciattolo5Character::Depossess()
{
	if (MGameMode)
	{ 
		//trova il mostriciattolo salvato nel game mode
		AMostriciattolo5Player* player = MGameMode->Mostriciattolo_OS;
		if (!player) { return; }
		player->JumpOut();
	}
}

AMostriciattolo5Character* AMostriciattolo5Character::GetCurrentTarget()
{
	return CurrentTarget;
}

void AMostriciattolo5Character::SetCurrenTarget(AMostriciattolo5Character* NewTarget)
{
	CurrentTarget = NewTarget;
}

void AMostriciattolo5Character::RotatePlayerTowardsTarget()
{
	FVector TargetLocation = GetCurrentTarget()->GetActorLocation();
	FVector PlayerLocation = GetActorLocation();
	FVector Direction = TargetLocation - PlayerLocation;
	FRotator NewRotation = Direction.Rotation();
	FRotator CurrentRotation = GetActorRotation();
	FRotator InterpolatedRotation = FMath::RInterpTo(CurrentRotation, NewRotation, GetWorld()->GetDeltaSeconds(), RotationSpeed);
	SetActorRotation(InterpolatedRotation, ETeleportType::None);
	/*
	if (MCamera)
	{
		FHitResult Hit;
		MCamera->SetWorldRotation(InterpolatedRotation, false, Hit, ETeleportType::None);
	}
	*/
}

bool AMostriciattolo5Character::SortActorDistance(AActor* Actor_A, AActor* Actor_B)
{
	
	return false;
}

float AMostriciattolo5Character::GetDistanceFromScreenCenter(AActor* Actor, float &OUTScreenCenter)
{
	if (!Actor) { return 10000.f; }
	FVector WorldLocation = Actor->GetActorLocation();
	

	FVector2D ScreenPosition;
	UGameplayStatics::ProjectWorldToScreen(GetWorld()->GetFirstPlayerController(), WorldLocation, ScreenPosition);

	float ScreenWidth = GEngine->GameViewport->Viewport->GetSizeXY().X;
	float MiddleOfScreen = ScreenWidth / 2.0f;
	OUTScreenCenter = MiddleOfScreen;
	return ScreenPosition.X;
}


bool AMostriciattolo5Character::CheckInnerSightAngle(AMostriciattolo5Character* CharacterInSight, float PS_SightRadius)
{
	if (!CharacterInSight) 
	{
		UE_LOG(LogTemp, Warning, TEXT("mostriciattolo character 5 check inner sight angle BADA no character in sight")) 
		return false;
	}

	//roba suggerita da Chatgpt che con qualche calcolo di cui non capisco nulla vede se CharacterInSight è all'interno dell'anmgolo InnerConeDegrees
	FVector DirectionVector = GetActorLocation() - CharacterInSight->GetActorLocation();
	DirectionVector.Normalize();
	double DProduct = FVector::DotProduct(GetActorForwardVector(), DirectionVector);
	double AngleInRadians = FMath::Acos(FMath::Abs(DProduct));
	double AngleInDegrees = AngleInRadians * (180.0 / UE_PI);
	//calcola la lunghezza del cono interno in  base alla percentuaòe(innerConeLength) della lunghezza di vista totale(GetPS_SightRadius())
	float InnerConeStraightLength = (InnerConeLength / 100) * PS_SightRadius;
	float DistanceFromActor = FVector::Distance(GetActorLocation(), CharacterInSight->GetActorLocation());

	UE_LOG(LogTemp, Warning, TEXT("Mostriciattolo Character 5 - Check Inner Sight Angle: DProduct = %f, AngleInRadians = %f"), DProduct, AngleInRadians)

	if (AngleInDegrees <= InnerConeDegrees && DistanceFromActor < InnerConeStraightLength)
	{
		return true;
	}
	else
	{
		return false;
	}
}


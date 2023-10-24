// Copyright Epic Games, Inc. All Rights Reserved.

#include "Mostriciattolo5GameMode.h"
#include "Mostriciattolo5Character.h"
#include "Public/Mostriciattolo5Player.h"
#include "Kismet/GameplayStatics.h"
#include "Mostriciattolo5/Effects/MostriciattoloCameraShakeBase.h"
#include "Camera/CameraShake.h"
#include "UObject/ConstructorHelpers.h"

AMostriciattolo5GameMode::AMostriciattolo5GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}




void AMostriciattolo5GameMode::ControllNPC(AMostriciattolo5Character* CharacterToControll)
{       
    if (Mostriciattolo_OS && CharacterToControll)
    {   //salvaAIcontroller per ridarlo al pawn posseduto quando lo0 lasciamo(non so se serve ridargli lo stesso in realtà)
        LastAIController = CharacterToControll->GetController();
        APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
        //liberiamo il pawn posseduto da questo player controller
        PC->UnPossess();
        //possediamo con questo player controller il nuovo pawn
        PC->Possess(CharacterToControll);
        LastPossessed = CharacterToControll;
    }
}


void AMostriciattolo5GameMode::ReturnControlToAI()
{
    if (Mostriciattolo_OS && LastPossessed)
    {
        APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
        if (PC )
        {
            //Liberiamo l' NPC posseduto dal player controller
            PC->UnPossess();
            //L'ai controller prende l ' NPC (appena liberatodal player controller)
            LastAIController->Possess(LastPossessed);
            // il player controller possiede il nuovo character
            PC->Possess(Mostriciattolo_OS);
            LastPossessed = nullptr;
        }
    }
}

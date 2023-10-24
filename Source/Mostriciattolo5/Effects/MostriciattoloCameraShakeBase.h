// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraShakeBase.h"
#include "MostriciattoloCameraShakeBase.generated.h"

/**
 * 
 */
UCLASS()
class MOSTRICIATTOLO5_API UMostriciattoloCameraShakeBase : public UCameraShakeBase
{
	GENERATED_BODY()
	public:
		void InitCameraValues(FName CameraShakeName);
	
};

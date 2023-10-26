// (c) 2022 Moonray PBC

#pragma once

#include "CoreMinimal.h"
#include "Data/KLSDataAssets.h"
#include "Animation/AnimInstance.h"
#include "KLSMaskAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class KAILOCOMOTION_API UKLSMaskAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite,EditDefaultsOnly,Category="KLS|MaskingSet")
	TObjectPtr<UKLSMaskingData> MaskingSet;

	UPROPERTY(BlueprintReadWrite,Category = "KLS|Anim Nodes Data")
	FAnimNodesBonesData AnimNodesBonesData;
};

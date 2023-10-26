// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AnimGraphNode_Base.h"
#include "Animation/AnimNode_KLSMask.h"
#include "AnimGraphNode_KLSMask.generated.h"

/**
 * 
 */
UCLASS(MinimalAPI)
class UAnimGraphNode_KLSMask : public UAnimGraphNode_Base
{
	GENERATED_UCLASS_BODY()

	UPROPERTY(EditAnywhere, Category=Settings)
	FAnimNode_KLSMask Node;

	// UEdGraphNode interface
	virtual FLinearColor GetNodeTitleColor() const override;
	virtual FText GetTooltipText() const override;
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;
	// End of UEdGraphNode interface


	// UAnimGraphNode_Base interface
	virtual FString GetNodeCategory() const override;
	virtual void PreloadRequiredAssets() override;
	virtual void BakeDataDuringCompilation(class FCompilerResultsLog& MessageLog) override;
	// End of UAnimGraphNode_Base interface



	// Gives each visual node a chance to validate that they are still valid in the context of the compiled class, giving a last shot at error or warning generation after primary compilation is finished
	virtual void ValidateAnimNodeDuringCompilation(class USkeleton* ForSkeleton, class FCompilerResultsLog& MessageLog) override;
	// End of UAnimGraphNode_Base interface
};

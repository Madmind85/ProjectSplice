// Copyright Epic Games, Inc. All Rights Reserved.

#include "AnimGraphNode_KLSAimOffset.h"
#include "Kismet2/CompilerResultsLog.h"
#include "DetailCategoryBuilder.h"
#include "DetailLayoutBuilder.h"
#include "ScopedTransaction.h"

#define LOCTEXT_NAMESPACE "KLSAimOffsetNode"

UAnimGraphNode_KLSAimOffset::UAnimGraphNode_KLSAimOffset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

FText UAnimGraphNode_KLSAimOffset::GetControllerDescription() const
{
	return LOCTEXT("KLSAimOffset", "KLS AimOffset");
}

FText UAnimGraphNode_KLSAimOffset::GetTooltipText() const
{
	return LOCTEXT("AimOffsetTooltip", "Procedurally Rotate The Defined Bones Typically Spine And Head Bones, Using Aim Offset Yaw And Pitch Angles, Node Interpolated The Change Between Negative And Positive Values. Corrects Ik Hand Bones If Enabled");
}

FText UAnimGraphNode_KLSAimOffset::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return GetControllerDescription();
}

FLinearColor UAnimGraphNode_KLSAimOffset::GetNodeTitleColor() const
{
	return  FLinearColor(0.0f, 204.0f, 204.0f);
}


void UAnimGraphNode_KLSAimOffset::CustomizeDetails(IDetailLayoutBuilder& DetailBuilder)
{
	DECLARE_SCOPE_HIERARCHICAL_COUNTER_FUNC()
	Super::CustomizeDetails(DetailBuilder);

	DetailBuilder.SortCategories([](const TMap<FName, IDetailCategoryBuilder*>& CategoryMap)
	{
		for (const TPair<FName, IDetailCategoryBuilder*>& Pair : CategoryMap)
		{
			int32 SortOrder = Pair.Value->GetSortOrder();
			const FName CategoryName = Pair.Key;

			if (CategoryName == "Evaluation")
			{
				SortOrder += 1;
			}
			else if (CategoryName == "Settings")
			{
				SortOrder += 2;
			}
			else if (CategoryName == "Debug")
			{
				SortOrder += 3;
			}
			else
			{
				const int32 ValueSortOrder = Pair.Value->GetSortOrder();
				if (ValueSortOrder >= SortOrder && ValueSortOrder < SortOrder + 10)
				{
					SortOrder += 10;
				}
				else
				{
					continue;
				}
			}

			Pair.Value->SetSortOrder(SortOrder);
		}
	});
}


void UAnimGraphNode_KLSAimOffset::ValidateAnimNodeDuringCompilation(USkeleton* ForSkeleton, FCompilerResultsLog& MessageLog)
{

	if (Node.YawRotationAxis == EAxis::None)
	{
		MessageLog.Warning(*NSLOCTEXT("AimOffsetNode", "InvalidYawRotationAxis", "@@ - Yaw Rotation Axis choice of X, Y, or Z is required").ToString(), this);
	}
	if (Node.PitchRotationAxis == EAxis::None)
	{
		MessageLog.Warning(*NSLOCTEXT("AimOffsetNode", "InvalidPitchRotationAxis", "@@ - Pitch Rotation Axis choice of X, Y, or Z is required").ToString(), this);
	}

	Super::ValidateAnimNodeDuringCompilation(ForSkeleton, MessageLog);
}

#undef LOCTEXT_NAMESPACE

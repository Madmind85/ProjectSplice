// Copyright Epic Games, Inc. All Rights Reserved.

#include "AnimGraphNode_KLSOrientationWarping.h"
#include "Animation/AnimRootMotionProvider.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "Kismet2/CompilerResultsLog.h"
#include "DetailCategoryBuilder.h"
#include "DetailLayoutBuilder.h"
#include "ScopedTransaction.h"

#define LOCTEXT_NAMESPACE "KLSAnimationWarping"

UAnimGraphNode_KLSOrientationWarping::UAnimGraphNode_KLSOrientationWarping(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
}

FText UAnimGraphNode_KLSOrientationWarping::GetControllerDescription() const
{
	return LOCTEXT("KLSOrientationWarping", "KLS Orientation Warping");
}

FText UAnimGraphNode_KLSOrientationWarping::GetTooltipText() const
{
	return LOCTEXT("OrientationWarpingTooltip", "Rotates the root and lower body by the specified angle, while counter rotating the upper body to maintain the forward facing direction.");
}

FText UAnimGraphNode_KLSOrientationWarping::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return GetControllerDescription();
}

FLinearColor UAnimGraphNode_KLSOrientationWarping::GetNodeTitleColor() const
{
	return FLinearColor(0.0f, 204.0f, 204.0f);
}

void UAnimGraphNode_KLSOrientationWarping::CustomizePinData(UEdGraphPin* Pin, FName SourcePropertyName, int32 ArrayIndex) const
{
	Super::CustomizePinData(Pin, SourcePropertyName, ArrayIndex);

	if (Pin->PinName == GET_MEMBER_NAME_STRING_CHECKED(FAnimNode_KLSOrientationWarping, OrientationAngle))
	{
		Pin->bHidden = (Node.Mode == EWarpingEvaluationMode::Graph);
	}

	if (Pin->PinName == GET_MEMBER_NAME_STRING_CHECKED(FAnimNode_KLSOrientationWarping, LocomotionAngle))
	{
		Pin->bHidden = (Node.Mode == EWarpingEvaluationMode::Manual);
	}

	if (Pin->PinName == GET_MEMBER_NAME_STRING_CHECKED(FAnimNode_KLSOrientationWarping, LocomotionAngleDeltaThreshold))
	{
		Pin->bHidden = (Node.Mode == EWarpingEvaluationMode::Manual);
	}
}

void UAnimGraphNode_KLSOrientationWarping::CustomizeDetails(IDetailLayoutBuilder& DetailBuilder)
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

	TSharedRef<IPropertyHandle> NodeHandle = DetailBuilder.GetProperty(FName(TEXT("Node")), GetClass());

	if (Node.Mode == EWarpingEvaluationMode::Graph)
	{
		DetailBuilder.HideProperty(NodeHandle->GetChildHandle(GET_MEMBER_NAME_CHECKED(FAnimNode_KLSOrientationWarping, OrientationAngle)));
	}

	if (Node.Mode == EWarpingEvaluationMode::Manual)
	{
		DetailBuilder.HideProperty(NodeHandle->GetChildHandle(GET_MEMBER_NAME_CHECKED(FAnimNode_KLSOrientationWarping, LocomotionAngle)));
		DetailBuilder.HideProperty(NodeHandle->GetChildHandle(GET_MEMBER_NAME_CHECKED(FAnimNode_KLSOrientationWarping, LocomotionAngleDeltaThreshold)));
		DetailBuilder.HideProperty(NodeHandle->GetChildHandle(GET_MEMBER_NAME_CHECKED(FAnimNode_KLSOrientationWarping, MinRootMotionSpeedThreshold)));
	}
}

void UAnimGraphNode_KLSOrientationWarping::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	DECLARE_SCOPE_HIERARCHICAL_COUNTER_FUNC()
	Super::PostEditChangeProperty(PropertyChangedEvent);

	bool bRequiresNodeReconstruct = false;
	FProperty* ChangedProperty = PropertyChangedEvent.Property;

	if (ChangedProperty)
	{
		// Evaluation mode
		if (ChangedProperty->GetFName() == GET_MEMBER_NAME_STRING_CHECKED(FAnimNode_KLSOrientationWarping, Mode))
		{
			FScopedTransaction Transaction(LOCTEXT("ChangeEvaluationMode", "Change Evaluation Mode"));
			Modify();

			// Break links to pins going away
			for (int32 PinIndex = 0; PinIndex < Pins.Num(); ++PinIndex)
			{
				UEdGraphPin* Pin = Pins[PinIndex];
				if (Pin->PinName == GET_MEMBER_NAME_STRING_CHECKED(FAnimNode_KLSOrientationWarping, OrientationAngle))
				{
					if (Node.Mode == EWarpingEvaluationMode::Graph)
					{
						Pin->BreakAllPinLinks();
					}
				}
				else if (Pin->PinName == GET_MEMBER_NAME_STRING_CHECKED(FAnimNode_KLSOrientationWarping, LocomotionAngle))
				{
					if (Node.Mode == EWarpingEvaluationMode::Manual)
					{
						Pin->BreakAllPinLinks();
					}
				}
				else if (Pin->PinName == GET_MEMBER_NAME_STRING_CHECKED(FAnimNode_KLSOrientationWarping, LocomotionAngleDeltaThreshold))
				{
					if (Node.Mode == EWarpingEvaluationMode::Manual)
					{
						Pin->BreakAllPinLinks();
					}
				}
				else if (Pin->PinName == GET_MEMBER_NAME_STRING_CHECKED(FAnimNode_KLSOrientationWarping, MinRootMotionSpeedThreshold))
				{
					if (Node.Mode == EWarpingEvaluationMode::Manual)
					{
						Pin->BreakAllPinLinks();
					}
				}
			}

			bRequiresNodeReconstruct = true;
		}
	}

	if (bRequiresNodeReconstruct)
	{
		ReconstructNode();
		FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(GetBlueprint());
	}
}

void UAnimGraphNode_KLSOrientationWarping::GetInputLinkAttributes(FNodeAttributeArray& OutAttributes) const
{
	if (Node.Mode == EWarpingEvaluationMode::Graph)
	{
		OutAttributes.Add(UE::Anim::IAnimRootMotionProvider::AttributeName);
	}
}

void UAnimGraphNode_KLSOrientationWarping::GetOutputLinkAttributes(FNodeAttributeArray& OutAttributes) const
{
	if (Node.Mode == EWarpingEvaluationMode::Graph)
	{
		OutAttributes.Add(UE::Anim::IAnimRootMotionProvider::AttributeName);
	}
}

void UAnimGraphNode_KLSOrientationWarping::ValidateAnimNodeDuringCompilation(USkeleton* ForSkeleton, FCompilerResultsLog& MessageLog)
{

	if (Node.RotationAxis == EAxis::None)
	{
		MessageLog.Warning(*NSLOCTEXT("OrientationWarping", "InvalidRotationAxis", "@@ - Rotation Axis choice of X, Y, or Z is required").ToString(), this);
	}
	Super::ValidateAnimNodeDuringCompilation(ForSkeleton, MessageLog);
}

#undef LOCTEXT_NAMESPACE

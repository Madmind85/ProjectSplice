// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimGraphNode_KLSMask.h"

#include "Animation/AnimRootMotionProvider.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "Kismet2/CompilerResultsLog.h"

#define LOCTEXT_NAMESPACE "KLSNodes"

UAnimGraphNode_KLSMask::UAnimGraphNode_KLSMask(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	Node.BlendMasks.SetNum(1);
	Node.MaskBlendWeights.SetNum(1);
	Node.AllBoneBlendWeights.SetNum(1);
}

FLinearColor UAnimGraphNode_KLSMask::GetNodeTitleColor() const
{
	return FLinearColor(0.0f, 204.0f, 204.0f);
}

FText UAnimGraphNode_KLSMask::GetTooltipText() const
{
	return LOCTEXT("AnimGraphNode_KLSMask_Tooltip", "KLS Mask Node");
}

FText UAnimGraphNode_KLSMask::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return LOCTEXT("AnimGraphNode_KLSMaskBlend_Title", "Per Body Part Mask");
}

void UAnimGraphNode_KLSMask::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	const FName PropertyName = (PropertyChangedEvent.Property ? PropertyChangedEvent.Property->GetFName() : NAME_None);

	
	if (PropertyName == GET_MEMBER_NAME_STRING_CHECKED(FAnimNode_KLSMask, BlendMasks))
	{
		FScopedTransaction Transaction(LOCTEXT("AddedBlendMask", "Add Blend Mask"));
		Modify();

		const int32 NumMasks = Node.BlendMasks.Num();
		Node.MaskBlendWeights.SetNum(NumMasks);
		Node.AllBoneBlendWeights.SetNum(NumMasks);
		FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(GetBlueprint());
		ReconstructNode();
	}

	Super::PostEditChangeProperty(PropertyChangedEvent);
}

FString UAnimGraphNode_KLSMask::GetNodeCategory() const
{
	return TEXT("Blends|KLS Nodes");
}

void UAnimGraphNode_KLSMask::PreloadRequiredAssets()
{
	/*UAnimBlueprint* AnimBlueprint = GetAnimBlueprint();
	if (!GIsCookerLoadingPackage && AnimBlueprint->TargetSkeleton)
	{
		const int32 NumBlendMasks = Node.BlendMasks.Num();
		for (int32 MaskIndex = 0; MaskIndex < NumBlendMasks; ++MaskIndex)
		{
			const FKLSMaskSettings CurrentMask = Node.BlendMasks[MaskIndex];
			const FName BlendProfileName = Node.BlendMasks[MaskIndex].BlendProfileName;
			if(const TObjectPtr<UBlendProfile> BlendProfile = AnimBlueprint->TargetSkeleton->GetBlendProfile(BlendProfileName))
			{
				Node.BlendMasks[MaskIndex].BlendProfile = BlendProfile;
			}
			UBlendProfile* BlendMask = Node.BlendMasks[MaskIndex].BlendProfile;
			PreloadObject(BlendMask);
		}
	}
	*/
	
	Super::PreloadRequiredAssets();
}



void UAnimGraphNode_KLSMask::BakeDataDuringCompilation(FCompilerResultsLog& MessageLog)
{
	UAnimBlueprint* AnimBlueprint = GetAnimBlueprint();
	if (!GIsCookerLoadingPackage && AnimBlueprint->TargetSkeleton)
	{
		const int32 NumBlendMasks = Node.BlendMasks.Num();
		for (int32 MaskIndex = 0; MaskIndex < NumBlendMasks; ++MaskIndex)
		{
			const FKLSMaskSettings CurrentMask = Node.BlendMasks[MaskIndex];
			const FName BlendProfileName = Node.BlendMasks[MaskIndex].BlendProfileName;
			if(const TObjectPtr<UBlendProfile> BlendProfile = AnimBlueprint->TargetSkeleton->GetBlendProfile(BlendProfileName))
			{
				Node.BlendMasks[MaskIndex].BlendProfile = BlendProfile;
			}
			if(CurrentMask.AddSlot)
			{
				AnimBlueprint->TargetSkeleton->RegisterSlotNode(CurrentMask.SlotName);
			}
			
		}
		
	}
}

void UAnimGraphNode_KLSMask::ValidateAnimNodeDuringCompilation(USkeleton* ForSkeleton, FCompilerResultsLog& MessageLog)
{
	if(ForSkeleton)
	{
		// ensure to cache the per-bone blend weights
		if (!Node.ArePerBoneBlendWeightsValid(ForSkeleton))
		{
			Node.RebuildPerBoneBlendWeights(ForSkeleton);
		}
		
		if(Node.BlendMasks.Num() > 0)
		{
			int32 NumBlendMasks = Node.BlendMasks.Num();
			for (int32 MaskIndex = 0; MaskIndex < NumBlendMasks; ++MaskIndex)
			{
				const FKLSMaskSettings CurrentMask = Node.BlendMasks[MaskIndex];
				const FName BlendProfileName = Node.BlendMasks[MaskIndex].BlendProfileName;
				const TObjectPtr<UBlendProfile> BlendProfile = ForSkeleton->GetBlendProfile(BlendProfileName);
				if(BlendProfile)
				{
					Node.BlendMasks[MaskIndex].BlendProfile = BlendProfile;
				}
				
				if(BlendProfile == nullptr)
				{
					MessageLog.Error(*FText::Format(LOCTEXT("BlendProfileIsNull", "@@ has null BlendMask In Index {0}. "), FText::AsNumber(MaskIndex)).ToString(), this, BlendProfile);
					continue;
				}
				if (!BlendProfile->IsBlendMask())
				{
					MessageLog.Error(*FText::Format(LOCTEXT("BlendProfileModeError", "@@ is using a BlendProfile(@@) without a BlendMask mode In Index {0}. "), FText::AsNumber(MaskIndex)).ToString(), this, BlendProfile);
				}
			}
		}
		
		
	}
	Super::ValidateAnimNodeDuringCompilation(ForSkeleton, MessageLog);
}

#undef LOCTEXT_NAMESPACE
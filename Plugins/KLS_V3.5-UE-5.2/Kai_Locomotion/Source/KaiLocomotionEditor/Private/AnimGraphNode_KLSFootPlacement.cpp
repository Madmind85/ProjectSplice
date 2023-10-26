// Copyright Epic Games, Inc. All Rights Reserved.

#include "AnimGraphNode_KLSFootPlacement.h"
#include "Animation/AnimRootMotionProvider.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "DetailLayoutBuilder.h"

/////////////////////////////////////////////////////
// UAnimGraphNode_FootPlacement

#define LOCTEXT_NAMESPACE "AnimGraphNode_KLSFootPlacement"

UAnimGraphNode_KLSFootPlacement::UAnimGraphNode_KLSFootPlacement(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

FText UAnimGraphNode_KLSFootPlacement::GetControllerDescription() const
{
	return LOCTEXT("KLSFootPlacement", "KLS Foot Placement");
}

FText UAnimGraphNode_KLSFootPlacement::GetTooltipText() const
{
	return LOCTEXT("FootPlacementTooltip", "KLS Foot Placement.");
}

FLinearColor UAnimGraphNode_KLSFootPlacement::GetNodeTitleColor() const
{
	return FLinearColor(0.0f, 204.0f, 204.0f);
}

FText UAnimGraphNode_KLSFootPlacement::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return GetControllerDescription();
}

#undef LOCTEXT_NAMESPACE

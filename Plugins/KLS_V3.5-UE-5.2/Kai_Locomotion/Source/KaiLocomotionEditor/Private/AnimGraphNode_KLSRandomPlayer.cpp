// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimGraphNode_KLSRandomPlayer.h"
#include "EditorCategoryUtils.h"
#include "Animation/AnimAttributes.h"
#include "Animation/AnimRootMotionProvider.h"


#define LOCTEXT_NAMESPACE "KLSNodes"

FLinearColor UAnimGraphNode_KLSRandomPlayer::GetNodeTitleColor() const
{
	return FLinearColor(0.10f, 0.60f, 0.12f);
}

FText UAnimGraphNode_KLSRandomPlayer::GetTooltipText() const
{
	return LOCTEXT("NodeToolTip", "Plays sequences picked from a provided list in random orders.");
}

FText UAnimGraphNode_KLSRandomPlayer::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return LOCTEXT("NodeTitle", "KLS Random Sequence Player");
}

FText UAnimGraphNode_KLSRandomPlayer::GetMenuCategory() const
{
	return FEditorCategoryUtils::GetCommonCategory(FCommonEditorCategory::Animation);
}

void UAnimGraphNode_KLSRandomPlayer::GetOutputLinkAttributes(FNodeAttributeArray& OutAttributes) const
{
	OutAttributes.Add(UE::Anim::FAttributes::Curves);
	OutAttributes.Add(UE::Anim::FAttributes::Attributes);

	if (UE::Anim::IAnimRootMotionProvider::Get())
	{
		OutAttributes.Add(UE::Anim::IAnimRootMotionProvider::AttributeName);
	}
}


#undef LOCTEXT_NAMESPACE

// Fill out your copyright notice in the Description page of Project Settings.


#include "Animation/AnimNode_SlotCustom.h"

#include "Animation/AnimInstanceProxy.h"
#include "Animation/AnimNode_Inertialization.h"

void FAnimNode_SlotCustom::Update_AnyThread(const FAnimationUpdateContext& Context)
{
	DECLARE_SCOPE_HIERARCHICAL_COUNTER_ANIMNODE(Update_AnyThread)
	// Update weights.
	Context.AnimInstanceProxy->GetSlotWeight(SlotName, WeightData.SlotNodeWeight, WeightData.SourceWeight, WeightData.TotalNodeWeight);

	// Update cache in AnimInstance.
	Context.AnimInstanceProxy->UpdateSlotNodeWeight(SlotName, WeightData.SlotNodeWeight, Context.GetFinalBlendWeight());

	UE::Anim::FSlotInertializationRequest InertializationRequest;
	if (Context.AnimInstanceProxy->GetSlotInertializationRequest(SlotName, InertializationRequest))
	{
		UE::Anim::IInertializationRequester* InertializationRequester = Context.GetMessage<UE::Anim::IInertializationRequester>();
		if (InertializationRequester)
		{
			InertializationRequester->RequestInertialization(InertializationRequest.Get<0>(), InertializationRequest.Get<1>());
		}
		else
		{
			FAnimNode_Inertialization::LogRequestError(Context, Source);
		}
	}


	const bool bUpdateSource = bAlwaysUpdateSourcePose || FAnimWeight::IsRelevant(WeightData.SourceWeight);
	if (bUpdateSource)
	{
		const float SourceWeight = FMath::Max(FAnimWeight::GetSmallestRelevantWeight(), WeightData.SourceWeight);
		Source.Update(Context.FractionalWeight(SourceWeight));
	}
#if ANIM_TRACE_ENABLED
	TRACE_ANIM_NODE_VALUE(Context, TEXT("Name"), SlotName);
	TRACE_ANIM_NODE_VALUE(Context, TEXT("Slot Weight"), WeightData.SlotNodeWeight);
	TRACE_ANIM_NODE_VALUE(Context, TEXT("Pose Source"), (WeightData.SourceWeight <= ZERO_ANIMWEIGHT_THRESH));

	Context.AnimInstanceProxy->TraceMontageEvaluationData(Context, SlotName);
#endif
}

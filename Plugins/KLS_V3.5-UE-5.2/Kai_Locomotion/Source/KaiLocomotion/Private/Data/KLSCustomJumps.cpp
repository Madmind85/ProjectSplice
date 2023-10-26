//By SIR.D.KAI Studio Copyright 2022 . All Rights Reserved.


#include "Data/KLSCustomJumps.h"




FGameplayTag UKLSCustomJumps::SelectJumpAnimations_Implementation(const FKLSJumpSelectorInfo& JumpInfo)
{
	return SelectJumpAnimationsInternal(JumpInfo);
}


FGameplayTag UKLSCustomJumps::SelectJumpAnimationsInternal(const FKLSJumpSelectorInfo& JumpInfo)
{
	return FGameplayTag();
}

FGameplayTag UKLSCustomLand::SelectLandAnimation_Implementation(const FKLSLandSelectorInfo& JumpInfo)
{
	return SelectLandAnimationInternal(JumpInfo);
}


FGameplayTag UKLSCustomLand::SelectLandAnimationInternal(const FKLSLandSelectorInfo& JumpInfo)
{
	return FGameplayTag();
}
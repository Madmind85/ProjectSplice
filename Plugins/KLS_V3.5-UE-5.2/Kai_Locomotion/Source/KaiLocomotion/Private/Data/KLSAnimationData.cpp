//By SIR.D.KAI Studio Copyright 2022 . All Rights Reserved.



#include "Data/KLSAnimationData.h"
#include "Animation/AnimComposite.h"
#include "Animation/AnimSequence.h"
#include "Data/KLSCustomJumps.h"






void FKLSAnimData::CacheDistanceCurve(const float SampleRate)
{
#if WITH_EDITOR
	DistanceCurve.Reset();
	FRichCurve FinalCurve;
	if(!Animation)
	{
		return;
	}
	///Check if it's an animation composite for starts and post pivots to accumulate the distance curve value over the animations
	if(UAnimComposite* AnimComposite = Cast<UAnimComposite>(Animation))
	{
		
		TArray<UAnimationAsset*> AnimAssets;
		AnimComposite->GetAllAnimationSequencesReferred(AnimAssets);
		if(AnimAssets.Num() == 0)
		{
			return;
		}
		for(UAnimationAsset* AnimAsset : AnimAssets)
		{
			if(UAnimSequence* AnimSeq = Cast <UAnimSequence> (AnimAsset))
			{
				if(AnimSeq->bForceRootLock)
				{
					AnimSeq->bForceRootLock = false;
				}
				if(!AnimSeq->bEnableRootMotion)
				{
					AnimSeq->bEnableRootMotion = true;
				}
			}
		}
		const float AnimLength = AnimComposite->GetPlayLength();
		const float SampleDeltaTime = 1/SampleRate;
		float LastSampleDistance = 0.0f;
		float CurrentAnimTime = 0.0f;
		FinalCurve.AddKey(0.0f,0.0f,false);
		while(CurrentAnimTime < AnimLength)
		{
			CurrentAnimTime= FMath::Clamp(CurrentAnimTime+SampleDeltaTime,0.0f,AnimLength);
			FRootMotionMovementParams FinalLocParams;
			AnimComposite->ExtractRootMotionFromTrack(AnimComposite->AnimationTrack,0.0f,Animation->GetPlayLength(),FinalLocParams);
			const FVector FinalLoc = FinalLocParams.GetRootMotionTransform().GetLocation();
			FRootMotionMovementParams StartLocParams;
			AnimComposite->ExtractRootMotionFromTrack(AnimComposite->AnimationTrack,0.0f,SampleDeltaTime,StartLocParams);
			const FVector StartLoc = StartLocParams.GetRootMotionTransform().GetLocation();
			FRootMotionMovementParams CurrLocParams;
			AnimComposite->ExtractRootMotionFromTrack(AnimComposite->AnimationTrack,0.0f,CurrentAnimTime,CurrLocParams);
			FVector CurrLoc = CurrLocParams.GetRootMotionTransform().GetLocation();
			CurrLoc = FMath::ClosestPointOnSegment(CurrLoc,StartLoc,FinalLoc);
			const float CurrSampleDistance = FVector::Dist2D(CurrLoc,StartLoc);
			const float FinalDist = FMath::Max(LastSampleDistance,CurrSampleDistance);
			LastSampleDistance = FinalDist;
			FinalCurve.AddKey(CurrentAnimTime,FinalDist,false);
		}
		if(bIsStopAnim)
		{
			FRichCurve StopCurve;
			int32 KeysNums = FinalCurve.GetNumKeys();
			FRichCurveKey LastKey = FinalCurve.GetLastKey();
			for (int i = 0; i < KeysNums; i++)
			{
				const float Time = FinalCurve.Keys[i].Time;
				const float Value = FMath::Min(FinalCurve.Keys[i].Value - LastKey.Value,0.f);
				StopCurve.AddKey(Time,Value);
			}
			FinalCurve = StopCurve;
		}
		for(UAnimationAsset* AnimAsset : AnimAssets)
		{
			UAnimSequence* AnimSeq = Cast <UAnimSequence> (AnimAsset);
			if(AnimSeq)
			{
				if(!AnimSeq->bForceRootLock)
				{
					AnimSeq->bForceRootLock = true;
					AnimSeq->Modify();
				}
				if(!AnimSeq->bEnableRootMotion)
				{
					AnimSeq->bEnableRootMotion = true;
					AnimSeq->Modify();
				}
			}
		}
	}
	//if it's just an animation sequence;
	else
	{
		if(UAnimSequence* AnimSequence = Cast<UAnimSequence> (Animation))
		{
			if (!AnimSequence->bForceRootLock)
			{
				AnimSequence->bForceRootLock = true;
				AnimSequence->Modify();
			}
			if (!AnimSequence->bEnableRootMotion)
			{
				AnimSequence->bEnableRootMotion = true;
				AnimSequence->Modify();
			}
			const float AnimLength = AnimSequence->GetPlayLength();
			const float SampleDeltaTime = 1/SampleRate;
			float CurrentAnimTime = 0.0f;
			FinalCurve.AddKey(0.0f,0.0f,false);;
			while(CurrentAnimTime < AnimLength)
			{
				CurrentAnimTime= FMath::Clamp(CurrentAnimTime+SampleDeltaTime,0.0f,AnimLength);
				const FVector StartLoc = AnimSequence->ExtractRootMotionFromRange(0.0f,0.0f).GetLocation();
				const FVector EndLoc =  AnimSequence->ExtractRootMotionFromRange(0.0f,AnimLength).GetLocation();
				const FVector CurrLoc =AnimSequence->ExtractRootMotionFromRange(0.0f,CurrentAnimTime).GetLocation();
				const FVector CurrLocProjected = FMath::ClosestPointOnSegment(CurrLoc,StartLoc,EndLoc);
				const float CurrSampleDistance =FVector::Dist2D(StartLoc,CurrLocProjected);
				FinalCurve.AddKey(CurrentAnimTime,CurrSampleDistance,false);
				
				
			}
			if(bIsStopAnim)
			{
				FRichCurve StopCurve;
				int32 KeysNums = FinalCurve.GetNumKeys();
				FRichCurveKey LastKey = FinalCurve.GetLastKey();
				for (int i = 0; i < KeysNums; i++)

				{
					const float Time = FinalCurve.Keys[i].Time;
					const float Value =  FMath::Min(FinalCurve.Keys[i].Value - LastKey.Value,0.f);
					StopCurve.AddKey(Time,Value);
				}
				FinalCurve = StopCurve;
			
			}
			
			
		}
	}
	

	DistanceCurve = FinalCurve;
#endif
}
void FKLSAnimData::CacheDistanceCurveClamped(const float SampleRate, const float StartTime, const float EndTime)
{
	#if WITH_EDITOR
	DistanceCurve.Reset();
	FRichCurve FinalCurve;
	if(!Animation)
	{
		return;
	}
	///Check if it's an animation composite for starts and post pivots to accumulate the distance curve value over the animations
	
	if(UAnimComposite* AnimComposite = Cast<UAnimComposite>(Animation))
	{
		
		TArray<UAnimationAsset*> AnimAssets;
		AnimComposite->GetAllAnimationSequencesReferred(AnimAssets);
		if(AnimAssets.Num() == 0)
		{
			return;
		}
		for(UAnimationAsset* AnimAsset : AnimAssets)
		{
			UAnimSequence* AnimSeq = Cast <UAnimSequence> (AnimAsset);
			if(AnimSeq)
			{
				if(AnimSeq->bForceRootLock)
				{
					AnimSeq->bForceRootLock = false;
				}
				if(!AnimSeq->bEnableRootMotion)
				{
					AnimSeq->bEnableRootMotion = true;
				}
			}
		}
		const float AnimLength = EndTime > 0 ? EndTime : AnimComposite->GetPlayLength();
		const float SampleDeltaTime = 1/SampleRate;
		float LastSampleDistance = 0.0f;
		float CurrentAnimTime = StartTime;
		FinalCurve.AddKey(StartTime,0.0f,false);
		CurrentAnimTime= FMath::Clamp(CurrentAnimTime+SampleDeltaTime,StartTime,AnimLength);
		FRootMotionMovementParams FinalLocParams;
		AnimComposite->ExtractRootMotionFromTrack(AnimComposite->AnimationTrack,StartTime,AnimLength,FinalLocParams);
		const FVector FinalLoc = FinalLocParams.GetRootMotionTransform().GetLocation();
		FRootMotionMovementParams StartLocParams;
		AnimComposite->ExtractRootMotionFromTrack(AnimComposite->AnimationTrack,StartTime,StartTime,StartLocParams);
		const FVector StartLoc = StartLocParams.GetRootMotionTransform().GetLocation();
		while(CurrentAnimTime < AnimLength)
		{
			
			FRootMotionMovementParams CurrLocParams;
			AnimComposite->ExtractRootMotionFromTrack(AnimComposite->AnimationTrack,StartTime,CurrentAnimTime,CurrLocParams);
			FVector CurrLoc = CurrLocParams.GetRootMotionTransform().GetLocation();
			CurrLoc = FMath::ClosestPointOnSegment(CurrLoc,StartLoc,FinalLoc);
			const float CurrSampleDistance = FVector::Dist2D(CurrLoc,StartLoc);
			const float FinalDist = FMath::Max(LastSampleDistance,CurrSampleDistance);
			LastSampleDistance = FinalDist;
			FinalCurve.AddKey(CurrentAnimTime,FinalDist,false);
		}
		if(bIsStopAnim)
		{
			FRichCurve StopCurve;
			int32 KeysNums = FinalCurve.GetNumKeys();
			FRichCurveKey LastKey = FinalCurve.GetLastKey();
			for (int i = 0; i < KeysNums; i++)
			{
				const float Time = FinalCurve.Keys[i].Time;
				const float Value = FMath::Min(FinalCurve.Keys[i].Value - LastKey.Value,0.f);
				StopCurve.AddKey(Time,Value);
			}
			FinalCurve = StopCurve;
		}
		for(UAnimationAsset* AnimAsset : AnimAssets)
		{
			UAnimSequence* AnimSeq = Cast <UAnimSequence> (AnimAsset);
			if(AnimSeq)
			{
				if(!AnimSeq->bForceRootLock)
				{
					AnimSeq->bForceRootLock = true;
					AnimSeq->Modify();
				}
				if(!AnimSeq->bEnableRootMotion)
				{
					AnimSeq->bEnableRootMotion = true;
					AnimSeq->Modify();
				}
			}
		}
	}
	//if it's just an animation sequence;
	else
	{
		if(UAnimSequence* AnimSequence = Cast<UAnimSequence> (Animation))
		{
			if (!AnimSequence->bForceRootLock)
			{
				AnimSequence->bForceRootLock = true;
				AnimSequence->Modify();
			}
			if (!AnimSequence->bEnableRootMotion)
			{
				AnimSequence->bEnableRootMotion = true;
				AnimSequence->Modify();
			}
			const float AnimLength =  EndTime > 0 ? EndTime : AnimSequence->GetPlayLength();
			const float SampleDeltaTime = 1/SampleRate;
			float CurrentAnimTime = StartTime;
			FinalCurve.AddKey(StartTime,0.0f,false);
			const FVector StartLoc = AnimSequence->ExtractRootMotionFromRange(StartTime,StartTime).GetLocation();
			const FVector EndLoc =  AnimSequence->ExtractRootMotionFromRange(StartTime,AnimLength).GetLocation();
			while(CurrentAnimTime < AnimLength)
			{
				CurrentAnimTime= FMath::Clamp(CurrentAnimTime+SampleDeltaTime,StartTime,AnimLength);
				const FVector CurrLoc =AnimSequence->ExtractRootMotionFromRange(StartTime,CurrentAnimTime).GetLocation();
				const FVector CurrLocProjected = FMath::ClosestPointOnSegment(CurrLoc,StartLoc,EndLoc);
				const float CurrSampleDistance =FVector::Dist2D(StartLoc,CurrLocProjected);
				FinalCurve.AddKey(CurrentAnimTime,CurrSampleDistance,false);
				
			}
			if(bIsStopAnim)
			{
				FRichCurve StopCurve;
				int32 KeysNums = FinalCurve.GetNumKeys();
				FRichCurveKey LastKey = FinalCurve.GetLastKey();
				for (int i = 0; i < KeysNums; i++)

				{
					const float Time = FinalCurve.Keys[i].Time;
					const float Value =  FMath::Min(FinalCurve.Keys[i].Value - LastKey.Value,0.f);
					StopCurve.AddKey(Time,Value);
				}
				FinalCurve = StopCurve;
			
			}
			
		}
	}
	DistanceCurve = FinalCurve;
#endif
}
void FKLSAnimData::CacheRotationCurve( const float RotationDirection,const float SampleRate) 
{
#if WITH_EDITOR
	FRichCurve FinalCurve;
	RotationCurve.Reset();
	if(!Animation)
	{
		return ;
	}

	//Anim Composite
	if(UAnimComposite* AnimComposite = Cast<UAnimComposite>(Animation))
	{
		TArray<UAnimationAsset*> AnimAssets;
		AnimComposite->GetAllAnimationSequencesReferred(AnimAssets);
		if(AnimAssets.Num() == 0)
		{
			return ;
		}
		for(UAnimationAsset* AnimAsset : AnimAssets)
		{
			if(UAnimSequence* CompositeAnimation = Cast <UAnimSequence> (AnimAsset))
			{
				
				if(!CompositeAnimation->bForceRootLock)
				{
					CompositeAnimation->bForceRootLock = true;
					CompositeAnimation->Modify();
				}
				if(!CompositeAnimation->bEnableRootMotion)
				{
					CompositeAnimation->bEnableRootMotion = true;
					CompositeAnimation->Modify();
				}
			}
		}
		const float AnimLength = AnimComposite->GetPlayLength();
		const float SampleDeltaTime = 1/SampleRate;
		FRootMotionMovementParams Params;
		
		AnimComposite->ExtractRootMotionFromTrack(AnimComposite->AnimationTrack,0.0f,AnimComposite->GetPlayLength(),Params);
		const float MaxRot = FMath::Abs(Params.GetRootMotionTransform().Rotator().Yaw);
		//FAnimExtractContext ExtractContext;
		float CurrentAnimTime = 0.0f;
		FinalCurve.AddKey(0.0f,0.0f,false);
		float LastRotationYaw = 0.0f;
		if(MaxRot < 1)
		{
			RotateDirection = RotationDirection;
			RotationCurve = FinalCurve;
			return;
		}
		while(CurrentAnimTime < AnimLength)
		{
			CurrentAnimTime= FMath::Clamp(CurrentAnimTime+SampleDeltaTime,0.0f,AnimLength);
			FRootMotionMovementParams LclParams;
			AnimComposite->ExtractRootMotionFromTrack(AnimComposite->AnimationTrack,0.0f,CurrentAnimTime,LclParams);
			const float CurrRotationYaw = FMath::Abs(LclParams.GetRootMotionTransform().Rotator().Yaw);
			const float FinalRotYaw = FMath::Max(LastRotationYaw,CurrRotationYaw);
			LastRotationYaw = FinalRotYaw;
			const float RotationAlpha = FinalRotYaw / MaxRot;
			FinalCurve.AddKey(CurrentAnimTime,RotationAlpha,false);
		
		}
		FinalCurve.AddKey(AnimLength,1.0f,false);
		RotateDirection = RotationDirection;
		RotationCurve = FinalCurve;
	}

	//Anim Sequence
	else
	{
		if(UAnimSequence* AnimSequence = Cast<UAnimSequence> (Animation))
		{
			const float AnimLength = Animation->GetPlayLength();
			const float SampleDeltaTime = 1/SampleRate;
			const float MaxRot = FMath::Abs(AnimSequence->ExtractRootMotionFromRange(0.0f,AnimLength).GetRotation().Rotator().Yaw);
			
			float CurrentAnimTime = 0.0f;
			FinalCurve.AddKey(0.0f,0.0f,false);
			float LastRotationYaw = 0.0f;
			while(CurrentAnimTime < AnimLength)
			{
				CurrentAnimTime= FMath::Clamp(CurrentAnimTime+SampleDeltaTime,0.0f,AnimLength);
				const float CurrRotationYaw = FMath::Abs(AnimSequence->ExtractRootMotionFromRange(0.0f,CurrentAnimTime).GetRotation().Rotator().Yaw);
				const float FinalRotYaw = FMath::Max(LastRotationYaw,CurrRotationYaw);
				LastRotationYaw = FinalRotYaw;
				const float RotationAlpha = FinalRotYaw / MaxRot;
				FinalCurve.AddKey(CurrentAnimTime,RotationAlpha,false);
				
		
			}
			FinalCurve.AddKey(AnimLength,1.0f,false);
			RotateDirection = RotationDirection;
			RotationCurve = FinalCurve;
			if(!AnimSequence->bForceRootLock)
			{
				AnimSequence->bForceRootLock = true;
				AnimSequence->Modify();
			}
		}
	}
#endif
}
void FKLSAnimData::ExtractAverageSpeed()
{
	if(Animation)
	{
		
		{
			
			if(UAnimComposite* AnimComposite = Cast<UAnimComposite>(Animation))
			{
				TArray<UAnimationAsset*> AnimAssets;
				FRootMotionMovementParams Params;
				AnimComposite->ExtractRootMotionFromTrack(AnimComposite->AnimationTrack,0.0f,AnimComposite->GetPlayLength(),Params);
				AverageSpeed = Params.GetRootMotionTransform().GetLocation().Size2D() / AnimComposite->GetPlayLength();
			}
			else
			{
				if(UAnimSequence* AnimSequence = Cast <UAnimSequence> (Animation))
				{
					const float Dist = AnimSequence->ExtractRootMotionFromRange(0.0f,AnimSequence->GetPlayLength()).GetLocation().Size2D();
					AverageSpeed = Dist / AnimSequence->GetPlayLength();
					
				}
			}
		}
	}
}

void FKLSAnimData::CacheCurves(const float RotationDirection,const bool bIsStop,const bool bIsRotating)
	{
#if WITH_EDITOR
	if(Animation)
	{
		bIsStopAnim= bIsStop;
		CacheDistanceCurve(60.0f);
		if(bIsRotating)
		{
			bIsRotatingAnim = true;
			CacheRotationCurve(RotationDirection,60.0f);
			
		}
	}


#endif
}

void FKLSAnimData::GetRotationCurveMinMaxValues(float& Min, float& Max) const
{
	if(RotationCurve.GetNumKeys() > 2)
	{
		Min = RotationCurve.Keys[0].Value;
		Max = RotationCurve.GetLastKey().Value;
	}
	else
	{
		Min = 0.0f;
		Max = 0.0f;
	}
	
	
}
void FKLSAnimData::GetDistanceCurveMinMaxValues(float& Min, float& Max) const
{
	DistanceCurve.GetValueRange(Min,Max);
}
float FKLSAnimData::GetDistCurveValue(const float Time) const
{
	if(!Animation)
	{
		return 0.0f;
	}
	const float ClampedTime = FMath::Clamp(Time,0.0f,Animation->GetPlayLength());
	if(DistanceCurve.GetNumKeys() > 2)
	{
		return DistanceCurve.Eval(ClampedTime);
	}
	return 0.0f;
}
float FKLSAnimData::GetRotationCurveValue(const float Time) const
{
	if(RotationCurve.GetNumKeys() > 2)
	{
		const float ClampedTime = FMath::Clamp(Time,0.0f,Animation->GetPlayLength());
		return RotationCurve.Eval(ClampedTime);
	}
	return 0.0f;
}
float FKLSAnimData::GetTimeAtDistance(const float Distance) const
{
	float Time;
	TArray<FRichCurveKey> Keys = DistanceCurve.GetCopyOfKeys();
	const int32 NumSamples = DistanceCurve.GetNumKeys();
	// The number of elements in curve*
	float MinDistance;
	float MaxDistance;
	DistanceCurve.GetValueRange(MinDistance,MaxDistance);
	const int32 LastIndex = NumSamples - 1;
	if (NumSamples < 2 || MinDistance == MaxDistance)
	{
		Time = 0.0f;
		return Time;
	}
	
	// Clamp Value To Eliminate Edge Cases.
	const float ClampedValue =Distance;// FMath::Clamp(Distance,MinDistance,MaxDistance);
		
	// Binary search*
	int32 NextIndex = 1;
	int32 Count = LastIndex - NextIndex;
	while (Count > 0)
	{
		const int32 Step = Count / 2;
		const int32 Middle = NextIndex + Step;

		if (ClampedValue > Keys[Middle].Value)
		{
			NextIndex = Middle + 1;
			Count -= Step + 1;
		}
		else
		{
			Count = Step;
		}
	}

	const  int32 PrevIndex = NextIndex - 1;
	
	const float PrevCurveValue = Keys[PrevIndex].Value;
	const float NextCurveValue =  Keys[NextIndex].Value;
	const float PrevCurveTime = Keys[PrevIndex].Time;
	const float NextCurveTime = Keys[NextIndex].Time;
	// Find time by two nearest known points on the curve*
	const float Diff = NextCurveValue - PrevCurveValue;
	const float Alpha = !FMath::IsNearlyZero(Diff) ? (ClampedValue - PrevCurveValue) / Diff : 0.0f;
	Time = FMath::Lerp(PrevCurveTime, NextCurveTime, Alpha);
	return Time;
}
/////Get the time of the animation inside KLSAnimData struct that matches the Rotation Value(Note:This is Clamped between 0 and animation length)
float FKLSAnimData::GetTimeAtRotation(const float Rotation) const
{
	float Time;
	TArray<FRichCurveKey> Keys = RotationCurve.GetCopyOfKeys();
	const int32 NumSamples = RotationCurve.GetNumKeys();
	// The number of elements in curve*
	float MinRotation;
	float MaxRotation;
	RotationCurve.GetValueRange(MinRotation,MaxRotation);
	const int32 LastIndex = NumSamples - 1;
	if (NumSamples < 2 || MinRotation == MaxRotation)
	{
		Time = 0.0f;
		return Time;
	}
	
	// Clamp Value To Eliminate Edge Cases.
	const float ClampedValue = FMath::Clamp(Rotation,MinRotation,MaxRotation);
		
	// Binary search*
	int32 NextIndex = 1;
	int32 Count = LastIndex - NextIndex;
	while (Count > 0)
	{
		const int32 Step = Count / 2;
		const int32 Middle = NextIndex + Step;

		if (ClampedValue > Keys[Middle].Value)
		{
			NextIndex = Middle + 1;
			Count -= Step + 1;
		}
		else
		{
			Count = Step;
		}
	}

	const  int32 PrevIndex = NextIndex - 1;
	
	const float PrevCurveValue = Keys[PrevIndex].Value;
	const float NextCurveValue =  Keys[NextIndex].Value;
	const float PrevCurveTime = Keys[PrevIndex].Time;
	const float NextCurveTime = Keys[NextIndex].Time;
	// Find time by two nearest known points on the curve*
	const float Diff = NextCurveValue - PrevCurveValue;
	const float Alpha = !FMath::IsNearlyZero(Diff) ? (ClampedValue - PrevCurveValue) / Diff : 0.0f;
	Time = FMath::Lerp(PrevCurveTime, NextCurveTime, Alpha);
	return Time;
}

void FKLSLoopAnim::CacheCurves()
{
#if WITH_EDITOR
	if(Animation)
	{
		if(Animation)
		{
			if( Animation->CanModify())
			{
				if(!Animation->bForceRootLock )
				{
					Animation->bForceRootLock = true;
					Animation->Modify(true);
				}
				if(!Animation->bEnableRootMotion)
				{
					Animation->bEnableRootMotion = true;
					Animation->Modify(true);
				}
				
			}
			const float Dist = Animation->ExtractRootMotionFromRange(0.0,Animation->GetPlayLength()).GetLocation().Length();
			AverageSpeed = Dist/Animation->GetPlayLength();
		}
	}
#endif
}


void FKLSMaskAnimation::CacheAdditiveCurves()
{
#if WITH_EDITOR
	if(!Animation)
	{
		CurvesToModify.Reset();
		return;
	}

	MaskPoseTime = FMath::Clamp(MaskPoseTime,0.0f,Animation->GetPlayLength());

	//Set values for Arms Spaces To 0 Before Filling them from the Weights.
	MaskingWeights.RightArmWeights.ArmLocalSpaceBlend = 0.0f;
	MaskingWeights.RightArmWeights.ArmMeshSpaceBlend = 0.0f;
	MaskingWeights.LeftArmWeights.ArmLocalSpaceBlend = 0.0f;
	MaskingWeights.LeftArmWeights.ArmMeshSpaceBlend = 0.0f;


	//Fill arm spaces values with weights
	if(MaskingWeights.RightArmWeights.ArmAdditiveMode == EKLSAdditiveMode::ELocalS)
	{
		MaskingWeights.RightArmWeights.ArmLocalSpaceBlend = 1.0f;
	}
	else
	{
		MaskingWeights.RightArmWeights.ArmMeshSpaceBlend = 1.0f;
	}

	if(MaskingWeights.LeftArmWeights.ArmAdditiveMode == EKLSAdditiveMode::ELocalS)
	{
		MaskingWeights.LeftArmWeights.ArmLocalSpaceBlend = 1.0f;
	}
	else
	{
		MaskingWeights.LeftArmWeights.ArmMeshSpaceBlend = 1.0f;
	}
	CurvesToModify.Reset();
	//legs
	CurvesToModify.Add("LegsMask_MS",1);
	CurvesToModify.Add("LegsMask_LS",0);
	CurvesToModify.Add("LegsMask",MaskingWeights.LegsWeights.MaskWeight);
	CurvesToModify.Add("LegsMask_Add",MaskingWeights.LegsWeights.MaskAdditive);
	Weights.LegsWeights.OverrideAlpha = MaskingWeights.LegsWeights.MaskWeight;
	Weights.LegsWeights.AdditiveAlpha = MaskingWeights.LegsWeights.MaskAdditive;
	//Pelvis
	CurvesToModify.Add("PelvisMask_MS",1);
	CurvesToModify.Add("PelvisMask_LS",0);
	CurvesToModify.Add("PelvisMask",MaskingWeights.PelvisWeights.MaskWeight);
	CurvesToModify.Add("PelvisMask_Add",MaskingWeights.PelvisWeights.MaskAdditive);
	Weights.PelvisWeights.OverrideAlpha = MaskingWeights.PelvisWeights.MaskWeight;
	Weights.PelvisWeights.AdditiveAlpha = MaskingWeights.PelvisWeights.MaskAdditive;
	//Spine
	CurvesToModify.Add("SpineMask_MS",1);
	CurvesToModify.Add("SpineMask_LS",0);
	CurvesToModify.Add("SpineMask",MaskingWeights.SpineWeights.MaskWeight);
	CurvesToModify.Add("SpineMask_Add",MaskingWeights.SpineWeights.MaskAdditive);
	Weights.SpineWeights.OverrideAlpha = MaskingWeights.SpineWeights.MaskWeight;
	Weights.SpineWeights.AdditiveAlpha = MaskingWeights.SpineWeights.MaskAdditive;
	//Head
	CurvesToModify.Add("HeadMask_MS",1);
	CurvesToModify.Add("HeadMask_LS",0);
	CurvesToModify.Add("HeadMask",MaskingWeights.HeadWeights.MaskWeight);
	CurvesToModify.Add("HeadMask_Add",MaskingWeights.HeadWeights.MaskAdditive);
	Weights.HeadWeights.OverrideAlpha = MaskingWeights.HeadWeights.MaskWeight;
	Weights.HeadWeights.AdditiveAlpha = MaskingWeights.HeadWeights.MaskAdditive;
	//Right Hand
	CurvesToModify.Add("RightHandMask_MS",0);
	CurvesToModify.Add("RightHandMask_LS",1);
	CurvesToModify.Add("RightHandMask",MaskingWeights.RightHandWeights.MaskWeight);
	CurvesToModify.Add("RightHandMask_Add",MaskingWeights.RightHandWeights.MaskAdditive);
	Weights.RightHandWeights.OverrideAlpha = MaskingWeights.RightHandWeights.MaskWeight;
	Weights.RightHandWeights.AdditiveAlpha = MaskingWeights.RightHandWeights.MaskAdditive;
	Weights.RightHandWeights.LocalSpaceBlendAlpha = 1.0f;
	Weights.RightHandWeights.MeshSpaceBlendAlpha = 0.0f;
	//Left Hand
	CurvesToModify.Add("LeftHandMask_MS",0);
	CurvesToModify.Add("LeftHandMask_LS",1);
	CurvesToModify.Add("LeftHandMask",MaskingWeights.LeftHandWeights.MaskWeight);
	CurvesToModify.Add("LeftHandMask_Add",MaskingWeights.LeftHandWeights.MaskAdditive);
	Weights.LeftHandWeights.OverrideAlpha = MaskingWeights.LeftHandWeights.MaskWeight;
	Weights.LeftHandWeights.AdditiveAlpha = MaskingWeights.LeftHandWeights.MaskAdditive;
	Weights.LeftHandWeights.LocalSpaceBlendAlpha = 1.0f;
	Weights.LeftHandWeights.MeshSpaceBlendAlpha = 0.0f;
	//Right Arm
	CurvesToModify.Add("RightArmMask_MS",MaskingWeights.RightArmWeights.ArmMeshSpaceBlend);
	CurvesToModify.Add("RightArmMask_LS",MaskingWeights.RightArmWeights.ArmLocalSpaceBlend);
	CurvesToModify.Add("RightArmMask",MaskingWeights.RightArmWeights.MaskWeights.MaskWeight);
	CurvesToModify.Add("RightArmMask_Add",MaskingWeights.RightArmWeights.MaskWeights.MaskAdditive);
	Weights.RightArmWeights.OverrideAlpha = MaskingWeights.RightArmWeights.MaskWeights.MaskWeight;
	Weights.RightArmWeights.AdditiveAlpha = MaskingWeights.RightArmWeights.MaskWeights.MaskAdditive;
	Weights.RightArmWeights.LocalSpaceBlendAlpha = MaskingWeights.RightArmWeights.ArmLocalSpaceBlend;
	Weights.RightArmWeights.MeshSpaceBlendAlpha = MaskingWeights.RightArmWeights.ArmMeshSpaceBlend;
	//Left Arm
	CurvesToModify.Add("LeftArmMask_MS",MaskingWeights.LeftArmWeights.ArmMeshSpaceBlend);
	CurvesToModify.Add("LeftArmMask_LS",MaskingWeights.LeftArmWeights.ArmLocalSpaceBlend);
	CurvesToModify.Add("LeftArmMask",MaskingWeights.LeftArmWeights.MaskWeights.MaskWeight);
	CurvesToModify.Add("LeftArmMask_Add",MaskingWeights.LeftArmWeights.MaskWeights.MaskAdditive);
	Weights.LeftArmWeights.OverrideAlpha = MaskingWeights.LeftArmWeights.MaskWeights.MaskWeight;
	Weights.LeftArmWeights.AdditiveAlpha = MaskingWeights.LeftArmWeights.MaskWeights.MaskAdditive;
	Weights.LeftArmWeights.LocalSpaceBlendAlpha = MaskingWeights.LeftArmWeights.ArmLocalSpaceBlend;
	Weights.LeftArmWeights.MeshSpaceBlendAlpha = MaskingWeights.LeftArmWeights.ArmMeshSpaceBlend;
	
#endif
	
}

void FKLSGaitMask::CacheAdditiveCurves()
{
	ForwardMask.CacheAdditiveCurves();
	RightMask.CacheAdditiveCurves();
	LeftMask.CacheAdditiveCurves();
	BackwardMask.CacheAdditiveCurves();
}

FKLSLandSet FKLSLocomotionJump::SelectLandAnimation(const FKLSLandSelectorInfo& LandSelectInfo)
{
	if(!CustomLandSelector)
	{
		TArray<FKLSLandSet> Values;
		LandAnimations.GenerateValueArray(Values);
		if(Values.Num() > 0) return  Values[0];
		return FKLSLandSet{};
		
	}
	{
		const FGameplayTag DesiredLandSetTag = CustomLandSelector->SelectLandAnimation(LandSelectInfo);
		if(DesiredLandSetTag.IsValid() && LandAnimations.Contains(DesiredLandSetTag))
		{
			return LandAnimations.FindChecked(DesiredLandSetTag);
		}
		{
			TArray<FKLSLandSet> Values;
			LandAnimations.GenerateValueArray(Values);
			if(Values.Num() > 0) return  Values[0];
			return FKLSLandSet{};
		}
	}
}

float FKLSPivotAnimSet::FindPivotTime(const float SampleRate) const
{
	if(UAnimComposite* AnimComposite = Cast<UAnimComposite>(PrePivot.Animation))
	{
		TArray<UAnimationAsset*> AnimAssets;

#if WITH_EDITOR
		AnimComposite->GetAllAnimationSequencesReferred(AnimAssets);
#endif
		
		if(AnimAssets.Num() == 0)
		{
			return 0.0f;
		}
		for(UAnimationAsset* AnimAsset : AnimAssets)
		{
			UAnimSequence* AnimSeq = Cast <UAnimSequence> (AnimAsset);
			if(AnimSeq)
			{
				if(AnimSeq->bForceRootLock)
				{
					AnimSeq->bForceRootLock = false;
				}
				if(!AnimSeq->bEnableRootMotion)
				{
					AnimSeq->bEnableRootMotion = true;
				}
			}
		}
		const float AnimLength = AnimComposite->GetPlayLength();
		const float SampleDeltaTime = 1/SampleRate;
		float CurrentAnimTime = SampleDeltaTime;
		float LastTime = 0.0f;
		float NextTime = CurrentAnimTime + SampleDeltaTime;
		while(NextTime < AnimLength)
		{
			LastTime = FMath::Clamp(LastTime+SampleDeltaTime,0.0f,AnimLength);
			CurrentAnimTime = FMath::Clamp(CurrentAnimTime+SampleDeltaTime,0.0f,AnimLength);
			NextTime = FMath::Clamp(NextTime+SampleDeltaTime,0.0f,AnimLength);
			
			FRootMotionMovementParams CurrLocParams;
			AnimComposite->ExtractRootMotionFromTrack(AnimComposite->AnimationTrack,CurrentAnimTime,NextTime,CurrLocParams);
			FVector CurrLoc = CurrLocParams.GetRootMotionTransform().GetLocation();

			FRootMotionMovementParams LastLocParams;
			AnimComposite->ExtractRootMotionFromTrack(AnimComposite->AnimationTrack,LastTime,CurrentAnimTime,LastLocParams);
			FVector LastLoc = LastLocParams.GetRootMotionTransform().GetLocation();

			if(CurrLoc.SquaredLength() <= 0.1f && LastLoc.SquaredLength() >= 0.1f)
			{
				return CurrentAnimTime;
			}
			
		}
	}
	else
	{
		//if it's just an animation sequence;
		if(UAnimSequence* AnimSequence = Cast<UAnimSequence> (PrePivot.Animation))
		{
			if (!AnimSequence->bForceRootLock)
			{
				AnimSequence->bForceRootLock = true;
				AnimSequence->Modify();
			}
			if (!AnimSequence->bEnableRootMotion)
			{
				AnimSequence->bEnableRootMotion = true;
				AnimSequence->Modify();
			}
			const float AnimLength = AnimSequence->GetPlayLength();
			const float SampleDeltaTime = 1/SampleRate;
			float CurrentAnimTime = 0.0f;
			float LastTime = 0.0f;
			float NextTime = CurrentAnimTime + SampleDeltaTime;
			FVector CurrLoc = AnimSequence->ExtractRootMotionFromRange(CurrentAnimTime,NextTime).GetTranslation().GetSafeNormal2D();
			while(NextTime < AnimLength)
			{
				FRotator CurrRot = AnimSequence->ExtractRootMotionFromRange(0.0f,CurrentAnimTime).GetRotation().Rotator();
				FVector LastLoc = CurrRot.RotateVector(AnimSequence->ExtractRootMotionFromRange(CurrentAnimTime,NextTime).GetTranslation().GetSafeNormal2D());
				
				if((CurrLoc.Dot(LastLoc) < 0 && CurrLoc.SquaredLength() > 0) || (FMath::IsNearlyZero(LastLoc.SquaredLength()) && CurrLoc.SquaredLength() > 0))
				{
					
					return CurrentAnimTime;
				}
				if(FMath::IsNearlyZero(CurrLoc.Length()))
				{
					CurrLoc = LastLoc;
				}
				LastTime = FMath::Clamp(LastTime+SampleDeltaTime,0.0f,AnimLength);
				CurrentAnimTime = FMath::Clamp(CurrentAnimTime+SampleDeltaTime,0.0f,AnimLength);
				NextTime = FMath::Clamp(NextTime+SampleDeltaTime,0.0f,AnimLength);
			}
		}
	}
	return 0.0f;
}
void FKLSPivotAnimSet::CachePivotSetCurves(const bool bIsRotatingAnim)
{
	if(PrePivot.Animation)
	{
		PivotTime = FindPivotTime(60.0f);
		
		PrePivot.bIsStopAnim = true;
		PrePivot.CacheDistanceCurveClamped(60,0.0f,PivotTime);
		PostPivot = PrePivot;
		PostPivot.bIsStopAnim = false;
		PostPivot.CacheDistanceCurveClamped(60,PivotTime,0.0f);
		
		if(bIsRotatingAnim)
		{
			PrePivot.bIsRotatingAnim = true;
			PostPivot.bIsRotatingAnim = true;
			PrePivot.CacheRotationCurve(1,60);
			PostPivot.RotationCurve = PrePivot.RotationCurve;
			
		}
	}
	
	
}
void  FKLSLocomotionIdleAndTurnInPlace::CacheTurnInPlaceCurves()
{
	TurnInPlaceAnims.Left_90.CacheCurves(-1,false,true);
	TurnInPlaceAnims.Right_90.CacheCurves(1,false,true);
	if(AimPose.Animation.Get()) AimPose.CacheAdditiveCurves();
}
void FKLSGaitLoopsSet::CacheGaitLoopsSpeed()
{
	Forward.Fwd.CacheCurves();
	AverageSpeed = Forward.Fwd.AverageSpeed;
	Forward.FwdLeanRight.CacheCurves();
	Forward.FwdLeanLeft.CacheCurves();
	Right.CacheCurves();
	Left.CacheCurves();
	Backward.CacheCurves();
}
void FKLSCrouchLoopsSet::CacheCrouchLoopsSpeed()
{
	Forward.Fwd.CacheCurves();
	AverageSpeed = Forward.Fwd.AverageSpeed;
	Forward.FwdLeanRight.CacheCurves();
	Forward.FwdLeanLeft.CacheCurves();
	Right.CacheCurves();
	Left.CacheCurves();
	Backward.CacheCurves();
}
void FKLSGaitStartsSet::CacheGaitStartCurves()
{
	StrafeStarts.Forward.CacheCurves(0,false,false);
	StrafeStarts.Right.CacheCurves(0,false,false);
	StrafeStarts.Left.CacheCurves(0,false,false);
	StrafeStarts.Backward.CacheCurves(0,false,false);
	if(HasRotatingStarts)
	{
		RotateStarts.Left_90.CacheCurves(-1,false,true);
		RotateStarts.Left_180.CacheCurves(-1,false,true);
		RotateStarts.Right_90.CacheCurves(1,false,true);
		RotateStarts.Right_180.CacheCurves(1,false,true);
		
	}
}
void FKLSGaitStopsSet::CacheGaitStopCurves()
{
	RightFootUp.Forward.CacheCurves(0,true,false);
	RightFootUp.Right.CacheCurves(0,true,false);
	RightFootUp.Left.CacheCurves(0,true,false);
	RightFootUp.Backward.CacheCurves(0,true,false);
	if(UsePerFootStop)
	{
		LeftFootUp.Forward.CacheCurves(0,true,false);
		LeftFootUp.Right.CacheCurves(0,true,false);
		LeftFootUp.Left.CacheCurves(0,true,false);
		LeftFootUp.Backward.CacheCurves(0,true,false);
	}
}
void FKLSGaitPivotsSet::CacheGaitPivotCurves()
{
	if(HasStrafePivotAnimations)
	{
		StrafePivots.Forward.CachePivotSetCurves(false);
		StrafePivots.Right.CachePivotSetCurves(false);
		StrafePivots.Left.CachePivotSetCurves(false);
		StrafePivots.Backward.CachePivotSetCurves(false);
		
	}
	if(HasRotatingPivots)
	{
		RotatePivots.Left180LeftFootUp.CachePivotSetCurves(true);
		RotatePivots.Left180RightFootUp.CachePivotSetCurves(true);
		RotatePivots.Right180LeftFootUp.CachePivotSetCurves(true);
		RotatePivots.Right180RightFootUp.CachePivotSetCurves(true);
	}
	
}

void FKLSLoopsSet::CacheLoopsSpeed()
{
	Walk.CacheGaitLoopsSpeed();
	Run.CacheGaitLoopsSpeed();
	Sprint.CacheGaitLoopsSpeed();
}
void FKLSStartsSet::CacheStartCurves()
{
	Walk.CacheGaitStartCurves();
	Run.CacheGaitStartCurves();
	Sprint.CacheGaitStartCurves();
}
void FKLSStopSet::CacheStopCurves()
{
	Walk.CacheGaitStopCurves();
	Run.CacheGaitStopCurves();
	Sprint.CacheGaitStopCurves();
}
void FKLSPivotSet::CachePivotCurves()
{
	Walk.CacheGaitPivotCurves();
	Run.CacheGaitPivotCurves();
	Sprint.CacheGaitPivotCurves();
}

void  FKLSStandingAnimations::CacheGaitCurves()
{
	IdleAndTurnInPlace.CacheTurnInPlaceCurves();
	LoopAnimations.CacheLoopsSpeed();
	StartAnimations.CacheStartCurves();
	StopAnimations.CacheStopCurves();
	PivotAnimations.CachePivotCurves();
}


void FKLSCrouchAnimSet:: CacheCrouchCurves()
{
	IdleAndTurnInPlace.CacheTurnInPlaceCurves();
	LoopAnimations.CacheCrouchLoopsSpeed();
	Starts.CacheGaitStartCurves();
	Stops.CacheGaitStopCurves();
	Pivots.CacheGaitPivotCurves();
		
}

void FKLSRandomPlayerSequenceEntry::ResetBlend()
{
	BlendIn.Reset();
}

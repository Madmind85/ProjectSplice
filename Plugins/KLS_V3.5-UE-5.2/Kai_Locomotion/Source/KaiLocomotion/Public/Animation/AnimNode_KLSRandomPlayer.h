// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNodeBase.h"
#include "Data/KLSAnimationData.h"
#include "AnimNode_KLSRandomPlayer.generated.h"

/**
 * 
 */
USTRUCT(BlueprintInternalUseOnly)
struct KAILOCOMOTION_API FAnimNode_KLSRandomPlayer : public FAnimNode_Base
{
	GENERATED_BODY()

	FAnimNode_KLSRandomPlayer();

public:
	/** List of sequences to randomly step through */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Config, meta=(PinShownByDefault))
	FKLSRandomPlayerEntries RandomSequences;

	// FAnimNode_Base interface
	virtual void Initialize_AnyThread(const FAnimationInitializeContext &Context) override;
	virtual void Update_AnyThread(const FAnimationUpdateContext &Context) override;
	virtual void Evaluate_AnyThread(FPoseContext &Output) override;
	virtual void GatherDebugData(FNodeDebugData &DebugData) override;
	// End of FAnimNode_Base interface

private:
	// Return the index of the next FRandomPlayerSequenceEntry to play, from the list
	// of valid playable entries (ValidEntries).
	int32 GetNextValidEntryIndex();

	// Return the play data for either the currently playing animation or the next
	// animation to blend into.
	FKLSRandomAnimPlayData& GetPlayData(EKLSRandomDataIndexType Type);

	// Initialize the play data with the given index into the ValidEntries array and
	// a specific blend weight. All other member data will be reset to their default values.
	void InitPlayData(FKLSRandomAnimPlayData& Data, int32 ValidEntryIndex, float BlendWeight);

	// Advance to the next playable sequence. This is only called once a sequence is fully
	// blended or there's a hard switch to the same playable entry.
	void AdvanceToNextSequence();

	// Build a new ShuffleList array, which is a shuffled index list of all the valid
	// playable entries in ValidEntries. The LastEntry can be set to a valid entry index to
	// ensure that the top/last item in the shuffle list will be a different value from it;
	// pass in INDEX_NONE to disable the check.
	void BuildShuffleList(int32 LastEntry);


	void InitializeValidEntries();

	// List of valid sequence entries
	TArray<FKLSRandomPlayerSequenceEntry*> ValidEntries;

	// Normalized list of play chances when we aren't using shuffle mode
	TArray<float> NormalizedPlayChances;

	// Play data for the current and next sequence
	TArray<FKLSRandomAnimPlayData> PlayData;

	// Index of the 'current' data set in the PlayData array.
	int32 CurrentPlayDataIndex;

	// List to store transient shuffle stack in shuffle mode.
	TArray<int32> ShuffleList;

	// Random number source
	FRandomStream RandomStream;

	bool bSafeToUpdate = false;

public:
	/** When shuffle mode is active we will never loop a sequence beyond MaxLoopCount
	  * without visiting each sequence in turn (no repeats). Enabling this will ignore
	  * ChanceToPlay for each entry
	  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	bool bShuffleMode;
};
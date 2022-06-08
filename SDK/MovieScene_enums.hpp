#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum MovieScene.EMovieSceneKeyInterpolation
enum class EMovieSceneKeyInterpolation : uint8_t
{
	EMovieSceneKeyInterpolation__Auto = 0,
	EMovieSceneKeyInterpolation__User = 1,
	EMovieSceneKeyInterpolation__Break = 2,
	EMovieSceneKeyInterpolation__Linear = 3,
	EMovieSceneKeyInterpolation__Constant = 4,
	EMovieSceneKeyInterpolation__EMovieSceneKeyInterpolation_MAX = 5
};


// Enum MovieScene.EMovieSceneBlendType
enum class EMovieSceneBlendType : uint8_t
{
	EMovieSceneBlendType__Invalid  = 0,
	EMovieSceneBlendType__Absolute = 1,
	EMovieSceneBlendType__Additive = 2,
	EMovieSceneBlendType__Relative = 3,
	EMovieSceneBlendType__AdditiveFromBase = 4,
	EMovieSceneBlendType__EMovieSceneBlendType_MAX = 5
};


// Enum MovieScene.EMovieSceneCompletionMode
enum class EMovieSceneCompletionMode : uint8_t
{
	EMovieSceneCompletionMode__KeepState = 0,
	EMovieSceneCompletionMode__RestoreState = 1,
	EMovieSceneCompletionMode__ProjectDefault = 2,
	EMovieSceneCompletionMode__EMovieSceneCompletionMode_MAX = 3
};


// Enum MovieScene.EMovieSceneBuiltInEasing
enum class EMovieSceneBuiltInEasing : uint8_t
{
	EMovieSceneBuiltInEasing__Linear = 0,
	EMovieSceneBuiltInEasing__SinIn = 1,
	EMovieSceneBuiltInEasing__SinOut = 2,
	EMovieSceneBuiltInEasing__SinInOut = 3,
	EMovieSceneBuiltInEasing__QuadIn = 4,
	EMovieSceneBuiltInEasing__QuadOut = 5,
	EMovieSceneBuiltInEasing__QuadInOut = 6,
	EMovieSceneBuiltInEasing__CubicIn = 7,
	EMovieSceneBuiltInEasing__CubicOut = 8,
	EMovieSceneBuiltInEasing__CubicInOut = 9,
	EMovieSceneBuiltInEasing__QuartIn = 10,
	EMovieSceneBuiltInEasing__QuartOut = 11,
	EMovieSceneBuiltInEasing__QuartInOut = 12,
	EMovieSceneBuiltInEasing__QuintIn = 13,
	EMovieSceneBuiltInEasing__QuintOut = 14,
	EMovieSceneBuiltInEasing__QuintInOut = 15,
	EMovieSceneBuiltInEasing__ExpoIn = 16,
	EMovieSceneBuiltInEasing__ExpoOut = 17,
	EMovieSceneBuiltInEasing__ExpoInOut = 18,
	EMovieSceneBuiltInEasing__CircIn = 19,
	EMovieSceneBuiltInEasing__CircOut = 20,
	EMovieSceneBuiltInEasing__CircInOut = 21,
	EMovieSceneBuiltInEasing__EMovieSceneBuiltInEasing_MAX = 22
};


// Enum MovieScene.EEvaluationMethod
enum class EEvaluationMethod : uint8_t
{
	EEvaluationMethod__Static      = 0,
	EEvaluationMethod__Swept       = 1,
	EEvaluationMethod__EEvaluationMethod_MAX = 2
};


// Enum MovieScene.EMovieSceneServerClientMask
enum class EMovieSceneServerClientMask : uint8_t
{
	EMovieSceneServerClientMask__None = 0,
	EMovieSceneServerClientMask__Server = 1,
	EMovieSceneServerClientMask__Client = 2,
	EMovieSceneServerClientMask__All = 3,
	EMovieSceneServerClientMask__EMovieSceneServerClientMask_MAX = 4
};


// Enum MovieScene.EMovieSceneSequenceFlags
enum class EMovieSceneSequenceFlags : uint8_t
{
	EMovieSceneSequenceFlags__None = 0,
	EMovieSceneSequenceFlags__Volatile = 1,
	EMovieSceneSequenceFlags__BlockingEvaluation = 2,
	EMovieSceneSequenceFlags__InheritedFlags = 3,
	EMovieSceneSequenceFlags__EMovieSceneSequenceFlags_MAX = 4
};


// Enum MovieScene.EUpdateClockSource
enum class EUpdateClockSource : uint8_t
{
	EUpdateClockSource__Tick       = 0,
	EUpdateClockSource__Platform   = 1,
	EUpdateClockSource__Audio      = 2,
	EUpdateClockSource__RelativeTimecode = 3,
	EUpdateClockSource__Timecode   = 4,
	EUpdateClockSource__Custom     = 5,
	EUpdateClockSource__EUpdateClockSource_MAX = 6
};


// Enum MovieScene.EMovieSceneEvaluationType
enum class EMovieSceneEvaluationType : uint8_t
{
	EMovieSceneEvaluationType__FrameLocked = 0,
	EMovieSceneEvaluationType__WithSubFrames = 1,
	EMovieSceneEvaluationType__EMovieSceneEvaluationType_MAX = 2
};


// Enum MovieScene.EMovieScenePlayerStatus
enum class EMovieScenePlayerStatus : uint8_t
{
	EMovieScenePlayerStatus__Stopped = 0,
	EMovieScenePlayerStatus__Playing = 1,
	EMovieScenePlayerStatus__Scrubbing = 2,
	EMovieScenePlayerStatus__Jumping = 3,
	EMovieScenePlayerStatus__Stepping = 4,
	EMovieScenePlayerStatus__Paused = 5,
	EMovieScenePlayerStatus__MAX   = 6
};


// Enum MovieScene.EMovieSceneObjectBindingSpace
enum class EMovieSceneObjectBindingSpace : uint8_t
{
	EMovieSceneObjectBindingSpace__Local = 0,
	EMovieSceneObjectBindingSpace__Root = 1,
	EMovieSceneObjectBindingSpace__Unused = 2,
	EMovieSceneObjectBindingSpace__EMovieSceneObjectBindingSpace_MAX = 3
};


// Enum MovieScene.ESectionEvaluationFlags
enum class ESectionEvaluationFlags : uint8_t
{
	ESectionEvaluationFlags__None  = 0,
	ESectionEvaluationFlags__PreRoll = 1,
	ESectionEvaluationFlags__PostRoll = 2,
	ESectionEvaluationFlags__ESectionEvaluationFlags_MAX = 3
};


// Enum MovieScene.EMovieScenePositionType
enum class EMovieScenePositionType : uint8_t
{
	EMovieScenePositionType__Frame = 0,
	EMovieScenePositionType__Time  = 1,
	EMovieScenePositionType__MarkedFrame = 2,
	EMovieScenePositionType__EMovieScenePositionType_MAX = 3
};


// Enum MovieScene.EUpdatePositionMethod
enum class EUpdatePositionMethod : uint8_t
{
	EUpdatePositionMethod__Play    = 0,
	EUpdatePositionMethod__Jump    = 1,
	EUpdatePositionMethod__Scrub   = 2,
	EUpdatePositionMethod__EUpdatePositionMethod_MAX = 3
};


// Enum MovieScene.ESpawnOwnership
enum class ESpawnOwnership : uint8_t
{
	ESpawnOwnership__InnerSequence = 0,
	ESpawnOwnership__MasterSequence = 1,
	ESpawnOwnership__External      = 2,
	ESpawnOwnership__ESpawnOwnership_MAX = 3
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

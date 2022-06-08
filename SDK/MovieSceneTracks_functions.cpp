// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MovieSceneTracks_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MovieSceneTracks.MovieSceneParameterSection.RemoveVectorParameter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMovieSceneParameterSection::RemoveVectorParameter(const struct FName& InParameterName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneParameterSection.RemoveVectorParameter"));

	struct
	{
		struct FName                   InParameterName;
		bool                           ReturnValue;
	} params = {};

	params.InParameterName = InParameterName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneParameterSection.RemoveVector2DParameter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMovieSceneParameterSection::RemoveVector2DParameter(const struct FName& InParameterName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneParameterSection.RemoveVector2DParameter"));

	struct
	{
		struct FName                   InParameterName;
		bool                           ReturnValue;
	} params = {};

	params.InParameterName = InParameterName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneParameterSection.RemoveTransformParameter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMovieSceneParameterSection::RemoveTransformParameter(const struct FName& InParameterName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneParameterSection.RemoveTransformParameter"));

	struct
	{
		struct FName                   InParameterName;
		bool                           ReturnValue;
	} params = {};

	params.InParameterName = InParameterName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneParameterSection.RemoveScalarParameter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMovieSceneParameterSection::RemoveScalarParameter(const struct FName& InParameterName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneParameterSection.RemoveScalarParameter"));

	struct
	{
		struct FName                   InParameterName;
		bool                           ReturnValue;
	} params = {};

	params.InParameterName = InParameterName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneParameterSection.RemoveColorParameter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMovieSceneParameterSection::RemoveColorParameter(const struct FName& InParameterName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneParameterSection.RemoveColorParameter"));

	struct
	{
		struct FName                   InParameterName;
		bool                           ReturnValue;
	} params = {};

	params.InParameterName = InParameterName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneParameterSection.RemoveBoolParameter
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UMovieSceneParameterSection::RemoveBoolParameter(const struct FName& InParameterName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneParameterSection.RemoveBoolParameter"));

	struct
	{
		struct FName                   InParameterName;
		bool                           ReturnValue;
	} params = {};

	params.InParameterName = InParameterName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneParameterSection.GetParameterNames
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TSet<struct FName>             ParameterNames                 (CPF_Parm, CPF_OutParm, CPF_NativeAccessSpecifierPublic)

void UMovieSceneParameterSection::GetParameterNames(TSet<struct FName>* ParameterNames)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneParameterSection.GetParameterNames"));

	struct
	{
		TSet<struct FName>             ParameterNames;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (ParameterNames != nullptr)
		*ParameterNames = params.ParameterNames;
}


// Function MovieSceneTracks.MovieSceneParameterSection.AddVectorParameterKey
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FFrameNumber            InTime                         (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 InValue                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMovieSceneParameterSection::AddVectorParameterKey(const struct FName& InParameterName, const struct FFrameNumber& InTime, const struct FVector& InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneParameterSection.AddVectorParameterKey"));

	struct
	{
		struct FName                   InParameterName;
		struct FFrameNumber            InTime;
		struct FVector                 InValue;
	} params = {};

	params.InParameterName = InParameterName;
	params.InTime = InTime;
	params.InValue = InValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MovieSceneTracks.MovieSceneParameterSection.AddVector2DParameterKey
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FFrameNumber            InTime                         (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               InValue                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMovieSceneParameterSection::AddVector2DParameterKey(const struct FName& InParameterName, const struct FFrameNumber& InTime, const struct FVector2D& InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneParameterSection.AddVector2DParameterKey"));

	struct
	{
		struct FName                   InParameterName;
		struct FFrameNumber            InTime;
		struct FVector2D               InValue;
	} params = {};

	params.InParameterName = InParameterName;
	params.InTime = InTime;
	params.InValue = InValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MovieSceneTracks.MovieSceneParameterSection.AddTransformParameterKey
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FFrameNumber            InTime                         (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FTransform              InValue                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void UMovieSceneParameterSection::AddTransformParameterKey(const struct FName& InParameterName, const struct FFrameNumber& InTime, const struct FTransform& InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneParameterSection.AddTransformParameterKey"));

	struct
	{
		struct FName                   InParameterName;
		struct FFrameNumber            InTime;
		struct FTransform              InValue;
	} params = {};

	params.InParameterName = InParameterName;
	params.InTime = InTime;
	params.InValue = InValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MovieSceneTracks.MovieSceneParameterSection.AddScalarParameterKey
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FFrameNumber            InTime                         (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          InValue                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMovieSceneParameterSection::AddScalarParameterKey(const struct FName& InParameterName, const struct FFrameNumber& InTime, float InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneParameterSection.AddScalarParameterKey"));

	struct
	{
		struct FName                   InParameterName;
		struct FFrameNumber            InTime;
		float                          InValue;
	} params = {};

	params.InParameterName = InParameterName;
	params.InTime = InTime;
	params.InValue = InValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MovieSceneTracks.MovieSceneParameterSection.AddColorParameterKey
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FFrameNumber            InTime                         (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FLinearColor            InValue                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMovieSceneParameterSection::AddColorParameterKey(const struct FName& InParameterName, const struct FFrameNumber& InTime, const struct FLinearColor& InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneParameterSection.AddColorParameterKey"));

	struct
	{
		struct FName                   InParameterName;
		struct FFrameNumber            InTime;
		struct FLinearColor            InValue;
	} params = {};

	params.InParameterName = InParameterName;
	params.InTime = InTime;
	params.InValue = InValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MovieSceneTracks.MovieSceneParameterSection.AddBoolParameterKey
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   InParameterName                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FFrameNumber            InTime                         (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           InValue                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMovieSceneParameterSection::AddBoolParameterKey(const struct FName& InParameterName, const struct FFrameNumber& InTime, bool InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneParameterSection.AddBoolParameterKey"));

	struct
	{
		struct FName                   InParameterName;
		struct FFrameNumber            InTime;
		bool                           InValue;
	} params = {};

	params.InParameterName = InParameterName;
	params.InTime = InTime;
	params.InValue = InValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin
// (FUNC_Event, FUNC_Protected, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FTransform UMovieSceneTransformOrigin::BP_GetTransformOrigin()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin"));

	struct
	{
		struct FTransform              ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID InConstraintBindingID          (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMovieScene3DConstraintSection::SetConstraintBindingID(const struct FMovieSceneObjectBindingID& InConstraintBindingID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID"));

	struct
	{
		struct FMovieSceneObjectBindingID InConstraintBindingID;
	} params = {};

	params.InConstraintBindingID = InConstraintBindingID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FMovieSceneObjectBindingID ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FMovieSceneObjectBindingID UMovieScene3DConstraintSection::GetConstraintBindingID()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID"));

	struct
	{
		struct FMovieSceneObjectBindingID ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FFrameNumber            InStartOffset                  (CPF_Parm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMovieSceneAudioSection::SetStartOffset(const struct FFrameNumber& InStartOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset"));

	struct
	{
		struct FFrameNumber            InStartOffset;
	} params = {};

	params.InStartOffset = InStartOffset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MovieSceneTracks.MovieSceneAudioSection.SetSound
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USoundBase*              InSound                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMovieSceneAudioSection::SetSound(class USoundBase* InSound)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneAudioSection.SetSound"));

	struct
	{
		class USoundBase*              InSound;
	} params = {};

	params.InSound = InSound;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FFrameNumber            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FFrameNumber UMovieSceneAudioSection::GetStartOffset()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset"));

	struct
	{
		struct FFrameNumber            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneAudioSection.GetSound
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class USoundBase*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class USoundBase* UMovieSceneAudioSection::GetSound()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneAudioSection.GetSound"));

	struct
	{
		class USoundBase*              ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID InCameraBindingID              (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMovieSceneCameraCutSection::SetCameraBindingID(const struct FMovieSceneObjectBindingID& InCameraBindingID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID"));

	struct
	{
		struct FMovieSceneObjectBindingID InCameraBindingID;
	} params = {};

	params.InCameraBindingID = InCameraBindingID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FMovieSceneObjectBindingID ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FMovieSceneObjectBindingID UMovieSceneCameraCutSection::GetCameraBindingID()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID"));

	struct
	{
		struct FMovieSceneObjectBindingID ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FString                 InShotDisplayName              (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMovieSceneCinematicShotSection::SetShotDisplayName(const struct FString& InShotDisplayName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName"));

	struct
	{
		struct FString                 InShotDisplayName;
	} params = {};

	params.InShotDisplayName = InShotDisplayName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FString UMovieSceneCinematicShotSection::GetShotDisplayName()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName"));

	struct
	{
		struct FString                 ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// ELevelVisibility               InVisibility                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UMovieSceneLevelVisibilitySection::SetVisibility(ELevelVisibility InVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility"));

	struct
	{
		ELevelVisibility               InVisibility;
	} params = {};

	params.InVisibility = InVisibility;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FName>           InLevelNames                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UMovieSceneLevelVisibilitySection::SetLevelNames(TArray<struct FName> InLevelNames)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames"));

	struct
	{
		TArray<struct FName>           InLevelNames;
	} params = {};

	params.InLevelNames = InLevelNames;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// ELevelVisibility               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

ELevelVisibility UMovieSceneLevelVisibilitySection::GetVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility"));

	struct
	{
		ELevelVisibility               ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// TArray<struct FName>           ReturnValue                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

TArray<struct FName> UMovieSceneLevelVisibilitySection::GetLevelNames()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames"));

	struct
	{
		TArray<struct FName>           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

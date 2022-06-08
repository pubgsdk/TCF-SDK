// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TemplateSequence_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TemplateSequence.TemplateSequenceActor.SetSequence
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UTemplateSequence*       InSequence                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ATemplateSequenceActor::SetSequence(class UTemplateSequence* InSequence)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TemplateSequence.TemplateSequenceActor.SetSequence"));

	struct
	{
		class UTemplateSequence*       InSequence;
	} params = {};

	params.InSequence = InSequence;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TemplateSequence.TemplateSequenceActor.SetBinding
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class AActor*                  Actor                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bOverridesDefault              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void ATemplateSequenceActor::SetBinding(class AActor* Actor, bool bOverridesDefault)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TemplateSequence.TemplateSequenceActor.SetBinding"));

	struct
	{
		class AActor*                  Actor;
		bool                           bOverridesDefault;
	} params = {};

	params.Actor = Actor;
	params.bOverridesDefault = bOverridesDefault;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function TemplateSequence.TemplateSequenceActor.LoadSequence
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UTemplateSequence*       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UTemplateSequence* ATemplateSequenceActor::LoadSequence()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TemplateSequence.TemplateSequenceActor.LoadSequence"));

	struct
	{
		class UTemplateSequence*       ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UTemplateSequencePlayer* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UTemplateSequencePlayer* ATemplateSequenceActor::GetSequencePlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer"));

	struct
	{
		class UTemplateSequencePlayer* ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TemplateSequence.TemplateSequenceActor.GetSequence
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UTemplateSequence*       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UTemplateSequence* ATemplateSequenceActor::GetSequence()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TemplateSequence.TemplateSequenceActor.GetSequence"));

	struct
	{
		class UTemplateSequence*       ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UTemplateSequence*       TemplateSequence               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FMovieSceneSequencePlaybackSettings Settings                       (CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// class ATemplateSequenceActor*  OutActor                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UTemplateSequencePlayer* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UTemplateSequencePlayer* UTemplateSequencePlayer::CreateTemplateSequencePlayer(class UObject* WorldContextObject, class UTemplateSequence* TemplateSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ATemplateSequenceActor** OutActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer"));

	struct
	{
		class UObject*                 WorldContextObject;
		class UTemplateSequence*       TemplateSequence;
		struct FMovieSceneSequencePlaybackSettings Settings;
		class ATemplateSequenceActor*  OutActor;
		class UTemplateSequencePlayer* ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.TemplateSequence = TemplateSequence;
	params.Settings = Settings;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (OutActor != nullptr)
		*OutActor = params.OutActor;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

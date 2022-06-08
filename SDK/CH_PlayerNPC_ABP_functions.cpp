// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CH_PlayerNPC_ABP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CH_PlayerNPC_ABP.CH_PlayerNPC_ABP_C.AnimGraph
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (CPF_Parm, CPF_OutParm, CPF_NoDestructor)

void UCH_PlayerNPC_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CH_PlayerNPC_ABP.CH_PlayerNPC_ABP_C.AnimGraph"));

	struct
	{
		struct FPoseLink               AnimGraph;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function CH_PlayerNPC_ABP.CH_PlayerNPC_ABP_C.onArchetypeChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   ArchetypeIDName                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCH_PlayerNPC_ABP_C::onArchetypeChanged(const struct FName& ArchetypeIDName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CH_PlayerNPC_ABP.CH_PlayerNPC_ABP_C.onArchetypeChanged"));

	struct
	{
		struct FName                   ArchetypeIDName;
	} params = {};

	params.ArchetypeIDName = ArchetypeIDName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CH_PlayerNPC_ABP.CH_PlayerNPC_ABP_C.OnMatchOver
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           OnMatchOver                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UCH_PlayerNPC_ABP_C::OnMatchOver(bool OnMatchOver)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CH_PlayerNPC_ABP.CH_PlayerNPC_ABP_C.OnMatchOver"));

	struct
	{
		bool                           OnMatchOver;
	} params = {};

	params.OnMatchOver = OnMatchOver;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CH_PlayerNPC_ABP.CH_PlayerNPC_ABP_C.BlueprintInitializeAnimation
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UCH_PlayerNPC_ABP_C::BlueprintInitializeAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CH_PlayerNPC_ABP.CH_PlayerNPC_ABP_C.BlueprintInitializeAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CH_PlayerNPC_ABP.CH_PlayerNPC_ABP_C.IntentionCameraTypeChange
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYCameraIntentionType          intention                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCH_PlayerNPC_ABP_C::IntentionCameraTypeChange(EYCameraIntentionType intention)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CH_PlayerNPC_ABP.CH_PlayerNPC_ABP_C.IntentionCameraTypeChange"));

	struct
	{
		EYCameraIntentionType          intention;
	} params = {};

	params.intention = intention;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function CH_PlayerNPC_ABP.CH_PlayerNPC_ABP_C.ExecuteUbergraph_CH_PlayerNPC_ABP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UCH_PlayerNPC_ABP_C::ExecuteUbergraph_CH_PlayerNPC_ABP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function CH_PlayerNPC_ABP.CH_PlayerNPC_ABP_C.ExecuteUbergraph_CH_PlayerNPC_ABP"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

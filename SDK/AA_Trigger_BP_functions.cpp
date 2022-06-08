// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AA_Trigger_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AA_Trigger_BP.AA_Trigger_BP_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Trigger_BP_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Trigger_BP.AA_Trigger_BP_C.UserConstructionScript"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Trigger_BP.AA_Trigger_BP_C.ResetPowerUpActor
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Trigger_BP_C::ResetPowerUpActor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Trigger_BP.AA_Trigger_BP_C.ResetPowerUpActor"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Trigger_BP.AA_Trigger_BP_C.OnPoweredProgressionLootRoom
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            PoweredConnectionsInt          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_Trigger_BP_C::OnPoweredProgressionLootRoom(int PoweredConnectionsInt)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Trigger_BP.AA_Trigger_BP_C.OnPoweredProgressionLootRoom"));

	struct
	{
		int                            PoweredConnectionsInt;
	} params = {};

	params.PoweredConnectionsInt = PoweredConnectionsInt;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Trigger_BP.AA_Trigger_BP_C.OnLootRoomPowered
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Trigger_BP_C::OnLootRoomPowered()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Trigger_BP.AA_Trigger_BP_C.OnLootRoomPowered"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Trigger_BP.AA_Trigger_BP_C.SetIsOwnerPowered
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsPowered                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAA_Trigger_BP_C::SetIsOwnerPowered(bool IsPowered)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Trigger_BP.AA_Trigger_BP_C.SetIsOwnerPowered"));

	struct
	{
		bool                           IsPowered;
	} params = {};

	params.IsPowered = IsPowered;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Trigger_BP.AA_Trigger_BP_C.BndEvt__YDamage_K2Node_ComponentBoundEvent_0_YTakeDamageEvent__DelegateSignature
// (FUNC_HasOutParms, FUNC_BlueprintEvent)
// Parameters:
// struct FYDealtDamageData       Data                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_ContainsInstancedReference)

void AAA_Trigger_BP_C::BndEvt__YDamage_K2Node_ComponentBoundEvent_0_YTakeDamageEvent__DelegateSignature(const struct FYDealtDamageData& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Trigger_BP.AA_Trigger_BP_C.BndEvt__YDamage_K2Node_ComponentBoundEvent_0_YTakeDamageEvent__DelegateSignature"));

	struct
	{
		struct FYDealtDamageData       Data;
	} params = {};

	params.Data = Data;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Trigger_BP.AA_Trigger_BP_C.OnRelevantToPowerup
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           TRUE                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void AAA_Trigger_BP_C::OnRelevantToPowerup(bool TRUE)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Trigger_BP.AA_Trigger_BP_C.OnRelevantToPowerup"));

	struct
	{
		bool                           TRUE;
	} params = {};

	params.TRUE = TRUE;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AA_Trigger_BP.AA_Trigger_BP_C.ExecuteUbergraph_AA_Trigger_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void AAA_Trigger_BP_C::ExecuteUbergraph_AA_Trigger_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Trigger_BP.AA_Trigger_BP_C.ExecuteUbergraph_AA_Trigger_BP"));

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


// Function AA_Trigger_BP.AA_Trigger_BP_C.OnPressed__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void AAA_Trigger_BP_C::OnPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AA_Trigger_BP.AA_Trigger_BP_C.OnPressed__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

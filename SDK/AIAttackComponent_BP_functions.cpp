// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AIAttackComponent_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AIAttackComponent_BP.AIAttackComponent_BP_C.PlayMuzzleFX
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAIAttackComponent_BP_C::PlayMuzzleFX()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIAttackComponent_BP.AIAttackComponent_BP_C.PlayMuzzleFX"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AIAttackComponent_BP.AIAttackComponent_BP_C.BP_OnFireTansport
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void UAIAttackComponent_BP_C::BP_OnFireTansport()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIAttackComponent_BP.AIAttackComponent_BP_C.BP_OnFireTansport"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AIAttackComponent_BP.AIAttackComponent_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAIAttackComponent_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIAttackComponent_BP.AIAttackComponent_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function AIAttackComponent_BP.AIAttackComponent_BP_C.ExecuteUbergraph_AIAttackComponent_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAIAttackComponent_BP_C::ExecuteUbergraph_AIAttackComponent_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function AIAttackComponent_BP.AIAttackComponent_BP_C.ExecuteUbergraph_AIAttackComponent_BP"));

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

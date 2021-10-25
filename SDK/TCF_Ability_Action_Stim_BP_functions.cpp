// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Ability_Action_Stim_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Action_Stim_BP.Ability_Action_Stim_BP_C.StopLoopSfx
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAbility_Action_Stim_BP_C::StopLoopSfx()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Action_Stim_BP.Ability_Action_Stim_BP_C.StopLoopSfx");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Ability_Action_Stim_BP.Ability_Action_Stim_BP_C.PlayLoopSfx
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAbility_Action_Stim_BP_C::PlayLoopSfx()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Action_Stim_BP.Ability_Action_Stim_BP_C.PlayLoopSfx");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Ability_Action_Stim_BP.Ability_Action_Stim_BP_C.OnAbilityStateChanged_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYAbilityState                 State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// EYAbilityState                 oldState                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAbility_Action_Stim_BP_C::OnAbilityStateChanged_Event_1(EYAbilityState State, EYAbilityState oldState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Action_Stim_BP.Ability_Action_Stim_BP_C.OnAbilityStateChanged_Event_1");

	struct
	{
		EYAbilityState                 State;
		EYAbilityState                 oldState;
	} params;

	params.State = State;
	params.oldState = oldState;

	UObject::ProcessEvent(fn, &params);
}


// Function Ability_Action_Stim_BP.Ability_Action_Stim_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UAbility_Action_Stim_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Action_Stim_BP.Ability_Action_Stim_BP_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Ability_Action_Stim_BP.Ability_Action_Stim_BP_C.PlayFinishedSfx
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UAbility_Action_Stim_BP_C::PlayFinishedSfx()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Action_Stim_BP.Ability_Action_Stim_BP_C.PlayFinishedSfx");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function Ability_Action_Stim_BP.Ability_Action_Stim_BP_C.ExecuteUbergraph_Ability_Action_Stim_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UAbility_Action_Stim_BP_C::ExecuteUbergraph_Ability_Action_Stim_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Action_Stim_BP.Ability_Action_Stim_BP_C.ExecuteUbergraph_Ability_Action_Stim_BP");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
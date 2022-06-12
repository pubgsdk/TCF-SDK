// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_VirtualCursor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_VirtualCursor.WBP_VirtualCursor_C.isGamepadActive
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// bool                           isGamepadActive                (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_VirtualCursor_C::isGamepadActive(bool* isGamepadActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_VirtualCursor.WBP_VirtualCursor_C.isGamepadActive"));

	struct
	{
		bool                           isGamepadActive;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (isGamepadActive != nullptr)
		*isGamepadActive = params.isGamepadActive;
}


// Function WBP_VirtualCursor.WBP_VirtualCursor_C.OnSpawn
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_VirtualCursor_C::OnSpawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_VirtualCursor.WBP_VirtualCursor_C.OnSpawn"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_VirtualCursor.WBP_VirtualCursor_C.ChangeState
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// EYVirtualCursorState           State                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_VirtualCursor_C::ChangeState(EYVirtualCursorState State)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_VirtualCursor.WBP_VirtualCursor_C.ChangeState"));

	struct
	{
		EYVirtualCursorState           State;
	} params = {};

	params.State = State;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_VirtualCursor.WBP_VirtualCursor_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_VirtualCursor_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_VirtualCursor.WBP_VirtualCursor_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_VirtualCursor.WBP_VirtualCursor_C.OnSpawnAnimFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_VirtualCursor_C::OnSpawnAnimFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_VirtualCursor.WBP_VirtualCursor_C.OnSpawnAnimFinished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_VirtualCursor.WBP_VirtualCursor_C.OnKeybindingDataChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_VirtualCursor_C::OnKeybindingDataChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_VirtualCursor.WBP_VirtualCursor_C.OnKeybindingDataChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_VirtualCursor.WBP_VirtualCursor_C.ExecuteUbergraph_WBP_VirtualCursor
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_VirtualCursor_C::ExecuteUbergraph_WBP_VirtualCursor(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_VirtualCursor.WBP_VirtualCursor_C.ExecuteUbergraph_WBP_VirtualCursor"));

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

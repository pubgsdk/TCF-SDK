// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Status_HUD_Panel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Status_HUD_Panel.WBP_Status_HUD_Panel_C.SetHelmet
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bIsEquipped                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Status_HUD_Panel_C::SetHelmet(float Value, bool bIsEquipped)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Status_HUD_Panel.WBP_Status_HUD_Panel_C.SetHelmet"));

	struct
	{
		float                          Value;
		bool                           bIsEquipped;
	} params = {};

	params.Value = Value;
	params.bIsEquipped = bIsEquipped;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Status_HUD_Panel.WBP_Status_HUD_Panel_C.SetHealthConsumableData
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          ProgressDuration               (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           isActivated                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Status_HUD_Panel_C::SetHealthConsumableData(float ProgressDuration, bool isActivated)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Status_HUD_Panel.WBP_Status_HUD_Panel_C.SetHealthConsumableData"));

	struct
	{
		float                          ProgressDuration;
		bool                           isActivated;
	} params = {};

	params.ProgressDuration = ProgressDuration;
	params.isActivated = isActivated;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Status_HUD_Panel.WBP_Status_HUD_Panel_C.SetShield
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           bIsEquipped                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_Status_HUD_Panel_C::SetShield(float Value, bool bIsEquipped)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Status_HUD_Panel.WBP_Status_HUD_Panel_C.SetShield"));

	struct
	{
		float                          Value;
		bool                           bIsEquipped;
	} params = {};

	params.Value = Value;
	params.bIsEquipped = bIsEquipped;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Status_HUD_Panel.WBP_Status_HUD_Panel_C.OnStaminaInAnimFinished
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Status_HUD_Panel_C::OnStaminaInAnimFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Status_HUD_Panel.WBP_Status_HUD_Panel_C.OnStaminaInAnimFinished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Status_HUD_Panel.WBP_Status_HUD_Panel_C.SetHealth
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Status_HUD_Panel_C::SetHealth(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Status_HUD_Panel.WBP_Status_HUD_Panel_C.SetHealth"));

	struct
	{
		float                          Value;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Status_HUD_Panel.WBP_Status_HUD_Panel_C.SetStamina
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// float                          Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Status_HUD_Panel_C::SetStamina(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Status_HUD_Panel.WBP_Status_HUD_Panel_C.SetStamina"));

	struct
	{
		float                          Value;
	} params = {};

	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Status_HUD_Panel.WBP_Status_HUD_Panel_C.UpdateStaminaBarVisibility
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Status_HUD_Panel_C::UpdateStaminaBarVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Status_HUD_Panel.WBP_Status_HUD_Panel_C.UpdateStaminaBarVisibility"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Status_HUD_Panel.WBP_Status_HUD_Panel_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Status_HUD_Panel_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Status_HUD_Panel.WBP_Status_HUD_Panel_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Status_HUD_Panel.WBP_Status_HUD_Panel_C.OnHealthConsumableAnimFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Status_HUD_Panel_C::OnHealthConsumableAnimFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Status_HUD_Panel.WBP_Status_HUD_Panel_C.OnHealthConsumableAnimFinished"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Status_HUD_Panel.WBP_Status_HUD_Panel_C.ExecuteUbergraph_WBP_Status_HUD_Panel
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Status_HUD_Panel_C::ExecuteUbergraph_WBP_Status_HUD_Panel(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Status_HUD_Panel.WBP_Status_HUD_Panel_C.ExecuteUbergraph_WBP_Status_HUD_Panel"));

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

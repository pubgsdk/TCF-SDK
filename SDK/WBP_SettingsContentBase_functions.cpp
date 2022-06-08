// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_SettingsContentBase_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_SettingsContentBase.WBP_SettingsContentBase_C.OnDropdownSelectionChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_DropdownBase_Btn_C* Dropdown                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 Option                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsContentBase_C::OnDropdownSelectionChanged(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContentBase.WBP_SettingsContentBase_C.OnDropdownSelectionChanged"));

	struct
	{
		class UWBP_DropdownBase_Btn_C* Dropdown;
		struct FString                 Option;
		int                            Index;
	} params = {};

	params.Dropdown = Dropdown;
	params.Option = Option;
	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContentBase.WBP_SettingsContentBase_C.OnSelectorValueChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_Selector_Btn_C*     selector                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FStructure_SelectorData Value                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_HasGetValueTypeHash)

void UWBP_SettingsContentBase_C::OnSelectorValueChanged(class UWBP_Selector_Btn_C* selector, const struct FStructure_SelectorData& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContentBase.WBP_SettingsContentBase_C.OnSelectorValueChanged"));

	struct
	{
		class UWBP_Selector_Btn_C*     selector;
		struct FStructure_SelectorData Value;
	} params = {};

	params.selector = selector;
	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContentBase.WBP_SettingsContentBase_C.RegisterWidgets
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsContentBase_C::RegisterWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContentBase.WBP_SettingsContentBase_C.RegisterWidgets"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContentBase.WBP_SettingsContentBase_C.Provider_OnDataChanged
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FName                   DataName                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FName                   dataType                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_SettingsContentBase_C::Provider_OnDataChanged(struct FName* DataName, struct FName* dataType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContentBase.WBP_SettingsContentBase_C.Provider_OnDataChanged"));

	struct
	{
		struct FName                   DataName;
		struct FName                   dataType;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (DataName != nullptr)
		*DataName = params.DataName;
	if (dataType != nullptr)
		*dataType = params.dataType;
}


// Function WBP_SettingsContentBase.WBP_SettingsContentBase_C.Initialize
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsContentBase_C::Initialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContentBase.WBP_SettingsContentBase_C.Initialize"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContentBase.WBP_SettingsContentBase_C.OnToggleChanged
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ToggleText_Btn_C*   Toggle                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           Toggled                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_SettingsContentBase_C::OnToggleChanged(class UWBP_ToggleText_Btn_C* Toggle, bool Toggled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContentBase.WBP_SettingsContentBase_C.OnToggleChanged"));

	struct
	{
		class UWBP_ToggleText_Btn_C*   Toggle;
		bool                           Toggled;
	} params = {};

	params.Toggle = Toggle;
	params.Toggled = Toggled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContentBase.WBP_SettingsContentBase_C.UpdateRegisteredDropdowns
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsContentBase_C::UpdateRegisteredDropdowns()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContentBase.WBP_SettingsContentBase_C.UpdateRegisteredDropdowns"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContentBase.WBP_SettingsContentBase_C.UpdateRegisteredSelectors
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsContentBase_C::UpdateRegisteredSelectors()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContentBase.WBP_SettingsContentBase_C.UpdateRegisteredSelectors"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContentBase.WBP_SettingsContentBase_C.UpdateRegisteredToggles
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsContentBase_C::UpdateRegisteredToggles()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContentBase.WBP_SettingsContentBase_C.UpdateRegisteredToggles"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_SettingsContentBase.WBP_SettingsContentBase_C.UpdateRegisteredWidgets
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_SettingsContentBase_C::UpdateRegisteredWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_SettingsContentBase.WBP_SettingsContentBase_C.UpdateRegisteredWidgets"));

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

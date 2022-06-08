// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_DropdownBase_Btn_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_DropdownBase_Btn.WBP_DropdownBase_Btn_C.ReloadDefaultOptions
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_DropdownBase_Btn_C::ReloadDefaultOptions()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_DropdownBase_Btn.WBP_DropdownBase_Btn_C.ReloadDefaultOptions"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_DropdownBase_Btn.WBP_DropdownBase_Btn_C.GetSelectedOption
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FString                 SelectedOption                 (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UWBP_DropdownBase_Btn_C::GetSelectedOption(struct FString* SelectedOption)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_DropdownBase_Btn.WBP_DropdownBase_Btn_C.GetSelectedOption"));

	struct
	{
		struct FString                 SelectedOption;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SelectedOption != nullptr)
		*SelectedOption = params.SelectedOption;
}


// Function WBP_DropdownBase_Btn.WBP_DropdownBase_Btn_C.GetSelectedIndex
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// int                            SelectedIndex                  (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_DropdownBase_Btn_C::GetSelectedIndex(int* SelectedIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_DropdownBase_Btn.WBP_DropdownBase_Btn_C.GetSelectedIndex"));

	struct
	{
		int                            SelectedIndex;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SelectedIndex != nullptr)
		*SelectedIndex = params.SelectedIndex;
}


// Function WBP_DropdownBase_Btn.WBP_DropdownBase_Btn_C.SetOptions
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FString>         Options                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_DropdownBase_Btn_C::SetOptions(TArray<struct FString>* Options)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_DropdownBase_Btn.WBP_DropdownBase_Btn_C.SetOptions"));

	struct
	{
		TArray<struct FString>         Options;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (Options != nullptr)
		*Options = params.Options;
}


// Function WBP_DropdownBase_Btn.WBP_DropdownBase_Btn_C.SetSelectedIndex
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_DropdownBase_Btn_C::SetSelectedIndex(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_DropdownBase_Btn.WBP_DropdownBase_Btn_C.SetSelectedIndex"));

	struct
	{
		int                            Index;
	} params = {};

	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_DropdownBase_Btn.WBP_DropdownBase_Btn_C.SetSelectedOption
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 DesiredOption                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// bool                           returnResult                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_DropdownBase_Btn_C::SetSelectedOption(const struct FString& DesiredOption, bool* returnResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_DropdownBase_Btn.WBP_DropdownBase_Btn_C.SetSelectedOption"));

	struct
	{
		struct FString                 DesiredOption;
		bool                           returnResult;
	} params = {};

	params.DesiredOption = DesiredOption;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (returnResult != nullptr)
		*returnResult = params.returnResult;
}


// Function WBP_DropdownBase_Btn.WBP_DropdownBase_Btn_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_DropdownBase_Btn_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_DropdownBase_Btn.WBP_DropdownBase_Btn_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_DropdownBase_Btn.WBP_DropdownBase_Btn_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_DropdownBase_Btn_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_DropdownBase_Btn.WBP_DropdownBase_Btn_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params = {};

	params.IsDesignTime = IsDesignTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_DropdownBase_Btn.WBP_DropdownBase_Btn_C.Base_OnSelectionChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 SelectedItem                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<ESelectInfo>       SelectionType                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_DropdownBase_Btn_C::Base_OnSelectionChanged(const struct FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_DropdownBase_Btn.WBP_DropdownBase_Btn_C.Base_OnSelectionChanged"));

	struct
	{
		struct FString                 SelectedItem;
		TEnumAsByte<ESelectInfo>       SelectionType;
	} params = {};

	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_DropdownBase_Btn.WBP_DropdownBase_Btn_C.OnSelectionChanged
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_DropdownBase_Btn_C::OnSelectionChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_DropdownBase_Btn.WBP_DropdownBase_Btn_C.OnSelectionChanged"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_DropdownBase_Btn.WBP_DropdownBase_Btn_C.ExecuteUbergraph_WBP_DropdownBase_Btn
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_DropdownBase_Btn_C::ExecuteUbergraph_WBP_DropdownBase_Btn(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_DropdownBase_Btn.WBP_DropdownBase_Btn_C.ExecuteUbergraph_WBP_DropdownBase_Btn"));

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


// Function WBP_DropdownBase_Btn.WBP_DropdownBase_Btn_C.OnSelectedOptionDelegate__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_DropdownBase_Btn_C* Dropdown                       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FString                 Option                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
// int                            Index                          (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_DropdownBase_Btn_C::OnSelectedOptionDelegate__DelegateSignature(class UWBP_DropdownBase_Btn_C* Dropdown, const struct FString& Option, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_DropdownBase_Btn.WBP_DropdownBase_Btn_C.OnSelectedOptionDelegate__DelegateSignature"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

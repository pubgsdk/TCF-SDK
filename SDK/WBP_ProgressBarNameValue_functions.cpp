// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_ProgressBarNameValue_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.ProgressBarShear
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ProgressBarNameValue_C::ProgressBarShear(bool Condition)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.ProgressBarShear"));

	struct
	{
		bool                           Condition;
	} params = {};

	params.Condition = Condition;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_ProgressBarNameValue_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.BP_AnimateVisibility"));

	struct
	{
		ESlateVisibility               newVisibility;
		class UWidgetAnimation*        ReturnValue;
	} params = {};

	params.newVisibility = newVisibility;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.ShowSuccessAnimation
// (FUNC_Private, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ProgressBarNameValue_C::ShowSuccessAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.ShowSuccessAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.ClearAnimations
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ProgressBarNameValue_C::ClearAnimations()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.ClearAnimations"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.SetDeltaVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ProgressBarNameValue_C::SetDeltaVisibility(bool Condition)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.SetDeltaVisibility"));

	struct
	{
		bool                           Condition;
	} params = {};

	params.Condition = Condition;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.SetProgressBarText
// (FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FText                   InText                         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_ProgressBarNameValue_C::SetProgressBarText(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.SetProgressBarText"));

	struct
	{
		struct FText                   InText;
	} params = {};

	params.InText = InText;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.SetCheckBoxVisibility
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ProgressBarNameValue_C::SetCheckBoxVisibility(bool Condition)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.SetCheckBoxVisibility"));

	struct
	{
		bool                           Condition;
	} params = {};

	params.Condition = Condition;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.SetContractObjectiveProgress
// (FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYContractObjective     ObjectiveStaticData            (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            ObjectiveCurrentProgress       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ProgressBarNameValue_C::SetContractObjectiveProgress(const struct FYContractObjective& ObjectiveStaticData, int ObjectiveCurrentProgress)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.SetContractObjectiveProgress"));

	struct
	{
		struct FYContractObjective     ObjectiveStaticData;
		int                            ObjectiveCurrentProgress;
	} params = {};

	params.ObjectiveStaticData = ObjectiveStaticData;
	params.ObjectiveCurrentProgress = ObjectiveCurrentProgress;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.WBP_ProgressBar_Event_2
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ProgressBar_C*      WBP_ProgressBar                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ProgressBarNameValue_C::WBP_ProgressBar_Event_2(class UWBP_ProgressBar_C* WBP_ProgressBar)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.WBP_ProgressBar_Event_2"));

	struct
	{
		class UWBP_ProgressBar_C*      WBP_ProgressBar;
	} params = {};

	params.WBP_ProgressBar = WBP_ProgressBar;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_ProgressBarNameValue_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.PreConstruct"));

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


// Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.ProgressSuccessAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ProgressBarNameValue_C::ProgressSuccessAnim()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.ProgressSuccessAnim"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.ProgressFailAnim
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ProgressBarNameValue_C::ProgressFailAnim()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.ProgressFailAnim"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.ProgressClearAnimation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ProgressBarNameValue_C::ProgressClearAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.ProgressClearAnimation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_ProgressBarNameValue_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.WBP_ProgressBar_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UWBP_ProgressBar_C*      WBP_ProgressBar                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ProgressBarNameValue_C::WBP_ProgressBar_Event_1(class UWBP_ProgressBar_C* WBP_ProgressBar)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.WBP_ProgressBar_Event_1"));

	struct
	{
		class UWBP_ProgressBar_C*      WBP_ProgressBar;
	} params = {};

	params.WBP_ProgressBar = WBP_ProgressBar;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.ExecuteUbergraph_WBP_ProgressBarNameValue
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_ProgressBarNameValue_C::ExecuteUbergraph_WBP_ProgressBarNameValue(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.ExecuteUbergraph_WBP_ProgressBarNameValue"));

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


// Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.OnProgressBarFull__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_ProgressBarNameValue_C::OnProgressBarFull__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_ProgressBarNameValue.WBP_ProgressBarNameValue_C.OnProgressBarFull__DelegateSignature"));

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

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_EndOfMatch_Announcement_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_EndOfMatch_Announcement.WBP_EndOfMatch_Announcement_C.BP_AnimateVisibility
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_EndOfMatch_Announcement_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_Announcement.WBP_EndOfMatch_Announcement_C.BP_AnimateVisibility"));

	struct
	{
		ESlateVisibility               newVisibility;
		class UWidgetAnimation*        ReturnValue;
	} params;

	params.newVisibility = newVisibility;

	UObject::ProcessEvent(fn, &params);

	return params.ReturnValue;
}


// Function WBP_EndOfMatch_Announcement.WBP_EndOfMatch_Announcement_C.EvacFailAnim
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EndOfMatch_Announcement_C::EvacFailAnim()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_Announcement.WBP_EndOfMatch_Announcement_C.EvacFailAnim"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EndOfMatch_Announcement.WBP_EndOfMatch_Announcement_C.EvacFail
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_EndOfMatch_Announcement_C::EvacFail(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_Announcement.WBP_EndOfMatch_Announcement_C.EvacFail"));

	struct
	{
		bool                           Condition;
	} params;

	params.Condition = Condition;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EndOfMatch_Announcement.WBP_EndOfMatch_Announcement_C.EvacSuccess
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           Condition                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_EndOfMatch_Announcement_C::EvacSuccess(bool Condition)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_Announcement.WBP_EndOfMatch_Announcement_C.EvacSuccess"));

	struct
	{
		bool                           Condition;
	} params;

	params.Condition = Condition;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EndOfMatch_Announcement.WBP_EndOfMatch_Announcement_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_EndOfMatch_Announcement_C::PreConstruct(bool IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_Announcement.WBP_EndOfMatch_Announcement_C.PreConstruct"));

	struct
	{
		bool                           IsDesignTime;
	} params;

	params.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EndOfMatch_Announcement.WBP_EndOfMatch_Announcement_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_EndOfMatch_Announcement_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_Announcement.WBP_EndOfMatch_Announcement_C.Construct"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EndOfMatch_Announcement.WBP_EndOfMatch_Announcement_C.OnAnimFinished
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_EndOfMatch_Announcement_C::OnAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_Announcement.WBP_EndOfMatch_Announcement_C.OnAnimFinished"));

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function WBP_EndOfMatch_Announcement.WBP_EndOfMatch_Announcement_C.ExecuteUbergraph_WBP_EndOfMatch_Announcement
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_EndOfMatch_Announcement_C::ExecuteUbergraph_WBP_EndOfMatch_Announcement(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>(_xor_("Function WBP_EndOfMatch_Announcement.WBP_EndOfMatch_Announcement_C.ExecuteUbergraph_WBP_EndOfMatch_Announcement"));

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
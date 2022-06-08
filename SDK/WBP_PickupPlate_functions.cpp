// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_PickupPlate_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_PickupPlate.WBP_PickupPlate_C.CanClearTooltipResources
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UWBP_PickupPlate_C::CanClearTooltipResources()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PickupPlate.WBP_PickupPlate_C.CanClearTooltipResources"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function WBP_PickupPlate.WBP_PickupPlate_C.CreateItemDetails
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PickupPlate_C::CreateItemDetails()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PickupPlate.WBP_PickupPlate_C.CreateItemDetails"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_PickupPlate.WBP_PickupPlate_C.Reset
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PickupPlate_C::Reset()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PickupPlate.WBP_PickupPlate_C.Reset"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_PickupPlate.WBP_PickupPlate_C.OnItemSet
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AYPickupActor*           interactionPickupActor         (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYInventoryItem         inventoryItem                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UWBP_PickupPlate_C::OnItemSet(class AYPickupActor* interactionPickupActor, const struct FYInventoryItem& inventoryItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PickupPlate.WBP_PickupPlate_C.OnItemSet"));

	struct
	{
		class AYPickupActor*           interactionPickupActor;
		struct FYInventoryItem         inventoryItem;
	} params = {};

	params.interactionPickupActor = interactionPickupActor;
	params.inventoryItem = inventoryItem;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_PickupPlate.WBP_PickupPlate_C.BP_AnimateVisibility
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// ESlateVisibility               newVisibility                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UWidgetAnimation*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

class UWidgetAnimation* UWBP_PickupPlate_C::BP_AnimateVisibility(ESlateVisibility newVisibility)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PickupPlate.WBP_PickupPlate_C.BP_AnimateVisibility"));

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


// Function WBP_PickupPlate.WBP_PickupPlate_C.PreConstruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           IsDesignTime                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UWBP_PickupPlate_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PickupPlate.WBP_PickupPlate_C.PreConstruct"));

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


// Function WBP_PickupPlate.WBP_PickupPlate_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_PickupPlate_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PickupPlate.WBP_PickupPlate_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_PickupPlate.WBP_PickupPlate_C.ClearTooltipResources
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_PickupPlate_C::ClearTooltipResources()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PickupPlate.WBP_PickupPlate_C.ClearTooltipResources"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_PickupPlate.WBP_PickupPlate_C.ExecuteUbergraph_WBP_PickupPlate
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_PickupPlate_C::ExecuteUbergraph_WBP_PickupPlate(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_PickupPlate.WBP_PickupPlate_C.ExecuteUbergraph_WBP_PickupPlate"));

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

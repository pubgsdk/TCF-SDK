// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Item_Container_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Item_Container.WBP_Item_Container_C.UpdateContainerUI
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// EYLootContainerWidgetType      Type                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Item_Container_C::UpdateContainerUI(EYLootContainerWidgetType Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Container.WBP_Item_Container_C.UpdateContainerUI"));

	struct
	{
		EYLootContainerWidgetType      Type;
	} params = {};

	params.Type = Type;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Item_Container.WBP_Item_Container_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Item_Container_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Container.WBP_Item_Container_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Item_Container.WBP_Item_Container_C.OnDragDetectedCallback
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDragDropOperation*      DragDropOperation              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Item_Container_C::OnDragDetectedCallback(class UDragDropOperation* DragDropOperation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Container.WBP_Item_Container_C.OnDragDetectedCallback"));

	struct
	{
		class UDragDropOperation*      DragDropOperation;
	} params = {};

	params.DragDropOperation = DragDropOperation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Item_Container.WBP_Item_Container_C.SetInventoryId
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            NewInventoryComponentId        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Item_Container_C::SetInventoryId(int NewInventoryComponentId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Container.WBP_Item_Container_C.SetInventoryId"));

	struct
	{
		int                            NewInventoryComponentId;
	} params = {};

	params.NewInventoryComponentId = NewInventoryComponentId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Item_Container.WBP_Item_Container_C.ResetSubWidgets
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Item_Container_C::ResetSubWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Container.WBP_Item_Container_C.ResetSubWidgets"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Item_Container.WBP_Item_Container_C.ExecuteUbergraph_WBP_Item_Container
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Item_Container_C::ExecuteUbergraph_WBP_Item_Container(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Container.WBP_Item_Container_C.ExecuteUbergraph_WBP_Item_Container"));

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


// Function WBP_Item_Container.WBP_Item_Container_C.OnDragStarted__DelegateSignature
// (FUNC_Public, FUNC_Delegate, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UDragDropOperation*      DragDropOperation              (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Item_Container_C::OnDragStarted__DelegateSignature(class UDragDropOperation* DragDropOperation)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Item_Container.WBP_Item_Container_C.OnDragStarted__DelegateSignature"));

	struct
	{
		class UDragDropOperation*      DragDropOperation;
	} params = {};

	params.DragDropOperation = DragDropOperation;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

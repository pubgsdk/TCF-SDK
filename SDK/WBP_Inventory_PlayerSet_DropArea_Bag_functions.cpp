// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Inventory_PlayerSet_DropArea_Bag_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_Inventory_PlayerSet_DropArea_Bag.WBP_Inventory_PlayerSet_DropArea_Bag_C.GetTargetInventoryComponentId
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            targetInventoryComponentId     (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_PlayerSet_DropArea_Bag_C::GetTargetInventoryComponentId(int* targetInventoryComponentId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_PlayerSet_DropArea_Bag.WBP_Inventory_PlayerSet_DropArea_Bag_C.GetTargetInventoryComponentId"));

	struct
	{
		int                            targetInventoryComponentId;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (targetInventoryComponentId != nullptr)
		*targetInventoryComponentId = params.targetInventoryComponentId;
}


// Function WBP_Inventory_PlayerSet_DropArea_Bag.WBP_Inventory_PlayerSet_DropArea_Bag_C.OnItemSplitAfterDragBegun
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FYInventoryItem         Item                           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            localPlayerInventoryComponentId (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            inventoryItemComponentID       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_PlayerSet_DropArea_Bag_C::OnItemSplitAfterDragBegun(const struct FYInventoryItem& Item, int localPlayerInventoryComponentId, int inventoryItemComponentID)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_PlayerSet_DropArea_Bag.WBP_Inventory_PlayerSet_DropArea_Bag_C.OnItemSplitAfterDragBegun"));

	struct
	{
		struct FYInventoryItem         Item;
		int                            localPlayerInventoryComponentId;
		int                            inventoryItemComponentID;
	} params = {};

	params.Item = Item;
	params.localPlayerInventoryComponentId = localPlayerInventoryComponentId;
	params.inventoryItemComponentID = inventoryItemComponentID;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Inventory_PlayerSet_DropArea_Bag.WBP_Inventory_PlayerSet_DropArea_Bag_C.OnExecuteItemSplittingCallback
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UWBP_Inventory_PlayerSet_DropArea_Bag_C::OnExecuteItemSplittingCallback()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_PlayerSet_DropArea_Bag.WBP_Inventory_PlayerSet_DropArea_Bag_C.OnExecuteItemSplittingCallback"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Inventory_PlayerSet_DropArea_Bag.WBP_Inventory_PlayerSet_DropArea_Bag_C.OnItemDroppedCallback
// (FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            localPlayerInventoryComponentId (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// int                            inventoryItemComponentID       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYInventoryItem         inventoryItem                  (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm)
// int                            amountToDrop                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_PlayerSet_DropArea_Bag_C::OnItemDroppedCallback(int localPlayerInventoryComponentId, int inventoryItemComponentID, const struct FYInventoryItem& inventoryItem, int amountToDrop)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_PlayerSet_DropArea_Bag.WBP_Inventory_PlayerSet_DropArea_Bag_C.OnItemDroppedCallback"));

	struct
	{
		int                            localPlayerInventoryComponentId;
		int                            inventoryItemComponentID;
		struct FYInventoryItem         inventoryItem;
		int                            amountToDrop;
	} params = {};

	params.localPlayerInventoryComponentId = localPlayerInventoryComponentId;
	params.inventoryItemComponentID = inventoryItemComponentID;
	params.inventoryItem = inventoryItem;
	params.amountToDrop = amountToDrop;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Inventory_PlayerSet_DropArea_Bag.WBP_Inventory_PlayerSet_DropArea_Bag_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Inventory_PlayerSet_DropArea_Bag_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_PlayerSet_DropArea_Bag.WBP_Inventory_PlayerSet_DropArea_Bag_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Inventory_PlayerSet_DropArea_Bag.WBP_Inventory_PlayerSet_DropArea_Bag_C.SetParentWidget
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYWidget_Inventory_Base* NewParentInventoryWidget       (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_PlayerSet_DropArea_Bag_C::SetParentWidget(class UYWidget_Inventory_Base* NewParentInventoryWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_PlayerSet_DropArea_Bag.WBP_Inventory_PlayerSet_DropArea_Bag_C.SetParentWidget"));

	struct
	{
		class UYWidget_Inventory_Base* NewParentInventoryWidget;
	} params = {};

	params.NewParentInventoryWidget = NewParentInventoryWidget;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Inventory_PlayerSet_DropArea_Bag.WBP_Inventory_PlayerSet_DropArea_Bag_C.Destruct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UWBP_Inventory_PlayerSet_DropArea_Bag_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_PlayerSet_DropArea_Bag.WBP_Inventory_PlayerSet_DropArea_Bag_C.Destruct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function WBP_Inventory_PlayerSet_DropArea_Bag.WBP_Inventory_PlayerSet_DropArea_Bag_C.ExecuteUbergraph_WBP_Inventory_PlayerSet_DropArea_Bag
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UWBP_Inventory_PlayerSet_DropArea_Bag_C::ExecuteUbergraph_WBP_Inventory_PlayerSet_DropArea_Bag(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function WBP_Inventory_PlayerSet_DropArea_Bag.WBP_Inventory_PlayerSet_DropArea_Bag_C.ExecuteUbergraph_WBP_Inventory_PlayerSet_DropArea_Bag"));

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

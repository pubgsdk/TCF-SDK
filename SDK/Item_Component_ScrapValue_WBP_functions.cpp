// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Item_Component_ScrapValue_WBP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Item_Component_ScrapValue_WBP.Item_Component_ScrapValue_WBP_C.GetFactionIncrementAsText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   FactionIncrementValue          (CPF_Parm, CPF_OutParm)

void UItem_Component_ScrapValue_WBP_C::GetFactionIncrementAsText(struct FText* FactionIncrementValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Item_Component_ScrapValue_WBP.Item_Component_ScrapValue_WBP_C.GetFactionIncrementAsText"));

	struct
	{
		struct FText                   FactionIncrementValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (FactionIncrementValue != nullptr)
		*FactionIncrementValue = params.FactionIncrementValue;
}


// Function Item_Component_ScrapValue_WBP.Item_Component_ScrapValue_WBP_C.GetScrapReturnAsText
// (FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FText                   CurrencyReturn                 (CPF_Parm, CPF_OutParm)

void UItem_Component_ScrapValue_WBP_C::GetScrapReturnAsText(struct FText* CurrencyReturn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Item_Component_ScrapValue_WBP.Item_Component_ScrapValue_WBP_C.GetScrapReturnAsText"));

	struct
	{
		struct FText                   CurrencyReturn;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (CurrencyReturn != nullptr)
		*CurrencyReturn = params.CurrencyReturn;
}


// Function Item_Component_ScrapValue_WBP.Item_Component_ScrapValue_WBP_C.Construct
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UItem_Component_ScrapValue_WBP_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Item_Component_ScrapValue_WBP.Item_Component_ScrapValue_WBP_C.Construct"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Item_Component_ScrapValue_WBP.Item_Component_ScrapValue_WBP_C.OnItemSet
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItem_Component_ScrapValue_WBP_C::OnItemSet()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Item_Component_ScrapValue_WBP.Item_Component_ScrapValue_WBP_C.OnItemSet"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Item_Component_ScrapValue_WBP.Item_Component_ScrapValue_WBP_C.SetSellValuesOnItemPreview
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// struct FString                 factionRowId                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)

void UItem_Component_ScrapValue_WBP_C::SetSellValuesOnItemPreview(const struct FString& factionRowId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Item_Component_ScrapValue_WBP.Item_Component_ScrapValue_WBP_C.SetSellValuesOnItemPreview"));

	struct
	{
		struct FString                 factionRowId;
	} params = {};

	params.factionRowId = factionRowId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Item_Component_ScrapValue_WBP.Item_Component_ScrapValue_WBP_C.OnStashUpdated
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYStateInventoryComponent* stateInventoryComponent        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UItem_Component_ScrapValue_WBP_C::OnStashUpdated(class UYStateInventoryComponent* stateInventoryComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Item_Component_ScrapValue_WBP.Item_Component_ScrapValue_WBP_C.OnStashUpdated"));

	struct
	{
		class UYStateInventoryComponent* stateInventoryComponent;
	} params = {};

	params.stateInventoryComponent = stateInventoryComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Item_Component_ScrapValue_WBP.Item_Component_ScrapValue_WBP_C.OnInitialized
// (FUNC_BlueprintCosmetic, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void UItem_Component_ScrapValue_WBP_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Item_Component_ScrapValue_WBP.Item_Component_ScrapValue_WBP_C.OnInitialized"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Item_Component_ScrapValue_WBP.Item_Component_ScrapValue_WBP_C.OnStashItemUpdatedCallback
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYStateInventoryComponent* stateInventoryComponent        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYInventoryItem         Item                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)

void UItem_Component_ScrapValue_WBP_C::OnStashItemUpdatedCallback(class UYStateInventoryComponent* stateInventoryComponent, const struct FYInventoryItem& Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Item_Component_ScrapValue_WBP.Item_Component_ScrapValue_WBP_C.OnStashItemUpdatedCallback"));

	struct
	{
		class UYStateInventoryComponent* stateInventoryComponent;
		struct FYInventoryItem         Item;
	} params = {};

	params.stateInventoryComponent = stateInventoryComponent;
	params.Item = Item;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Item_Component_ScrapValue_WBP.Item_Component_ScrapValue_WBP_C.OnPlayerSetItemUpdatedCallback
// (FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UYStateInventoryComponent* stateInventoryComponent        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYInventoryItem         Item                           (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// EYPlayerSetType                equippedSetType                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UItem_Component_ScrapValue_WBP_C::OnPlayerSetItemUpdatedCallback(class UYStateInventoryComponent* stateInventoryComponent, const struct FYInventoryItem& Item, EYPlayerSetType equippedSetType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Item_Component_ScrapValue_WBP.Item_Component_ScrapValue_WBP_C.OnPlayerSetItemUpdatedCallback"));

	struct
	{
		class UYStateInventoryComponent* stateInventoryComponent;
		struct FYInventoryItem         Item;
		EYPlayerSetType                equippedSetType;
	} params = {};

	params.stateInventoryComponent = stateInventoryComponent;
	params.Item = Item;
	params.equippedSetType = equippedSetType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Item_Component_ScrapValue_WBP.Item_Component_ScrapValue_WBP_C.Refresh
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void UItem_Component_ScrapValue_WBP_C::Refresh()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Item_Component_ScrapValue_WBP.Item_Component_ScrapValue_WBP_C.Refresh"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Item_Component_ScrapValue_WBP.Item_Component_ScrapValue_WBP_C.ExecuteUbergraph_Item_Component_ScrapValue_WBP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UItem_Component_ScrapValue_WBP_C::ExecuteUbergraph_Item_Component_ScrapValue_WBP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Item_Component_ScrapValue_WBP.Item_Component_ScrapValue_WBP_C.ExecuteUbergraph_Item_Component_ScrapValue_WBP"));

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

#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_Inventory_DragItem_WBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_Inventory_DragItem_WBP.WBP_Inventory_DragItem_WBP_C
// 0x018C (0x03FC - 0x0270)
class UWBP_Inventory_DragItem_WBP_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            OnDragStarted;                                            // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  amountText;                                               // 0x0280(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      DragImage;                                                // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      Image_179;                                                // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class USizeBox*                                    ImageSizeBox;                                             // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	struct FYInventoryItem                             Item;                                                     // 0x02A0(0x00D8) (CPF_Edit, CPF_BlueprintVisible, CPF_ExposeOnSpawn)
	struct FDataTableRowHandle                         SFX_WeaponDragSound;                                      // 0x0378(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         SFX_ConsumableDragSound;                                  // 0x0388(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         SFX_MaterialDragSound;                                    // 0x0398(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         SFX_AmmoDragSound;                                        // 0x03A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         SFX_GenericDragSound;                                     // 0x03B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	bool                                               DragAmount;                                               // 0x03C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03C9(0x0003) MISSED OFFSET
	int                                                AmountToDrag;                                             // 0x03CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>                   LargeItemSoftReference;                                   // 0x03D0(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash)
	int                                                inventoryId;                                              // 0x03F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_Inventory_DragItem_WBP.WBP_Inventory_DragItem_WBP_C"));
		return ptr;
	}


	void EvaluateCancelDragDrop(const struct FYInventoryItem& RemovedInventoryItem);
	struct FText Get_AmountText_Text_1();
	void PlayDragSound();
	void OnLoaded_DC0630EA454AD91B07AEA4A237A595F9(class UObject* Loaded);
	void Construct();
	void OnPlayerSetItemRemovedCallback(class UYStateInventoryComponent* stateInventoryComponent, const struct FYInventoryItem& Item, EYPlayerSetType equippedSetType);
	void OnPlayerStashItemRemovedCallback(class UYStateInventoryComponent* stateInventoryComponent, const struct FYInventoryItem& Item);
	void ExecuteUbergraph_WBP_Inventory_DragItem_WBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

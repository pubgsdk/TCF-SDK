#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ItemComponent_DragAndDropable_WBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C
// 0x00E2 (0x041A - 0x0338)
class UItemComponent_DragAndDropable_WBP_C : public UYWidget_ItemComponentDragAndDropable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0338(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            DragDetectedAnim;                                         // 0x0340(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UImage*                                      DragUX;                                                   // 0x0348(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	EYPlayerSetType                                    slotType;                                                 // 0x0350(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0351(0x0007) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnHover;                                                  // 0x0358(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnUnhover;                                                // 0x0368(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnMouseUp;                                                // 0x0378(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	EYInventoryPlace                                   inventoryPlace;                                           // 0x0388(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0389(0x0007) MISSED OFFSET
	TArray<EYItemType>                                 CompatibleItemTypes;                                      // 0x0390(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	TArray<EYDeviceClass>                              CompatibleDeviceTypes;                                    // 0x03A0(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FDataTableRowHandle                         UI_InventoryHover;                                        // 0x03B0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         UI_InventoryUnhover;                                      // 0x03C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         SFX_CompatibleDragOverSoundEffect;                        // 0x03D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor)
	EYItemImprovementScreenSlotType                    uiSlotType;                                               // 0x03E0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03E1(0x0003) MISSED OFFSET
	int                                                inventoryId;                                              // 0x03E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               dragUXOn;                                                 // 0x03E8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               Test;                                                     // 0x03E9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData03[0x6];                                       // 0x03EA(0x0006) MISSED OFFSET
	struct FMulticastScriptDelegate                    OnDragDone;                                               // 0x03F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	bool                                               IsDraggable;                                              // 0x0400(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0401(0x0007) MISSED OFFSET
	struct FString                                     instanceId;                                               // 0x0408(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
	bool                                               CreateNewItem;                                            // 0x0418(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               IsAcceptingDragItems;                                     // 0x0419(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass ItemComponent_DragAndDropable_WBP.ItemComponent_DragAndDropable_WBP_C"));
		return ptr;
	}


	bool GetInventoryItem(struct FYInventoryItem* ReturnItem, EYPlayerSetType* slotType);
	void OnDragDropDone(class UDragDropOperation* Operation);
	void isCompatible(const struct FYInventoryItem& Item, bool* isCompatible);
	void PlayDragOverEffectsIfCompatible(class UDragDropOperation* DragDropOperation);
	bool WantsToDropAmount();
	void ShowDragUXForCompatibleItem(class UDragDropOperation* DragDropOperation);
	void HideDragUXForCompatibleItem(class UDragDropOperation* self2);
	class UDragDropOperation* BP_OnDragDetected();
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);
	void AssignDragDetectedDelagates(class UDragDropOperation* DragNDropOperation);
	void OnDrop_Event_2(class UDragDropOperation* Operation);
	void OnDragCancelled_Event_2(class UDragDropOperation* Operation);
	void Initialize_Drag_And_Drop_Data(int inventoryComponentId, const struct FYInventoryItem& inventoryItem, EYPlayerSetType playerSetType, EYItemImprovementScreenSlotType uiSlotType);
	void ExecuteUbergraph_ItemComponent_DragAndDropable_WBP(int EntryPoint);
	void OnDragDone__DelegateSignature();
	void OnMouseUp__DelegateSignature();
	void OnUnhover__DelegateSignature();
	void OnHover__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

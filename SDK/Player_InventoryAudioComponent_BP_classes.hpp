#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Player_InventoryAudioComponent_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Player_InventoryAudioComponent_BP.Player_InventoryAudioComponent_BP_C
// 0x0068 (0x0120 - 0x00B8)
class UPlayer_InventoryAudioComponent_BP_C : public UYInventoryAudioComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FDataTableRowHandle                         InventoryInteractionRowHandle;                            // 0x00C0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         ConsumableInteractionRowHandle;                           // 0x00D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         WeaponInteractionRowHandle;                               // 0x00E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         SwapInteractionRowHandle;                                 // 0x00F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         DropInteractionRowHandle;                                 // 0x0100(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)
	struct FDataTableRowHandle                         AttachmentInteractionRowHandle;                           // 0x0110(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass Player_InventoryAudioComponent_BP.Player_InventoryAudioComponent_BP_C"));
		return ptr;
	}


	void FindAudioRowHandle(EYPlayerSetType InTargetSetType, EYItemType InItemType, struct FDataTableRowHandle* OutItemInteractionSound);
	void Event_Play_Inventory_Audio_Action(EYInventoryAudioActionPerformed actionPerformed, EYPlayerSetType targetSetType, const struct FYInventoryItem& inventoryItem);
	void BP_PlayInventoryAudio(EYInventoryAudioActionPerformed actionPerformed, EYPlayerSetType targetSetType, const struct FYInventoryItem& Item);
	void ExecuteUbergraph_Player_InventoryAudioComponent_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

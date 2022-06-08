#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MeleeWeaponCustomization_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MeleeWeaponCustomization_BP.MeleeWeaponCustomization_BP_C
// 0x05B8 (0x0838 - 0x0280)
class AMeleeWeaponCustomization_BP_C : public AYMeleeActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0280(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FYMeleeVanityDataTableRow                   MeleeWeaponRow;                                           // 0x0288(0x05A0) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FDataTableRowHandle                         MeleeDTRow;                                               // 0x0828(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_ExposeOnSpawn)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass MeleeWeaponCustomization_BP.MeleeWeaponCustomization_BP_C"));
		return ptr;
	}


	void UserConstructionScript();
	void OnLoaded_143A10034D179E9A18A9BEB9CD8A42EF(class UObject* Loaded);
	void OnLoaded_603C613442143C4DDF9B4FAA74FA4987(class UObject* Loaded);
	void BndEvt__m_rowAssociationComponent_K2Node_ComponentBoundEvent_0_OnRowHandleChanged__DelegateSignature(const struct FDataTableRowHandle& oldRowHandle, const struct FDataTableRowHandle& newRowHandle);
	void Preview();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_MeleeWeaponCustomization_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

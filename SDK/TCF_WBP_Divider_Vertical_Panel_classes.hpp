#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_WBP_Divider_Vertical_Panel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_Divider_Vertical_Panel.WBP_Divider_Vertical_Panel_C
// 0x0020 (0x02E0 - 0x02C0)
class UWBP_Divider_Vertical_Panel_C : public UYWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            ScreenIn_Anim;                                            // 0x02C8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UImage*                                      Gfx_VertDivide;                                           // 0x02D0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      Gfx_VertDivide_2;                                         // 0x02D8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("WidgetBlueprintGeneratedClass WBP_Divider_Vertical_Panel.WBP_Divider_Vertical_Panel_C");
		return ptr;
	}


	class UWidgetAnimation* BP_AnimateVisibility(ESlateVisibility newVisibility);
	void Construct();
	void ExecuteUbergraph_WBP_Divider_Vertical_Panel(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_ButtonBase_Btn_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_ButtonBase_Btn.WBP_ButtonBase_Btn_C
// 0x00C9 (0x03A1 - 0x02D8)
class UWBP_ButtonBase_Btn_C : public UYWidget_Button
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D8(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FMulticastScriptDelegate                    OnClicked;                                                // 0x02E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnDoubleClicked;                                          // 0x02F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnHovered;                                                // 0x0300(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnUnhovered;                                              // 0x0310(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FDataTableRowHandle                         ClickedSound;                                             // 0x0320(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor)
	struct FDataTableRowHandle                         HoveredSound;                                             // 0x0330(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor)
	struct FDataTableRowHandle                         UnhoveredSound;                                           // 0x0340(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor)
	struct FDataTableRowHandle                         PressedSound;                                             // 0x0350(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor)
	struct FDataTableRowHandle                         ReleasedSound;                                            // 0x0360(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor)
	struct FDataTableRowHandle                         DoubleClickedSound;                                       // 0x0370(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor)
	struct FString                                     BIEventName;                                              // 0x0380(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
	struct FString                                     BIEventLocation;                                          // 0x0390(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
	bool                                               ConstructBIEventLocation;                                 // 0x03A0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_ButtonBase_Btn.WBP_ButtonBase_Btn_C"));
		return ptr;
	}


	void TrySendBIEvent();
	void Unhovered();
	void Pressed();
	void Released();
	void DoubleClicked();
	void Base_Clicked();
	void Base_Hovered();
	void Base_Unhovered();
	void Base_Pressed();
	void Base_Released();
	void Base_DoubleClicked();
	void Construct();
	void Hovered();
	void Clicked();
	void ExecuteUbergraph_WBP_ButtonBase_Btn(int EntryPoint);
	void OnUnhovered__DelegateSignature();
	void OnHovered__DelegateSignature();
	void OnDoubleClicked__DelegateSignature();
	void OnClicked__DelegateSignature(class UWBP_ButtonBase_Btn_C* Button);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

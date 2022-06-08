#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MapMarker_StaticIcon_WBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass MapMarker_StaticIcon_WBP.MapMarker_StaticIcon_WBP_C
// 0x0025 (0x0315 - 0x02F0)
class UMapMarker_StaticIcon_WBP_C : public UYWidget_MapMarker
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UWidgetAnimation*                            HighlightAnimation;                                       // 0x02F8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTextBlock*                                  m_label;                                                  // 0x0300(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	class UImage*                                      m_markerIcon;                                             // 0x0308(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	EYMapMarkerType                                    m_markerDataType;                                         // 0x0310(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	EYMapMarkerState                                   m_markerState;                                            // 0x0311(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               ShowQuestionMarkWhenUnknown;                              // 0x0312(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               IsMaximized;                                              // 0x0313(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      CurrentSeasonalEvent;                                     // 0x0314(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass MapMarker_StaticIcon_WBP.MapMarker_StaticIcon_WBP_C"));
		return ptr;
	}


	void UpdateMarkerIconBasedOnType(EYMapMarkerType Type);
	void ShowLabel(const struct FText& Text);
	void BP_OnUpdateMarkerData(class UYMapMarkerData* markerInfo);
	void PlayHighlightAnimation();
	void BP_OnMaximized(bool IsMaximized);
	void ExecuteUbergraph_MapMarker_StaticIcon_WBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

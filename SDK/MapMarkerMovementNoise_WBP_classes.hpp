#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MapMarkerMovementNoise_WBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass MapMarkerMovementNoise_WBP.MapMarkerMovementNoise_WBP_C
// 0x0011 (0x0301 - 0x02F0)
class UMapMarkerMovementNoise_WBP_C : public UYWidget_MapMarker
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UImage*                                      m_markerIcon;                                             // 0x02F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	EYMapMarkerState                                   cachedState;                                              // 0x0300(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass MapMarkerMovementNoise_WBP.MapMarkerMovementNoise_WBP_C"));
		return ptr;
	}


	void BP_OnUpdateMarkerData(class UYMapMarkerData* markerInfo);
	void ExecuteUbergraph_MapMarkerMovementNoise_WBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

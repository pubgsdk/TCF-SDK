#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_ImpactMarkerHeavy01_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ImpactMarkerHeavy01_BP.BP_ImpactMarkerHeavy01_BP_C
// 0x0040 (0x0290 - 0x0250)
class ABP_ImpactMarkerHeavy01_BP_C : public AYPlacementActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0250(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              decalAnim_anim_opacity_E9D529874D32FD51EFB5B497FD1FC1D0;  // 0x0260(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    decalAnim__Direction_E9D529874D32FD51EFB5B497FD1FC1D0;    // 0x0264(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0265(0x0003) MISSED OFFSET
	class UTimelineComponent*                          decalAnim;                                                // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    decalMID;                                                 // 0x0270(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              markerSize;                                               // 0x0278(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x4];                                       // 0x027C(0x0004) MISSED OFFSET
	class UParticleSystemComponent*                    particle;                                                 // 0x0280(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UDecalComponent*                             Decal;                                                    // 0x0288(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_ImpactMarkerHeavy01_BP.BP_ImpactMarkerHeavy01_BP_C"));
		return ptr;
	}


	void decalAnim__FinishedFunc();
	void decalAnim__UpdateFunc();
	void BP_PlacementSize(float Radius);
	void ReceiveBeginPlay();
	void OnComponentDeactivated_Event_1(class UActorComponent* Component);
	void BP_IsAvailable(bool isAvailable);
	void ExecuteUbergraph_BP_ImpactMarkerHeavy01_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

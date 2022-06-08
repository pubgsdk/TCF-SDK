#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AA_SafetyTrigger_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AA_SafetyTrigger_BP.AA_SafetyTrigger_BP_C
// 0x007B (0x0310 - 0x0295)
class AAA_SafetyTrigger_BP_C : public AAA_Trigger_BP_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0295(0x0003) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0298(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UParticleSystemComponent*                    P_sparks;                                                 // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        PowerUp_SwitchHandle;                                     // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              OnSwitchActivate_TL_SwitchRotation_5C958A0A40580701B668C38789DB6832;// 0x02B0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    OnSwitchActivate_TL__Direction_5C958A0A40580701B668C38789DB6832;// 0x02B4(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02B5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          OnSwitchActivate_TL;                                      // 0x02B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               IsInteractable;                                           // 0x02C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor)
	bool                                               IsActive;                                                 // 0x02C1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor)
	unsigned char                                      UnknownData02[0x2];                                       // 0x02C2(0x0002) MISSED OFFSET
	float                                              TriggerDuration;                                          // 0x02C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_ExposeOnSpawn, CPF_HasGetValueTypeHash)
	struct FTimerHandle                                Trigger_TH;                                               // 0x02C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAudioComponent*                             AudioCompTriggerActive;                                   // 0x02D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnTriggerStarted;                                         // 0x02D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FMulticastScriptDelegate                    OnTriggerEnded;                                           // 0x02E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	struct FTimerHandle                                TriggerAlmostEnded_TH;                                    // 0x02F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USoundBase*                                  SoundTriggerActive;                                       // 0x0300(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USoundBase*                                  SoundTriggerEnd;                                          // 0x0308(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AA_SafetyTrigger_BP.AA_SafetyTrigger_BP_C"));
		return ptr;
	}


	void OnRep_IsActive();
	void OnRep_IsInteractable();
	void UserConstructionScript();
	void OnSwitchActivate_TL__FinishedFunc();
	void OnSwitchActivate_TL__UpdateFunc();
	void SetIsOwnerPowered(bool IsPowered);
	void BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_0_OnPlayerInteractionCompleted__DelegateSignature(EYInteractionType interactionType, class AYPlayerController_Match* interactingPlayer);
	void TriggerEnded();
	void FX_TriggerStarted();
	void FX_TriggerEnded();
	void FX_TriggerAlmostEnded();
	void ReceiveBeginPlay();
	void BndEvt__YDamage_K2Node_ComponentBoundEvent_0_YTakeDamageEvent__DelegateSignature(const struct FYDealtDamageData& Data);
	void FX_OnActivateAnim();
	void FX_OnDeActivateAnim();
	void OnRelevantToPowerup(bool TRUE);
	void ExecuteUbergraph_AA_SafetyTrigger_BP(int EntryPoint);
	void OnTriggerEnded__DelegateSignature();
	void OnTriggerStarted__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "AA_EscapeShipTerminal_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C
// 0x02EC (0x053C - 0x0250)
class AAA_EscapeShipTerminal_BP_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0250(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UNavModifierComponent*                       NavModifier;                                              // 0x0258(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UParticleSystemComponent*                    BloomParticle;                                            // 0x0260(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UPointLightComponent*                        PointLight;                                               // 0x0268(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UAudioComponent*                             IMA_EVAC_TransmissionLoop;                                // 0x0270(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             Scene1;                                                   // 0x0278(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        large_antenna;                                            // 0x0280(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UMatchPhaseListenerComponent_BP_C*           MatchPhaseListenerComponent_BP;                           // 0x0288(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UYActivityComponent*                         YActivityComponent;                                       // 0x0290(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UTextRenderComponent*                        TextRender;                                               // 0x0298(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UStaticMeshComponent*                        Console1;                                                 // 0x02A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class USceneComponent*                             Scene;                                                    // 0x02A8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UYMapMarkerComponent*                        YMapMarker;                                               // 0x02B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UYObjectInteractionComponent*                YObjectInteraction;                                       // 0x02B8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NonTransactional, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              FogAnimation_Opacity_3512D2F04BEBD9B3D5243E8329EA6930;    // 0x02C0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    FogAnimation__Direction_3512D2F04BEBD9B3D5243E8329EA6930; // 0x02C4(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02C5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FogAnimation;                                             // 0x02C8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              BeaconFlash_TL_EmissiveLerp_BD89A1DA4658AA6E946CE98710E7AAEA;// 0x02D0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<ETimelineDirection>                    BeaconFlash_TL__Direction_BD89A1DA4658AA6E946CE98710E7AAEA;// 0x02D4(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02D5(0x0003) MISSED OFFSET
	class UTimelineComponent*                          BeaconFlash_TL;                                           // 0x02D8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FMulticastScriptDelegate                    OnTerminalActivated;                                      // 0x02E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	TEnumAsByte<EAC_EscapeShipTerminal_Actor_ENUM>     EscapeShipTerminal_State;                                 // 0x02F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData02[0x7];                                       // 0x02F1(0x0007) MISSED OFFSET
	struct FText                                       TerminalActive_Text;                                      // 0x02F8(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       TerminalCanBeUsed_Text;                                   // 0x0318(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	class AYPlayerController_Match*                    interactingPlayer;                                        // 0x0338(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              StartOfMatchDownTime;                                     // 0x0340(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0344(0x0004) MISSED OFFSET
	class UBP_EscapeMarkerData_C*                      MarkerDataEscape;                                         // 0x0348(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              TerminalCooldownTime;                                     // 0x0350(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0354(0x0004) MISSED OFFSET
	class AAC_EvacShip_BP_C*                           EvacShip;                                                 // 0x0358(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class AYPlayerController*>                  PlayersRegisteredToThisTerminal;                          // 0x0360(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	TArray<class AYPlayerController*>                  PlayersToBeRemoved;                                       // 0x0370(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	bool                                               isShipArriving;                                           // 0x0380(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               DEBUG_IgnoreRegistration;                                 // 0x0381(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData05[0x6];                                       // 0x0382(0x0006) MISSED OFFSET
	TMap<class AYPlayerController*, bool>              PlayersInProximity;                                       // 0x0388(0x0050) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	bool                                               wasInProximity;                                           // 0x03D8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               isInProximity;                                            // 0x03D9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               useProximityToInteract;                                   // 0x03DA(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               isEvacActive;                                             // 0x03DB(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor)
	float                                              ActivationDistance;                                       // 0x03DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MinHeightActivationDistance;                              // 0x03E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              MaxHeightActivationDistance;                              // 0x03E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FString                                     BIActorID;                                                // 0x03E8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData06[0x8];                                       // 0x03F8(0x0008) MISSED OFFSET
	struct FTransform                                  LandingLocation;                                          // 0x0400(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	struct FTransform                                  CamTransform;                                             // 0x0430(0x0030) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	TArray<class AYPlayerController*>                  PlayersToPlayEvacMusicFor;                                // 0x0460(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance)
	bool                                               isTutorialEvac;                                           // 0x0470(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0471(0x0003) MISSED OFFSET
	struct FLinearColor                                BeaconLightColour;                                        // 0x0474(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TEnumAsByte<EAC_EscapeShip_State>                  EscapeShipState;                                          // 0x0484(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0485(0x0003) MISSED OFFSET
	struct FLinearColor                                BeaconColourArriving;                                     // 0x0488(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                BeaconColourLanded;                                       // 0x0498(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                BeaconColourAlmostLeaving;                                // 0x04A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                BeaconColourShipLeft;                                     // 0x04B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               ShouldBeaconFlash;                                        // 0x04C8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	unsigned char                                      UnknownData09[0x3];                                       // 0x04C9(0x0003) MISSED OFFSET
	float                                              BeaconFlashPlayRate;                                      // 0x04CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	TArray<class AEscape_Beacon_BP_C*>                 BeaconMeshes;                                             // 0x04D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_RepNotify)
	struct FLinearColor                                PlayerNearbyBeaconColour;                                 // 0x04E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              PlayerNearbyBeaconFlashRate;                              // 0x04F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                PlayersInProximityInt;                                    // 0x04F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_Net, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_RepNotify, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                BeaconLightColourDefault;                                 // 0x04F8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FLinearColor                                BeaconColourDisabled;                                     // 0x0508(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AFX_VolumetricFogActor01_BP_C*               FogActor;                                                 // 0x0518(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	float                                              maxFogOpacity;                                            // 0x0520(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               isEvacActive_Client;                                      // 0x0524(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               isShipArriving_Client;                                    // 0x0525(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	TEnumAsByte<EAC_EscapeShip_State>                  EvacShipState_Client;                                     // 0x0526(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData10[0x1];                                       // 0x0527(0x0001) MISSED OFFSET
	class AAC_EvacShip_BP_C*                           EvacShip_Client;                                          // 0x0528(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class AYPlayerController*                          RegisteredPlayerCTRL;                                     // 0x0530(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	bool                                               OpenBackDoor;                                             // 0x0538(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               OpenFrontDoor;                                            // 0x0539(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               OpenLeftDoor;                                             // 0x053A(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)
	bool                                               OpenRightDoor;                                            // 0x053B(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass AA_EscapeShipTerminal_BP.AA_EscapeShipTerminal_BP_C"));
		return ptr;
	}


	void SendBIData(EYEscapeBIHookStep step, class AActor* playerContext);
	void OnRep_isEvacActive();
	void GetShipLandingTransformLocal(struct FTransform* Result);
	void GetShipLandingTransformWorld(struct FTransform* Result);
	void CanUpdateBeaconPlayerProximity(bool* CanUpdate);
	void UpdatePlayerAmountInProximity(int* AmountOfPlayersInProximity);
	void OnRep_PlayersInProximityInt();
	void OnRep_BeaconMeshes();
	void OnRep_EvacShip();
	void UpdateBeaconActors();
	void GetBeaconMeshes();
	void InitBeaconSettings();
	void DetermineShipID(struct FString* BIActorID);
	void isLocalPlayerRegisteredToThisTerminal(bool* isRegistered);
	void SpawnEvacShip(class AAC_EvacShip_BP_C** SpawnedEscapeActor);
	void OnRep_EscapeShipTerminal_State();
	void BeaconFlash_TL__FinishedFunc();
	void BeaconFlash_TL__UpdateFunc();
	void FogAnimation__FinishedFunc();
	void FogAnimation__UpdateFunc();
	void OnNotifyEnd_2DDB424B48BCCF1BC1F4968E9490C6E7(const struct FName& NotifyName);
	void OnNotifyBegin_2DDB424B48BCCF1BC1F4968E9490C6E7(const struct FName& NotifyName);
	void OnInterrupted_2DDB424B48BCCF1BC1F4968E9490C6E7(const struct FName& NotifyName);
	void OnBlendOut_2DDB424B48BCCF1BC1F4968E9490C6E7(const struct FName& NotifyName);
	void OnCompleted_2DDB424B48BCCF1BC1F4968E9490C6E7(const struct FName& NotifyName);
	void OnNotifyEnd_2E15C4E14D9168F9EA7277B6AD0EC9BA(const struct FName& NotifyName);
	void OnNotifyBegin_2E15C4E14D9168F9EA7277B6AD0EC9BA(const struct FName& NotifyName);
	void OnInterrupted_2E15C4E14D9168F9EA7277B6AD0EC9BA(const struct FName& NotifyName);
	void OnBlendOut_2E15C4E14D9168F9EA7277B6AD0EC9BA(const struct FName& NotifyName);
	void OnCompleted_2E15C4E14D9168F9EA7277B6AD0EC9BA(const struct FName& NotifyName);
	void OnEscapeShipStateChange(TEnumAsByte<EAC_EscapeShip_State> EscapeShipState);
	void SFX_PlayShipArriving();
	void SFX_PlayShipAlarm();
	void FadeInAudioLoop();
	void PlayEvacMusic();
	void PlayMusicOnSpecificPlayer();
	void OnPlayersNearby();
	void OnPlayersNotNearby();
	void OnMainAntennaUpdate();
	void OnEvacDisabled();
	void OnEvacEnabled();
	void VFX_FogCloud();
	void BndEvt__YObjectInteraction_K2Node_ComponentBoundEvent_0_OnPlayerInteractionCompleted__DelegateSignature(EYInteractionType interactionType, class AYPlayerController_Match* interactingPlayer);
	void ReceiveBeginPlay();
	void DisableTerminal();
	void EnableTerminal();
	void OnEvacShipLeaving();
	void EvacAvailable();
	void RegisterNewPlayerToTerminal(class AYPlayerController* Player);
	void CheckRegistreesForValidity();
	void PlayDepartureAlarmOnTerminal_Event_1();
	void CallEvacPressed_Event_1(class APRO_PlayerController_C* Player);
	void ChangePromptVisibility(class AYPlayerController* PlayerCTRL, bool showPrompt, bool isShipArriving, bool isEvacActive, TEnumAsByte<EAC_EscapeShip_State> EvacShipState, class AAC_EvacShip_BP_C* EvacShip);
	void RefreshPromptVisibility();
	void OnShipLanded_Event_1();
	void OnReplicatedMatchPhaseDataUpdated_Event_1(const struct FYMatchPhaseData& newMatchPhaseData);
	void PlayInteractionAnim();
	void SwitchToEvacCam(class AYPlayerController* EscapingPlayerCTRL);
	void ChangePromptVisibility_NoShip(class AYPlayerController* PlayerCTRL, bool showPrompt, bool isShipArriving, bool isEvacActive);
	void ExecuteUbergraph_AA_EscapeShipTerminal_BP(int EntryPoint);
	void OnTerminalActivated__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

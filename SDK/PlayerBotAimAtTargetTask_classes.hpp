#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PlayerBotAimAtTargetTask_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerBotAimAtTargetTask.PlayerBotAimAtTargetTask_C
// 0x0050 (0x0100 - 0x00B0)
class UPlayerBotAimAtTargetTask_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00B0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	struct FName                                       combatTarget;                                             // 0x00B8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector2D                                   maxAngleError;                                            // 0x00C0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector2D                                   maxAngleLongRange;                                        // 0x00C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FVector2D                                   maxAngleShortRange;                                       // 0x00D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       InteractTarget;                                           // 0x00D8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UObject*                                     TargetActor;                                              // 0x00E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       TimeStampLastTP;                                          // 0x00E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	class UBlackboardComponent*                        Blackboard;                                               // 0x00F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	struct FName                                       IsCombatTargetClose;                                      // 0x00F8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass PlayerBotAimAtTargetTask.PlayerBotAimAtTargetTask_C"));
		return ptr;
	}


	void ReceiveExecute(class AActor* OwnerActor);
	void ExecuteUbergraph_PlayerBotAimAtTargetTask(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

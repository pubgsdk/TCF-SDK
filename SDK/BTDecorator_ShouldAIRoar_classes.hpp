#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BTDecorator_ShouldAIRoar_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTDecorator_ShouldAIRoar.BTDecorator_ShouldAIRoar_C
// 0x0004 (0x00AC - 0x00A8)
class UBTDecorator_ShouldAIRoar_C : public UBTDecorator_BlueprintBase
{
public:
	float                                              AllyCheckRadius;                                          // 0x00A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BTDecorator_ShouldAIRoar.BTDecorator_ShouldAIRoar_C"));
		return ptr;
	}


	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

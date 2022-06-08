#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BP_AimAssistInterface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AimAssistInterface.BP_AimAssistInterface_C
// 0x0000 (0x0030 - 0x0030)
class UBP_AimAssistInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass BP_AimAssistInterface.BP_AimAssistInterface_C"));
		return ptr;
	}


	void GetAutoAimRotator(struct FRotator* AutoAimRotator);
	void CharacterChangeState(TEnumAsByte<ENUM_CharacterAimState> newState);
	void InitializeAimAssistWPNPreset(const struct FString& PresetName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

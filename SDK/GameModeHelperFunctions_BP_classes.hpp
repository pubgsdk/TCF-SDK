#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GameModeHelperFunctions_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GameModeHelperFunctions_BP.GameModeHelperFunctions_BP_C
// 0x0000 (0x0030 - 0x0030)
class UGameModeHelperFunctions_BP_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass GameModeHelperFunctions_BP.GameModeHelperFunctions_BP_C"));
		return ptr;
	}


	static void CreateIDFromActorLocation(const struct FVector& Location, class UObject* __WorldContext, struct FString* ID);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

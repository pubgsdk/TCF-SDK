#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "CameraShake_Weapon_Sniper_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CameraShake_Weapon_Sniper.CameraShake_Weapon_Sniper_C
// 0x0000 (0x01B0 - 0x01B0)
class UCameraShake_Weapon_Sniper_C : public UDropPodIntro_Impact_CameraShake_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("BlueprintGeneratedClass CameraShake_Weapon_Sniper.CameraShake_Weapon_Sniper_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

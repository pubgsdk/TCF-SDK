#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ItemComponent_StackAmountText_WBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ItemComponent_StackAmountText_WBP.ItemComponent_StackAmountText_WBP_C
// 0x0000 (0x0338 - 0x0338)
class UItemComponent_StackAmountText_WBP_C : public UItemComponent_StackAmountBase_WBP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass ItemComponent_StackAmountText_WBP.ItemComponent_StackAmountText_WBP_C"));
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

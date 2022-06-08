// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "EngineSettings_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngineSettings.GameMapsSettings.SetSkipAssigningGamepadToPlayer1
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bSkipFirstPlayer               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGameMapsSettings::SetSkipAssigningGamepadToPlayer1(bool bSkipFirstPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EngineSettings.GameMapsSettings.SetSkipAssigningGamepadToPlayer1"));

	struct
	{
		bool                           bSkipFirstPlayer;
	} params = {};

	params.bSkipFirstPlayer = bSkipFirstPlayer;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function EngineSettings.GameMapsSettings.GetSkipAssigningGamepadToPlayer1
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UGameMapsSettings::GetSkipAssigningGamepadToPlayer1()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EngineSettings.GameMapsSettings.GetSkipAssigningGamepadToPlayer1"));

	struct
	{
		bool                           ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function EngineSettings.GameMapsSettings.GetGameMapsSettings
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UGameMapsSettings*       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UGameMapsSettings* UGameMapsSettings::GetGameMapsSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function EngineSettings.GameMapsSettings.GetGameMapsSettings"));

	struct
	{
		class UGameMapsSettings*       ReturnValue;
	} params = {};


	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

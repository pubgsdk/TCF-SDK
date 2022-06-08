// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoakTestStationAutomationManager_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SoakTestStationAutomationManager_BP.SoakTestStationAutomationManager_BP_C.getRandomGamemodeForMM
// (FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// int                            randInt                        (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// unsigned char                  GameMode                       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ASoakTestStationAutomationManager_BP_C::getRandomGamemodeForMM(int randInt, unsigned char* GameMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SoakTestStationAutomationManager_BP.SoakTestStationAutomationManager_BP_C.getRandomGamemodeForMM"));

	struct
	{
		int                            randInt;
		unsigned char                  GameMode;
	} params = {};

	params.randInt = randInt;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (GameMode != nullptr)
		*GameMode = params.GameMode;
}


// Function SoakTestStationAutomationManager_BP.SoakTestStationAutomationManager_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ASoakTestStationAutomationManager_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SoakTestStationAutomationManager_BP.SoakTestStationAutomationManager_BP_C.ReceiveBeginPlay"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SoakTestStationAutomationManager_BP.SoakTestStationAutomationManager_BP_C.RequestSoaktestStationAutomation
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ASoakTestStationAutomationManager_BP_C::RequestSoaktestStationAutomation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SoakTestStationAutomationManager_BP.SoakTestStationAutomationManager_BP_C.RequestSoaktestStationAutomation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SoakTestStationAutomationManager_BP.SoakTestStationAutomationManager_BP_C.startSoaktestMatchmaking
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ASoakTestStationAutomationManager_BP_C::startSoaktestMatchmaking()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SoakTestStationAutomationManager_BP.SoakTestStationAutomationManager_BP_C.startSoaktestMatchmaking"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SoakTestStationAutomationManager_BP.SoakTestStationAutomationManager_BP_C.doRequeue
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ASoakTestStationAutomationManager_BP_C::doRequeue()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SoakTestStationAutomationManager_BP.SoakTestStationAutomationManager_BP_C.doRequeue"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SoakTestStationAutomationManager_BP.SoakTestStationAutomationManager_BP_C.startSoaktestStationBehavior
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ASoakTestStationAutomationManager_BP_C::startSoaktestStationBehavior()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SoakTestStationAutomationManager_BP.SoakTestStationAutomationManager_BP_C.startSoaktestStationBehavior"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SoakTestStationAutomationManager_BP.SoakTestStationAutomationManager_BP_C.CliStartSoaktestStationAutomation
// (FUNC_Net, FUNC_NetReliable, FUNC_NetMulticast, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ASoakTestStationAutomationManager_BP_C::CliStartSoaktestStationAutomation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SoakTestStationAutomationManager_BP.SoakTestStationAutomationManager_BP_C.CliStartSoaktestStationAutomation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function SoakTestStationAutomationManager_BP.SoakTestStationAutomationManager_BP_C.ExecuteUbergraph_SoakTestStationAutomationManager_BP
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ASoakTestStationAutomationManager_BP_C::ExecuteUbergraph_SoakTestStationAutomationManager_BP(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function SoakTestStationAutomationManager_BP.SoakTestStationAutomationManager_BP_C.ExecuteUbergraph_SoakTestStationAutomationManager_BP"));

	struct
	{
		int                            EntryPoint;
	} params = {};

	params.EntryPoint = EntryPoint;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

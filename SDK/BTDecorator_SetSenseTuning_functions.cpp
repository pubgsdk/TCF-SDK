// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BTDecorator_SetSenseTuning_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTDecorator_SetSenseTuning.BTDecorator_SetSenseTuning_C.PerformConditionCheck
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBTDecorator_SetSenseTuning_C::PerformConditionCheck(class AActor* OwnerActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTDecorator_SetSenseTuning.BTDecorator_SetSenseTuning_C.PerformConditionCheck"));

	struct
	{
		class AActor*                  OwnerActor;
		bool                           ReturnValue;
	} params = {};

	params.OwnerActor = OwnerActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function BTDecorator_SetSenseTuning.BTDecorator_SetSenseTuning_C.ReceiveExecutionStartAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTDecorator_SetSenseTuning_C::ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTDecorator_SetSenseTuning.BTDecorator_SetSenseTuning_C.ReceiveExecutionStartAI"));

	struct
	{
		class AAIController*           OwnerController;
		class APawn*                   ControlledPawn;
	} params = {};

	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTDecorator_SetSenseTuning.BTDecorator_SetSenseTuning_C.ReceiveExecutionFinishAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EBTNodeResult>     NodeResult                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTDecorator_SetSenseTuning_C::ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, TEnumAsByte<EBTNodeResult> NodeResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTDecorator_SetSenseTuning.BTDecorator_SetSenseTuning_C.ReceiveExecutionFinishAI"));

	struct
	{
		class AAIController*           OwnerController;
		class APawn*                   ControlledPawn;
		TEnumAsByte<EBTNodeResult>     NodeResult;
	} params = {};

	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.NodeResult = NodeResult;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTDecorator_SetSenseTuning.BTDecorator_SetSenseTuning_C.ExecuteUbergraph_BTDecorator_SetSenseTuning
// (FUNC_Final, FUNC_HasDefaults)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTDecorator_SetSenseTuning_C::ExecuteUbergraph_BTDecorator_SetSenseTuning(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTDecorator_SetSenseTuning.BTDecorator_SetSenseTuning_C.ExecuteUbergraph_BTDecorator_SetSenseTuning"));

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

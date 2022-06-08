// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BTDecorator_SetMovementSpeed_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTDecorator_SetMovementSpeed.BTDecorator_SetMovementSpeed_C.PerformConditionCheck
// (FUNC_Event, FUNC_Protected, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class AActor*                  OwnerActor                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor)

bool UBTDecorator_SetMovementSpeed_C::PerformConditionCheck(class AActor* OwnerActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTDecorator_SetMovementSpeed.BTDecorator_SetMovementSpeed_C.PerformConditionCheck"));

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


// Function BTDecorator_SetMovementSpeed.BTDecorator_SetMovementSpeed_C.ReceiveExecutionStartAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTDecorator_SetMovementSpeed_C::ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTDecorator_SetMovementSpeed.BTDecorator_SetMovementSpeed_C.ReceiveExecutionStartAI"));

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


// Function BTDecorator_SetMovementSpeed.BTDecorator_SetMovementSpeed_C.ReceiveExecutionFinishAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// TEnumAsByte<EBTNodeResult>     NodeResult                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTDecorator_SetMovementSpeed_C::ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, TEnumAsByte<EBTNodeResult> NodeResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTDecorator_SetMovementSpeed.BTDecorator_SetMovementSpeed_C.ReceiveExecutionFinishAI"));

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


// Function BTDecorator_SetMovementSpeed.BTDecorator_SetMovementSpeed_C.ReceiveTickAI
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// float                          DeltaSeconds                   (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTDecorator_SetMovementSpeed_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTDecorator_SetMovementSpeed.BTDecorator_SetMovementSpeed_C.ReceiveTickAI"));

	struct
	{
		class AAIController*           OwnerController;
		class APawn*                   ControlledPawn;
		float                          DeltaSeconds;
	} params = {};

	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function BTDecorator_SetMovementSpeed.BTDecorator_SetMovementSpeed_C.ExecuteUbergraph_BTDecorator_SetMovementSpeed
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UBTDecorator_SetMovementSpeed_C::ExecuteUbergraph_BTDecorator_SetMovementSpeed(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function BTDecorator_SetMovementSpeed.BTDecorator_SetMovementSpeed_C.ExecuteUbergraph_BTDecorator_SetMovementSpeed"));

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

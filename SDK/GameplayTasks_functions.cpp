// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "GameplayTasks_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UGameplayTasksComponent::OnRep_SimulatedTasks()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TScriptInterface<class UGameplayTaskOwnerInterface> TaskOwner                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
// class UGameplayTask*           Task                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// unsigned char                  Priority                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<class UClass* /*UGameplayTaskResource*/> AdditionalRequiredResources    (CPF_Parm, CPF_ZeroConstructor, CPF_AdvancedDisplay, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
// TArray<class UClass* /*UGameplayTaskResource*/> AdditionalClaimedResources     (CPF_Parm, CPF_ZeroConstructor, CPF_AdvancedDisplay, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
// EGameplayTaskRunResult         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

EGameplayTaskRunResult UGameplayTasksComponent::K2_RunGameplayTask(const TScriptInterface<class UGameplayTaskOwnerInterface>& TaskOwner, class UGameplayTask* Task, unsigned char Priority, TArray<class UClass* /*UGameplayTaskResource*/> AdditionalRequiredResources, TArray<class UClass* /*UGameplayTaskResource*/> AdditionalClaimedResources)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask"));

	struct
	{
		TScriptInterface<class UGameplayTaskOwnerInterface> TaskOwner;
		class UGameplayTask*           Task;
		unsigned char                  Priority;
		TArray<class UClass* /*UGameplayTaskResource*/> AdditionalRequiredResources;
		TArray<class UClass* /*UGameplayTaskResource*/> AdditionalClaimedResources;
		EGameplayTaskRunResult         ReturnValue;
	} params = {};

	params.TaskOwner = TaskOwner;
	params.Task = Task;
	params.Priority = Priority;
	params.AdditionalRequiredResources = AdditionalRequiredResources;
	params.AdditionalClaimedResources = AdditionalClaimedResources;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayTasks.GameplayTask.ReadyForActivation
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UGameplayTask::ReadyForActivation()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTasks.GameplayTask.ReadyForActivation"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)

void UGameplayTask::GenericGameplayTaskDelegate__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayTasks.GameplayTask.EndTask
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UGameplayTask::EndTask()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTasks.GameplayTask.EndTask"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayTasks.GameplayTask_ClaimResource.ClaimResources
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TScriptInterface<class UGameplayTaskOwnerInterface> InTaskOwner                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
// TArray<class UClass* /*UGameplayTaskResource*/> ResourceClasses                (CPF_Parm, CPF_ZeroConstructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
// unsigned char                  Priority                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   TaskInstanceName               (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UGameplayTask_ClaimResource* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UGameplayTask_ClaimResource* UGameplayTask_ClaimResource::ClaimResources(const TScriptInterface<class UGameplayTaskOwnerInterface>& InTaskOwner, TArray<class UClass* /*UGameplayTaskResource*/> ResourceClasses, unsigned char Priority, const struct FName& TaskInstanceName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTasks.GameplayTask_ClaimResource.ClaimResources"));

	struct
	{
		TScriptInterface<class UGameplayTaskOwnerInterface> InTaskOwner;
		TArray<class UClass* /*UGameplayTaskResource*/> ResourceClasses;
		unsigned char                  Priority;
		struct FName                   TaskInstanceName;
		class UGameplayTask_ClaimResource* ReturnValue;
	} params = {};

	params.InTaskOwner = InTaskOwner;
	params.ResourceClasses = ResourceClasses;
	params.Priority = Priority;
	params.TaskInstanceName = TaskInstanceName;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayTasks.GameplayTask_ClaimResource.ClaimResource
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TScriptInterface<class UGameplayTaskOwnerInterface> InTaskOwner                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
// class UClass* /*UGameplayTaskResource*/ ResourceClass                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// unsigned char                  Priority                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FName                   TaskInstanceName               (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UGameplayTask_ClaimResource* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UGameplayTask_ClaimResource* UGameplayTask_ClaimResource::ClaimResource(const TScriptInterface<class UGameplayTaskOwnerInterface>& InTaskOwner, class UClass* /*UGameplayTaskResource*/ ResourceClass, unsigned char Priority, const struct FName& TaskInstanceName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTasks.GameplayTask_ClaimResource.ClaimResource"));

	struct
	{
		TScriptInterface<class UGameplayTaskOwnerInterface> InTaskOwner;
		class UClass* /*UGameplayTaskResource*/ ResourceClass;
		unsigned char                  Priority;
		struct FName                   TaskInstanceName;
		class UGameplayTask_ClaimResource* ReturnValue;
	} params = {};

	params.InTaskOwner = InTaskOwner;
	params.ResourceClass = ResourceClass;
	params.Priority = Priority;
	params.TaskInstanceName = TaskInstanceName;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// TScriptInterface<class UGameplayTaskOwnerInterface> TaskOwner                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
// struct FVector                 SpawnLocation                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                SpawnRotation                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// class UClass* /*AActor*/       Class                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bSpawnOnlyOnAuthority          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UGameplayTask_SpawnActor* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UGameplayTask_SpawnActor* UGameplayTask_SpawnActor::SpawnActor(const TScriptInterface<class UGameplayTaskOwnerInterface>& TaskOwner, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, class UClass* /*AActor*/ Class, bool bSpawnOnlyOnAuthority)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor"));

	struct
	{
		TScriptInterface<class UGameplayTaskOwnerInterface> TaskOwner;
		struct FVector                 SpawnLocation;
		struct FRotator                SpawnRotation;
		class UClass* /*AActor*/       Class;
		bool                           bSpawnOnlyOnAuthority;
		class UGameplayTask_SpawnActor* ReturnValue;
	} params = {};

	params.TaskOwner = TaskOwner;
	params.SpawnLocation = SpawnLocation;
	params.SpawnRotation = SpawnRotation;
	params.Class = Class;
	params.bSpawnOnlyOnAuthority = bSpawnOnlyOnAuthority;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  SpawnedActor                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGameplayTask_SpawnActor::FinishSpawningActor(class UObject* WorldContextObject, class AActor* SpawnedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor"));

	struct
	{
		class UObject*                 WorldContextObject;
		class AActor*                  SpawnedActor;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.SpawnedActor = SpawnedActor;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class AActor*                  SpawnedActor                   (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UGameplayTask_SpawnActor::BeginSpawningActor(class UObject* WorldContextObject, class AActor** SpawnedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor"));

	struct
	{
		class UObject*                 WorldContextObject;
		class AActor*                  SpawnedActor;
		bool                           ReturnValue;
	} params = {};

	params.WorldContextObject = WorldContextObject;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (SpawnedActor != nullptr)
		*SpawnedActor = params.SpawnedActor;

	return params.ReturnValue;
}


// Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TScriptInterface<class UGameplayTaskOwnerInterface> TaskOwner                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_UObjectWrapper, CPF_NativeAccessSpecifierPublic)
// float                          Time                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// unsigned char                  Priority                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// class UGameplayTask_WaitDelay* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UGameplayTask_WaitDelay* UGameplayTask_WaitDelay::TaskWaitDelay(const TScriptInterface<class UGameplayTaskOwnerInterface>& TaskOwner, float Time, unsigned char Priority)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay"));

	struct
	{
		TScriptInterface<class UGameplayTaskOwnerInterface> TaskOwner;
		float                          Time;
		unsigned char                  Priority;
		class UGameplayTask_WaitDelay* ReturnValue;
	} params = {};

	params.TaskOwner = TaskOwner;
	params.Time = Time;
	params.Priority = Priority;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// DelegateFunction GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature
// (FUNC_MulticastDelegate, FUNC_Public, FUNC_Delegate)

void UGameplayTask_WaitDelay::TaskDelayDelegate__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("DelegateFunction GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

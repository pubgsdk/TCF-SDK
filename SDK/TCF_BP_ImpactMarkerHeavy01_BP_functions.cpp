// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_BP_ImpactMarkerHeavy01_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ImpactMarkerHeavy01_BP.BP_ImpactMarkerHeavy01_BP_C.decalAnim__FinishedFunc
// (FUNC_BlueprintEvent)

void ABP_ImpactMarkerHeavy01_BP_C::decalAnim__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ImpactMarkerHeavy01_BP.BP_ImpactMarkerHeavy01_BP_C.decalAnim__FinishedFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_ImpactMarkerHeavy01_BP.BP_ImpactMarkerHeavy01_BP_C.decalAnim__UpdateFunc
// (FUNC_BlueprintEvent)

void ABP_ImpactMarkerHeavy01_BP_C::decalAnim__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ImpactMarkerHeavy01_BP.BP_ImpactMarkerHeavy01_BP_C.decalAnim__UpdateFunc");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_ImpactMarkerHeavy01_BP.BP_ImpactMarkerHeavy01_BP_C.BP_PlacementSize
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// float                          Radius                         (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ImpactMarkerHeavy01_BP_C::BP_PlacementSize(float Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ImpactMarkerHeavy01_BP.BP_ImpactMarkerHeavy01_BP_C.BP_PlacementSize");

	struct
	{
		float                          Radius;
	} params;

	params.Radius = Radius;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_ImpactMarkerHeavy01_BP.BP_ImpactMarkerHeavy01_BP_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Protected, FUNC_BlueprintEvent)

void ABP_ImpactMarkerHeavy01_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ImpactMarkerHeavy01_BP.BP_ImpactMarkerHeavy01_BP_C.ReceiveBeginPlay");

	struct
	{
	} params;


	UObject::ProcessEvent(fn, &params);
}


// Function BP_ImpactMarkerHeavy01_BP.BP_ImpactMarkerHeavy01_BP_C.OnComponentDeactivated_Event_1
// (FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UActorComponent*         Component                      (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ImpactMarkerHeavy01_BP_C::OnComponentDeactivated_Event_1(class UActorComponent* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ImpactMarkerHeavy01_BP.BP_ImpactMarkerHeavy01_BP_C.OnComponentDeactivated_Event_1");

	struct
	{
		class UActorComponent*         Component;
	} params;

	params.Component = Component;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_ImpactMarkerHeavy01_BP.BP_ImpactMarkerHeavy01_BP_C.BP_IsAvailable
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           isAvailable                    (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void ABP_ImpactMarkerHeavy01_BP_C::BP_IsAvailable(bool isAvailable)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ImpactMarkerHeavy01_BP.BP_ImpactMarkerHeavy01_BP_C.BP_IsAvailable");

	struct
	{
		bool                           isAvailable;
	} params;

	params.isAvailable = isAvailable;

	UObject::ProcessEvent(fn, &params);
}


// Function BP_ImpactMarkerHeavy01_BP.BP_ImpactMarkerHeavy01_BP_C.ExecuteUbergraph_BP_ImpactMarkerHeavy01_BP
// (FUNC_Final)
// Parameters:
// int                            EntryPoint                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void ABP_ImpactMarkerHeavy01_BP_C::ExecuteUbergraph_BP_ImpactMarkerHeavy01_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ImpactMarkerHeavy01_BP.BP_ImpactMarkerHeavy01_BP_C.ExecuteUbergraph_BP_ImpactMarkerHeavy01_BP");

	struct
	{
		int                            EntryPoint;
	} params;

	params.EntryPoint = EntryPoint;

	UObject::ProcessEvent(fn, &params);
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "MatchPhaseFunctionLibrary_BP_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MatchPhaseFunctionLibrary_BP.MatchPhaseFunctionLibrary_BP_C.GetVisualRowHandleFromVariations
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// TArray<struct FYMatchPhaseVisualVariation> Variations                     (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            VariationIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDataTableRowHandle     Visual_Definition              (CPF_Parm, CPF_OutParm, CPF_NoDestructor)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMatchPhaseFunctionLibrary_BP_C::GetVisualRowHandleFromVariations(int VariationIndex, class UObject* __WorldContext, TArray<struct FYMatchPhaseVisualVariation>* Variations, struct FDataTableRowHandle* Visual_Definition, bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseFunctionLibrary_BP.MatchPhaseFunctionLibrary_BP_C.GetVisualRowHandleFromVariations"));

	struct
	{
		TArray<struct FYMatchPhaseVisualVariation> Variations;
		int                            VariationIndex;
		class UObject*                 __WorldContext;
		struct FDataTableRowHandle     Visual_Definition;
		bool                           Result;
	} params = {};

	params.VariationIndex = VariationIndex;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (Variations != nullptr)
		*Variations = params.Variations;
	if (Visual_Definition != nullptr)
		*Visual_Definition = params.Visual_Definition;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function MatchPhaseFunctionLibrary_BP.MatchPhaseFunctionLibrary_BP_C.GetCurrentMatchPhaseVisualRow
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYMatchPhaseVisualRow   VisualRow                      (CPF_Parm, CPF_OutParm)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMatchPhaseFunctionLibrary_BP_C::GetCurrentMatchPhaseVisualRow(class UObject* WorldContextObject, class UObject* __WorldContext, struct FYMatchPhaseVisualRow* VisualRow, bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseFunctionLibrary_BP.MatchPhaseFunctionLibrary_BP_C.GetCurrentMatchPhaseVisualRow"));

	struct
	{
		class UObject*                 WorldContextObject;
		class UObject*                 __WorldContext;
		struct FYMatchPhaseVisualRow   VisualRow;
		bool                           Result;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (VisualRow != nullptr)
		*VisualRow = params.VisualRow;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function MatchPhaseFunctionLibrary_BP.MatchPhaseFunctionLibrary_BP_C.GetVisualRowFromDefinitionRowHandle
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FDataTableRowHandle     DefinitionRowHandle            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// int                            VariationIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYMatchPhaseVisualRow   VisualRow                      (CPF_Parm, CPF_OutParm)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMatchPhaseFunctionLibrary_BP_C::GetVisualRowFromDefinitionRowHandle(const struct FDataTableRowHandle& DefinitionRowHandle, int VariationIndex, class UObject* __WorldContext, struct FYMatchPhaseVisualRow* VisualRow, bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseFunctionLibrary_BP.MatchPhaseFunctionLibrary_BP_C.GetVisualRowFromDefinitionRowHandle"));

	struct
	{
		struct FDataTableRowHandle     DefinitionRowHandle;
		int                            VariationIndex;
		class UObject*                 __WorldContext;
		struct FYMatchPhaseVisualRow   VisualRow;
		bool                           Result;
	} params = {};

	params.DefinitionRowHandle = DefinitionRowHandle;
	params.VariationIndex = VariationIndex;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (VisualRow != nullptr)
		*VisualRow = params.VisualRow;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function MatchPhaseFunctionLibrary_BP.MatchPhaseFunctionLibrary_BP_C.GetVisualRowFromDefinitionRow
// (FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FYMatchPhaseDefinitionRow DefinitionRow                  (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// int                            VariationIndex                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYMatchPhaseVisualRow   VisualRow                      (CPF_Parm, CPF_OutParm)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMatchPhaseFunctionLibrary_BP_C::GetVisualRowFromDefinitionRow(const struct FYMatchPhaseDefinitionRow& DefinitionRow, int VariationIndex, class UObject* __WorldContext, struct FYMatchPhaseVisualRow* VisualRow, bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseFunctionLibrary_BP.MatchPhaseFunctionLibrary_BP_C.GetVisualRowFromDefinitionRow"));

	struct
	{
		struct FYMatchPhaseDefinitionRow DefinitionRow;
		int                            VariationIndex;
		class UObject*                 __WorldContext;
		struct FYMatchPhaseVisualRow   VisualRow;
		bool                           Result;
	} params = {};

	params.DefinitionRow = DefinitionRow;
	params.VariationIndex = VariationIndex;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (VisualRow != nullptr)
		*VisualRow = params.VisualRow;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function MatchPhaseFunctionLibrary_BP.MatchPhaseFunctionLibrary_BP_C.GetVisualRowHandleFromDefinitionRowHandle
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FDataTableRowHandle     DefinitionRowHandle            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// int                            visualVariationIndex           (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FDataTableRowHandle     VisualRowHandle                (CPF_Parm, CPF_OutParm, CPF_NoDestructor)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMatchPhaseFunctionLibrary_BP_C::GetVisualRowHandleFromDefinitionRowHandle(const struct FDataTableRowHandle& DefinitionRowHandle, int visualVariationIndex, class UObject* __WorldContext, struct FDataTableRowHandle* VisualRowHandle, bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseFunctionLibrary_BP.MatchPhaseFunctionLibrary_BP_C.GetVisualRowHandleFromDefinitionRowHandle"));

	struct
	{
		struct FDataTableRowHandle     DefinitionRowHandle;
		int                            visualVariationIndex;
		class UObject*                 __WorldContext;
		struct FDataTableRowHandle     VisualRowHandle;
		bool                           Result;
	} params = {};

	params.DefinitionRowHandle = DefinitionRowHandle;
	params.visualVariationIndex = visualVariationIndex;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (VisualRowHandle != nullptr)
		*VisualRowHandle = params.VisualRowHandle;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function MatchPhaseFunctionLibrary_BP.MatchPhaseFunctionLibrary_BP_C.GetCurrentMatchPhaseGameplayData
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYMatchPhaseGameplayRow GameplayRow                    (CPF_Parm, CPF_OutParm)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMatchPhaseFunctionLibrary_BP_C::GetCurrentMatchPhaseGameplayData(class UObject* WorldContextObject, class UObject* __WorldContext, struct FYMatchPhaseGameplayRow* GameplayRow, bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseFunctionLibrary_BP.MatchPhaseFunctionLibrary_BP_C.GetCurrentMatchPhaseGameplayData"));

	struct
	{
		class UObject*                 WorldContextObject;
		class UObject*                 __WorldContext;
		struct FYMatchPhaseGameplayRow GameplayRow;
		bool                           Result;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (GameplayRow != nullptr)
		*GameplayRow = params.GameplayRow;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function MatchPhaseFunctionLibrary_BP.MatchPhaseFunctionLibrary_BP_C.GetGameplayRowFromDefinitionRow
// (FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FYMatchPhaseDefinitionRow DefintionRow                   (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYMatchPhaseGameplayRow GameplayRow                    (CPF_Parm, CPF_OutParm)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMatchPhaseFunctionLibrary_BP_C::GetGameplayRowFromDefinitionRow(const struct FYMatchPhaseDefinitionRow& DefintionRow, class UObject* __WorldContext, struct FYMatchPhaseGameplayRow* GameplayRow, bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseFunctionLibrary_BP.MatchPhaseFunctionLibrary_BP_C.GetGameplayRowFromDefinitionRow"));

	struct
	{
		struct FYMatchPhaseDefinitionRow DefintionRow;
		class UObject*                 __WorldContext;
		struct FYMatchPhaseGameplayRow GameplayRow;
		bool                           Result;
	} params = {};

	params.DefintionRow = DefintionRow;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (GameplayRow != nullptr)
		*GameplayRow = params.GameplayRow;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function MatchPhaseFunctionLibrary_BP.MatchPhaseFunctionLibrary_BP_C.GetGameplayRowFromDefinitionRowHandle
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FDataTableRowHandle     DefinitionRowHandle            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYMatchPhaseGameplayRow GameplayRow                    (CPF_Parm, CPF_OutParm)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMatchPhaseFunctionLibrary_BP_C::GetGameplayRowFromDefinitionRowHandle(const struct FDataTableRowHandle& DefinitionRowHandle, class UObject* __WorldContext, struct FYMatchPhaseGameplayRow* GameplayRow, bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseFunctionLibrary_BP.MatchPhaseFunctionLibrary_BP_C.GetGameplayRowFromDefinitionRowHandle"));

	struct
	{
		struct FDataTableRowHandle     DefinitionRowHandle;
		class UObject*                 __WorldContext;
		struct FYMatchPhaseGameplayRow GameplayRow;
		bool                           Result;
	} params = {};

	params.DefinitionRowHandle = DefinitionRowHandle;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (GameplayRow != nullptr)
		*GameplayRow = params.GameplayRow;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function MatchPhaseFunctionLibrary_BP.MatchPhaseFunctionLibrary_BP_C.GetDefinitionRowFromDefinitionRowHandle
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// struct FDataTableRowHandle     DefinitionRowHandle            (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// struct FYMatchPhaseDefinitionRow DefinitionRow                  (CPF_Parm, CPF_OutParm)
// bool                           Result                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMatchPhaseFunctionLibrary_BP_C::GetDefinitionRowFromDefinitionRowHandle(const struct FDataTableRowHandle& DefinitionRowHandle, class UObject* __WorldContext, struct FYMatchPhaseDefinitionRow* DefinitionRow, bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseFunctionLibrary_BP.MatchPhaseFunctionLibrary_BP_C.GetDefinitionRowFromDefinitionRowHandle"));

	struct
	{
		struct FDataTableRowHandle     DefinitionRowHandle;
		class UObject*                 __WorldContext;
		struct FYMatchPhaseDefinitionRow DefinitionRow;
		bool                           Result;
	} params = {};

	params.DefinitionRowHandle = DefinitionRowHandle;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (DefinitionRow != nullptr)
		*DefinitionRow = params.DefinitionRow;
	if (Result != nullptr)
		*Result = params.Result;
}


// Function MatchPhaseFunctionLibrary_BP.MatchPhaseFunctionLibrary_BP_C.GetMatchPhaseDirectorComponent
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UMatchPhaseDirectorComponent_BP_C* MatchPhaseDirector             (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

void UMatchPhaseFunctionLibrary_BP_C::GetMatchPhaseDirectorComponent(class UObject* WorldContextObject, class UObject* __WorldContext, class UMatchPhaseDirectorComponent_BP_C** MatchPhaseDirector)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseFunctionLibrary_BP.MatchPhaseFunctionLibrary_BP_C.GetMatchPhaseDirectorComponent"));

	struct
	{
		class UObject*                 WorldContextObject;
		class UObject*                 __WorldContext;
		class UMatchPhaseDirectorComponent_BP_C* MatchPhaseDirector;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (MatchPhaseDirector != nullptr)
		*MatchPhaseDirector = params.MatchPhaseDirector;
}


// Function MatchPhaseFunctionLibrary_BP.MatchPhaseFunctionLibrary_BP_C.IsUsingNewMatchPhaseFlow
// (FUNC_Static, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable, FUNC_BlueprintEvent, FUNC_BlueprintPure)
// Parameters:
// class UObject*                 WorldContextObject             (CPF_ConstParm, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// class UObject*                 __WorldContext                 (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
// bool                           IsUsingNewMatchPhaseFlow       (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor)

void UMatchPhaseFunctionLibrary_BP_C::IsUsingNewMatchPhaseFlow(class UObject* WorldContextObject, class UObject* __WorldContext, bool* IsUsingNewMatchPhaseFlow)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function MatchPhaseFunctionLibrary_BP.MatchPhaseFunctionLibrary_BP_C.IsUsingNewMatchPhaseFlow"));

	struct
	{
		class UObject*                 WorldContextObject;
		class UObject*                 __WorldContext;
		bool                           IsUsingNewMatchPhaseFlow;
	} params = {};

	params.WorldContextObject = WorldContextObject;
	params.__WorldContext = __WorldContext;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	if (IsUsingNewMatchPhaseFlow != nullptr)
		*IsUsingNewMatchPhaseFlow = params.IsUsingNewMatchPhaseFlow;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

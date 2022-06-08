#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "WBP_FilterNavigation_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_FilterNavigation.WBP_FilterNavigation_C
// 0x00B4 (0x0384 - 0x02D0)
class UWBP_FilterNavigation_C : public UYWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_DuplicateTransient)
	class UVerticalBox*                                FilterHolder_vBox;                                        // 0x02D8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_NoDestructor, CPF_PersistentInstance, CPF_HasGetValueTypeHash)
	TArray<EYItemType>                                 TypeToFilterFor;                                          // 0x02E0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FMulticastScriptDelegate                    OnFilterClicked;                                          // 0x02F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable, CPF_BlueprintCallable)
	class UWBP_Filter_Btn_C*                           SelectedButton;                                           // 0x0300(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	int                                                DefaultSelectedFilterIndex;                               // 0x0308(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)
	unsigned char                                      UnknownData00[0x4];                                       // 0x030C(0x0004) MISSED OFFSET
	TMap<struct FString, struct FStucture_FilterCollection> FilterToCollection;                                       // 0x0310(0x0050) (CPF_Edit, CPF_BlueprintVisible)
	struct FString                                     InitialFilter;                                            // 0x0360(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_HasGetValueTypeHash)
	struct FString                                     FilterCreated;                                            // 0x0370(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_HasGetValueTypeHash)
	int                                                SelectedOptionIndex;                                      // 0x0380(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>(_xor_("WidgetBlueprintGeneratedClass WBP_FilterNavigation.WBP_FilterNavigation_C"));
		return ptr;
	}


	void GetActiveFilterSetup(struct FStucture_FilterData* filterSetup);
	void GetFilterState(TEnumAsByte<En_FilterCategoryCollection>* FilterEnum, struct FYFilterCategoriesDataEntry* FilterCategories);
	struct FYFilterCategoriesDataEntry GetFilterActiveCategories();
	TEnumAsByte<En_FilterCategoryCollection> GetFilterActiveCategory();
	void SetSelectedFilterByIndex(int Index, bool TriggerSelectedCallback);
	void SetSelectedFilterByButton(class UWBP_Filter_Btn_C* FilterButton, bool TriggerSelectedCallback);
	void SetFilterSelection(const struct FString& Selection, int SelectedOption, bool TriggerSelectedCallback, bool* returnResult);
	void CreateFilterFromArray(int SelectedOption, bool TriggerSelectedCallback, const struct FString& FilterCollectionId, TArray<struct FStucture_FilterData>* InFilters);
	void CreateFilter(const struct FStucture_FilterData& Content, bool IsSelected, bool TriggerSelectedCallback);
	void PreConstruct(bool IsDesignTime);
	void OnFilterButtonClicked(class UWBP_Filter_Btn_C* Button);
	void ResetToDefault();
	void ExecuteUbergraph_WBP_FilterNavigation(int EntryPoint);
	void OnFilterClicked__DelegateSignature(const struct FYFilterCategoriesDataEntry& Categories, TEnumAsByte<En_FilterCategoryCollection> ReturnValue);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

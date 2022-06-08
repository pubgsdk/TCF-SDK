// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ControlRig_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ControlRig.ControlRig.SetInteractionRigClass
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UClass* /*UControlRig*/  InInteractionRigClass          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UControlRig::SetInteractionRigClass(class UClass* /*UControlRig*/ InInteractionRigClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRig.SetInteractionRigClass"));

	struct
	{
		class UClass* /*UControlRig*/  InInteractionRigClass;
	} params = {};

	params.InInteractionRigClass = InInteractionRigClass;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ControlRig.ControlRig.SetInteractionRig
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UControlRig*             InInteractionRig               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UControlRig::SetInteractionRig(class UControlRig* InInteractionRig)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRig.SetInteractionRig"));

	struct
	{
		class UControlRig*             InInteractionRig;
	} params = {};

	params.InInteractionRig = InInteractionRig;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ControlRig.ControlRig.GetInteractionRigClass
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UClass* /*UControlRig*/  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UClass* /*UControlRig*/ UControlRig::GetInteractionRigClass()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRig.GetInteractionRigClass"));

	struct
	{
		class UClass* /*UControlRig*/  ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ControlRig.ControlRig.GetInteractionRig
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// class UControlRig*             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UControlRig* UControlRig::GetInteractionRig()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRig.GetInteractionRig"));

	struct
	{
		class UControlRig*             ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ControlRig.ControlRigComponent.Update
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UControlRigComponent::Update(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigComponent.Update"));

	struct
	{
		float                          DeltaTime;
	} params = {};

	params.DeltaTime = DeltaTime;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ControlRig.ControlRigComponent.SetMappedElements
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FControlRigComponentMappedElement> NewMappedElements              (CPF_Parm, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

void UControlRigComponent::SetMappedElements(TArray<struct FControlRigComponentMappedElement> NewMappedElements)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigComponent.SetMappedElements"));

	struct
	{
		TArray<struct FControlRigComponentMappedElement> NewMappedElements;
	} params = {};

	params.NewMappedElements = NewMappedElements;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ControlRig.ControlRigComponent.SetInitialSpaceTransform
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   SpaceName                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FTransform              InitialTransform               (CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// EControlRigComponentSpace      Space                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UControlRigComponent::SetInitialSpaceTransform(const struct FName& SpaceName, const struct FTransform& InitialTransform, EControlRigComponentSpace Space)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigComponent.SetInitialSpaceTransform"));

	struct
	{
		struct FName                   SpaceName;
		struct FTransform              InitialTransform;
		EControlRigComponentSpace      Space;
	} params = {};

	params.SpaceName = SpaceName;
	params.InitialTransform = InitialTransform;
	params.Space = Space;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ControlRig.ControlRigComponent.SetInitialBoneTransform
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   BoneName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FTransform              InitialTransform               (CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// EControlRigComponentSpace      Space                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bPropagateToChildren           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UControlRigComponent::SetInitialBoneTransform(const struct FName& BoneName, const struct FTransform& InitialTransform, EControlRigComponentSpace Space, bool bPropagateToChildren)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigComponent.SetInitialBoneTransform"));

	struct
	{
		struct FName                   BoneName;
		struct FTransform              InitialTransform;
		EControlRigComponentSpace      Space;
		bool                           bPropagateToChildren;
	} params = {};

	params.BoneName = BoneName;
	params.InitialTransform = InitialTransform;
	params.Space = Space;
	params.bPropagateToChildren = bPropagateToChildren;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ControlRig.ControlRigComponent.SetControlVector2D
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   ControlName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UControlRigComponent::SetControlVector2D(const struct FName& ControlName, const struct FVector2D& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigComponent.SetControlVector2D"));

	struct
	{
		struct FName                   ControlName;
		struct FVector2D               Value;
	} params = {};

	params.ControlName = ControlName;
	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ControlRig.ControlRigComponent.SetControlTransform
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   ControlName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FTransform              Value                          (CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// EControlRigComponentSpace      Space                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UControlRigComponent::SetControlTransform(const struct FName& ControlName, const struct FTransform& Value, EControlRigComponentSpace Space)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigComponent.SetControlTransform"));

	struct
	{
		struct FName                   ControlName;
		struct FTransform              Value;
		EControlRigComponentSpace      Space;
	} params = {};

	params.ControlName = ControlName;
	params.Value = Value;
	params.Space = Space;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ControlRig.ControlRigComponent.SetControlScale
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   ControlName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EControlRigComponentSpace      Space                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UControlRigComponent::SetControlScale(const struct FName& ControlName, const struct FVector& Value, EControlRigComponentSpace Space)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigComponent.SetControlScale"));

	struct
	{
		struct FName                   ControlName;
		struct FVector                 Value;
		EControlRigComponentSpace      Space;
	} params = {};

	params.ControlName = ControlName;
	params.Value = Value;
	params.Space = Space;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ControlRig.ControlRigComponent.SetControlRotator
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   ControlName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// EControlRigComponentSpace      Space                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UControlRigComponent::SetControlRotator(const struct FName& ControlName, const struct FRotator& Value, EControlRigComponentSpace Space)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigComponent.SetControlRotator"));

	struct
	{
		struct FName                   ControlName;
		struct FRotator                Value;
		EControlRigComponentSpace      Space;
	} params = {};

	params.ControlName = ControlName;
	params.Value = Value;
	params.Space = Space;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ControlRig.ControlRigComponent.SetControlPosition
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   ControlName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EControlRigComponentSpace      Space                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UControlRigComponent::SetControlPosition(const struct FName& ControlName, const struct FVector& Value, EControlRigComponentSpace Space)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigComponent.SetControlPosition"));

	struct
	{
		struct FName                   ControlName;
		struct FVector                 Value;
		EControlRigComponentSpace      Space;
	} params = {};

	params.ControlName = ControlName;
	params.Value = Value;
	params.Space = Space;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ControlRig.ControlRigComponent.SetControlOffset
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   ControlName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FTransform              OffsetTransform                (CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// EControlRigComponentSpace      Space                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UControlRigComponent::SetControlOffset(const struct FName& ControlName, const struct FTransform& OffsetTransform, EControlRigComponentSpace Space)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigComponent.SetControlOffset"));

	struct
	{
		struct FName                   ControlName;
		struct FTransform              OffsetTransform;
		EControlRigComponentSpace      Space;
	} params = {};

	params.ControlName = ControlName;
	params.OffsetTransform = OffsetTransform;
	params.Space = Space;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ControlRig.ControlRigComponent.SetControlInt
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   ControlName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UControlRigComponent::SetControlInt(const struct FName& ControlName, int Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigComponent.SetControlInt"));

	struct
	{
		struct FName                   ControlName;
		int                            Value;
	} params = {};

	params.ControlName = ControlName;
	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ControlRig.ControlRigComponent.SetControlFloat
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   ControlName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UControlRigComponent::SetControlFloat(const struct FName& ControlName, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigComponent.SetControlFloat"));

	struct
	{
		struct FName                   ControlName;
		float                          Value;
	} params = {};

	params.ControlName = ControlName;
	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ControlRig.ControlRigComponent.SetControlBool
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   ControlName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           Value                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UControlRigComponent::SetControlBool(const struct FName& ControlName, bool Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigComponent.SetControlBool"));

	struct
	{
		struct FName                   ControlName;
		bool                           Value;
	} params = {};

	params.ControlName = ControlName;
	params.Value = Value;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ControlRig.ControlRigComponent.SetBoneTransform
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   BoneName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FTransform              Transform                      (CPF_Parm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// EControlRigComponentSpace      Space                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          weight                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bPropagateToChildren           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UControlRigComponent::SetBoneTransform(const struct FName& BoneName, const struct FTransform& Transform, EControlRigComponentSpace Space, float weight, bool bPropagateToChildren)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigComponent.SetBoneTransform"));

	struct
	{
		struct FName                   BoneName;
		struct FTransform              Transform;
		EControlRigComponentSpace      Space;
		float                          weight;
		bool                           bPropagateToChildren;
	} params = {};

	params.BoneName = BoneName;
	params.Transform = Transform;
	params.Space = Space;
	params.weight = weight;
	params.bPropagateToChildren = bPropagateToChildren;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ControlRig.ControlRigComponent.SetBoneInitialTransformsFromSkeletalMesh
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USkeletalMesh*           InSkeletalMesh                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UControlRigComponent::SetBoneInitialTransformsFromSkeletalMesh(class USkeletalMesh* InSkeletalMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigComponent.SetBoneInitialTransformsFromSkeletalMesh"));

	struct
	{
		class USkeletalMesh*           InSkeletalMesh;
	} params = {};

	params.InSkeletalMesh = InSkeletalMesh;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ControlRig.ControlRigComponent.OnPreUpdate
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UControlRigComponent*    Component                      (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UControlRigComponent::OnPreUpdate(class UControlRigComponent* Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigComponent.OnPreUpdate"));

	struct
	{
		class UControlRigComponent*    Component;
	} params = {};

	params.Component = Component;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ControlRig.ControlRigComponent.OnPreSetup
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UControlRigComponent*    Component                      (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UControlRigComponent::OnPreSetup(class UControlRigComponent* Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigComponent.OnPreSetup"));

	struct
	{
		class UControlRigComponent*    Component;
	} params = {};

	params.Component = Component;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ControlRig.ControlRigComponent.OnPostUpdate
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UControlRigComponent*    Component                      (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UControlRigComponent::OnPostUpdate(class UControlRigComponent* Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigComponent.OnPostUpdate"));

	struct
	{
		class UControlRigComponent*    Component;
	} params = {};

	params.Component = Component;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ControlRig.ControlRigComponent.OnPostSetup
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UControlRigComponent*    Component                      (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UControlRigComponent::OnPostSetup(class UControlRigComponent* Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigComponent.OnPostSetup"));

	struct
	{
		class UControlRigComponent*    Component;
	} params = {};

	params.Component = Component;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ControlRig.ControlRigComponent.OnPostInitialize
// (FUNC_Native, FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// class UControlRigComponent*    Component                      (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UControlRigComponent::OnPostInitialize(class UControlRigComponent* Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigComponent.OnPostInitialize"));

	struct
	{
		class UControlRigComponent*    Component;
	} params = {};

	params.Component = Component;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ControlRig.ControlRigComponent.Initialize
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UControlRigComponent::Initialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigComponent.Initialize"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ControlRig.ControlRigComponent.GetSpaceTransform
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FName                   SpaceName                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EControlRigComponentSpace      Space                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FTransform UControlRigComponent::GetSpaceTransform(const struct FName& SpaceName, EControlRigComponentSpace Space)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigComponent.GetSpaceTransform"));

	struct
	{
		struct FName                   SpaceName;
		EControlRigComponentSpace      Space;
		struct FTransform              ReturnValue;
	} params = {};

	params.SpaceName = SpaceName;
	params.Space = Space;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ControlRig.ControlRigComponent.GetInitialSpaceTransform
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FName                   SpaceName                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EControlRigComponentSpace      Space                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FTransform UControlRigComponent::GetInitialSpaceTransform(const struct FName& SpaceName, EControlRigComponentSpace Space)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigComponent.GetInitialSpaceTransform"));

	struct
	{
		struct FName                   SpaceName;
		EControlRigComponentSpace      Space;
		struct FTransform              ReturnValue;
	} params = {};

	params.SpaceName = SpaceName;
	params.Space = Space;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ControlRig.ControlRigComponent.GetInitialBoneTransform
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FName                   BoneName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EControlRigComponentSpace      Space                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FTransform UControlRigComponent::GetInitialBoneTransform(const struct FName& BoneName, EControlRigComponentSpace Space)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigComponent.GetInitialBoneTransform"));

	struct
	{
		struct FName                   BoneName;
		EControlRigComponentSpace      Space;
		struct FTransform              ReturnValue;
	} params = {};

	params.BoneName = BoneName;
	params.Space = Space;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ControlRig.ControlRigComponent.GetElementNames
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// ERigElementType                ElementType                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FName>           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<struct FName> UControlRigComponent::GetElementNames(ERigElementType ElementType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigComponent.GetElementNames"));

	struct
	{
		ERigElementType                ElementType;
		TArray<struct FName>           ReturnValue;
	} params = {};

	params.ElementType = ElementType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ControlRig.ControlRigComponent.GetControlVector2D
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FName                   ControlName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVector2D UControlRigComponent::GetControlVector2D(const struct FName& ControlName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigComponent.GetControlVector2D"));

	struct
	{
		struct FName                   ControlName;
		struct FVector2D               ReturnValue;
	} params = {};

	params.ControlName = ControlName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ControlRig.ControlRigComponent.GetControlTransform
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FName                   ControlName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EControlRigComponentSpace      Space                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FTransform UControlRigComponent::GetControlTransform(const struct FName& ControlName, EControlRigComponentSpace Space)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigComponent.GetControlTransform"));

	struct
	{
		struct FName                   ControlName;
		EControlRigComponentSpace      Space;
		struct FTransform              ReturnValue;
	} params = {};

	params.ControlName = ControlName;
	params.Space = Space;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ControlRig.ControlRigComponent.GetControlScale
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FName                   ControlName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EControlRigComponentSpace      Space                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVector UControlRigComponent::GetControlScale(const struct FName& ControlName, EControlRigComponentSpace Space)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigComponent.GetControlScale"));

	struct
	{
		struct FName                   ControlName;
		EControlRigComponentSpace      Space;
		struct FVector                 ReturnValue;
	} params = {};

	params.ControlName = ControlName;
	params.Space = Space;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ControlRig.ControlRigComponent.GetControlRotator
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FName                   ControlName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EControlRigComponentSpace      Space                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FRotator                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FRotator UControlRigComponent::GetControlRotator(const struct FName& ControlName, EControlRigComponentSpace Space)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigComponent.GetControlRotator"));

	struct
	{
		struct FName                   ControlName;
		EControlRigComponentSpace      Space;
		struct FRotator                ReturnValue;
	} params = {};

	params.ControlName = ControlName;
	params.Space = Space;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ControlRig.ControlRigComponent.GetControlRig
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// class UControlRig*             ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

class UControlRig* UControlRigComponent::GetControlRig()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigComponent.GetControlRig"));

	struct
	{
		class UControlRig*             ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ControlRig.ControlRigComponent.GetControlPosition
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FName                   ControlName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EControlRigComponentSpace      Space                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVector UControlRigComponent::GetControlPosition(const struct FName& ControlName, EControlRigComponentSpace Space)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigComponent.GetControlPosition"));

	struct
	{
		struct FName                   ControlName;
		EControlRigComponentSpace      Space;
		struct FVector                 ReturnValue;
	} params = {};

	params.ControlName = ControlName;
	params.Space = Space;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ControlRig.ControlRigComponent.GetControlOffset
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FName                   ControlName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EControlRigComponentSpace      Space                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FTransform UControlRigComponent::GetControlOffset(const struct FName& ControlName, EControlRigComponentSpace Space)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigComponent.GetControlOffset"));

	struct
	{
		struct FName                   ControlName;
		EControlRigComponentSpace      Space;
		struct FTransform              ReturnValue;
	} params = {};

	params.ControlName = ControlName;
	params.Space = Space;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ControlRig.ControlRigComponent.GetControlInt
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FName                   ControlName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int UControlRigComponent::GetControlInt(const struct FName& ControlName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigComponent.GetControlInt"));

	struct
	{
		struct FName                   ControlName;
		int                            ReturnValue;
	} params = {};

	params.ControlName = ControlName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ControlRig.ControlRigComponent.GetControlFloat
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FName                   ControlName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UControlRigComponent::GetControlFloat(const struct FName& ControlName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigComponent.GetControlFloat"));

	struct
	{
		struct FName                   ControlName;
		float                          ReturnValue;
	} params = {};

	params.ControlName = ControlName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ControlRig.ControlRigComponent.GetControlBool
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FName                   ControlName                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UControlRigComponent::GetControlBool(const struct FName& ControlName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigComponent.GetControlBool"));

	struct
	{
		struct FName                   ControlName;
		bool                           ReturnValue;
	} params = {};

	params.ControlName = ControlName;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ControlRig.ControlRigComponent.GetBoneTransform
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FName                   BoneName                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EControlRigComponentSpace      Space                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FTransform UControlRigComponent::GetBoneTransform(const struct FName& BoneName, EControlRigComponentSpace Space)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigComponent.GetBoneTransform"));

	struct
	{
		struct FName                   BoneName;
		EControlRigComponentSpace      Space;
		struct FTransform              ReturnValue;
	} params = {};

	params.BoneName = BoneName;
	params.Space = Space;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ControlRig.ControlRigComponent.GetAbsoluteTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UControlRigComponent::GetAbsoluteTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigComponent.GetAbsoluteTime"));

	struct
	{
		float                          ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ControlRig.ControlRigComponent.DoesElementExist
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure)
// Parameters:
// struct FName                   Name                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ERigElementType                ElementType                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UControlRigComponent::DoesElementExist(const struct FName& Name, ERigElementType ElementType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigComponent.DoesElementExist"));

	struct
	{
		struct FName                   Name;
		ERigElementType                ElementType;
		bool                           ReturnValue;
	} params = {};

	params.Name = Name;
	params.ElementType = ElementType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function ControlRig.ControlRigComponent.ClearMappedElements
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void UControlRigComponent::ClearMappedElements()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigComponent.ClearMappedElements"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ControlRig.ControlRigComponent.AddMappedSkeletalMesh
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMeshComponent          (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FControlRigComponentMappedBone> Bones                          (CPF_Parm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
// TArray<struct FControlRigComponentMappedCurve> Curves                         (CPF_Parm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void UControlRigComponent::AddMappedSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<struct FControlRigComponentMappedBone> Bones, TArray<struct FControlRigComponentMappedCurve> Curves)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigComponent.AddMappedSkeletalMesh"));

	struct
	{
		class USkeletalMeshComponent*  SkeletalMeshComponent;
		TArray<struct FControlRigComponentMappedBone> Bones;
		TArray<struct FControlRigComponentMappedCurve> Curves;
	} params = {};

	params.SkeletalMeshComponent = SkeletalMeshComponent;
	params.Bones = Bones;
	params.Curves = Curves;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ControlRig.ControlRigComponent.AddMappedElements
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FControlRigComponentMappedElement> NewMappedElements              (CPF_Parm, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

void UControlRigComponent::AddMappedElements(TArray<struct FControlRigComponentMappedElement> NewMappedElements)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigComponent.AddMappedElements"));

	struct
	{
		TArray<struct FControlRigComponentMappedElement> NewMappedElements;
	} params = {};

	params.NewMappedElements = NewMappedElements;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ControlRig.ControlRigComponent.AddMappedComponents
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// TArray<struct FControlRigComponentMappedComponent> Components                     (CPF_Parm, CPF_ZeroConstructor, CPF_ContainsInstancedReference, CPF_NativeAccessSpecifierPublic)

void UControlRigComponent::AddMappedComponents(TArray<struct FControlRigComponentMappedComponent> Components)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigComponent.AddMappedComponents"));

	struct
	{
		TArray<struct FControlRigComponentMappedComponent> Components;
	} params = {};

	params.Components = Components;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ControlRig.ControlRigComponent.AddMappedCompleteSkeletalMesh
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMeshComponent          (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UControlRigComponent::AddMappedCompleteSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigComponent.AddMappedCompleteSkeletalMesh"));

	struct
	{
		class USkeletalMeshComponent*  SkeletalMeshComponent;
	} params = {};

	params.SkeletalMeshComponent = SkeletalMeshComponent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ControlRig.ControlRigControlActor.Refresh
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AControlRigControlActor::Refresh()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigControlActor.Refresh"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ControlRig.ControlRigControlActor.Clear
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void AControlRigControlActor::Clear()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigControlActor.Clear"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ControlRig.ControlRigGizmoActor.SetSelected
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bInSelected                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AControlRigGizmoActor::SetSelected(bool bInSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigGizmoActor.SetSelected"));

	struct
	{
		bool                           bInSelected;
	} params = {};

	params.bInSelected = bInSelected;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ControlRig.ControlRigGizmoActor.SetSelectable
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bInSelectable                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AControlRigGizmoActor::SetSelectable(bool bInSelectable)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigGizmoActor.SetSelectable"));

	struct
	{
		bool                           bInSelectable;
	} params = {};

	params.bInSelectable = bInSelectable;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ControlRig.ControlRigGizmoActor.SetHovered
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bInHovered                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AControlRigGizmoActor::SetHovered(bool bInHovered)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigGizmoActor.SetHovered"));

	struct
	{
		bool                           bInHovered;
	} params = {};

	params.bInHovered = bInHovered;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ControlRig.ControlRigGizmoActor.SetGlobalTransform
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FTransform              InTransform                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void AControlRigGizmoActor::SetGlobalTransform(const struct FTransform& InTransform)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigGizmoActor.SetGlobalTransform"));

	struct
	{
		struct FTransform              InTransform;
	} params = {};

	params.InTransform = InTransform;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ControlRig.ControlRigGizmoActor.SetEnabled
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bInEnabled                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AControlRigGizmoActor::SetEnabled(bool bInEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigGizmoActor.SetEnabled"));

	struct
	{
		bool                           bInEnabled;
	} params = {};

	params.bInEnabled = bInEnabled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ControlRig.ControlRigGizmoActor.OnTransformChanged
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults, FUNC_BlueprintEvent)
// Parameters:
// struct FTransform              NewTransform                   (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void AControlRigGizmoActor::OnTransformChanged(const struct FTransform& NewTransform)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigGizmoActor.OnTransformChanged"));

	struct
	{
		struct FTransform              NewTransform;
	} params = {};

	params.NewTransform = NewTransform;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ControlRig.ControlRigGizmoActor.OnSelectionChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsSelected                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AControlRigGizmoActor::OnSelectionChanged(bool bIsSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigGizmoActor.OnSelectionChanged"));

	struct
	{
		bool                           bIsSelected;
	} params = {};

	params.bIsSelected = bIsSelected;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ControlRig.ControlRigGizmoActor.OnManipulatingChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsManipulating                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AControlRigGizmoActor::OnManipulatingChanged(bool bIsManipulating)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigGizmoActor.OnManipulatingChanged"));

	struct
	{
		bool                           bIsManipulating;
	} params = {};

	params.bIsManipulating = bIsManipulating;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ControlRig.ControlRigGizmoActor.OnHoveredChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsSelected                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AControlRigGizmoActor::OnHoveredChanged(bool bIsSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigGizmoActor.OnHoveredChanged"));

	struct
	{
		bool                           bIsSelected;
	} params = {};

	params.bIsSelected = bIsSelected;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ControlRig.ControlRigGizmoActor.OnEnabledChanged
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)
// Parameters:
// bool                           bIsEnabled                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void AControlRigGizmoActor::OnEnabledChanged(bool bIsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigGizmoActor.OnEnabledChanged"));

	struct
	{
		bool                           bIsEnabled;
	} params = {};

	params.bIsEnabled = bIsEnabled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function ControlRig.ControlRigGizmoActor.IsSelectedInEditor
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool AControlRigGizmoActor::IsSelectedInEditor()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigGizmoActor.IsSelectedInEditor"));

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


// Function ControlRig.ControlRigGizmoActor.IsHovered
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool AControlRigGizmoActor::IsHovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigGizmoActor.IsHovered"));

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


// Function ControlRig.ControlRigGizmoActor.IsEnabled
// (FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool AControlRigGizmoActor::IsEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigGizmoActor.IsEnabled"));

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


// Function ControlRig.ControlRigGizmoActor.GetGlobalTransform
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FTransform              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FTransform AControlRigGizmoActor::GetGlobalTransform()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function ControlRig.ControlRigGizmoActor.GetGlobalTransform"));

	struct
	{
		struct FTransform              ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

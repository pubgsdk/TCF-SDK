// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "Synthesis_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Synthesis.ModularSynthLibrary.AddModularSynthPresetToBankAsset
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// class UModularSynthPresetBank* InBank                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FModularSynthPreset     Preset                         (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// struct FString                 PresetName                     (CPF_Parm, CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthLibrary::AddModularSynthPresetToBankAsset(class UModularSynthPresetBank* InBank, const struct FModularSynthPreset& Preset, const struct FString& PresetName)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthLibrary.AddModularSynthPresetToBankAsset"));

	struct
	{
		class UModularSynthPresetBank* InBank;
		struct FModularSynthPreset     Preset;
		struct FString                 PresetName;
	} params = {};

	params.InBank = InBank;
	params.Preset = Preset;
	params.PresetName = PresetName;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetSynthPreset
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FModularSynthPreset     SynthPreset                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetSynthPreset(const struct FModularSynthPreset& SynthPreset)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetSynthPreset"));

	struct
	{
		struct FModularSynthPreset     SynthPreset;
	} params = {};

	params.SynthPreset = SynthPreset;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetSustainGain
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          SustainGain                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetSustainGain(float SustainGain)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetSustainGain"));

	struct
	{
		float                          SustainGain;
	} params = {};

	params.SustainGain = SustainGain;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetStereoDelayWetlevel
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          DelayWetlevel                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetStereoDelayWetlevel(float DelayWetlevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetStereoDelayWetlevel"));

	struct
	{
		float                          DelayWetlevel;
	} params = {};

	params.DelayWetlevel = DelayWetlevel;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetStereoDelayTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          DelayTimeMsec                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetStereoDelayTime(float DelayTimeMsec)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetStereoDelayTime"));

	struct
	{
		float                          DelayTimeMsec;
	} params = {};

	params.DelayTimeMsec = DelayTimeMsec;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetStereoDelayRatio
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          DelayRatio                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetStereoDelayRatio(float DelayRatio)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetStereoDelayRatio"));

	struct
	{
		float                          DelayRatio;
	} params = {};

	params.DelayRatio = DelayRatio;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetStereoDelayMode
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// ESynthStereoDelayMode          StereoDelayMode                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetStereoDelayMode(ESynthStereoDelayMode StereoDelayMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetStereoDelayMode"));

	struct
	{
		ESynthStereoDelayMode          StereoDelayMode;
	} params = {};

	params.StereoDelayMode = StereoDelayMode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           StereoDelayEnabled             (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetStereoDelayIsEnabled(bool StereoDelayEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled"));

	struct
	{
		bool                           StereoDelayEnabled;
	} params = {};

	params.StereoDelayEnabled = StereoDelayEnabled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetStereoDelayFeedback
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          DelayFeedback                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetStereoDelayFeedback(float DelayFeedback)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetStereoDelayFeedback"));

	struct
	{
		float                          DelayFeedback;
	} params = {};

	params.DelayFeedback = DelayFeedback;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetSpread
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Spread                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetSpread(float Spread)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetSpread"));

	struct
	{
		float                          Spread;
	} params = {};

	params.Spread = Spread;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetReleaseTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          ReleaseTimeMsec                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetReleaseTime(float ReleaseTimeMsec)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetReleaseTime"));

	struct
	{
		float                          ReleaseTimeMsec;
	} params = {};

	params.ReleaseTimeMsec = ReleaseTimeMsec;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetPortamento
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Portamento                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetPortamento(float Portamento)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetPortamento"));

	struct
	{
		float                          Portamento;
	} params = {};

	params.Portamento = Portamento;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetPitchBend
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          PitchBend                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetPitchBend(float PitchBend)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetPitchBend"));

	struct
	{
		float                          PitchBend;
	} params = {};

	params.PitchBend = PitchBend;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetPan
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Pan                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetPan(float Pan)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetPan"));

	struct
	{
		float                          Pan;
	} params = {};

	params.Pan = Pan;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetOscType
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            OscIndex                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ESynth1OscType                 OscType                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetOscType(int OscIndex, ESynth1OscType OscType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetOscType"));

	struct
	{
		int                            OscIndex;
		ESynth1OscType                 OscType;
	} params = {};

	params.OscIndex = OscIndex;
	params.OscType = OscType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetOscSync
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bIsSynced                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetOscSync(bool bIsSynced)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetOscSync"));

	struct
	{
		bool                           bIsSynced;
	} params = {};

	params.bIsSynced = bIsSynced;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetOscSemitones
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            OscIndex                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Semitones                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetOscSemitones(int OscIndex, float Semitones)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetOscSemitones"));

	struct
	{
		int                            OscIndex;
		float                          Semitones;
	} params = {};

	params.OscIndex = OscIndex;
	params.Semitones = Semitones;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetOscPulsewidth
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            OscIndex                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Pulsewidth                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetOscPulsewidth(int OscIndex, float Pulsewidth)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetOscPulsewidth"));

	struct
	{
		int                            OscIndex;
		float                          Pulsewidth;
	} params = {};

	params.OscIndex = OscIndex;
	params.Pulsewidth = Pulsewidth;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetOscOctave
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            OscIndex                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Octave                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetOscOctave(int OscIndex, float Octave)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetOscOctave"));

	struct
	{
		int                            OscIndex;
		float                          Octave;
	} params = {};

	params.OscIndex = OscIndex;
	params.Octave = Octave;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetOscGainMod
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            OscIndex                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          OscGainMod                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetOscGainMod(int OscIndex, float OscGainMod)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetOscGainMod"));

	struct
	{
		int                            OscIndex;
		float                          OscGainMod;
	} params = {};

	params.OscIndex = OscIndex;
	params.OscGainMod = OscGainMod;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetOscGain
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            OscIndex                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          OscGain                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetOscGain(int OscIndex, float OscGain)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetOscGain"));

	struct
	{
		int                            OscIndex;
		float                          OscGain;
	} params = {};

	params.OscIndex = OscIndex;
	params.OscGain = OscGain;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetOscFrequencyMod
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            OscIndex                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          OscFreqMod                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetOscFrequencyMod(int OscIndex, float OscFreqMod)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetOscFrequencyMod"));

	struct
	{
		int                            OscIndex;
		float                          OscFreqMod;
	} params = {};

	params.OscIndex = OscIndex;
	params.OscFreqMod = OscFreqMod;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetOscCents
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            OscIndex                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Cents                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetOscCents(int OscIndex, float Cents)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetOscCents"));

	struct
	{
		int                            OscIndex;
		float                          Cents;
	} params = {};

	params.OscIndex = OscIndex;
	params.Cents = Cents;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetModEnvSustainGain
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          SustainGain                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetModEnvSustainGain(float SustainGain)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetModEnvSustainGain"));

	struct
	{
		float                          SustainGain;
	} params = {};

	params.SustainGain = SustainGain;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetModEnvReleaseTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Release                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetModEnvReleaseTime(float Release)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetModEnvReleaseTime"));

	struct
	{
		float                          Release;
	} params = {};

	params.Release = Release;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetModEnvPatch
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// ESynthModEnvPatch              InPatchType                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetModEnvPatch(ESynthModEnvPatch InPatchType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetModEnvPatch"));

	struct
	{
		ESynthModEnvPatch              InPatchType;
	} params = {};

	params.InPatchType = InPatchType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetModEnvInvert
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bInvert                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetModEnvInvert(bool bInvert)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetModEnvInvert"));

	struct
	{
		bool                           bInvert;
	} params = {};

	params.bInvert = bInvert;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetModEnvDepth
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Depth                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetModEnvDepth(float Depth)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetModEnvDepth"));

	struct
	{
		float                          Depth;
	} params = {};

	params.Depth = Depth;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetModEnvDecayTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          DecayTimeMsec                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetModEnvDecayTime(float DecayTimeMsec)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetModEnvDecayTime"));

	struct
	{
		float                          DecayTimeMsec;
	} params = {};

	params.DecayTimeMsec = DecayTimeMsec;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetModEnvBiasPatch
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// ESynthModEnvBiasPatch          InPatchType                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetModEnvBiasPatch(ESynthModEnvBiasPatch InPatchType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetModEnvBiasPatch"));

	struct
	{
		ESynthModEnvBiasPatch          InPatchType;
	} params = {};

	params.InPatchType = InPatchType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetModEnvBiasInvert
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bInvert                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetModEnvBiasInvert(bool bInvert)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetModEnvBiasInvert"));

	struct
	{
		bool                           bInvert;
	} params = {};

	params.bInvert = bInvert;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetModEnvAttackTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          AttackTimeMsec                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetModEnvAttackTime(float AttackTimeMsec)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetModEnvAttackTime"));

	struct
	{
		float                          AttackTimeMsec;
	} params = {};

	params.AttackTimeMsec = AttackTimeMsec;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetLFOType
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            LFOIndex                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ESynthLFOType                  LFOType                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetLFOType(int LFOIndex, ESynthLFOType LFOType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetLFOType"));

	struct
	{
		int                            LFOIndex;
		ESynthLFOType                  LFOType;
	} params = {};

	params.LFOIndex = LFOIndex;
	params.LFOType = LFOType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetLFOPatch
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            LFOIndex                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ESynthLFOPatchType             LFOPatchType                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetLFOPatch(int LFOIndex, ESynthLFOPatchType LFOPatchType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetLFOPatch"));

	struct
	{
		int                            LFOIndex;
		ESynthLFOPatchType             LFOPatchType;
	} params = {};

	params.LFOIndex = LFOIndex;
	params.LFOPatchType = LFOPatchType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetLFOMode
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            LFOIndex                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ESynthLFOMode                  LFOMode                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetLFOMode(int LFOIndex, ESynthLFOMode LFOMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetLFOMode"));

	struct
	{
		int                            LFOIndex;
		ESynthLFOMode                  LFOMode;
	} params = {};

	params.LFOIndex = LFOIndex;
	params.LFOMode = LFOMode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetLFOGainMod
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            LFOIndex                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          GainMod                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetLFOGainMod(int LFOIndex, float GainMod)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetLFOGainMod"));

	struct
	{
		int                            LFOIndex;
		float                          GainMod;
	} params = {};

	params.LFOIndex = LFOIndex;
	params.GainMod = GainMod;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetLFOGain
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            LFOIndex                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Gain                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetLFOGain(int LFOIndex, float Gain)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetLFOGain"));

	struct
	{
		int                            LFOIndex;
		float                          Gain;
	} params = {};

	params.LFOIndex = LFOIndex;
	params.Gain = Gain;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetLFOFrequencyMod
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            LFOIndex                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          FrequencyModHz                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetLFOFrequencyMod(int LFOIndex, float FrequencyModHz)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetLFOFrequencyMod"));

	struct
	{
		int                            LFOIndex;
		float                          FrequencyModHz;
	} params = {};

	params.LFOIndex = LFOIndex;
	params.FrequencyModHz = FrequencyModHz;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetLFOFrequency
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            LFOIndex                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          FrequencyHz                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetLFOFrequency(int LFOIndex, float FrequencyHz)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetLFOFrequency"));

	struct
	{
		int                            LFOIndex;
		float                          FrequencyHz;
	} params = {};

	params.LFOIndex = LFOIndex;
	params.FrequencyHz = FrequencyHz;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetGainDb
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          GainDb                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetGainDb(float GainDb)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetGainDb"));

	struct
	{
		float                          GainDb;
	} params = {};

	params.GainDb = GainDb;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetFilterType
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// ESynthFilterType               FilterType                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetFilterType(ESynthFilterType FilterType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetFilterType"));

	struct
	{
		ESynthFilterType               FilterType;
	} params = {};

	params.FilterType = FilterType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetFilterQMod
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          FilterQ                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetFilterQMod(float FilterQ)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetFilterQMod"));

	struct
	{
		float                          FilterQ;
	} params = {};

	params.FilterQ = FilterQ;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetFilterQ
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          FilterQ                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetFilterQ(float FilterQ)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetFilterQ"));

	struct
	{
		float                          FilterQ;
	} params = {};

	params.FilterQ = FilterQ;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetFilterFrequencyMod
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          FilterFrequencyHz              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetFilterFrequencyMod(float FilterFrequencyHz)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetFilterFrequencyMod"));

	struct
	{
		float                          FilterFrequencyHz;
	} params = {};

	params.FilterFrequencyHz = FilterFrequencyHz;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetFilterFrequency
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          FilterFrequencyHz              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetFilterFrequency(float FilterFrequencyHz)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetFilterFrequency"));

	struct
	{
		float                          FilterFrequencyHz;
	} params = {};

	params.FilterFrequencyHz = FilterFrequencyHz;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetFilterAlgorithm
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// ESynthFilterAlgorithm          FilterAlgorithm                (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetFilterAlgorithm(ESynthFilterAlgorithm FilterAlgorithm)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetFilterAlgorithm"));

	struct
	{
		ESynthFilterAlgorithm          FilterAlgorithm;
	} params = {};

	params.FilterAlgorithm = FilterAlgorithm;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetEnableUnison
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           EnableUnison                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetEnableUnison(bool EnableUnison)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetEnableUnison"));

	struct
	{
		bool                           EnableUnison;
	} params = {};

	params.EnableUnison = EnableUnison;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetEnableRetrigger
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           RetriggerEnabled               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetEnableRetrigger(bool RetriggerEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetEnableRetrigger"));

	struct
	{
		bool                           RetriggerEnabled;
	} params = {};

	params.RetriggerEnabled = RetriggerEnabled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetEnablePolyphony
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bEnablePolyphony               (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetEnablePolyphony(bool bEnablePolyphony)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetEnablePolyphony"));

	struct
	{
		bool                           bEnablePolyphony;
	} params = {};

	params.bEnablePolyphony = bEnablePolyphony;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetEnablePatch
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// struct FPatchId                PatchId                        (CPF_ConstParm, CPF_Parm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
// bool                           bIsEnabled                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UModularSynthComponent::SetEnablePatch(const struct FPatchId& PatchId, bool bIsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetEnablePatch"));

	struct
	{
		struct FPatchId                PatchId;
		bool                           bIsEnabled;
		bool                           ReturnValue;
	} params = {};

	params.PatchId = PatchId;
	params.bIsEnabled = bIsEnabled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Synthesis.ModularSynthComponent.SetEnableLegato
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           LegatoEnabled                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetEnableLegato(bool LegatoEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetEnableLegato"));

	struct
	{
		bool                           LegatoEnabled;
	} params = {};

	params.LegatoEnabled = LegatoEnabled;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetDecayTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          DecayTimeMsec                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetDecayTime(float DecayTimeMsec)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetDecayTime"));

	struct
	{
		float                          DecayTimeMsec;
	} params = {};

	params.DecayTimeMsec = DecayTimeMsec;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetChorusFrequency
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Frequency                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetChorusFrequency(float Frequency)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetChorusFrequency"));

	struct
	{
		float                          Frequency;
	} params = {};

	params.Frequency = Frequency;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetChorusFeedback
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Feedback                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetChorusFeedback(float Feedback)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetChorusFeedback"));

	struct
	{
		float                          Feedback;
	} params = {};

	params.Feedback = Feedback;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetChorusEnabled
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           EnableChorus                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetChorusEnabled(bool EnableChorus)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetChorusEnabled"));

	struct
	{
		bool                           EnableChorus;
	} params = {};

	params.EnableChorus = EnableChorus;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetChorusDepth
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Depth                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetChorusDepth(float Depth)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetChorusDepth"));

	struct
	{
		float                          Depth;
	} params = {};

	params.Depth = Depth;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.SetAttackTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          AttackTimeMsec                 (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::SetAttackTime(float AttackTimeMsec)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.SetAttackTime"));

	struct
	{
		float                          AttackTimeMsec;
	} params = {};

	params.AttackTimeMsec = AttackTimeMsec;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.NoteOn
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Note                           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Velocity                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Duration                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::NoteOn(float Note, int Velocity, float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.NoteOn"));

	struct
	{
		float                          Note;
		int                            Velocity;
		float                          Duration;
	} params = {};

	params.Note = Note;
	params.Velocity = Velocity;
	params.Duration = Duration;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.NoteOff
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Note                           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bAllNotesOff                   (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bKillAllNotes                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UModularSynthComponent::NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.NoteOff"));

	struct
	{
		float                          Note;
		bool                           bAllNotesOff;
		bool                           bKillAllNotes;
	} params = {};

	params.Note = Note;
	params.bAllNotesOff = bAllNotesOff;
	params.bKillAllNotes = bKillAllNotes;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.ModularSynthComponent.CreatePatch
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// ESynth1PatchSource             PatchSource                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<struct FSynth1PatchCable> PatchCables                    (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)
// bool                           bEnableByDefault               (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FPatchId                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

struct FPatchId UModularSynthComponent::CreatePatch(ESynth1PatchSource PatchSource, TArray<struct FSynth1PatchCable> PatchCables, bool bEnableByDefault)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.ModularSynthComponent.CreatePatch"));

	struct
	{
		ESynth1PatchSource             PatchSource;
		TArray<struct FSynth1PatchCable> PatchCables;
		bool                           bEnableByDefault;
		struct FPatchId                ReturnValue;
	} params = {};

	params.PatchSource = PatchSource;
	params.PatchCables = PatchCables;
	params.bEnableByDefault = bEnableByDefault;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Synthesis.SourceEffectBitCrusherPreset.SetSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSourceEffectBitCrusherBaseSettings Settings                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void USourceEffectBitCrusherPreset::SetSettings(const struct FSourceEffectBitCrusherBaseSettings& Settings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectBitCrusherPreset.SetSettings"));

	struct
	{
		struct FSourceEffectBitCrusherBaseSettings Settings;
	} params = {};

	params.Settings = Settings;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRateModulator
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USoundModulatorBase*     Modulator                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USourceEffectBitCrusherPreset::SetSampleRateModulator(class USoundModulatorBase* Modulator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRateModulator"));

	struct
	{
		class USoundModulatorBase*     Modulator;
	} params = {};

	params.Modulator = Modulator;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRate
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          SampleRate                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USourceEffectBitCrusherPreset::SetSampleRate(float SampleRate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRate"));

	struct
	{
		float                          SampleRate;
	} params = {};

	params.SampleRate = SampleRate;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SourceEffectBitCrusherPreset.SetModulationSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSourceEffectBitCrusherSettings ModulationSettings             (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void USourceEffectBitCrusherPreset::SetModulationSettings(const struct FSourceEffectBitCrusherSettings& ModulationSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectBitCrusherPreset.SetModulationSettings"));

	struct
	{
		struct FSourceEffectBitCrusherSettings ModulationSettings;
	} params = {};

	params.ModulationSettings = ModulationSettings;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SourceEffectBitCrusherPreset.SetBits
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Bits                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USourceEffectBitCrusherPreset::SetBits(float Bits)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectBitCrusherPreset.SetBits"));

	struct
	{
		float                          Bits;
	} params = {};

	params.Bits = Bits;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SourceEffectBitCrusherPreset.SetBitModulator
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USoundModulatorBase*     Modulator                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USourceEffectBitCrusherPreset::SetBitModulator(class USoundModulatorBase* Modulator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectBitCrusherPreset.SetBitModulator"));

	struct
	{
		class USoundModulatorBase*     Modulator;
	} params = {};

	params.Modulator = Modulator;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SourceEffectChorusPreset.SetWetModulator
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USoundModulatorBase*     Modulator                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USourceEffectChorusPreset::SetWetModulator(class USoundModulatorBase* Modulator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectChorusPreset.SetWetModulator"));

	struct
	{
		class USoundModulatorBase*     Modulator;
	} params = {};

	params.Modulator = Modulator;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SourceEffectChorusPreset.SetWet
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          WetAmount                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USourceEffectChorusPreset::SetWet(float WetAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectChorusPreset.SetWet"));

	struct
	{
		float                          WetAmount;
	} params = {};

	params.WetAmount = WetAmount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SourceEffectChorusPreset.SetSpreadModulator
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USoundModulatorBase*     Modulator                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USourceEffectChorusPreset::SetSpreadModulator(class USoundModulatorBase* Modulator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectChorusPreset.SetSpreadModulator"));

	struct
	{
		class USoundModulatorBase*     Modulator;
	} params = {};

	params.Modulator = Modulator;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SourceEffectChorusPreset.SetSpread
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Spread                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USourceEffectChorusPreset::SetSpread(float Spread)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectChorusPreset.SetSpread"));

	struct
	{
		float                          Spread;
	} params = {};

	params.Spread = Spread;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SourceEffectChorusPreset.SetSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSourceEffectChorusBaseSettings Settings                       (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void USourceEffectChorusPreset::SetSettings(const struct FSourceEffectChorusBaseSettings& Settings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectChorusPreset.SetSettings"));

	struct
	{
		struct FSourceEffectChorusBaseSettings Settings;
	} params = {};

	params.Settings = Settings;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SourceEffectChorusPreset.SetModulationSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSourceEffectChorusSettings ModulationSettings             (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void USourceEffectChorusPreset::SetModulationSettings(const struct FSourceEffectChorusSettings& ModulationSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectChorusPreset.SetModulationSettings"));

	struct
	{
		struct FSourceEffectChorusSettings ModulationSettings;
	} params = {};

	params.ModulationSettings = ModulationSettings;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SourceEffectChorusPreset.SetFrequencyModulator
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USoundModulatorBase*     Modulator                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USourceEffectChorusPreset::SetFrequencyModulator(class USoundModulatorBase* Modulator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectChorusPreset.SetFrequencyModulator"));

	struct
	{
		class USoundModulatorBase*     Modulator;
	} params = {};

	params.Modulator = Modulator;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SourceEffectChorusPreset.SetFrequency
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Frequency                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USourceEffectChorusPreset::SetFrequency(float Frequency)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectChorusPreset.SetFrequency"));

	struct
	{
		float                          Frequency;
	} params = {};

	params.Frequency = Frequency;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SourceEffectChorusPreset.SetFeedbackModulator
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USoundModulatorBase*     Modulator                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USourceEffectChorusPreset::SetFeedbackModulator(class USoundModulatorBase* Modulator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectChorusPreset.SetFeedbackModulator"));

	struct
	{
		class USoundModulatorBase*     Modulator;
	} params = {};

	params.Modulator = Modulator;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SourceEffectChorusPreset.SetFeedback
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Feedback                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USourceEffectChorusPreset::SetFeedback(float Feedback)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectChorusPreset.SetFeedback"));

	struct
	{
		float                          Feedback;
	} params = {};

	params.Feedback = Feedback;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SourceEffectChorusPreset.SetDryModulator
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USoundModulatorBase*     Modulator                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USourceEffectChorusPreset::SetDryModulator(class USoundModulatorBase* Modulator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectChorusPreset.SetDryModulator"));

	struct
	{
		class USoundModulatorBase*     Modulator;
	} params = {};

	params.Modulator = Modulator;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SourceEffectChorusPreset.SetDry
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          DryAmount                      (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USourceEffectChorusPreset::SetDry(float DryAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectChorusPreset.SetDry"));

	struct
	{
		float                          DryAmount;
	} params = {};

	params.DryAmount = DryAmount;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SourceEffectChorusPreset.SetDepthModulator
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USoundModulatorBase*     Modulator                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USourceEffectChorusPreset::SetDepthModulator(class USoundModulatorBase* Modulator)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectChorusPreset.SetDepthModulator"));

	struct
	{
		class USoundModulatorBase*     Modulator;
	} params = {};

	params.Modulator = Modulator;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SourceEffectChorusPreset.SetDepth
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Depth                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USourceEffectChorusPreset::SetDepth(float Depth)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectChorusPreset.SetDepth"));

	struct
	{
		float                          Depth;
	} params = {};

	params.Depth = Depth;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SourceEffectDynamicsProcessorPreset.SetSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSourceEffectDynamicsProcessorSettings InSettings                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void USourceEffectDynamicsProcessorPreset::SetSettings(const struct FSourceEffectDynamicsProcessorSettings& InSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectDynamicsProcessorPreset.SetSettings"));

	struct
	{
		struct FSourceEffectDynamicsProcessorSettings InSettings;
	} params = {};

	params.InSettings = InSettings;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UEnvelopeFollowerListener* EnvelopeFollowerListener       (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USourceEffectEnvelopeFollowerPreset::UnregisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener"));

	struct
	{
		class UEnvelopeFollowerListener* EnvelopeFollowerListener;
	} params = {};

	params.EnvelopeFollowerListener = EnvelopeFollowerListener;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SourceEffectEnvelopeFollowerPreset.SetSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSourceEffectEnvelopeFollowerSettings InSettings                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void USourceEffectEnvelopeFollowerPreset::SetSettings(const struct FSourceEffectEnvelopeFollowerSettings& InSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectEnvelopeFollowerPreset.SetSettings"));

	struct
	{
		struct FSourceEffectEnvelopeFollowerSettings InSettings;
	} params = {};

	params.InSettings = InSettings;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UEnvelopeFollowerListener* EnvelopeFollowerListener       (CPF_Parm, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USourceEffectEnvelopeFollowerPreset::RegisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener"));

	struct
	{
		class UEnvelopeFollowerListener* EnvelopeFollowerListener;
	} params = {};

	params.EnvelopeFollowerListener = EnvelopeFollowerListener;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SourceEffectEQPreset.SetSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSourceEffectEQSettings InSettings                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void USourceEffectEQPreset::SetSettings(const struct FSourceEffectEQSettings& InSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectEQPreset.SetSettings"));

	struct
	{
		struct FSourceEffectEQSettings InSettings;
	} params = {};

	params.InSettings = InSettings;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SourceEffectFilterPreset.SetSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSourceEffectFilterSettings InSettings                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void USourceEffectFilterPreset::SetSettings(const struct FSourceEffectFilterSettings& InSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectFilterPreset.SetSettings"));

	struct
	{
		struct FSourceEffectFilterSettings InSettings;
	} params = {};

	params.InSettings = InSettings;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SourceEffectFoldbackDistortionPreset.SetSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSourceEffectFoldbackDistortionSettings InSettings                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void USourceEffectFoldbackDistortionPreset::SetSettings(const struct FSourceEffectFoldbackDistortionSettings& InSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectFoldbackDistortionPreset.SetSettings"));

	struct
	{
		struct FSourceEffectFoldbackDistortionSettings InSettings;
	} params = {};

	params.InSettings = InSettings;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SourceEffectMidSideSpreaderPreset.SetSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSourceEffectMidSideSpreaderSettings InSettings                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void USourceEffectMidSideSpreaderPreset::SetSettings(const struct FSourceEffectMidSideSpreaderSettings& InSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectMidSideSpreaderPreset.SetSettings"));

	struct
	{
		struct FSourceEffectMidSideSpreaderSettings InSettings;
	} params = {};

	params.InSettings = InSettings;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SourceEffectPannerPreset.SetSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSourceEffectPannerSettings InSettings                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void USourceEffectPannerPreset::SetSettings(const struct FSourceEffectPannerSettings& InSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectPannerPreset.SetSettings"));

	struct
	{
		struct FSourceEffectPannerSettings InSettings;
	} params = {};

	params.InSettings = InSettings;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SourceEffectPhaserPreset.SetSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSourceEffectPhaserSettings InSettings                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void USourceEffectPhaserPreset::SetSettings(const struct FSourceEffectPhaserSettings& InSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectPhaserPreset.SetSettings"));

	struct
	{
		struct FSourceEffectPhaserSettings InSettings;
	} params = {};

	params.InSettings = InSettings;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SourceEffectRingModulationPreset.SetSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSourceEffectRingModulationSettings InSettings                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void USourceEffectRingModulationPreset::SetSettings(const struct FSourceEffectRingModulationSettings& InSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectRingModulationPreset.SetSettings"));

	struct
	{
		struct FSourceEffectRingModulationSettings InSettings;
	} params = {};

	params.InSettings = InSettings;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SourceEffectSimpleDelayPreset.SetSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSourceEffectSimpleDelaySettings InSettings                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void USourceEffectSimpleDelayPreset::SetSettings(const struct FSourceEffectSimpleDelaySettings& InSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectSimpleDelayPreset.SetSettings"));

	struct
	{
		struct FSourceEffectSimpleDelaySettings InSettings;
	} params = {};

	params.InSettings = InSettings;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SourceEffectStereoDelayPreset.SetSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSourceEffectStereoDelaySettings InSettings                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void USourceEffectStereoDelayPreset::SetSettings(const struct FSourceEffectStereoDelaySettings& InSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectStereoDelayPreset.SetSettings"));

	struct
	{
		struct FSourceEffectStereoDelaySettings InSettings;
	} params = {};

	params.InSettings = InSettings;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SourceEffectWaveShaperPreset.SetSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSourceEffectWaveShaperSettings InSettings                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void USourceEffectWaveShaperPreset::SetSettings(const struct FSourceEffectWaveShaperSettings& InSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SourceEffectWaveShaperPreset.SetSettings"));

	struct
	{
		struct FSourceEffectWaveShaperSettings InSettings;
	} params = {};

	params.InSettings = InSettings;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SubmixEffectConvolutionReverbPreset.SetSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSubmixEffectConvolutionReverbSettings InSettings                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void USubmixEffectConvolutionReverbPreset::SetSettings(const struct FSubmixEffectConvolutionReverbSettings& InSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SubmixEffectConvolutionReverbPreset.SetSettings"));

	struct
	{
		struct FSubmixEffectConvolutionReverbSettings InSettings;
	} params = {};

	params.InSettings = InSettings;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SubmixEffectConvolutionReverbPreset.SetImpulseResponse
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class UAudioImpulseResponse*   InImpulseResponse              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USubmixEffectConvolutionReverbPreset::SetImpulseResponse(class UAudioImpulseResponse* InImpulseResponse)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SubmixEffectConvolutionReverbPreset.SetImpulseResponse"));

	struct
	{
		class UAudioImpulseResponse*   InImpulseResponse;
	} params = {};

	params.InImpulseResponse = InImpulseResponse;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SubmixEffectDelayPreset.SetSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSubmixEffectDelaySettings InSettings                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void USubmixEffectDelayPreset::SetSettings(const struct FSubmixEffectDelaySettings& InSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SubmixEffectDelayPreset.SetSettings"));

	struct
	{
		struct FSubmixEffectDelaySettings InSettings;
	} params = {};

	params.InSettings = InSettings;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SubmixEffectDelayPreset.SetInterpolationTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Time                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USubmixEffectDelayPreset::SetInterpolationTime(float Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SubmixEffectDelayPreset.SetInterpolationTime"));

	struct
	{
		float                          Time;
	} params = {};

	params.Time = Time;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SubmixEffectDelayPreset.SetDelay
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Length                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USubmixEffectDelayPreset::SetDelay(float Length)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SubmixEffectDelayPreset.SetDelay"));

	struct
	{
		float                          Length;
	} params = {};

	params.Length = Length;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SubmixEffectDelayPreset.GetMaxDelayInMilliseconds
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float USubmixEffectDelayPreset::GetMaxDelayInMilliseconds()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SubmixEffectDelayPreset.GetMaxDelayInMilliseconds"));

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


// Function Synthesis.SubmixEffectFilterPreset.SetSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSubmixEffectFilterSettings InSettings                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void USubmixEffectFilterPreset::SetSettings(const struct FSubmixEffectFilterSettings& InSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SubmixEffectFilterPreset.SetSettings"));

	struct
	{
		struct FSubmixEffectFilterSettings InSettings;
	} params = {};

	params.InSettings = InSettings;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SubmixEffectFilterPreset.SetFilterType
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// ESubmixFilterType              InType                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USubmixEffectFilterPreset::SetFilterType(ESubmixFilterType InType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SubmixEffectFilterPreset.SetFilterType"));

	struct
	{
		ESubmixFilterType              InType;
	} params = {};

	params.InType = InType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SubmixEffectFilterPreset.SetFilterQMod
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InQ                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USubmixEffectFilterPreset::SetFilterQMod(float InQ)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SubmixEffectFilterPreset.SetFilterQMod"));

	struct
	{
		float                          InQ;
	} params = {};

	params.InQ = InQ;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SubmixEffectFilterPreset.SetFilterQ
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InQ                            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USubmixEffectFilterPreset::SetFilterQ(float InQ)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SubmixEffectFilterPreset.SetFilterQ"));

	struct
	{
		float                          InQ;
	} params = {};

	params.InQ = InQ;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InFrequency                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USubmixEffectFilterPreset::SetFilterCutoffFrequencyMod(float InFrequency)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod"));

	struct
	{
		float                          InFrequency;
	} params = {};

	params.InFrequency = InFrequency;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InFrequency                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USubmixEffectFilterPreset::SetFilterCutoffFrequency(float InFrequency)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency"));

	struct
	{
		float                          InFrequency;
	} params = {};

	params.InFrequency = InFrequency;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// ESubmixFilterAlgorithm         InAlgorithm                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USubmixEffectFilterPreset::SetFilterAlgorithm(ESubmixFilterAlgorithm InAlgorithm)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm"));

	struct
	{
		ESubmixFilterAlgorithm         InAlgorithm;
	} params = {};

	params.InAlgorithm = InAlgorithm;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SubmixEffectFlexiverbPreset.SetSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSubmixEffectFlexiverbSettings InSettings                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void USubmixEffectFlexiverbPreset::SetSettings(const struct FSubmixEffectFlexiverbSettings& InSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SubmixEffectFlexiverbPreset.SetSettings"));

	struct
	{
		struct FSubmixEffectFlexiverbSettings InSettings;
	} params = {};

	params.InSettings = InSettings;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SubmixEffectMultibandCompressorPreset.SetSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSubmixEffectMultibandCompressorSettings InSettings                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void USubmixEffectMultibandCompressorPreset::SetSettings(const struct FSubmixEffectMultibandCompressorSettings& InSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SubmixEffectMultibandCompressorPreset.SetSettings"));

	struct
	{
		struct FSubmixEffectMultibandCompressorSettings InSettings;
	} params = {};

	params.InSettings = InSettings;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SubmixEffectStereoDelayPreset.SetSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSubmixEffectStereoDelaySettings InSettings                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void USubmixEffectStereoDelayPreset::SetSettings(const struct FSubmixEffectStereoDelaySettings& InSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SubmixEffectStereoDelayPreset.SetSettings"));

	struct
	{
		struct FSubmixEffectStereoDelaySettings InSettings;
	} params = {};

	params.InSettings = InSettings;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SubmixEffectTapDelayPreset.SetTap
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// int                            TapId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FTapDelayInfo           TapInfo                        (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void USubmixEffectTapDelayPreset::SetTap(int TapId, const struct FTapDelayInfo& TapInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SubmixEffectTapDelayPreset.SetTap"));

	struct
	{
		int                            TapId;
		struct FTapDelayInfo           TapInfo;
	} params = {};

	params.TapId = TapId;
	params.TapInfo = TapInfo;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SubmixEffectTapDelayPreset.SetSettings
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// struct FSubmixEffectTapDelaySettings InSettings                     (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_NativeAccessSpecifierPublic)

void USubmixEffectTapDelayPreset::SetSettings(const struct FSubmixEffectTapDelaySettings& InSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SubmixEffectTapDelayPreset.SetSettings"));

	struct
	{
		struct FSubmixEffectTapDelaySettings InSettings;
	} params = {};

	params.InSettings = InSettings;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Time                           (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USubmixEffectTapDelayPreset::SetInterpolationTime(float Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime"));

	struct
	{
		float                          Time;
	} params = {};

	params.Time = Time;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SubmixEffectTapDelayPreset.RemoveTap
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            TapId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USubmixEffectTapDelayPreset::RemoveTap(int TapId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SubmixEffectTapDelayPreset.RemoveTap"));

	struct
	{
		int                            TapId;
	} params = {};

	params.TapId = TapId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SubmixEffectTapDelayPreset.GetTapIds
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// TArray<int>                    TapIds                         (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)

void USubmixEffectTapDelayPreset::GetTapIds(TArray<int>* TapIds)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SubmixEffectTapDelayPreset.GetTapIds"));

	struct
	{
		TArray<int>                    TapIds;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (TapIds != nullptr)
		*TapIds = params.TapIds;
}


// Function Synthesis.SubmixEffectTapDelayPreset.GetTap
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// int                            TapId                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FTapDelayInfo           TapInfo                        (CPF_Parm, CPF_OutParm, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)

void USubmixEffectTapDelayPreset::GetTap(int TapId, struct FTapDelayInfo* TapInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SubmixEffectTapDelayPreset.GetTap"));

	struct
	{
		int                            TapId;
		struct FTapDelayInfo           TapInfo;
	} params = {};

	params.TapId = TapId;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (TapInfo != nullptr)
		*TapInfo = params.TapInfo;
}


// Function Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float USubmixEffectTapDelayPreset::GetMaxDelayInMilliseconds()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds"));

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


// Function Synthesis.SubmixEffectTapDelayPreset.AddTap
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_BlueprintCallable)
// Parameters:
// int                            TapId                          (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USubmixEffectTapDelayPreset::AddTap(int* TapId)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SubmixEffectTapDelayPreset.AddTap"));

	struct
	{
		int                            TapId;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	if (TapId != nullptr)
		*TapId = params.TapId;
}


// Function Synthesis.Synth2DSlider.SetValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FVector2D               InValue                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynth2DSlider::SetValue(const struct FVector2D& InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.Synth2DSlider.SetValue"));

	struct
	{
		struct FVector2D               InValue;
	} params = {};

	params.InValue = InValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.Synth2DSlider.SetStepSize
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InValue                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynth2DSlider::SetStepSize(float InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.Synth2DSlider.SetStepSize"));

	struct
	{
		float                          InValue;
	} params = {};

	params.InValue = InValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.Synth2DSlider.SetSliderHandleColor
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// struct FLinearColor            InValue                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynth2DSlider::SetSliderHandleColor(const struct FLinearColor& InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.Synth2DSlider.SetSliderHandleColor"));

	struct
	{
		struct FLinearColor            InValue;
	} params = {};

	params.InValue = InValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.Synth2DSlider.SetLocked
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           InValue                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynth2DSlider::SetLocked(bool InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.Synth2DSlider.SetLocked"));

	struct
	{
		bool                           InValue;
	} params = {};

	params.InValue = InValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.Synth2DSlider.SetIndentHandle
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           InValue                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynth2DSlider::SetIndentHandle(bool InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.Synth2DSlider.SetIndentHandle"));

	struct
	{
		bool                           InValue;
	} params = {};

	params.InValue = InValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.Synth2DSlider.GetValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// struct FVector2D               ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

struct FVector2D USynth2DSlider::GetValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.Synth2DSlider.GetValue"));

	struct
	{
		struct FVector2D               ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Synthesis.GranularSynth.SetSustainGain
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          SustainGain                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGranularSynth::SetSustainGain(float SustainGain)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.GranularSynth.SetSustainGain"));

	struct
	{
		float                          SustainGain;
	} params = {};

	params.SustainGain = SustainGain;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.GranularSynth.SetSoundWave
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USoundWave*              InSoundWave                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGranularSynth::SetSoundWave(class USoundWave* InSoundWave)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.GranularSynth.SetSoundWave"));

	struct
	{
		class USoundWave*              InSoundWave;
	} params = {};

	params.InSoundWave = InSoundWave;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.GranularSynth.SetScrubMode
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bScrubMode                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGranularSynth::SetScrubMode(bool bScrubMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.GranularSynth.SetScrubMode"));

	struct
	{
		bool                           bScrubMode;
	} params = {};

	params.bScrubMode = bScrubMode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.GranularSynth.SetReleaseTimeMsec
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          ReleaseTimeMsec                (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGranularSynth::SetReleaseTimeMsec(float ReleaseTimeMsec)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.GranularSynth.SetReleaseTimeMsec"));

	struct
	{
		float                          ReleaseTimeMsec;
	} params = {};

	params.ReleaseTimeMsec = ReleaseTimeMsec;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.GranularSynth.SetPlayheadTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InPositionSec                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          LerpTimeSec                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// EGranularSynthSeekType         SeekType                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGranularSynth::SetPlayheadTime(float InPositionSec, float LerpTimeSec, EGranularSynthSeekType SeekType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.GranularSynth.SetPlayheadTime"));

	struct
	{
		float                          InPositionSec;
		float                          LerpTimeSec;
		EGranularSynthSeekType         SeekType;
	} params = {};

	params.InPositionSec = InPositionSec;
	params.LerpTimeSec = LerpTimeSec;
	params.SeekType = SeekType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.GranularSynth.SetPlaybackSpeed
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InPlayheadRate                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGranularSynth::SetPlaybackSpeed(float InPlayheadRate)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.GranularSynth.SetPlaybackSpeed"));

	struct
	{
		float                          InPlayheadRate;
	} params = {};

	params.InPlayheadRate = InPlayheadRate;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.GranularSynth.SetGrainVolume
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// float                          BaseVolume                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               VolumeRange                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGranularSynth::SetGrainVolume(float BaseVolume, const struct FVector2D& VolumeRange)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.GranularSynth.SetGrainVolume"));

	struct
	{
		float                          BaseVolume;
		struct FVector2D               VolumeRange;
	} params = {};

	params.BaseVolume = BaseVolume;
	params.VolumeRange = VolumeRange;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.GranularSynth.SetGrainsPerSecond
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InGrainsPerSecond              (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGranularSynth::SetGrainsPerSecond(float InGrainsPerSecond)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.GranularSynth.SetGrainsPerSecond"));

	struct
	{
		float                          InGrainsPerSecond;
	} params = {};

	params.InGrainsPerSecond = InGrainsPerSecond;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.GranularSynth.SetGrainProbability
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InGrainProbability             (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGranularSynth::SetGrainProbability(float InGrainProbability)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.GranularSynth.SetGrainProbability"));

	struct
	{
		float                          InGrainProbability;
	} params = {};

	params.InGrainProbability = InGrainProbability;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.GranularSynth.SetGrainPitch
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// float                          BasePitch                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               PitchRange                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGranularSynth::SetGrainPitch(float BasePitch, const struct FVector2D& PitchRange)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.GranularSynth.SetGrainPitch"));

	struct
	{
		float                          BasePitch;
		struct FVector2D               PitchRange;
	} params = {};

	params.BasePitch = BasePitch;
	params.PitchRange = PitchRange;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.GranularSynth.SetGrainPan
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// float                          BasePan                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               PanRange                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGranularSynth::SetGrainPan(float BasePan, const struct FVector2D& PanRange)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.GranularSynth.SetGrainPan"));

	struct
	{
		float                          BasePan;
		struct FVector2D               PanRange;
	} params = {};

	params.BasePan = BasePan;
	params.PanRange = PanRange;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.GranularSynth.SetGrainEnvelopeType
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// EGranularSynthEnvelopeType     EnvelopeType                   (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGranularSynth::SetGrainEnvelopeType(EGranularSynthEnvelopeType EnvelopeType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.GranularSynth.SetGrainEnvelopeType"));

	struct
	{
		EGranularSynthEnvelopeType     EnvelopeType;
	} params = {};

	params.EnvelopeType = EnvelopeType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.GranularSynth.SetGrainDuration
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasDefaults, FUNC_BlueprintCallable)
// Parameters:
// float                          BaseDurationMsec               (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// struct FVector2D               DurationRange                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGranularSynth::SetGrainDuration(float BaseDurationMsec, const struct FVector2D& DurationRange)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.GranularSynth.SetGrainDuration"));

	struct
	{
		float                          BaseDurationMsec;
		struct FVector2D               DurationRange;
	} params = {};

	params.BaseDurationMsec = BaseDurationMsec;
	params.DurationRange = DurationRange;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.GranularSynth.SetDecayTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          DecayTimeMsec                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGranularSynth::SetDecayTime(float DecayTimeMsec)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.GranularSynth.SetDecayTime"));

	struct
	{
		float                          DecayTimeMsec;
	} params = {};

	params.DecayTimeMsec = DecayTimeMsec;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.GranularSynth.SetAttackTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          AttackTimeMsec                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGranularSynth::SetAttackTime(float AttackTimeMsec)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.GranularSynth.SetAttackTime"));

	struct
	{
		float                          AttackTimeMsec;
	} params = {};

	params.AttackTimeMsec = AttackTimeMsec;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.GranularSynth.NoteOn
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Note                           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            Velocity                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          Duration                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGranularSynth::NoteOn(float Note, int Velocity, float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.GranularSynth.NoteOn"));

	struct
	{
		float                          Note;
		int                            Velocity;
		float                          Duration;
	} params = {};

	params.Note = Note;
	params.Velocity = Velocity;
	params.Duration = Duration;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.GranularSynth.NoteOff
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          Note                           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bKill                          (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void UGranularSynth::NoteOff(float Note, bool bKill)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.GranularSynth.NoteOff"));

	struct
	{
		float                          Note;
		bool                           bKill;
	} params = {};

	params.Note = Note;
	params.bKill = bKill;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.GranularSynth.IsLoaded
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool UGranularSynth::IsLoaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.GranularSynth.IsLoaded"));

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


// Function Synthesis.GranularSynth.GetSampleDuration
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UGranularSynth::GetSampleDuration()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.GranularSynth.GetSampleDuration"));

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


// Function Synthesis.GranularSynth.GetCurrentPlayheadTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float UGranularSynth::GetCurrentPlayheadTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.GranularSynth.GetCurrentPlayheadTime"));

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


// Function Synthesis.SynthComponentMonoWaveTable.SetWaveTablePosition
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InPosition                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetWaveTablePosition(float InPosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetWaveTablePosition"));

	struct
	{
		float                          InPosition;
	} params = {};

	params.InPosition = InPosition;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SynthComponentMonoWaveTable.SetSustainPedalState
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           InSustainPedalState            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetSustainPedalState(bool InSustainPedalState)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetSustainPedalState"));

	struct
	{
		bool                           InSustainPedalState;
	} params = {};

	params.InSustainPedalState = InSustainPedalState;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoType
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// ESynthLFOType                  InLfoType                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetPosLfoType(ESynthLFOType InLfoType)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoType"));

	struct
	{
		ESynthLFOType                  InLfoType;
	} params = {};

	params.InLfoType = InLfoType;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoFrequency
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InLfoFrequency                 (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetPosLfoFrequency(float InLfoFrequency)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoFrequency"));

	struct
	{
		float                          InLfoFrequency;
	} params = {};

	params.InLfoFrequency = InLfoFrequency;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoDepth
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InLfoDepth                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetPosLfoDepth(float InLfoDepth)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoDepth"));

	struct
	{
		float                          InLfoDepth;
	} params = {};

	params.InLfoDepth = InLfoDepth;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeSustainGain
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InSustainGain                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetPositionEnvelopeSustainGain(float InSustainGain)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeSustainGain"));

	struct
	{
		float                          InSustainGain;
	} params = {};

	params.InSustainGain = InSustainGain;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeReleaseTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InReleaseTimeMsec              (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeReleaseTime"));

	struct
	{
		float                          InReleaseTimeMsec;
	} params = {};

	params.InReleaseTimeMsec = InReleaseTimeMsec;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeInvert
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bInInvert                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetPositionEnvelopeInvert(bool bInInvert)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeInvert"));

	struct
	{
		bool                           bInInvert;
	} params = {};

	params.bInInvert = bInInvert;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDepth
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InDepth                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetPositionEnvelopeDepth(float InDepth)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDepth"));

	struct
	{
		float                          InDepth;
	} params = {};

	params.InDepth = InDepth;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDecayTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InDecayTimeMsec                (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetPositionEnvelopeDecayTime(float InDecayTimeMsec)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDecayTime"));

	struct
	{
		float                          InDecayTimeMsec;
	} params = {};

	params.InDecayTimeMsec = InDecayTimeMsec;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasInvert
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bInBiasInvert                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetPositionEnvelopeBiasInvert(bool bInBiasInvert)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasInvert"));

	struct
	{
		bool                           bInBiasInvert;
	} params = {};

	params.bInBiasInvert = bInBiasInvert;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasDepth
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InDepth                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetPositionEnvelopeBiasDepth(float InDepth)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasDepth"));

	struct
	{
		float                          InDepth;
	} params = {};

	params.InDepth = InDepth;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeAttackTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InAttackTimeMsec               (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetPositionEnvelopeAttackTime(float InAttackTimeMsec)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeAttackTime"));

	struct
	{
		float                          InAttackTimeMsec;
	} params = {};

	params.InAttackTimeMsec = InAttackTimeMsec;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterResonance
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InNewQ                         (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetLowPassFilterResonance(float InNewQ)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterResonance"));

	struct
	{
		float                          InNewQ;
	} params = {};

	params.InNewQ = InNewQ;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyWithMidiNote
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InMidiNote                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetFrequencyWithMidiNote(float InMidiNote)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyWithMidiNote"));

	struct
	{
		float                          InMidiNote;
	} params = {};

	params.InMidiNote = InMidiNote;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyPitchBend
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          FrequencyOffsetCents           (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetFrequencyPitchBend(float FrequencyOffsetCents)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyPitchBend"));

	struct
	{
		float                          FrequencyOffsetCents;
	} params = {};

	params.FrequencyOffsetCents = FrequencyOffsetCents;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SynthComponentMonoWaveTable.SetFrequency
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          FrequencyHz                    (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetFrequency(float FrequencyHz)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetFrequency"));

	struct
	{
		float                          FrequencyHz;
	} params = {};

	params.FrequencyHz = FrequencyHz;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InSustainGain                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetFilterEnvelopeSustainGain(float InSustainGain)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain"));

	struct
	{
		float                          InSustainGain;
	} params = {};

	params.InSustainGain = InSustainGain;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeReleaseTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InReleaseTimeMsec              (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeReleaseTime"));

	struct
	{
		float                          InReleaseTimeMsec;
	} params = {};

	params.InReleaseTimeMsec = InReleaseTimeMsec;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopenDecayTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InDecayTimeMsec                (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetFilterEnvelopenDecayTime(float InDecayTimeMsec)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopenDecayTime"));

	struct
	{
		float                          InDecayTimeMsec;
	} params = {};

	params.InDecayTimeMsec = InDecayTimeMsec;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeInvert
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bInInvert                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetFilterEnvelopeInvert(bool bInInvert)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeInvert"));

	struct
	{
		bool                           bInInvert;
	} params = {};

	params.bInInvert = bInInvert;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeDepth
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InDepth                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetFilterEnvelopeDepth(float InDepth)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeDepth"));

	struct
	{
		float                          InDepth;
	} params = {};

	params.InDepth = InDepth;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasInvert
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bInBiasInvert                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetFilterEnvelopeBiasInvert(bool bInBiasInvert)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasInvert"));

	struct
	{
		bool                           bInBiasInvert;
	} params = {};

	params.bInBiasInvert = bInBiasInvert;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasDepth
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InDepth                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetFilterEnvelopeBiasDepth(float InDepth)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasDepth"));

	struct
	{
		float                          InDepth;
	} params = {};

	params.InDepth = InDepth;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeAttackTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InAttackTimeMsec               (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetFilterEnvelopeAttackTime(float InAttackTimeMsec)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeAttackTime"));

	struct
	{
		float                          InAttackTimeMsec;
	} params = {};

	params.InAttackTimeMsec = InAttackTimeMsec;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SynthComponentMonoWaveTable.SetCurveValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            TableIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            KeyframeIndex                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          NewValue                       (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool USynthComponentMonoWaveTable::SetCurveValue(int TableIndex, int KeyframeIndex, float NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetCurveValue"));

	struct
	{
		int                            TableIndex;
		int                            KeyframeIndex;
		float                          NewValue;
		bool                           ReturnValue;
	} params = {};

	params.TableIndex = TableIndex;
	params.KeyframeIndex = KeyframeIndex;
	params.NewValue = NewValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Synthesis.SynthComponentMonoWaveTable.SetCurveTangent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            TableIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          InNewTangent                   (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool USynthComponentMonoWaveTable::SetCurveTangent(int TableIndex, float InNewTangent)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetCurveTangent"));

	struct
	{
		int                            TableIndex;
		float                          InNewTangent;
		bool                           ReturnValue;
	} params = {};

	params.TableIndex = TableIndex;
	params.InNewTangent = InNewTangent;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// ECurveInterpolationType        InterpolationType              (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// int                            TableIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool USynthComponentMonoWaveTable::SetCurveInterpolationType(ECurveInterpolationType InterpolationType, int TableIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType"));

	struct
	{
		ECurveInterpolationType        InterpolationType;
		int                            TableIndex;
		bool                           ReturnValue;
	} params = {};

	params.InterpolationType = InterpolationType;
	params.TableIndex = TableIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InSustainGain                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetAmpEnvelopeSustainGain(float InSustainGain)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain"));

	struct
	{
		float                          InSustainGain;
	} params = {};

	params.InSustainGain = InSustainGain;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeReleaseTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InReleaseTimeMsec              (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeReleaseTime"));

	struct
	{
		float                          InReleaseTimeMsec;
	} params = {};

	params.InReleaseTimeMsec = InReleaseTimeMsec;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeInvert
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bInInvert                      (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetAmpEnvelopeInvert(bool bInInvert)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeInvert"));

	struct
	{
		bool                           bInInvert;
	} params = {};

	params.bInInvert = bInInvert;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDepth
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InDepth                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetAmpEnvelopeDepth(float InDepth)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDepth"));

	struct
	{
		float                          InDepth;
	} params = {};

	params.InDepth = InDepth;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDecayTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InDecayTimeMsec                (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetAmpEnvelopeDecayTime(float InDecayTimeMsec)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDecayTime"));

	struct
	{
		float                          InDecayTimeMsec;
	} params = {};

	params.InDecayTimeMsec = InDecayTimeMsec;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasInvert
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bInBiasInvert                  (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetAmpEnvelopeBiasInvert(bool bInBiasInvert)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasInvert"));

	struct
	{
		bool                           bInBiasInvert;
	} params = {};

	params.bInBiasInvert = bInBiasInvert;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasDepth
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InDepth                        (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetAmpEnvelopeBiasDepth(float InDepth)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasDepth"));

	struct
	{
		float                          InDepth;
	} params = {};

	params.InDepth = InDepth;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeAttackTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InAttackTimeMsec               (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetAmpEnvelopeAttackTime(float InAttackTimeMsec)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeAttackTime"));

	struct
	{
		float                          InAttackTimeMsec;
	} params = {};

	params.InAttackTimeMsec = InAttackTimeMsec;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SynthComponentMonoWaveTable.RefreshWaveTable
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            Index                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::RefreshWaveTable(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.RefreshWaveTable"));

	struct
	{
		int                            Index;
	} params = {};

	params.Index = Index;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SynthComponentMonoWaveTable.RefreshAllWaveTables
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)

void USynthComponentMonoWaveTable::RefreshAllWaveTables()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.RefreshAllWaveTables"));

	struct
	{
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SynthComponentMonoWaveTable.NoteOn
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InMidiNote                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          InVelocity                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::NoteOn(float InMidiNote, float InVelocity)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.NoteOn"));

	struct
	{
		float                          InMidiNote;
		float                          InVelocity;
	} params = {};

	params.InMidiNote = InMidiNote;
	params.InVelocity = InVelocity;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SynthComponentMonoWaveTable.NoteOff
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InMidiNote                     (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::NoteOff(float InMidiNote)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.NoteOff"));

	struct
	{
		float                          InMidiNote;
	} params = {};

	params.InMidiNote = InMidiNote;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SynthComponentMonoWaveTable.GetNumTableEntries
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int USynthComponentMonoWaveTable::GetNumTableEntries()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.GetNumTableEntries"));

	struct
	{
		int                            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Synthesis.SynthComponentMonoWaveTable.GetMaxTableIndex
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

int USynthComponentMonoWaveTable::GetMaxTableIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.GetMaxTableIndex"));

	struct
	{
		int                            ReturnValue;
	} params = {};


	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Synthesis.SynthComponentMonoWaveTable.GetKeyFrameValuesForTable
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          TableIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// TArray<float>                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_NativeAccessSpecifierPublic)

TArray<float> USynthComponentMonoWaveTable::GetKeyFrameValuesForTable(float TableIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.GetKeyFrameValuesForTable"));

	struct
	{
		float                          TableIndex;
		TArray<float>                  ReturnValue;
	} params = {};

	params.TableIndex = TableIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Synthesis.SynthComponentMonoWaveTable.GetCurveTangent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// int                            TableIndex                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float USynthComponentMonoWaveTable::GetCurveTangent(int TableIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentMonoWaveTable.GetCurveTangent"));

	struct
	{
		int                            TableIndex;
		float                          ReturnValue;
	} params = {};

	params.TableIndex = TableIndex;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Synthesis.SynthComponentToneGenerator.SetVolume
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InVolume                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthComponentToneGenerator::SetVolume(float InVolume)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentToneGenerator.SetVolume"));

	struct
	{
		float                          InVolume;
	} params = {};

	params.InVolume = InVolume;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SynthComponentToneGenerator.SetFrequency
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InFrequency                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthComponentToneGenerator::SetFrequency(float InFrequency)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthComponentToneGenerator.SetFrequency"));

	struct
	{
		float                          InFrequency;
	} params = {};

	params.InFrequency = InFrequency;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SynthSamplePlayer.SetSoundWave
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// class USoundWave*              InSoundWave                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthSamplePlayer::SetSoundWave(class USoundWave* InSoundWave)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthSamplePlayer.SetSoundWave"));

	struct
	{
		class USoundWave*              InSoundWave;
	} params = {};

	params.InSoundWave = InSoundWave;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SynthSamplePlayer.SetScrubTimeWidth
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InScrubTimeWidthSec            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthSamplePlayer::SetScrubTimeWidth(float InScrubTimeWidthSec)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthSamplePlayer.SetScrubTimeWidth"));

	struct
	{
		float                          InScrubTimeWidthSec;
	} params = {};

	params.InScrubTimeWidthSec = InScrubTimeWidthSec;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SynthSamplePlayer.SetScrubMode
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           bScrubMode                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthSamplePlayer::SetScrubMode(bool bScrubMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthSamplePlayer.SetScrubMode"));

	struct
	{
		bool                           bScrubMode;
	} params = {};

	params.bScrubMode = bScrubMode;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SynthSamplePlayer.SetPitch
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InPitch                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          TimeSec                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthSamplePlayer::SetPitch(float InPitch, float TimeSec)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthSamplePlayer.SetPitch"));

	struct
	{
		float                          InPitch;
		float                          TimeSec;
	} params = {};

	params.InPitch = InPitch;
	params.TimeSec = TimeSec;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SynthSamplePlayer.SeekToTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          TimeSec                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// ESamplePlayerSeekType          SeekType                       (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// bool                           bWrap                          (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthSamplePlayer::SeekToTime(float TimeSec, ESamplePlayerSeekType SeekType, bool bWrap)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthSamplePlayer.SeekToTime"));

	struct
	{
		float                          TimeSec;
		ESamplePlayerSeekType          SeekType;
		bool                           bWrap;
	} params = {};

	params.TimeSec = TimeSec;
	params.SeekType = SeekType;
	params.bWrap = bWrap;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SynthSamplePlayer.IsLoaded
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

bool USynthSamplePlayer::IsLoaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthSamplePlayer.IsLoaded"));

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


// Function Synthesis.SynthSamplePlayer.GetSampleDuration
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float USynthSamplePlayer::GetSampleDuration()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthSamplePlayer.GetSampleDuration"));

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


// Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float USynthSamplePlayer::GetCurrentPlaybackProgressTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime"));

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


// Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float USynthSamplePlayer::GetCurrentPlaybackProgressPercent()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent"));

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


// Function Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLogFrequency
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_BlueprintCallable)
// Parameters:
// float                          InLinearValue                  (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          InDomainMin                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          InDomainMax                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          InRangeMin                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          InRangeMax                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float USynthesisUtilitiesBlueprintFunctionLibrary::GetLogFrequency(float InLinearValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLogFrequency"));

	struct
	{
		float                          InLinearValue;
		float                          InDomainMin;
		float                          InDomainMax;
		float                          InRangeMin;
		float                          InRangeMax;
		float                          ReturnValue;
	} params = {};

	params.InLinearValue = InLinearValue;
	params.InDomainMin = InDomainMin;
	params.InDomainMax = InDomainMax;
	params.InRangeMin = InRangeMin;
	params.InRangeMax = InRangeMax;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLinearFrequency
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Private, FUNC_BlueprintCallable)
// Parameters:
// float                          InLogFrequencyValue            (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          InDomainMin                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          InDomainMax                    (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          InRangeMin                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          InRangeMax                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float USynthesisUtilitiesBlueprintFunctionLibrary::GetLinearFrequency(float InLogFrequencyValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLinearFrequency"));

	struct
	{
		float                          InLogFrequencyValue;
		float                          InDomainMin;
		float                          InDomainMax;
		float                          InRangeMin;
		float                          InRangeMax;
		float                          ReturnValue;
	} params = {};

	params.InLogFrequencyValue = InLogFrequencyValue;
	params.InDomainMin = InDomainMin;
	params.InDomainMax = InDomainMax;
	params.InRangeMin = InRangeMin;
	params.InRangeMax = InRangeMax;

	if (fn)
	{
		static auto defaultObj = StaticClass()->CreateDefaultObject();
		defaultObj->ProcessEvent(fn, &params);
	}

	return params.ReturnValue;
}


// Function Synthesis.SynthKnob.SetValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InValue                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthKnob::SetValue(float InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthKnob.SetValue"));

	struct
	{
		float                          InValue;
	} params = {};

	params.InValue = InValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SynthKnob.SetStepSize
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// float                          InValue                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthKnob::SetStepSize(float InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthKnob.SetStepSize"));

	struct
	{
		float                          InValue;
	} params = {};

	params.InValue = InValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SynthKnob.SetLocked
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable)
// Parameters:
// bool                           InValue                        (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

void USynthKnob::SetLocked(bool InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthKnob.SetLocked"));

	struct
	{
		bool                           InValue;
	} params = {};

	params.InValue = InValue;

	if (fn)
	{
		UObject::ProcessEvent(fn, &params);
	}
}


// Function Synthesis.SynthKnob.GetValue
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintPure, FUNC_Const)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)

float USynthKnob::GetValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>(_xor_("Function Synthesis.SynthKnob.GetValue"));

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

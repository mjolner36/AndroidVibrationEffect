// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AndroidVibrationEffect/Public/AndroidVibrationEffectBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAndroidVibrationEffectBPLibrary() {}

// Begin Cross Module References
ANDROIDVIBRATIONEFFECT_API UClass* Z_Construct_UClass_UAndroidVibrationEffectBPLibrary();
ANDROIDVIBRATIONEFFECT_API UClass* Z_Construct_UClass_UAndroidVibrationEffectBPLibrary_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_AndroidVibrationEffect();
// End Cross Module References

// Begin Class UAndroidVibrationEffectBPLibrary Function AndroidVibrationEffectSampleFunction
struct Z_Construct_UFunction_UAndroidVibrationEffectBPLibrary_AndroidVibrationEffectSampleFunction_Statics
{
	struct AndroidVibrationEffectBPLibrary_eventAndroidVibrationEffectSampleFunction_Parms
	{
		float Param;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AndroidVibrationEffectTesting" },
		{ "DisplayName", "Execute Sample function" },
		{ "Keywords", "AndroidVibrationEffect sample test testing" },
		{ "ModuleRelativePath", "Public/AndroidVibrationEffectBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Param;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAndroidVibrationEffectBPLibrary_AndroidVibrationEffectSampleFunction_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AndroidVibrationEffectBPLibrary_eventAndroidVibrationEffectSampleFunction_Parms, Param), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAndroidVibrationEffectBPLibrary_AndroidVibrationEffectSampleFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAndroidVibrationEffectBPLibrary_AndroidVibrationEffectSampleFunction_Statics::NewProp_Param,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidVibrationEffectBPLibrary_AndroidVibrationEffectSampleFunction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAndroidVibrationEffectBPLibrary_AndroidVibrationEffectSampleFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAndroidVibrationEffectBPLibrary, nullptr, "AndroidVibrationEffectSampleFunction", nullptr, nullptr, Z_Construct_UFunction_UAndroidVibrationEffectBPLibrary_AndroidVibrationEffectSampleFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidVibrationEffectBPLibrary_AndroidVibrationEffectSampleFunction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAndroidVibrationEffectBPLibrary_AndroidVibrationEffectSampleFunction_Statics::AndroidVibrationEffectBPLibrary_eventAndroidVibrationEffectSampleFunction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAndroidVibrationEffectBPLibrary_AndroidVibrationEffectSampleFunction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAndroidVibrationEffectBPLibrary_AndroidVibrationEffectSampleFunction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAndroidVibrationEffectBPLibrary_AndroidVibrationEffectSampleFunction_Statics::AndroidVibrationEffectBPLibrary_eventAndroidVibrationEffectSampleFunction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAndroidVibrationEffectBPLibrary_AndroidVibrationEffectSampleFunction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAndroidVibrationEffectBPLibrary_AndroidVibrationEffectSampleFunction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAndroidVibrationEffectBPLibrary::execAndroidVibrationEffectSampleFunction)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Param);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAndroidVibrationEffectBPLibrary::AndroidVibrationEffectSampleFunction(Z_Param_Param);
	P_NATIVE_END;
}
// End Class UAndroidVibrationEffectBPLibrary Function AndroidVibrationEffectSampleFunction

// Begin Class UAndroidVibrationEffectBPLibrary
void UAndroidVibrationEffectBPLibrary::StaticRegisterNativesUAndroidVibrationEffectBPLibrary()
{
	UClass* Class = UAndroidVibrationEffectBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AndroidVibrationEffectSampleFunction", &UAndroidVibrationEffectBPLibrary::execAndroidVibrationEffectSampleFunction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAndroidVibrationEffectBPLibrary);
UClass* Z_Construct_UClass_UAndroidVibrationEffectBPLibrary_NoRegister()
{
	return UAndroidVibrationEffectBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UAndroidVibrationEffectBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AndroidVibrationEffectBPLibrary.h" },
		{ "ModuleRelativePath", "Public/AndroidVibrationEffectBPLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAndroidVibrationEffectBPLibrary_AndroidVibrationEffectSampleFunction, "AndroidVibrationEffectSampleFunction" }, // 3837656060
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAndroidVibrationEffectBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAndroidVibrationEffectBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AndroidVibrationEffect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidVibrationEffectBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAndroidVibrationEffectBPLibrary_Statics::ClassParams = {
	&UAndroidVibrationEffectBPLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAndroidVibrationEffectBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAndroidVibrationEffectBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAndroidVibrationEffectBPLibrary()
{
	if (!Z_Registration_Info_UClass_UAndroidVibrationEffectBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAndroidVibrationEffectBPLibrary.OuterSingleton, Z_Construct_UClass_UAndroidVibrationEffectBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAndroidVibrationEffectBPLibrary.OuterSingleton;
}
template<> ANDROIDVIBRATIONEFFECT_API UClass* StaticClass<UAndroidVibrationEffectBPLibrary>()
{
	return UAndroidVibrationEffectBPLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAndroidVibrationEffectBPLibrary);
UAndroidVibrationEffectBPLibrary::~UAndroidVibrationEffectBPLibrary() {}
// End Class UAndroidVibrationEffectBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Ruslan_Documents_Unreal_Projects_AndroidVibration_Plugins_AndroidVibrationEffect_Source_AndroidVibrationEffect_Public_AndroidVibrationEffectBPLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAndroidVibrationEffectBPLibrary, UAndroidVibrationEffectBPLibrary::StaticClass, TEXT("UAndroidVibrationEffectBPLibrary"), &Z_Registration_Info_UClass_UAndroidVibrationEffectBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAndroidVibrationEffectBPLibrary), 1061447607U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Ruslan_Documents_Unreal_Projects_AndroidVibration_Plugins_AndroidVibrationEffect_Source_AndroidVibrationEffect_Public_AndroidVibrationEffectBPLibrary_h_3331049231(TEXT("/Script/AndroidVibrationEffect"),
	Z_CompiledInDeferFile_FID_Users_Ruslan_Documents_Unreal_Projects_AndroidVibration_Plugins_AndroidVibrationEffect_Source_AndroidVibrationEffect_Public_AndroidVibrationEffectBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Ruslan_Documents_Unreal_Projects_AndroidVibration_Plugins_AndroidVibrationEffect_Source_AndroidVibrationEffect_Public_AndroidVibrationEffectBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadyPlayerMeEditor/Public/ReadyPlayerMeEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReadyPlayerMeEditorSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	READYPLAYERMEEDITOR_API UClass* Z_Construct_UClass_UReadyPlayerMeEditorSettings();
	READYPLAYERMEEDITOR_API UClass* Z_Construct_UClass_UReadyPlayerMeEditorSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ReadyPlayerMeEditor();
// End Cross Module References
	void UReadyPlayerMeEditorSettings::StaticRegisterNativesUReadyPlayerMeEditorSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReadyPlayerMeEditorSettings);
	UClass* Z_Construct_UClass_UReadyPlayerMeEditorSettings_NoRegister()
	{
		return UReadyPlayerMeEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAnalytics_MetaData[];
#endif
		static void NewProp_bEnableAnalytics_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAnalytics;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnalyticsTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AnalyticsTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_ReadyPlayerMeEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Ready Player Me" },
		{ "IncludePath", "ReadyPlayerMeEditorSettings.h" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeEditorSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::NewProp_bEnableAnalytics_MetaData[] = {
		{ "Category", "Privacy" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeEditorSettings.h" },
	};
#endif
	void Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::NewProp_bEnableAnalytics_SetBit(void* Obj)
	{
		((UReadyPlayerMeEditorSettings*)Obj)->bEnableAnalytics = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::NewProp_bEnableAnalytics = { "bEnableAnalytics", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UReadyPlayerMeEditorSettings), &Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::NewProp_bEnableAnalytics_SetBit, METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::NewProp_bEnableAnalytics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::NewProp_bEnableAnalytics_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::NewProp_AnalyticsTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReadyPlayerMeEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::NewProp_AnalyticsTarget = { "AnalyticsTarget", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UReadyPlayerMeEditorSettings, AnalyticsTarget), METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::NewProp_AnalyticsTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::NewProp_AnalyticsTarget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::NewProp_bEnableAnalytics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::NewProp_AnalyticsTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReadyPlayerMeEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::ClassParams = {
		&UReadyPlayerMeEditorSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReadyPlayerMeEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UReadyPlayerMeEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReadyPlayerMeEditorSettings.OuterSingleton, Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReadyPlayerMeEditorSettings.OuterSingleton;
	}
	template<> READYPLAYERMEEDITOR_API UClass* StaticClass<UReadyPlayerMeEditorSettings>()
	{
		return UReadyPlayerMeEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReadyPlayerMeEditorSettings);
	UReadyPlayerMeEditorSettings::~UReadyPlayerMeEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMeEditor_Public_ReadyPlayerMeEditorSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMeEditor_Public_ReadyPlayerMeEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReadyPlayerMeEditorSettings, UReadyPlayerMeEditorSettings::StaticClass, TEXT("UReadyPlayerMeEditorSettings"), &Z_Registration_Info_UClass_UReadyPlayerMeEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReadyPlayerMeEditorSettings), 1280249056U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMeEditor_Public_ReadyPlayerMeEditorSettings_h_3496463043(TEXT("/Script/ReadyPlayerMeEditor"),
		Z_CompiledInDeferFile_FID_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMeEditor_Public_ReadyPlayerMeEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMeEditor_Public_ReadyPlayerMeEditorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadyPlayerMe/Public/ReadyPlayerMeSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReadyPlayerMeSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeSettings();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ReadyPlayerMe();
// End Cross Module References
	void UReadyPlayerMeSettings::StaticRegisterNativesUReadyPlayerMeSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReadyPlayerMeSettings);
	UClass* Z_Construct_UClass_UReadyPlayerMeSettings_NoRegister()
	{
		return UReadyPlayerMeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UReadyPlayerMeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AppId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Subdomain_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Subdomain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAvatarCaching_MetaData[];
#endif
		static void NewProp_bEnableAvatarCaching_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAvatarCaching;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReadyPlayerMeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_ReadyPlayerMe,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Ready Player Me" },
		{ "IncludePath", "ReadyPlayerMeSettings.h" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_AppId_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "App ID" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeSettings.h" },
		{ "ToolTip", "The App ID is used to identify your application. You can find it in the Ready Player Me application dashboard in studio https://studio.readyplayer.me/applications." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UReadyPlayerMeSettings, AppId), METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_AppId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_AppId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_Subdomain_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Subdomain" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeSettings.h" },
		{ "ToolTip", "The Subdomain is used to identify your application. You can find it in the Ready Player Me application dashboard in studio https://studio.readyplayer.me/applications." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_Subdomain = { "Subdomain", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UReadyPlayerMeSettings, Subdomain), METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_Subdomain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_Subdomain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_bEnableAvatarCaching_MetaData[] = {
		{ "Category", "Settings" },
		{ "DisplayName", "Enable Avatar Caching" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeSettings.h" },
		{ "ToolTip", "If checked, the loaded avatars will be saved in the local storage." },
	};
#endif
	void Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_bEnableAvatarCaching_SetBit(void* Obj)
	{
		((UReadyPlayerMeSettings*)Obj)->bEnableAvatarCaching = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_bEnableAvatarCaching = { "bEnableAvatarCaching", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UReadyPlayerMeSettings), &Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_bEnableAvatarCaching_SetBit, METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_bEnableAvatarCaching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_bEnableAvatarCaching_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReadyPlayerMeSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_AppId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_Subdomain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeSettings_Statics::NewProp_bEnableAvatarCaching,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReadyPlayerMeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReadyPlayerMeSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReadyPlayerMeSettings_Statics::ClassParams = {
		&UReadyPlayerMeSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UReadyPlayerMeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReadyPlayerMeSettings()
	{
		if (!Z_Registration_Info_UClass_UReadyPlayerMeSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReadyPlayerMeSettings.OuterSingleton, Z_Construct_UClass_UReadyPlayerMeSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReadyPlayerMeSettings.OuterSingleton;
	}
	template<> READYPLAYERME_API UClass* StaticClass<UReadyPlayerMeSettings>()
	{
		return UReadyPlayerMeSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReadyPlayerMeSettings);
	UReadyPlayerMeSettings::~UReadyPlayerMeSettings() {}
	struct Z_CompiledInDeferFile_FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReadyPlayerMeSettings, UReadyPlayerMeSettings::StaticClass, TEXT("UReadyPlayerMeSettings"), &Z_Registration_Info_UClass_UReadyPlayerMeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReadyPlayerMeSettings), 1002893157U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeSettings_h_1295944192(TEXT("/Script/ReadyPlayerMe"),
		Z_CompiledInDeferFile_FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

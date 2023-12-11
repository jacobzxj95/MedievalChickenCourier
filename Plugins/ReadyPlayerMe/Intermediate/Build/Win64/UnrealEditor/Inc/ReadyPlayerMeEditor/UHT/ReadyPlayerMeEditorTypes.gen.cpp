// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadyPlayerMeEditor/Public/ReadyPlayerMeEditorTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReadyPlayerMeEditorTypes() {}
// Cross Module References
	READYPLAYERMEEDITOR_API UEnum* Z_Construct_UEnum_ReadyPlayerMeEditor_ERpmAnalyticsEventType();
	UPackage* Z_Construct_UPackage__Script_ReadyPlayerMeEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERpmAnalyticsEventType;
	static UEnum* ERpmAnalyticsEventType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERpmAnalyticsEventType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERpmAnalyticsEventType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ReadyPlayerMeEditor_ERpmAnalyticsEventType, Z_Construct_UPackage__Script_ReadyPlayerMeEditor(), TEXT("ERpmAnalyticsEventType"));
		}
		return Z_Registration_Info_UEnum_ERpmAnalyticsEventType.OuterSingleton;
	}
	template<> READYPLAYERMEEDITOR_API UEnum* StaticEnum<ERpmAnalyticsEventType>()
	{
		return ERpmAnalyticsEventType_StaticEnum();
	}
	struct Z_Construct_UEnum_ReadyPlayerMeEditor_ERpmAnalyticsEventType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ReadyPlayerMeEditor_ERpmAnalyticsEventType_Statics::Enumerators[] = {
		{ "ERpmAnalyticsEventType::OpenProject", (int64)ERpmAnalyticsEventType::OpenProject },
		{ "ERpmAnalyticsEventType::CloseProject", (int64)ERpmAnalyticsEventType::CloseProject },
		{ "ERpmAnalyticsEventType::EnableCaching", (int64)ERpmAnalyticsEventType::EnableCaching },
		{ "ERpmAnalyticsEventType::SetUserProperties", (int64)ERpmAnalyticsEventType::SetUserProperties },
		{ "ERpmAnalyticsEventType::AllowLogging", (int64)ERpmAnalyticsEventType::AllowLogging },
		{ "ERpmAnalyticsEventType::OpenIntegrationGuide", (int64)ERpmAnalyticsEventType::OpenIntegrationGuide },
		{ "ERpmAnalyticsEventType::LoadQuickStartScene", (int64)ERpmAnalyticsEventType::LoadQuickStartScene },
		{ "ERpmAnalyticsEventType::OpenAvatarDocumentation", (int64)ERpmAnalyticsEventType::OpenAvatarDocumentation },
		{ "ERpmAnalyticsEventType::OpenSamplesDocumentation", (int64)ERpmAnalyticsEventType::OpenSamplesDocumentation },
		{ "ERpmAnalyticsEventType::OpenAnimationDocumentation", (int64)ERpmAnalyticsEventType::OpenAnimationDocumentation },
		{ "ERpmAnalyticsEventType::OpenAvatarCreatorDocumentation", (int64)ERpmAnalyticsEventType::OpenAvatarCreatorDocumentation },
		{ "ERpmAnalyticsEventType::ViewPrivacyPolicy", (int64)ERpmAnalyticsEventType::ViewPrivacyPolicy },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ReadyPlayerMeEditor_ERpmAnalyticsEventType_Statics::Enum_MetaDataParams[] = {
		{ "AllowLogging.DisplayName", "Allow Logging" },
		{ "AllowLogging.Name", "ERpmAnalyticsEventType::AllowLogging" },
		{ "BlueprintType", "true" },
		{ "CloseProject.DisplayName", "Close Project" },
		{ "CloseProject.Name", "ERpmAnalyticsEventType::CloseProject" },
		{ "EnableCaching.DisplayName", "Enable Caching" },
		{ "EnableCaching.Name", "ERpmAnalyticsEventType::EnableCaching" },
		{ "LoadQuickStartScene.DisplayName", "Load Quick Start Scene" },
		{ "LoadQuickStartScene.Name", "ERpmAnalyticsEventType::LoadQuickStartScene" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeEditorTypes.h" },
		{ "OpenAnimationDocumentation.DisplayName", "Open Animation Documentation" },
		{ "OpenAnimationDocumentation.Name", "ERpmAnalyticsEventType::OpenAnimationDocumentation" },
		{ "OpenAvatarCreatorDocumentation.DisplayName", "Open Avatar Creator Documentation" },
		{ "OpenAvatarCreatorDocumentation.Name", "ERpmAnalyticsEventType::OpenAvatarCreatorDocumentation" },
		{ "OpenAvatarDocumentation.DisplayName", "Open Avatar Documentation" },
		{ "OpenAvatarDocumentation.Name", "ERpmAnalyticsEventType::OpenAvatarDocumentation" },
		{ "OpenIntegrationGuide.DisplayName", "Open Integration Guide" },
		{ "OpenIntegrationGuide.Name", "ERpmAnalyticsEventType::OpenIntegrationGuide" },
		{ "OpenProject.DisplayName", "Open Project" },
		{ "OpenProject.Name", "ERpmAnalyticsEventType::OpenProject" },
		{ "OpenSamplesDocumentation.DisplayName", "Open Samples Documentation" },
		{ "OpenSamplesDocumentation.Name", "ERpmAnalyticsEventType::OpenSamplesDocumentation" },
		{ "SetUserProperties.DisplayName", "Set User Properties" },
		{ "SetUserProperties.Name", "ERpmAnalyticsEventType::SetUserProperties" },
		{ "ViewPrivacyPolicy.DisplayName", "View Privacy Policy" },
		{ "ViewPrivacyPolicy.Name", "ERpmAnalyticsEventType::ViewPrivacyPolicy" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ReadyPlayerMeEditor_ERpmAnalyticsEventType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ReadyPlayerMeEditor,
		nullptr,
		"ERpmAnalyticsEventType",
		"ERpmAnalyticsEventType",
		Z_Construct_UEnum_ReadyPlayerMeEditor_ERpmAnalyticsEventType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ReadyPlayerMeEditor_ERpmAnalyticsEventType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ReadyPlayerMeEditor_ERpmAnalyticsEventType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ReadyPlayerMeEditor_ERpmAnalyticsEventType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ReadyPlayerMeEditor_ERpmAnalyticsEventType()
	{
		if (!Z_Registration_Info_UEnum_ERpmAnalyticsEventType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERpmAnalyticsEventType.InnerSingleton, Z_Construct_UEnum_ReadyPlayerMeEditor_ERpmAnalyticsEventType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERpmAnalyticsEventType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMeEditor_Public_ReadyPlayerMeEditorTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMeEditor_Public_ReadyPlayerMeEditorTypes_h_Statics::EnumInfo[] = {
		{ ERpmAnalyticsEventType_StaticEnum, TEXT("ERpmAnalyticsEventType"), &Z_Registration_Info_UEnum_ERpmAnalyticsEventType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2464629169U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMeEditor_Public_ReadyPlayerMeEditorTypes_h_2475981052(TEXT("/Script/ReadyPlayerMeEditor"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMeEditor_Public_ReadyPlayerMeEditorTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMeEditor_Public_ReadyPlayerMeEditorTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

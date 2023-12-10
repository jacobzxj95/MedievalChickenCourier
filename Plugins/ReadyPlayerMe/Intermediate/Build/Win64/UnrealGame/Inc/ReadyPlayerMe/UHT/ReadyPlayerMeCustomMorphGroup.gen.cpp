// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadyPlayerMe/Public/AvatarConfig/ReadyPlayerMeCustomMorphGroup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReadyPlayerMeCustomMorphGroup() {}
// Cross Module References
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeCustomMorphGroup();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeCustomMorphGroup_NoRegister();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeMorphTargetGroup();
	READYPLAYERME_API UEnum* Z_Construct_UEnum_ReadyPlayerMe_EAvatarMorphTarget();
	UPackage* Z_Construct_UPackage__Script_ReadyPlayerMe();
// End Cross Module References
	void UReadyPlayerMeCustomMorphGroup::StaticRegisterNativesUReadyPlayerMeCustomMorphGroup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReadyPlayerMeCustomMorphGroup);
	UClass* Z_Construct_UClass_UReadyPlayerMeCustomMorphGroup_NoRegister()
	{
		return UReadyPlayerMeCustomMorphGroup::StaticClass();
	}
	struct Z_Construct_UClass_UReadyPlayerMeCustomMorphGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MorphTargets_ElementProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MorphTargets_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MorphTargets_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_MorphTargets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReadyPlayerMeCustomMorphGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UReadyPlayerMeMorphTargetGroup,
		(UObject* (*)())Z_Construct_UPackage__Script_ReadyPlayerMe,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeCustomMorphGroup_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base data asset class for providing custom morph targets to the avatar config.\n * For customization create a blueprint data asset subclass.\n */" },
		{ "IncludePath", "AvatarConfig/ReadyPlayerMeCustomMorphGroup.h" },
		{ "ModuleRelativePath", "Public/AvatarConfig/ReadyPlayerMeCustomMorphGroup.h" },
		{ "ToolTip", "Base data asset class for providing custom morph targets to the avatar config.\nFor customization create a blueprint data asset subclass." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UReadyPlayerMeCustomMorphGroup_Statics::NewProp_MorphTargets_ElementProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UReadyPlayerMeCustomMorphGroup_Statics::NewProp_MorphTargets_ElementProp = { "MorphTargets", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_ReadyPlayerMe_EAvatarMorphTarget, METADATA_PARAMS(nullptr, 0) }; // 57736107
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeCustomMorphGroup_Statics::NewProp_MorphTargets_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "Comment", "/** The selected morph targets will be included in the avatar. */" },
		{ "ModuleRelativePath", "Public/AvatarConfig/ReadyPlayerMeCustomMorphGroup.h" },
		{ "ToolTip", "The selected morph targets will be included in the avatar." },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UReadyPlayerMeCustomMorphGroup_Statics::NewProp_MorphTargets = { "MorphTargets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UReadyPlayerMeCustomMorphGroup, MorphTargets), METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMeCustomMorphGroup_Statics::NewProp_MorphTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeCustomMorphGroup_Statics::NewProp_MorphTargets_MetaData)) }; // 57736107
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReadyPlayerMeCustomMorphGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeCustomMorphGroup_Statics::NewProp_MorphTargets_ElementProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeCustomMorphGroup_Statics::NewProp_MorphTargets_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeCustomMorphGroup_Statics::NewProp_MorphTargets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReadyPlayerMeCustomMorphGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReadyPlayerMeCustomMorphGroup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReadyPlayerMeCustomMorphGroup_Statics::ClassParams = {
		&UReadyPlayerMeCustomMorphGroup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UReadyPlayerMeCustomMorphGroup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeCustomMorphGroup_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMeCustomMorphGroup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeCustomMorphGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReadyPlayerMeCustomMorphGroup()
	{
		if (!Z_Registration_Info_UClass_UReadyPlayerMeCustomMorphGroup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReadyPlayerMeCustomMorphGroup.OuterSingleton, Z_Construct_UClass_UReadyPlayerMeCustomMorphGroup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReadyPlayerMeCustomMorphGroup.OuterSingleton;
	}
	template<> READYPLAYERME_API UClass* StaticClass<UReadyPlayerMeCustomMorphGroup>()
	{
		return UReadyPlayerMeCustomMorphGroup::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReadyPlayerMeCustomMorphGroup);
	UReadyPlayerMeCustomMorphGroup::~UReadyPlayerMeCustomMorphGroup() {}
	struct Z_CompiledInDeferFile_FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_AvatarConfig_ReadyPlayerMeCustomMorphGroup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_AvatarConfig_ReadyPlayerMeCustomMorphGroup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReadyPlayerMeCustomMorphGroup, UReadyPlayerMeCustomMorphGroup::StaticClass, TEXT("UReadyPlayerMeCustomMorphGroup"), &Z_Registration_Info_UClass_UReadyPlayerMeCustomMorphGroup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReadyPlayerMeCustomMorphGroup), 3282103298U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_AvatarConfig_ReadyPlayerMeCustomMorphGroup_h_196299685(TEXT("/Script/ReadyPlayerMe"),
		Z_CompiledInDeferFile_FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_AvatarConfig_ReadyPlayerMeCustomMorphGroup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_AvatarConfig_ReadyPlayerMeCustomMorphGroup_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

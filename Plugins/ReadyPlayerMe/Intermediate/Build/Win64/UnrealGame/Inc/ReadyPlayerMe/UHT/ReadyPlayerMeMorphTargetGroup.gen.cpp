// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadyPlayerMe/Public/AvatarConfig/ReadyPlayerMeMorphTargetGroup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReadyPlayerMeMorphTargetGroup() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeMorphTargetGroup();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeMorphTargetGroup_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ReadyPlayerMe();
// End Cross Module References
	void UReadyPlayerMeMorphTargetGroup::StaticRegisterNativesUReadyPlayerMeMorphTargetGroup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReadyPlayerMeMorphTargetGroup);
	UClass* Z_Construct_UClass_UReadyPlayerMeMorphTargetGroup_NoRegister()
	{
		return UReadyPlayerMeMorphTargetGroup::StaticClass();
	}
	struct Z_Construct_UClass_UReadyPlayerMeMorphTargetGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReadyPlayerMeMorphTargetGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_ReadyPlayerMe,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeMorphTargetGroup_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Base data asset class that provides morph targets to the avatar config.\n * Do not override this class for the customisation. Override the Standard or Custom TargetGroup instead.\n */" },
		{ "IncludePath", "AvatarConfig/ReadyPlayerMeMorphTargetGroup.h" },
		{ "ModuleRelativePath", "Public/AvatarConfig/ReadyPlayerMeMorphTargetGroup.h" },
		{ "ToolTip", "Base data asset class that provides morph targets to the avatar config.\nDo not override this class for the customisation. Override the Standard or Custom TargetGroup instead." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReadyPlayerMeMorphTargetGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReadyPlayerMeMorphTargetGroup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReadyPlayerMeMorphTargetGroup_Statics::ClassParams = {
		&UReadyPlayerMeMorphTargetGroup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMeMorphTargetGroup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeMorphTargetGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReadyPlayerMeMorphTargetGroup()
	{
		if (!Z_Registration_Info_UClass_UReadyPlayerMeMorphTargetGroup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReadyPlayerMeMorphTargetGroup.OuterSingleton, Z_Construct_UClass_UReadyPlayerMeMorphTargetGroup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReadyPlayerMeMorphTargetGroup.OuterSingleton;
	}
	template<> READYPLAYERME_API UClass* StaticClass<UReadyPlayerMeMorphTargetGroup>()
	{
		return UReadyPlayerMeMorphTargetGroup::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReadyPlayerMeMorphTargetGroup);
	UReadyPlayerMeMorphTargetGroup::~UReadyPlayerMeMorphTargetGroup() {}
	struct Z_CompiledInDeferFile_FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_AvatarConfig_ReadyPlayerMeMorphTargetGroup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_AvatarConfig_ReadyPlayerMeMorphTargetGroup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReadyPlayerMeMorphTargetGroup, UReadyPlayerMeMorphTargetGroup::StaticClass, TEXT("UReadyPlayerMeMorphTargetGroup"), &Z_Registration_Info_UClass_UReadyPlayerMeMorphTargetGroup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReadyPlayerMeMorphTargetGroup), 1910872306U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_AvatarConfig_ReadyPlayerMeMorphTargetGroup_h_1321934748(TEXT("/Script/ReadyPlayerMe"),
		Z_CompiledInDeferFile_FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_AvatarConfig_ReadyPlayerMeMorphTargetGroup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_AvatarConfig_ReadyPlayerMeMorphTargetGroup_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

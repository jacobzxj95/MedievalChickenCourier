// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadyPlayerMe/Public/ReadyPlayerMeGameSubsystem.h"
#include "Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReadyPlayerMeGameSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeGameSubsystem();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeGameSubsystem_NoRegister();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeMemoryCache_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ReadyPlayerMe();
// End Cross Module References
	void UReadyPlayerMeGameSubsystem::StaticRegisterNativesUReadyPlayerMeGameSubsystem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReadyPlayerMeGameSubsystem);
	UClass* Z_Construct_UClass_UReadyPlayerMeGameSubsystem_NoRegister()
	{
		return UReadyPlayerMeGameSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UReadyPlayerMeGameSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MemoryCache_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MemoryCache;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReadyPlayerMeGameSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_ReadyPlayerMe,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeGameSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ReadyPlayerMeGameSubsystem.h" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeGameSubsystem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeGameSubsystem_Statics::NewProp_MemoryCache_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeGameSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReadyPlayerMeGameSubsystem_Statics::NewProp_MemoryCache = { "MemoryCache", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UReadyPlayerMeGameSubsystem, MemoryCache), Z_Construct_UClass_UReadyPlayerMeMemoryCache_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMeGameSubsystem_Statics::NewProp_MemoryCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeGameSubsystem_Statics::NewProp_MemoryCache_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReadyPlayerMeGameSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeGameSubsystem_Statics::NewProp_MemoryCache,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReadyPlayerMeGameSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReadyPlayerMeGameSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReadyPlayerMeGameSubsystem_Statics::ClassParams = {
		&UReadyPlayerMeGameSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UReadyPlayerMeGameSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeGameSubsystem_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMeGameSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeGameSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReadyPlayerMeGameSubsystem()
	{
		if (!Z_Registration_Info_UClass_UReadyPlayerMeGameSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReadyPlayerMeGameSubsystem.OuterSingleton, Z_Construct_UClass_UReadyPlayerMeGameSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReadyPlayerMeGameSubsystem.OuterSingleton;
	}
	template<> READYPLAYERME_API UClass* StaticClass<UReadyPlayerMeGameSubsystem>()
	{
		return UReadyPlayerMeGameSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReadyPlayerMeGameSubsystem);
	UReadyPlayerMeGameSubsystem::~UReadyPlayerMeGameSubsystem() {}
	struct Z_CompiledInDeferFile_FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeGameSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeGameSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReadyPlayerMeGameSubsystem, UReadyPlayerMeGameSubsystem::StaticClass, TEXT("UReadyPlayerMeGameSubsystem"), &Z_Registration_Info_UClass_UReadyPlayerMeGameSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReadyPlayerMeGameSubsystem), 3628504776U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeGameSubsystem_h_2920518257(TEXT("/Script/ReadyPlayerMe"),
		Z_CompiledInDeferFile_FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeGameSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeGameSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

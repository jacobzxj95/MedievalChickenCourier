// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadyPlayerMe/Public/ReadyPlayerMeMemoryCache.h"
#include "glTFRuntime/Public/glTFRuntimeParser.h"
#include "ReadyPlayerMe/Public/ReadyPlayerMeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReadyPlayerMeMemoryCache() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	GLTFRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FglTFRuntimeSkeletalMeshConfig();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeAvatarConfig_NoRegister();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeAvatarLoader_NoRegister();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeMemoryCache();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeMemoryCache_NoRegister();
	READYPLAYERME_API UFunction* Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarPreloadCompleted__DelegateSignature();
	READYPLAYERME_API UScriptStruct* Z_Construct_UScriptStruct_FAvatarMemoryCacheData();
	READYPLAYERME_API UScriptStruct* Z_Construct_UScriptStruct_FAvatarMetadata();
	READYPLAYERME_API UScriptStruct* Z_Construct_UScriptStruct_FAvatarPreloadData();
	UPackage* Z_Construct_UPackage__Script_ReadyPlayerMe();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AvatarPreloadData;
class UScriptStruct* FAvatarPreloadData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AvatarPreloadData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AvatarPreloadData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAvatarPreloadData, Z_Construct_UPackage__Script_ReadyPlayerMe(), TEXT("AvatarPreloadData"));
	}
	return Z_Registration_Info_UScriptStruct_AvatarPreloadData.OuterSingleton;
}
template<> READYPLAYERME_API UScriptStruct* StaticStruct<FAvatarPreloadData>()
{
	return FAvatarPreloadData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAvatarPreloadData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvatarConfig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AvatarConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetSkeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetSkeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalMeshConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeMemoryCache.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAvatarPreloadData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_Url_MetaData[] = {
		{ "Category", "ReadyPlayerMe" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeMemoryCache.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAvatarPreloadData, Url), METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_Url_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_AvatarConfig_MetaData[] = {
		{ "Category", "ReadyPlayerMe" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeMemoryCache.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_AvatarConfig = { "AvatarConfig", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAvatarPreloadData, AvatarConfig), Z_Construct_UClass_UReadyPlayerMeAvatarConfig_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_AvatarConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_AvatarConfig_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_TargetSkeleton_MetaData[] = {
		{ "Category", "ReadyPlayerMe" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeMemoryCache.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_TargetSkeleton = { "TargetSkeleton", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAvatarPreloadData, TargetSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_TargetSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_TargetSkeleton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_SkeletalMeshConfig_MetaData[] = {
		{ "Category", "ReadyPlayerMe" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeMemoryCache.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_SkeletalMeshConfig = { "SkeletalMeshConfig", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAvatarPreloadData, SkeletalMeshConfig), Z_Construct_UScriptStruct_FglTFRuntimeSkeletalMeshConfig, METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_SkeletalMeshConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_SkeletalMeshConfig_MetaData)) }; // 3704056235
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_Url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_AvatarConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_TargetSkeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewProp_SkeletalMeshConfig,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ReadyPlayerMe,
		nullptr,
		&NewStructOps,
		"AvatarPreloadData",
		sizeof(FAvatarPreloadData),
		alignof(FAvatarPreloadData),
		Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAvatarPreloadData()
	{
		if (!Z_Registration_Info_UScriptStruct_AvatarPreloadData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AvatarPreloadData.InnerSingleton, Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AvatarPreloadData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AvatarMemoryCacheData;
class UScriptStruct* FAvatarMemoryCacheData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AvatarMemoryCacheData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AvatarMemoryCacheData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAvatarMemoryCacheData, Z_Construct_UPackage__Script_ReadyPlayerMe(), TEXT("AvatarMemoryCacheData"));
	}
	return Z_Registration_Info_UScriptStruct_AvatarMemoryCacheData.OuterSingleton;
}
template<> READYPLAYERME_API UScriptStruct* StaticStruct<FAvatarMemoryCacheData>()
{
	return FAvatarMemoryCacheData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvatarConfigHash_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AvatarConfigHash;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeMemoryCache.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAvatarMemoryCacheData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::NewProp_Url_MetaData[] = {
		{ "Category", "ReadyPlayerMe" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeMemoryCache.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAvatarMemoryCacheData, Url), METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::NewProp_Url_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::NewProp_AvatarConfigHash_MetaData[] = {
		{ "Category", "ReadyPlayerMe" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeMemoryCache.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::NewProp_AvatarConfigHash = { "AvatarConfigHash", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAvatarMemoryCacheData, AvatarConfigHash), METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::NewProp_AvatarConfigHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::NewProp_AvatarConfigHash_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "ReadyPlayerMe" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeMemoryCache.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAvatarMemoryCacheData, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::NewProp_Metadata_MetaData[] = {
		{ "Category", "ReadyPlayerMe" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeMemoryCache.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAvatarMemoryCacheData, Metadata), Z_Construct_UScriptStruct_FAvatarMetadata, METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::NewProp_Metadata_MetaData)) }; // 1360335926
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::NewProp_Url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::NewProp_AvatarConfigHash,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::NewProp_Metadata,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ReadyPlayerMe,
		nullptr,
		&NewStructOps,
		"AvatarMemoryCacheData",
		sizeof(FAvatarMemoryCacheData),
		alignof(FAvatarMemoryCacheData),
		Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAvatarMemoryCacheData()
	{
		if (!Z_Registration_Info_UScriptStruct_AvatarMemoryCacheData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AvatarMemoryCacheData.InnerSingleton, Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AvatarMemoryCacheData.InnerSingleton;
	}
	DEFINE_FUNCTION(UReadyPlayerMeMemoryCache::execOnAvatarLoadFailed)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ErrorMessage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAvatarLoadFailed(Z_Param_ErrorMessage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadyPlayerMeMemoryCache::execOnAvatarDownloaded)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_GET_STRUCT_REF(FAvatarMetadata,Z_Param_Out_Metadata);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAvatarDownloaded(Z_Param_SkeletalMesh,Z_Param_Out_Metadata);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadyPlayerMeMemoryCache::execClearAvatars)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAvatars();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadyPlayerMeMemoryCache::execRemoveAvatar)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Url);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAvatar(Z_Param_Url);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadyPlayerMeMemoryCache::execAddAvatar)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Url);
		P_GET_OBJECT(UReadyPlayerMeAvatarConfig,Z_Param_AvatarConfig);
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_GET_STRUCT_REF(FAvatarMetadata,Z_Param_Out_Metadata);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAvatar(Z_Param_Url,Z_Param_AvatarConfig,Z_Param_SkeletalMesh,Z_Param_Out_Metadata);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadyPlayerMeMemoryCache::execGetAvatarCacheData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Url);
		P_GET_OBJECT(UReadyPlayerMeAvatarConfig,Z_Param_AvatarConfig);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAvatarMemoryCacheData*)Z_Param__Result=P_THIS->GetAvatarCacheData(Z_Param_Url,Z_Param_AvatarConfig);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadyPlayerMeMemoryCache::execPreload)
	{
		P_GET_TARRAY_REF(FAvatarPreloadData,Z_Param_Out_PreloadDataList);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnPreloadCompleted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Preload(Z_Param_Out_PreloadDataList,FAvatarPreloadCompleted(Z_Param_Out_OnPreloadCompleted));
		P_NATIVE_END;
	}
	void UReadyPlayerMeMemoryCache::StaticRegisterNativesUReadyPlayerMeMemoryCache()
	{
		UClass* Class = UReadyPlayerMeMemoryCache::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAvatar", &UReadyPlayerMeMemoryCache::execAddAvatar },
			{ "ClearAvatars", &UReadyPlayerMeMemoryCache::execClearAvatars },
			{ "GetAvatarCacheData", &UReadyPlayerMeMemoryCache::execGetAvatarCacheData },
			{ "OnAvatarDownloaded", &UReadyPlayerMeMemoryCache::execOnAvatarDownloaded },
			{ "OnAvatarLoadFailed", &UReadyPlayerMeMemoryCache::execOnAvatarLoadFailed },
			{ "Preload", &UReadyPlayerMeMemoryCache::execPreload },
			{ "RemoveAvatar", &UReadyPlayerMeMemoryCache::execRemoveAvatar },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar_Statics
	{
		struct ReadyPlayerMeMemoryCache_eventAddAvatar_Parms
		{
			FString Url;
			UReadyPlayerMeAvatarConfig* AvatarConfig;
			USkeletalMesh* SkeletalMesh;
			FAvatarMetadata Metadata;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AvatarConfig;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar_Statics::NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReadyPlayerMeMemoryCache_eventAddAvatar_Parms, Url), METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar_Statics::NewProp_Url_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar_Statics::NewProp_AvatarConfig = { "AvatarConfig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReadyPlayerMeMemoryCache_eventAddAvatar_Parms, AvatarConfig), Z_Construct_UClass_UReadyPlayerMeAvatarConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReadyPlayerMeMemoryCache_eventAddAvatar_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar_Statics::NewProp_Metadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReadyPlayerMeMemoryCache_eventAddAvatar_Parms, Metadata), Z_Construct_UScriptStruct_FAvatarMetadata, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar_Statics::NewProp_Metadata_MetaData)) }; // 1360335926
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar_Statics::NewProp_Url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar_Statics::NewProp_AvatarConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar_Statics::NewProp_Metadata,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "Comment", "/**\n\x09 * Adds an already loaded avatar to the memory cache.\n\x09 *\n\x09 * @param Url Avatar url.\n\x09 * @param AvatarConfig Avatar config.\n\x09 * @param SkeletalMesh Preloaded skeletalMesh of the avatar.\n\x09 * @param Metadata Preloaded avatar Metadata.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeMemoryCache.h" },
		{ "ToolTip", "Adds an already loaded avatar to the memory cache.\n\n@param Url Avatar url.\n@param AvatarConfig Avatar config.\n@param SkeletalMesh Preloaded skeletalMesh of the avatar.\n@param Metadata Preloaded avatar Metadata." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeMemoryCache, nullptr, "AddAvatar", nullptr, nullptr, sizeof(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar_Statics::ReadyPlayerMeMemoryCache_eventAddAvatar_Parms), Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadyPlayerMeMemoryCache_ClearAvatars_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeMemoryCache_ClearAvatars_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "Comment", "/** Clears all avatars from the memory cache. */" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeMemoryCache.h" },
		{ "ToolTip", "Clears all avatars from the memory cache." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeMemoryCache_ClearAvatars_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeMemoryCache, nullptr, "ClearAvatars", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_ClearAvatars_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_ClearAvatars_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeMemoryCache_ClearAvatars()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeMemoryCache_ClearAvatars_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadyPlayerMeMemoryCache_GetAvatarCacheData_Statics
	{
		struct ReadyPlayerMeMemoryCache_eventGetAvatarCacheData_Parms
		{
			FString Url;
			UReadyPlayerMeAvatarConfig* AvatarConfig;
			FAvatarMemoryCacheData ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AvatarConfig;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeMemoryCache_GetAvatarCacheData_Statics::NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadyPlayerMeMemoryCache_GetAvatarCacheData_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReadyPlayerMeMemoryCache_eventGetAvatarCacheData_Parms, Url), METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_GetAvatarCacheData_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_GetAvatarCacheData_Statics::NewProp_Url_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReadyPlayerMeMemoryCache_GetAvatarCacheData_Statics::NewProp_AvatarConfig = { "AvatarConfig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReadyPlayerMeMemoryCache_eventGetAvatarCacheData_Parms, AvatarConfig), Z_Construct_UClass_UReadyPlayerMeAvatarConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReadyPlayerMeMemoryCache_GetAvatarCacheData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReadyPlayerMeMemoryCache_eventGetAvatarCacheData_Parms, ReturnValue), Z_Construct_UScriptStruct_FAvatarMemoryCacheData, METADATA_PARAMS(nullptr, 0) }; // 369427914
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeMemoryCache_GetAvatarCacheData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeMemoryCache_GetAvatarCacheData_Statics::NewProp_Url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeMemoryCache_GetAvatarCacheData_Statics::NewProp_AvatarConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeMemoryCache_GetAvatarCacheData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeMemoryCache_GetAvatarCacheData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "Comment", "/**\n\x09 * Returns the preload avatar data for a specific avatar.\n\x09 *\n\x09 * @param Url Avatar url.\n\x09 * @param AvatarConfig Avatar config.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeMemoryCache.h" },
		{ "ToolTip", "Returns the preload avatar data for a specific avatar.\n\n@param Url Avatar url.\n@param AvatarConfig Avatar config." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeMemoryCache_GetAvatarCacheData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeMemoryCache, nullptr, "GetAvatarCacheData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_GetAvatarCacheData_Statics::ReadyPlayerMeMemoryCache_eventGetAvatarCacheData_Parms), Z_Construct_UFunction_UReadyPlayerMeMemoryCache_GetAvatarCacheData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_GetAvatarCacheData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_GetAvatarCacheData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_GetAvatarCacheData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeMemoryCache_GetAvatarCacheData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeMemoryCache_GetAvatarCacheData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadyPlayerMeMemoryCache_OnAvatarDownloaded_Statics
	{
		struct ReadyPlayerMeMemoryCache_eventOnAvatarDownloaded_Parms
		{
			USkeletalMesh* SkeletalMesh;
			FAvatarMetadata Metadata;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReadyPlayerMeMemoryCache_OnAvatarDownloaded_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReadyPlayerMeMemoryCache_eventOnAvatarDownloaded_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeMemoryCache_OnAvatarDownloaded_Statics::NewProp_Metadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReadyPlayerMeMemoryCache_OnAvatarDownloaded_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReadyPlayerMeMemoryCache_eventOnAvatarDownloaded_Parms, Metadata), Z_Construct_UScriptStruct_FAvatarMetadata, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_OnAvatarDownloaded_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_OnAvatarDownloaded_Statics::NewProp_Metadata_MetaData)) }; // 1360335926
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeMemoryCache_OnAvatarDownloaded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeMemoryCache_OnAvatarDownloaded_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeMemoryCache_OnAvatarDownloaded_Statics::NewProp_Metadata,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeMemoryCache_OnAvatarDownloaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReadyPlayerMeMemoryCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeMemoryCache_OnAvatarDownloaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeMemoryCache, nullptr, "OnAvatarDownloaded", nullptr, nullptr, sizeof(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_OnAvatarDownloaded_Statics::ReadyPlayerMeMemoryCache_eventOnAvatarDownloaded_Parms), Z_Construct_UFunction_UReadyPlayerMeMemoryCache_OnAvatarDownloaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_OnAvatarDownloaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_OnAvatarDownloaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_OnAvatarDownloaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeMemoryCache_OnAvatarDownloaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeMemoryCache_OnAvatarDownloaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadyPlayerMeMemoryCache_OnAvatarLoadFailed_Statics
	{
		struct ReadyPlayerMeMemoryCache_eventOnAvatarLoadFailed_Parms
		{
			FString ErrorMessage;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeMemoryCache_OnAvatarLoadFailed_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadyPlayerMeMemoryCache_OnAvatarLoadFailed_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReadyPlayerMeMemoryCache_eventOnAvatarLoadFailed_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_OnAvatarLoadFailed_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_OnAvatarLoadFailed_Statics::NewProp_ErrorMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeMemoryCache_OnAvatarLoadFailed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeMemoryCache_OnAvatarLoadFailed_Statics::NewProp_ErrorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeMemoryCache_OnAvatarLoadFailed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReadyPlayerMeMemoryCache.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeMemoryCache_OnAvatarLoadFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeMemoryCache, nullptr, "OnAvatarLoadFailed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_OnAvatarLoadFailed_Statics::ReadyPlayerMeMemoryCache_eventOnAvatarLoadFailed_Parms), Z_Construct_UFunction_UReadyPlayerMeMemoryCache_OnAvatarLoadFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_OnAvatarLoadFailed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_OnAvatarLoadFailed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_OnAvatarLoadFailed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeMemoryCache_OnAvatarLoadFailed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeMemoryCache_OnAvatarLoadFailed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadyPlayerMeMemoryCache_Preload_Statics
	{
		struct ReadyPlayerMeMemoryCache_eventPreload_Parms
		{
			TArray<FAvatarPreloadData> PreloadDataList;
			FScriptDelegate OnPreloadCompleted;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreloadDataList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreloadDataList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PreloadDataList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPreloadCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnPreloadCompleted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReadyPlayerMeMemoryCache_Preload_Statics::NewProp_PreloadDataList_Inner = { "PreloadDataList", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAvatarPreloadData, METADATA_PARAMS(nullptr, 0) }; // 4087043119
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeMemoryCache_Preload_Statics::NewProp_PreloadDataList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UReadyPlayerMeMemoryCache_Preload_Statics::NewProp_PreloadDataList = { "PreloadDataList", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReadyPlayerMeMemoryCache_eventPreload_Parms, PreloadDataList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_Preload_Statics::NewProp_PreloadDataList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_Preload_Statics::NewProp_PreloadDataList_MetaData)) }; // 4087043119
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeMemoryCache_Preload_Statics::NewProp_OnPreloadCompleted_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UReadyPlayerMeMemoryCache_Preload_Statics::NewProp_OnPreloadCompleted = { "OnPreloadCompleted", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReadyPlayerMeMemoryCache_eventPreload_Parms, OnPreloadCompleted), Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarPreloadCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_Preload_Statics::NewProp_OnPreloadCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_Preload_Statics::NewProp_OnPreloadCompleted_MetaData)) }; // 3573879047
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeMemoryCache_Preload_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeMemoryCache_Preload_Statics::NewProp_PreloadDataList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeMemoryCache_Preload_Statics::NewProp_PreloadDataList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeMemoryCache_Preload_Statics::NewProp_OnPreloadCompleted,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeMemoryCache_Preload_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "OnPreloadCompleted" },
		{ "Category", "Ready Player Me" },
		{ "Comment", "/**\n\x09 * Preloads the avatar data so the avatars would be instantiated instantly when loading them from the ReadyPlayerMeComponent.\n\x09 * \n\x09 * @param PreloadDataList List of avatar data needed for preloading.\n\x09 * @param OnPreloadCompleted Complete callback. Called when the avatars are preloaded.\n\x09 */" },
		{ "DisplayName", "Preload" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeMemoryCache.h" },
		{ "ToolTip", "Preloads the avatar data so the avatars would be instantiated instantly when loading them from the ReadyPlayerMeComponent.\n\n@param PreloadDataList List of avatar data needed for preloading.\n@param OnPreloadCompleted Complete callback. Called when the avatars are preloaded." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeMemoryCache_Preload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeMemoryCache, nullptr, "Preload", nullptr, nullptr, sizeof(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_Preload_Statics::ReadyPlayerMeMemoryCache_eventPreload_Parms), Z_Construct_UFunction_UReadyPlayerMeMemoryCache_Preload_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_Preload_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_Preload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_Preload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeMemoryCache_Preload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeMemoryCache_Preload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadyPlayerMeMemoryCache_RemoveAvatar_Statics
	{
		struct ReadyPlayerMeMemoryCache_eventRemoveAvatar_Parms
		{
			FString Url;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeMemoryCache_RemoveAvatar_Statics::NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadyPlayerMeMemoryCache_RemoveAvatar_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReadyPlayerMeMemoryCache_eventRemoveAvatar_Parms, Url), METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_RemoveAvatar_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_RemoveAvatar_Statics::NewProp_Url_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeMemoryCache_RemoveAvatar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeMemoryCache_RemoveAvatar_Statics::NewProp_Url,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeMemoryCache_RemoveAvatar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "Comment", "/**\n\x09 * Removes specific avatar data from the memory cache.\n\x09 *\n\x09 * @param Url of the avatar.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeMemoryCache.h" },
		{ "ToolTip", "Removes specific avatar data from the memory cache.\n\n@param Url of the avatar." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeMemoryCache_RemoveAvatar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeMemoryCache, nullptr, "RemoveAvatar", nullptr, nullptr, sizeof(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_RemoveAvatar_Statics::ReadyPlayerMeMemoryCache_eventRemoveAvatar_Parms), Z_Construct_UFunction_UReadyPlayerMeMemoryCache_RemoveAvatar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_RemoveAvatar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_RemoveAvatar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeMemoryCache_RemoveAvatar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeMemoryCache_RemoveAvatar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeMemoryCache_RemoveAvatar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReadyPlayerMeMemoryCache);
	UClass* Z_Construct_UClass_UReadyPlayerMeMemoryCache_NoRegister()
	{
		return UReadyPlayerMeMemoryCache::StaticClass();
	}
	struct Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedAvatars_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedAvatars_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedAvatars;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AvatarLoaders_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AvatarLoaders_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvatarLoaders_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AvatarLoaders;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ReadyPlayerMe,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UReadyPlayerMeMemoryCache_AddAvatar, "AddAvatar" }, // 1155768357
		{ &Z_Construct_UFunction_UReadyPlayerMeMemoryCache_ClearAvatars, "ClearAvatars" }, // 1174262573
		{ &Z_Construct_UFunction_UReadyPlayerMeMemoryCache_GetAvatarCacheData, "GetAvatarCacheData" }, // 2334286573
		{ &Z_Construct_UFunction_UReadyPlayerMeMemoryCache_OnAvatarDownloaded, "OnAvatarDownloaded" }, // 2440501379
		{ &Z_Construct_UFunction_UReadyPlayerMeMemoryCache_OnAvatarLoadFailed, "OnAvatarLoadFailed" }, // 2853945944
		{ &Z_Construct_UFunction_UReadyPlayerMeMemoryCache_Preload, "Preload" }, // 3033700340
		{ &Z_Construct_UFunction_UReadyPlayerMeMemoryCache_RemoveAvatar, "RemoveAvatar" }, // 1419315484
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Is used to preload avatars and store the cached skeletal meshes.\n * Cached avatars will be instantiated instantly. \n */" },
		{ "IncludePath", "ReadyPlayerMeMemoryCache.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeMemoryCache.h" },
		{ "ToolTip", "Is used to preload avatars and store the cached skeletal meshes.\nCached avatars will be instantiated instantly." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics::NewProp_CachedAvatars_Inner = { "CachedAvatars", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAvatarMemoryCacheData, METADATA_PARAMS(nullptr, 0) }; // 369427914
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics::NewProp_CachedAvatars_MetaData[] = {
		{ "Category", "ReadyPlayerMe" },
		{ "Comment", "/** Avatar Data for all the preloaded avatars. */" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeMemoryCache.h" },
		{ "ToolTip", "Avatar Data for all the preloaded avatars." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics::NewProp_CachedAvatars = { "CachedAvatars", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UReadyPlayerMeMemoryCache, CachedAvatars), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics::NewProp_CachedAvatars_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics::NewProp_CachedAvatars_MetaData)) }; // 369427914
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics::NewProp_AvatarLoaders_ValueProp = { "AvatarLoaders", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FAvatarPreloadData, METADATA_PARAMS(nullptr, 0) }; // 4087043119
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics::NewProp_AvatarLoaders_Key_KeyProp = { "AvatarLoaders_Key", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UReadyPlayerMeAvatarLoader_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics::NewProp_AvatarLoaders_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReadyPlayerMeMemoryCache.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics::NewProp_AvatarLoaders = { "AvatarLoaders", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UReadyPlayerMeMemoryCache, AvatarLoaders), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics::NewProp_AvatarLoaders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics::NewProp_AvatarLoaders_MetaData)) }; // 4087043119
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics::NewProp_CachedAvatars_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics::NewProp_CachedAvatars,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics::NewProp_AvatarLoaders_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics::NewProp_AvatarLoaders_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics::NewProp_AvatarLoaders,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReadyPlayerMeMemoryCache>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics::ClassParams = {
		&UReadyPlayerMeMemoryCache::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReadyPlayerMeMemoryCache()
	{
		if (!Z_Registration_Info_UClass_UReadyPlayerMeMemoryCache.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReadyPlayerMeMemoryCache.OuterSingleton, Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReadyPlayerMeMemoryCache.OuterSingleton;
	}
	template<> READYPLAYERME_API UClass* StaticClass<UReadyPlayerMeMemoryCache>()
	{
		return UReadyPlayerMeMemoryCache::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReadyPlayerMeMemoryCache);
	UReadyPlayerMeMemoryCache::~UReadyPlayerMeMemoryCache() {}
	struct Z_CompiledInDeferFile_FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_Statics::ScriptStructInfo[] = {
		{ FAvatarPreloadData::StaticStruct, Z_Construct_UScriptStruct_FAvatarPreloadData_Statics::NewStructOps, TEXT("AvatarPreloadData"), &Z_Registration_Info_UScriptStruct_AvatarPreloadData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAvatarPreloadData), 4087043119U) },
		{ FAvatarMemoryCacheData::StaticStruct, Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics::NewStructOps, TEXT("AvatarMemoryCacheData"), &Z_Registration_Info_UScriptStruct_AvatarMemoryCacheData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAvatarMemoryCacheData), 369427914U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReadyPlayerMeMemoryCache, UReadyPlayerMeMemoryCache::StaticClass, TEXT("UReadyPlayerMeMemoryCache"), &Z_Registration_Info_UClass_UReadyPlayerMeMemoryCache, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReadyPlayerMeMemoryCache), 3900919731U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_2069849077(TEXT("/Script/ReadyPlayerMe"),
		Z_CompiledInDeferFile_FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

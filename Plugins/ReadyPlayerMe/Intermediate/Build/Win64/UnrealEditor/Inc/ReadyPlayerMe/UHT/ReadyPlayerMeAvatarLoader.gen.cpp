// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadyPlayerMe/Public/ReadyPlayerMeAvatarLoader.h"
#include "glTFRuntime/Public/glTFRuntimeParser.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReadyPlayerMeAvatarLoader() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	GLTFRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FglTFRuntimeSkeletalMeshConfig();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeAvatarConfig_NoRegister();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeAvatarLoader();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeAvatarLoader_NoRegister();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeGlbLoader_NoRegister();
	READYPLAYERME_API UFunction* Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarDownloadCompleted__DelegateSignature();
	READYPLAYERME_API UFunction* Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarLoadFailed__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ReadyPlayerMe();
// End Cross Module References
	DEFINE_FUNCTION(UReadyPlayerMeAvatarLoader::execOnGlbLoaded)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_Mesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGlbLoaded(Z_Param_Mesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadyPlayerMeAvatarLoader::execOnModelDownloaded)
	{
		P_GET_UBOOL(Z_Param_bSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnModelDownloaded(Z_Param_bSuccess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadyPlayerMeAvatarLoader::execOnMetadataDownloaded)
	{
		P_GET_UBOOL(Z_Param_bSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMetadataDownloaded(Z_Param_bSuccess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadyPlayerMeAvatarLoader::execCancelAvatarLoad)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelAvatarLoad();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadyPlayerMeAvatarLoader::execLoadAvatar)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UrlShortcode);
		P_GET_OBJECT(UReadyPlayerMeAvatarConfig,Z_Param_AvatarConfig);
		P_GET_OBJECT(USkeleton,Z_Param_TargetSkeleton);
		P_GET_STRUCT_REF(FglTFRuntimeSkeletalMeshConfig,Z_Param_Out_SkeletalMeshConfig);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnDownloadCompleted);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnLoadFailed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadAvatar(Z_Param_UrlShortcode,Z_Param_AvatarConfig,Z_Param_TargetSkeleton,Z_Param_Out_SkeletalMeshConfig,FAvatarDownloadCompleted(Z_Param_Out_OnDownloadCompleted),FAvatarLoadFailed(Z_Param_Out_OnLoadFailed));
		P_NATIVE_END;
	}
	void UReadyPlayerMeAvatarLoader::StaticRegisterNativesUReadyPlayerMeAvatarLoader()
	{
		UClass* Class = UReadyPlayerMeAvatarLoader::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelAvatarLoad", &UReadyPlayerMeAvatarLoader::execCancelAvatarLoad },
			{ "LoadAvatar", &UReadyPlayerMeAvatarLoader::execLoadAvatar },
			{ "OnGlbLoaded", &UReadyPlayerMeAvatarLoader::execOnGlbLoaded },
			{ "OnMetadataDownloaded", &UReadyPlayerMeAvatarLoader::execOnMetadataDownloaded },
			{ "OnModelDownloaded", &UReadyPlayerMeAvatarLoader::execOnModelDownloaded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_CancelAvatarLoad_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_CancelAvatarLoad_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "Comment", "/**\n\x09 * Cancels the avatar downloading process. This function is called during garbage collection, but it can also be called manually.\n\x09 */" },
		{ "DisplayName", "Cancel Avatar Load" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeAvatarLoader.h" },
		{ "ToolTip", "Cancels the avatar downloading process. This function is called during garbage collection, but it can also be called manually." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_CancelAvatarLoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeAvatarLoader, nullptr, "CancelAvatarLoad", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_CancelAvatarLoad_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_CancelAvatarLoad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_CancelAvatarLoad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_CancelAvatarLoad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_LoadAvatar_Statics
	{
		struct ReadyPlayerMeAvatarLoader_eventLoadAvatar_Parms
		{
			FString UrlShortcode;
			UReadyPlayerMeAvatarConfig* AvatarConfig;
			USkeleton* TargetSkeleton;
			FglTFRuntimeSkeletalMeshConfig SkeletalMeshConfig;
			FScriptDelegate OnDownloadCompleted;
			FScriptDelegate OnLoadFailed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UrlShortcode_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UrlShortcode;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AvatarConfig;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetSkeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalMeshConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDownloadCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnDownloadCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLoadFailed_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnLoadFailed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_LoadAvatar_Statics::NewProp_UrlShortcode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_LoadAvatar_Statics::NewProp_UrlShortcode = { "UrlShortcode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReadyPlayerMeAvatarLoader_eventLoadAvatar_Parms, UrlShortcode), METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_LoadAvatar_Statics::NewProp_UrlShortcode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_LoadAvatar_Statics::NewProp_UrlShortcode_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_LoadAvatar_Statics::NewProp_AvatarConfig = { "AvatarConfig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReadyPlayerMeAvatarLoader_eventLoadAvatar_Parms, AvatarConfig), Z_Construct_UClass_UReadyPlayerMeAvatarConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_LoadAvatar_Statics::NewProp_TargetSkeleton = { "TargetSkeleton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReadyPlayerMeAvatarLoader_eventLoadAvatar_Parms, TargetSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_LoadAvatar_Statics::NewProp_SkeletalMeshConfig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_LoadAvatar_Statics::NewProp_SkeletalMeshConfig = { "SkeletalMeshConfig", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReadyPlayerMeAvatarLoader_eventLoadAvatar_Parms, SkeletalMeshConfig), Z_Construct_UScriptStruct_FglTFRuntimeSkeletalMeshConfig, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_LoadAvatar_Statics::NewProp_SkeletalMeshConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_LoadAvatar_Statics::NewProp_SkeletalMeshConfig_MetaData)) }; // 3704056235
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_LoadAvatar_Statics::NewProp_OnDownloadCompleted_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_LoadAvatar_Statics::NewProp_OnDownloadCompleted = { "OnDownloadCompleted", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReadyPlayerMeAvatarLoader_eventLoadAvatar_Parms, OnDownloadCompleted), Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarDownloadCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_LoadAvatar_Statics::NewProp_OnDownloadCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_LoadAvatar_Statics::NewProp_OnDownloadCompleted_MetaData)) }; // 977635522
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_LoadAvatar_Statics::NewProp_OnLoadFailed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_LoadAvatar_Statics::NewProp_OnLoadFailed = { "OnLoadFailed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReadyPlayerMeAvatarLoader_eventLoadAvatar_Parms, OnLoadFailed), Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarLoadFailed__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_LoadAvatar_Statics::NewProp_OnLoadFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_LoadAvatar_Statics::NewProp_OnLoadFailed_MetaData)) }; // 4201276933
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_LoadAvatar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_LoadAvatar_Statics::NewProp_UrlShortcode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_LoadAvatar_Statics::NewProp_AvatarConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_LoadAvatar_Statics::NewProp_TargetSkeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_LoadAvatar_Statics::NewProp_SkeletalMeshConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_LoadAvatar_Statics::NewProp_OnDownloadCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_LoadAvatar_Statics::NewProp_OnLoadFailed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_LoadAvatar_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "OnLoadFailed,SkeletalMeshConfig" },
		{ "Category", "Ready Player Me" },
		{ "Comment", "/**\n\x09 * Downloads the avatar asset from the Url and saves it in the local storage.\n\x09 *\n\x09 * @param UrlShortcode Avatar url or shortcode.\n\x09 * @param AvatarConfig Config for loading avatar with custom configuration.\n\x09 * @param TargetSkeleton skeleton that will be used for the loaded avatar.\n\x09 * @param SkeletalMeshConfig Avatar configuration asset data. Used to load the avatar with the specific configs.\n\x09 * @param OnDownloadCompleted Success callback. Called when the avatar asset is downloaded.\n\x09 * @param OnLoadFailed Failure callback. If the avatar fails to load, the failure callback will be called.\n\x09 */" },
		{ "DisplayName", "Load Avatar" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeAvatarLoader.h" },
		{ "ToolTip", "Downloads the avatar asset from the Url and saves it in the local storage.\n\n@param UrlShortcode Avatar url or shortcode.\n@param AvatarConfig Config for loading avatar with custom configuration.\n@param TargetSkeleton skeleton that will be used for the loaded avatar.\n@param SkeletalMeshConfig Avatar configuration asset data. Used to load the avatar with the specific configs.\n@param OnDownloadCompleted Success callback. Called when the avatar asset is downloaded.\n@param OnLoadFailed Failure callback. If the avatar fails to load, the failure callback will be called." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_LoadAvatar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeAvatarLoader, nullptr, "LoadAvatar", nullptr, nullptr, sizeof(Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_LoadAvatar_Statics::ReadyPlayerMeAvatarLoader_eventLoadAvatar_Parms), Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_LoadAvatar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_LoadAvatar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_LoadAvatar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_LoadAvatar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_LoadAvatar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_LoadAvatar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_OnGlbLoaded_Statics
	{
		struct ReadyPlayerMeAvatarLoader_eventOnGlbLoaded_Parms
		{
			USkeletalMesh* Mesh;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_OnGlbLoaded_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReadyPlayerMeAvatarLoader_eventOnGlbLoaded_Parms, Mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_OnGlbLoaded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_OnGlbLoaded_Statics::NewProp_Mesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_OnGlbLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReadyPlayerMeAvatarLoader.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_OnGlbLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeAvatarLoader, nullptr, "OnGlbLoaded", nullptr, nullptr, sizeof(Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_OnGlbLoaded_Statics::ReadyPlayerMeAvatarLoader_eventOnGlbLoaded_Parms), Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_OnGlbLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_OnGlbLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_OnGlbLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_OnGlbLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_OnGlbLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_OnGlbLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_OnMetadataDownloaded_Statics
	{
		struct ReadyPlayerMeAvatarLoader_eventOnMetadataDownloaded_Parms
		{
			bool bSuccess;
		};
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_OnMetadataDownloaded_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((ReadyPlayerMeAvatarLoader_eventOnMetadataDownloaded_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_OnMetadataDownloaded_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ReadyPlayerMeAvatarLoader_eventOnMetadataDownloaded_Parms), &Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_OnMetadataDownloaded_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_OnMetadataDownloaded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_OnMetadataDownloaded_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_OnMetadataDownloaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReadyPlayerMeAvatarLoader.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_OnMetadataDownloaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeAvatarLoader, nullptr, "OnMetadataDownloaded", nullptr, nullptr, sizeof(Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_OnMetadataDownloaded_Statics::ReadyPlayerMeAvatarLoader_eventOnMetadataDownloaded_Parms), Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_OnMetadataDownloaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_OnMetadataDownloaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_OnMetadataDownloaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_OnMetadataDownloaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_OnMetadataDownloaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_OnMetadataDownloaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_OnModelDownloaded_Statics
	{
		struct ReadyPlayerMeAvatarLoader_eventOnModelDownloaded_Parms
		{
			bool bSuccess;
		};
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_OnModelDownloaded_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((ReadyPlayerMeAvatarLoader_eventOnModelDownloaded_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_OnModelDownloaded_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ReadyPlayerMeAvatarLoader_eventOnModelDownloaded_Parms), &Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_OnModelDownloaded_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_OnModelDownloaded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_OnModelDownloaded_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_OnModelDownloaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReadyPlayerMeAvatarLoader.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_OnModelDownloaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeAvatarLoader, nullptr, "OnModelDownloaded", nullptr, nullptr, sizeof(Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_OnModelDownloaded_Statics::ReadyPlayerMeAvatarLoader_eventOnModelDownloaded_Parms), Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_OnModelDownloaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_OnModelDownloaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_OnModelDownloaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_OnModelDownloaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_OnModelDownloaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_OnModelDownloaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReadyPlayerMeAvatarLoader);
	UClass* Z_Construct_UClass_UReadyPlayerMeAvatarLoader_NoRegister()
	{
		return UReadyPlayerMeAvatarLoader::StaticClass();
	}
	struct Z_Construct_UClass_UReadyPlayerMeAvatarLoader_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlbLoader_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GlbLoader;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReadyPlayerMeAvatarLoader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ReadyPlayerMe,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UReadyPlayerMeAvatarLoader_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_CancelAvatarLoad, "CancelAvatarLoad" }, // 1193510599
		{ &Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_LoadAvatar, "LoadAvatar" }, // 2499760873
		{ &Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_OnGlbLoaded, "OnGlbLoaded" }, // 2959139605
		{ &Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_OnMetadataDownloaded, "OnMetadataDownloaded" }, // 747476437
		{ &Z_Construct_UFunction_UReadyPlayerMeAvatarLoader_OnModelDownloaded, "OnModelDownloaded" }, // 2803565017
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeAvatarLoader_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Responsible for Loading the avatar from the url and storing it in the local storage.\n * ReadyPlayerMeAvatarLoader is used by ReadyPlayerMeComponent for loading the avatar.\n */" },
		{ "IncludePath", "ReadyPlayerMeAvatarLoader.h" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeAvatarLoader.h" },
		{ "ToolTip", "Responsible for Loading the avatar from the url and storing it in the local storage.\nReadyPlayerMeAvatarLoader is used by ReadyPlayerMeComponent for loading the avatar." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeAvatarLoader_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Comment", "/**\n\x09 * Skeletal Mesh of the loaded avatar.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeAvatarLoader.h" },
		{ "ToolTip", "Skeletal Mesh of the loaded avatar." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReadyPlayerMeAvatarLoader_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UReadyPlayerMeAvatarLoader, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMeAvatarLoader_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeAvatarLoader_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeAvatarLoader_Statics::NewProp_GlbLoader_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReadyPlayerMeAvatarLoader.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReadyPlayerMeAvatarLoader_Statics::NewProp_GlbLoader = { "GlbLoader", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UReadyPlayerMeAvatarLoader, GlbLoader), Z_Construct_UClass_UReadyPlayerMeGlbLoader_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMeAvatarLoader_Statics::NewProp_GlbLoader_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeAvatarLoader_Statics::NewProp_GlbLoader_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReadyPlayerMeAvatarLoader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeAvatarLoader_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeAvatarLoader_Statics::NewProp_GlbLoader,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReadyPlayerMeAvatarLoader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReadyPlayerMeAvatarLoader>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReadyPlayerMeAvatarLoader_Statics::ClassParams = {
		&UReadyPlayerMeAvatarLoader::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UReadyPlayerMeAvatarLoader_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeAvatarLoader_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMeAvatarLoader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeAvatarLoader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReadyPlayerMeAvatarLoader()
	{
		if (!Z_Registration_Info_UClass_UReadyPlayerMeAvatarLoader.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReadyPlayerMeAvatarLoader.OuterSingleton, Z_Construct_UClass_UReadyPlayerMeAvatarLoader_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReadyPlayerMeAvatarLoader.OuterSingleton;
	}
	template<> READYPLAYERME_API UClass* StaticClass<UReadyPlayerMeAvatarLoader>()
	{
		return UReadyPlayerMeAvatarLoader::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReadyPlayerMeAvatarLoader);
	UReadyPlayerMeAvatarLoader::~UReadyPlayerMeAvatarLoader() {}
	struct Z_CompiledInDeferFile_FID_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarLoader_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarLoader_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReadyPlayerMeAvatarLoader, UReadyPlayerMeAvatarLoader::StaticClass, TEXT("UReadyPlayerMeAvatarLoader"), &Z_Registration_Info_UClass_UReadyPlayerMeAvatarLoader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReadyPlayerMeAvatarLoader), 2556240845U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarLoader_h_3072472699(TEXT("/Script/ReadyPlayerMe"),
		Z_CompiledInDeferFile_FID_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarLoader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarLoader_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

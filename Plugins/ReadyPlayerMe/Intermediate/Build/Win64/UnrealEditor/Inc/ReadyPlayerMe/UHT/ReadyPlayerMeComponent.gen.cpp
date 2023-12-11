// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadyPlayerMe/Public/ReadyPlayerMeComponent.h"
#include "glTFRuntime/Public/glTFRuntimeParser.h"
#include "ReadyPlayerMe/Public/ReadyPlayerMeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReadyPlayerMeComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	GLTFRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FglTFRuntimeSkeletalMeshConfig();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeAvatarConfig_NoRegister();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeAvatarLoader_NoRegister();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeComponent();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeComponent_NoRegister();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeRenderLoader_NoRegister();
	READYPLAYERME_API UFunction* Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarLoadCompleted__DelegateSignature();
	READYPLAYERME_API UFunction* Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarLoadFailed__DelegateSignature();
	READYPLAYERME_API UScriptStruct* Z_Construct_UScriptStruct_FAvatarMetadata();
	UPackage* Z_Construct_UPackage__Script_ReadyPlayerMe();
// End Cross Module References
	DEFINE_FUNCTION(UReadyPlayerMeComponent::execOnAvatarDownloaded)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_GET_STRUCT_REF(FAvatarMetadata,Z_Param_Out_Metadata);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAvatarDownloaded(Z_Param_SkeletalMesh,Z_Param_Out_Metadata);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadyPlayerMeComponent::execCancelAvatarLoad)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelAvatarLoad();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadyPlayerMeComponent::execLoadNewAvatar)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Url);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnLoadCompleted);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnLoadFailed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadNewAvatar(Z_Param_Url,FAvatarLoadCompleted(Z_Param_Out_OnLoadCompleted),FAvatarLoadFailed(Z_Param_Out_OnLoadFailed));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadyPlayerMeComponent::execLoadAvatar)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnLoadCompleted);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnLoadFailed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadAvatar(FAvatarLoadCompleted(Z_Param_Out_OnLoadCompleted),FAvatarLoadFailed(Z_Param_Out_OnLoadFailed));
		P_NATIVE_END;
	}
	void UReadyPlayerMeComponent::StaticRegisterNativesUReadyPlayerMeComponent()
	{
		UClass* Class = UReadyPlayerMeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CancelAvatarLoad", &UReadyPlayerMeComponent::execCancelAvatarLoad },
			{ "LoadAvatar", &UReadyPlayerMeComponent::execLoadAvatar },
			{ "LoadNewAvatar", &UReadyPlayerMeComponent::execLoadNewAvatar },
			{ "OnAvatarDownloaded", &UReadyPlayerMeComponent::execOnAvatarDownloaded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UReadyPlayerMeComponent_CancelAvatarLoad_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeComponent_CancelAvatarLoad_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "Comment", "/**\n\x09 * Immediately cancels the avatar loading.\n\x09 * When the garbage collector is removing the AvatarLoader, avatar loading gets automatically cancelled.\n\x09 */" },
		{ "DisplayName", "Cancel Avatar" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeComponent.h" },
		{ "ToolTip", "Immediately cancels the avatar loading.\nWhen the garbage collector is removing the AvatarLoader, avatar loading gets automatically cancelled." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeComponent_CancelAvatarLoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeComponent, nullptr, "CancelAvatarLoad", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeComponent_CancelAvatarLoad_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeComponent_CancelAvatarLoad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeComponent_CancelAvatarLoad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeComponent_CancelAvatarLoad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadyPlayerMeComponent_LoadAvatar_Statics
	{
		struct ReadyPlayerMeComponent_eventLoadAvatar_Parms
		{
			FScriptDelegate OnLoadCompleted;
			FScriptDelegate OnLoadFailed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLoadCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnLoadCompleted;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeComponent_LoadAvatar_Statics::NewProp_OnLoadCompleted_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UReadyPlayerMeComponent_LoadAvatar_Statics::NewProp_OnLoadCompleted = { "OnLoadCompleted", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReadyPlayerMeComponent_eventLoadAvatar_Parms, OnLoadCompleted), Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarLoadCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeComponent_LoadAvatar_Statics::NewProp_OnLoadCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeComponent_LoadAvatar_Statics::NewProp_OnLoadCompleted_MetaData)) }; // 1134669588
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeComponent_LoadAvatar_Statics::NewProp_OnLoadFailed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UReadyPlayerMeComponent_LoadAvatar_Statics::NewProp_OnLoadFailed = { "OnLoadFailed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReadyPlayerMeComponent_eventLoadAvatar_Parms, OnLoadFailed), Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarLoadFailed__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeComponent_LoadAvatar_Statics::NewProp_OnLoadFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeComponent_LoadAvatar_Statics::NewProp_OnLoadFailed_MetaData)) }; // 4201276933
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeComponent_LoadAvatar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeComponent_LoadAvatar_Statics::NewProp_OnLoadCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeComponent_LoadAvatar_Statics::NewProp_OnLoadFailed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeComponent_LoadAvatar_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "OnLoadCompleted,OnLoadFailed" },
		{ "Category", "Ready Player Me" },
		{ "Comment", "/** \n\x09 * Downloads the avatar from the web and generates a skeletal mesh of the avatar.\n\x09 * If the model was previously downloaded and stored locally, the local model will be used for the loading of the avatar. \n\x09 * \n\x09 * @param OnLoadCompleted Success callback. Called when the avatar asset is downloaded and the skeletal mesh is set.\n\x09 * @param OnLoadFailed Failure callback. If the avatar fails to load, the failure callback will be called.\n\x09 */" },
		{ "DisplayName", "Load Avatar" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeComponent.h" },
		{ "ToolTip", "Downloads the avatar from the web and generates a skeletal mesh of the avatar.\nIf the model was previously downloaded and stored locally, the local model will be used for the loading of the avatar.\n\n@param OnLoadCompleted Success callback. Called when the avatar asset is downloaded and the skeletal mesh is set.\n@param OnLoadFailed Failure callback. If the avatar fails to load, the failure callback will be called." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeComponent_LoadAvatar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeComponent, nullptr, "LoadAvatar", nullptr, nullptr, sizeof(Z_Construct_UFunction_UReadyPlayerMeComponent_LoadAvatar_Statics::ReadyPlayerMeComponent_eventLoadAvatar_Parms), Z_Construct_UFunction_UReadyPlayerMeComponent_LoadAvatar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeComponent_LoadAvatar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeComponent_LoadAvatar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeComponent_LoadAvatar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeComponent_LoadAvatar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeComponent_LoadAvatar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadyPlayerMeComponent_LoadNewAvatar_Statics
	{
		struct ReadyPlayerMeComponent_eventLoadNewAvatar_Parms
		{
			FString Url;
			FScriptDelegate OnLoadCompleted;
			FScriptDelegate OnLoadFailed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Url;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLoadCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnLoadCompleted;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeComponent_LoadNewAvatar_Statics::NewProp_Url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadyPlayerMeComponent_LoadNewAvatar_Statics::NewProp_Url = { "Url", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReadyPlayerMeComponent_eventLoadNewAvatar_Parms, Url), METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeComponent_LoadNewAvatar_Statics::NewProp_Url_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeComponent_LoadNewAvatar_Statics::NewProp_Url_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeComponent_LoadNewAvatar_Statics::NewProp_OnLoadCompleted_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UReadyPlayerMeComponent_LoadNewAvatar_Statics::NewProp_OnLoadCompleted = { "OnLoadCompleted", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReadyPlayerMeComponent_eventLoadNewAvatar_Parms, OnLoadCompleted), Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarLoadCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeComponent_LoadNewAvatar_Statics::NewProp_OnLoadCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeComponent_LoadNewAvatar_Statics::NewProp_OnLoadCompleted_MetaData)) }; // 1134669588
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeComponent_LoadNewAvatar_Statics::NewProp_OnLoadFailed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UReadyPlayerMeComponent_LoadNewAvatar_Statics::NewProp_OnLoadFailed = { "OnLoadFailed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReadyPlayerMeComponent_eventLoadNewAvatar_Parms, OnLoadFailed), Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarLoadFailed__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeComponent_LoadNewAvatar_Statics::NewProp_OnLoadFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeComponent_LoadNewAvatar_Statics::NewProp_OnLoadFailed_MetaData)) }; // 4201276933
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeComponent_LoadNewAvatar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeComponent_LoadNewAvatar_Statics::NewProp_Url,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeComponent_LoadNewAvatar_Statics::NewProp_OnLoadCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeComponent_LoadNewAvatar_Statics::NewProp_OnLoadFailed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeComponent_LoadNewAvatar_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "OnLoadCompleted,OnLoadFailed" },
		{ "Category", "Ready Player Me" },
		{ "Comment", "/**\n\x09 * Downloads the avatar from the web using the provided url and generates a skeletal mesh of the avatar.\n\x09 * If the model was previously downloaded and stored locally, the local model will be used for the loading of the avatar. \n\x09 * \n\x09 * @param Url Avatar url or shortcode.\n\x09 * @param OnLoadCompleted Success callback. Called when the avatar asset is downloaded and the skeletal mesh is set.\n\x09 * @param OnLoadFailed Failure callback. If the avatar fails to load, the failure callback will be called.\n\x09 */" },
		{ "DisplayName", "Load New Avatar" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeComponent.h" },
		{ "ToolTip", "Downloads the avatar from the web using the provided url and generates a skeletal mesh of the avatar.\nIf the model was previously downloaded and stored locally, the local model will be used for the loading of the avatar.\n\n@param Url Avatar url or shortcode.\n@param OnLoadCompleted Success callback. Called when the avatar asset is downloaded and the skeletal mesh is set.\n@param OnLoadFailed Failure callback. If the avatar fails to load, the failure callback will be called." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeComponent_LoadNewAvatar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeComponent, nullptr, "LoadNewAvatar", nullptr, nullptr, sizeof(Z_Construct_UFunction_UReadyPlayerMeComponent_LoadNewAvatar_Statics::ReadyPlayerMeComponent_eventLoadNewAvatar_Parms), Z_Construct_UFunction_UReadyPlayerMeComponent_LoadNewAvatar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeComponent_LoadNewAvatar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeComponent_LoadNewAvatar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeComponent_LoadNewAvatar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeComponent_LoadNewAvatar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeComponent_LoadNewAvatar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadyPlayerMeComponent_OnAvatarDownloaded_Statics
	{
		struct ReadyPlayerMeComponent_eventOnAvatarDownloaded_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReadyPlayerMeComponent_OnAvatarDownloaded_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReadyPlayerMeComponent_eventOnAvatarDownloaded_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeComponent_OnAvatarDownloaded_Statics::NewProp_Metadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UReadyPlayerMeComponent_OnAvatarDownloaded_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReadyPlayerMeComponent_eventOnAvatarDownloaded_Parms, Metadata), Z_Construct_UScriptStruct_FAvatarMetadata, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeComponent_OnAvatarDownloaded_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeComponent_OnAvatarDownloaded_Statics::NewProp_Metadata_MetaData)) }; // 1360335926
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeComponent_OnAvatarDownloaded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeComponent_OnAvatarDownloaded_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeComponent_OnAvatarDownloaded_Statics::NewProp_Metadata,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeComponent_OnAvatarDownloaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReadyPlayerMeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeComponent_OnAvatarDownloaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeComponent, nullptr, "OnAvatarDownloaded", nullptr, nullptr, sizeof(Z_Construct_UFunction_UReadyPlayerMeComponent_OnAvatarDownloaded_Statics::ReadyPlayerMeComponent_eventOnAvatarDownloaded_Parms), Z_Construct_UFunction_UReadyPlayerMeComponent_OnAvatarDownloaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeComponent_OnAvatarDownloaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeComponent_OnAvatarDownloaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeComponent_OnAvatarDownloaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeComponent_OnAvatarDownloaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeComponent_OnAvatarDownloaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReadyPlayerMeComponent);
	UClass* Z_Construct_UClass_UReadyPlayerMeComponent_NoRegister()
	{
		return UReadyPlayerMeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UReadyPlayerMeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UrlShortcode_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UrlShortcode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvatarMetadata_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AvatarMetadata;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetSkeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetSkeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvatarConfig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AvatarConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalMeshConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMemoryCache_MetaData[];
#endif
		static void NewProp_bUseMemoryCache_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMemoryCache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvatarLoader_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AvatarLoader;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderLoader_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderLoader;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReadyPlayerMeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ReadyPlayerMe,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UReadyPlayerMeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UReadyPlayerMeComponent_CancelAvatarLoad, "CancelAvatarLoad" }, // 3517553818
		{ &Z_Construct_UFunction_UReadyPlayerMeComponent_LoadAvatar, "LoadAvatar" }, // 3750977643
		{ &Z_Construct_UFunction_UReadyPlayerMeComponent_LoadNewAvatar, "LoadNewAvatar" }, // 3925046144
		{ &Z_Construct_UFunction_UReadyPlayerMeComponent_OnAvatarDownloaded, "OnAvatarDownloaded" }, // 4063890453
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * Responsible for the loading of the avatar and visualizing it by setting the SkeletalMesh of the avatar.\n * It also provides useful functions for loading the avatar and loading a rendered image of the avatar.\n *\n * @see ReadyPlayerMeAvatarLoader\n * @see ReadyPlayerMeRenderLoader\n */" },
		{ "IncludePath", "ReadyPlayerMeComponent.h" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeComponent.h" },
		{ "ToolTip", "Responsible for the loading of the avatar and visualizing it by setting the SkeletalMesh of the avatar.\nIt also provides useful functions for loading the avatar and loading a rendered image of the avatar.\n\n@see ReadyPlayerMeAvatarLoader\n@see ReadyPlayerMeRenderLoader" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeComponent_Statics::NewProp_UrlShortcode_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "Comment", "/** The avatar url or shortcode. It's used to load the avatar from the web. */" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeComponent.h" },
		{ "ToolTip", "The avatar url or shortcode. It's used to load the avatar from the web." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UReadyPlayerMeComponent_Statics::NewProp_UrlShortcode = { "UrlShortcode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UReadyPlayerMeComponent, UrlShortcode), METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMeComponent_Statics::NewProp_UrlShortcode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeComponent_Statics::NewProp_UrlShortcode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeComponent_Statics::NewProp_AvatarMetadata_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "Comment", "/** Provides read-only information about the loaded avatar. Such as the type of the avatar, outfit and gender. */" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeComponent.h" },
		{ "ToolTip", "Provides read-only information about the loaded avatar. Such as the type of the avatar, outfit and gender." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReadyPlayerMeComponent_Statics::NewProp_AvatarMetadata = { "AvatarMetadata", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UReadyPlayerMeComponent, AvatarMetadata), Z_Construct_UScriptStruct_FAvatarMetadata, METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMeComponent_Statics::NewProp_AvatarMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeComponent_Statics::NewProp_AvatarMetadata_MetaData)) }; // 1360335926
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeComponent_Statics::NewProp_TargetSkeleton_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "Comment", "/** It provides a flexibility to chose the skeleton that will be used for the loaded avatar.\n\x09 * If it's not set the default skeleton will be used for the loaded avatar. */" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeComponent.h" },
		{ "ToolTip", "It provides a flexibility to chose the skeleton that will be used for the loaded avatar.\nIf it's not set the default skeleton will be used for the loaded avatar." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReadyPlayerMeComponent_Statics::NewProp_TargetSkeleton = { "TargetSkeleton", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UReadyPlayerMeComponent, TargetSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMeComponent_Statics::NewProp_TargetSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeComponent_Statics::NewProp_TargetSkeleton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeComponent_Statics::NewProp_AvatarConfig_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "Comment", "/** Avatar configuration asset data. Used to load the avatar with the specific configs.\n\x09 * If no config is set, the partner specific configs will be used for loading the avatar. */" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeComponent.h" },
		{ "ToolTip", "Avatar configuration asset data. Used to load the avatar with the specific configs.\nIf no config is set, the partner specific configs will be used for loading the avatar." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReadyPlayerMeComponent_Statics::NewProp_AvatarConfig = { "AvatarConfig", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UReadyPlayerMeComponent, AvatarConfig), Z_Construct_UClass_UReadyPlayerMeAvatarConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMeComponent_Statics::NewProp_AvatarConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeComponent_Statics::NewProp_AvatarConfig_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeComponent_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "Comment", "/**\n\x09 * Skeletal mesh component used for setting the skeletal mesh of the loaded avatar.\n\x09 * If not set, It will be initialised with the skeletal mesh component of the parent actor.\n\x09 * For runtime animation retargeting, if the actor has multiple skeletal mesh components, this property needs to be set.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeComponent.h" },
		{ "ToolTip", "Skeletal mesh component used for setting the skeletal mesh of the loaded avatar.\nIf not set, It will be initialised with the skeletal mesh component of the parent actor.\nFor runtime animation retargeting, if the actor has multiple skeletal mesh components, this property needs to be set." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReadyPlayerMeComponent_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UReadyPlayerMeComponent, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMeComponent_Statics::NewProp_SkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeComponent_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeComponent_Statics::NewProp_SkeletalMeshConfig_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "Comment", "/**\n\x09 * glTFRuntime skeletal mesh config that will be used for loading the avatar.\n\x09 * This property should be changed only for very custom cases.\n\x09 * @note Changing this property might break the avatar.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeComponent.h" },
		{ "ToolTip", "glTFRuntime skeletal mesh config that will be used for loading the avatar.\nThis property should be changed only for very custom cases.\n@note Changing this property might break the avatar." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReadyPlayerMeComponent_Statics::NewProp_SkeletalMeshConfig = { "SkeletalMeshConfig", nullptr, (EPropertyFlags)0x0010008000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UReadyPlayerMeComponent, SkeletalMeshConfig), Z_Construct_UScriptStruct_FglTFRuntimeSkeletalMeshConfig, METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMeComponent_Statics::NewProp_SkeletalMeshConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeComponent_Statics::NewProp_SkeletalMeshConfig_MetaData)) }; // 3704056235
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeComponent_Statics::NewProp_bUseMemoryCache_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "Comment", "/**\n\x09 * Allow to use the preloaded avatars. If set to true, the MemoryCache will be used when loading the avatar.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeComponent.h" },
		{ "ToolTip", "Allow to use the preloaded avatars. If set to true, the MemoryCache will be used when loading the avatar." },
	};
#endif
	void Z_Construct_UClass_UReadyPlayerMeComponent_Statics::NewProp_bUseMemoryCache_SetBit(void* Obj)
	{
		((UReadyPlayerMeComponent*)Obj)->bUseMemoryCache = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReadyPlayerMeComponent_Statics::NewProp_bUseMemoryCache = { "bUseMemoryCache", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UReadyPlayerMeComponent), &Z_Construct_UClass_UReadyPlayerMeComponent_Statics::NewProp_bUseMemoryCache_SetBit, METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMeComponent_Statics::NewProp_bUseMemoryCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeComponent_Statics::NewProp_bUseMemoryCache_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeComponent_Statics::NewProp_AvatarLoader_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReadyPlayerMeComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReadyPlayerMeComponent_Statics::NewProp_AvatarLoader = { "AvatarLoader", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UReadyPlayerMeComponent, AvatarLoader), Z_Construct_UClass_UReadyPlayerMeAvatarLoader_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMeComponent_Statics::NewProp_AvatarLoader_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeComponent_Statics::NewProp_AvatarLoader_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeComponent_Statics::NewProp_RenderLoader_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReadyPlayerMeComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReadyPlayerMeComponent_Statics::NewProp_RenderLoader = { "RenderLoader", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UReadyPlayerMeComponent, RenderLoader), Z_Construct_UClass_UReadyPlayerMeRenderLoader_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMeComponent_Statics::NewProp_RenderLoader_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeComponent_Statics::NewProp_RenderLoader_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReadyPlayerMeComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeComponent_Statics::NewProp_UrlShortcode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeComponent_Statics::NewProp_AvatarMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeComponent_Statics::NewProp_TargetSkeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeComponent_Statics::NewProp_AvatarConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeComponent_Statics::NewProp_SkeletalMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeComponent_Statics::NewProp_SkeletalMeshConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeComponent_Statics::NewProp_bUseMemoryCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeComponent_Statics::NewProp_AvatarLoader,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeComponent_Statics::NewProp_RenderLoader,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReadyPlayerMeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReadyPlayerMeComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReadyPlayerMeComponent_Statics::ClassParams = {
		&UReadyPlayerMeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UReadyPlayerMeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReadyPlayerMeComponent()
	{
		if (!Z_Registration_Info_UClass_UReadyPlayerMeComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReadyPlayerMeComponent.OuterSingleton, Z_Construct_UClass_UReadyPlayerMeComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReadyPlayerMeComponent.OuterSingleton;
	}
	template<> READYPLAYERME_API UClass* StaticClass<UReadyPlayerMeComponent>()
	{
		return UReadyPlayerMeComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReadyPlayerMeComponent);
	UReadyPlayerMeComponent::~UReadyPlayerMeComponent() {}
	struct Z_CompiledInDeferFile_FID_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReadyPlayerMeComponent, UReadyPlayerMeComponent::StaticClass, TEXT("UReadyPlayerMeComponent"), &Z_Registration_Info_UClass_UReadyPlayerMeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReadyPlayerMeComponent), 4162248539U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeComponent_h_1625810300(TEXT("/Script/ReadyPlayerMe"),
		Z_CompiledInDeferFile_FID_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

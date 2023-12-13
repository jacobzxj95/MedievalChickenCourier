// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadyPlayerMe/Public/ReadyPlayerMeFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReadyPlayerMeFunctionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeFunctionLibrary();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeFunctionLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ReadyPlayerMe();
// End Cross Module References
	DEFINE_FUNCTION(UReadyPlayerMeFunctionLibrary::execGetAvatarGuid)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_UrlShortcode);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UReadyPlayerMeFunctionLibrary::GetAvatarGuid(Z_Param_UrlShortcode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadyPlayerMeFunctionLibrary::execGetCacheSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int64*)Z_Param__Result=UReadyPlayerMeFunctionLibrary::GetCacheSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadyPlayerMeFunctionLibrary::execGetAvatarCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UReadyPlayerMeFunctionLibrary::GetAvatarCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadyPlayerMeFunctionLibrary::execIsAvatarCacheEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UReadyPlayerMeFunctionLibrary::IsAvatarCacheEmpty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadyPlayerMeFunctionLibrary::execClearAvatar)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Guid);
		P_FINISH;
		P_NATIVE_BEGIN;
		UReadyPlayerMeFunctionLibrary::ClearAvatar(Z_Param_Guid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadyPlayerMeFunctionLibrary::execClearAvatarCache)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UReadyPlayerMeFunctionLibrary::ClearAvatarCache();
		P_NATIVE_END;
	}
	void UReadyPlayerMeFunctionLibrary::StaticRegisterNativesUReadyPlayerMeFunctionLibrary()
	{
		UClass* Class = UReadyPlayerMeFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearAvatar", &UReadyPlayerMeFunctionLibrary::execClearAvatar },
			{ "ClearAvatarCache", &UReadyPlayerMeFunctionLibrary::execClearAvatarCache },
			{ "GetAvatarCount", &UReadyPlayerMeFunctionLibrary::execGetAvatarCount },
			{ "GetAvatarGuid", &UReadyPlayerMeFunctionLibrary::execGetAvatarGuid },
			{ "GetCacheSize", &UReadyPlayerMeFunctionLibrary::execGetCacheSize },
			{ "IsAvatarCacheEmpty", &UReadyPlayerMeFunctionLibrary::execIsAvatarCacheEmpty },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatar_Statics
	{
		struct ReadyPlayerMeFunctionLibrary_eventClearAvatar_Parms
		{
			FString Guid;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Guid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatar_Statics::NewProp_Guid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatar_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReadyPlayerMeFunctionLibrary_eventClearAvatar_Parms, Guid), METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatar_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatar_Statics::NewProp_Guid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatar_Statics::NewProp_Guid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatar_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "Comment", "/** Clears a specific avatar from persistent cache. */" },
		{ "DisplayName", "Clear Avatar" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeFunctionLibrary.h" },
		{ "ToolTip", "Clears a specific avatar from persistent cache." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeFunctionLibrary, nullptr, "ClearAvatar", nullptr, nullptr, sizeof(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatar_Statics::ReadyPlayerMeFunctionLibrary_eventClearAvatar_Parms), Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarCache_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "Comment", "/** Clears all avatars from the persistent cache. */" },
		{ "DisplayName", "Clear Avatar Cache" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeFunctionLibrary.h" },
		{ "ToolTip", "Clears all avatars from the persistent cache." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeFunctionLibrary, nullptr, "ClearAvatarCache", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarCount_Statics
	{
		struct ReadyPlayerMeFunctionLibrary_eventGetAvatarCount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReadyPlayerMeFunctionLibrary_eventGetAvatarCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "Comment", "/** Total Avatars stored in persistent cache. */" },
		{ "DisplayName", "Get Avatar Count" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeFunctionLibrary.h" },
		{ "ToolTip", "Total Avatars stored in persistent cache." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeFunctionLibrary, nullptr, "GetAvatarCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarCount_Statics::ReadyPlayerMeFunctionLibrary_eventGetAvatarCount_Parms), Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarGuid_Statics
	{
		struct ReadyPlayerMeFunctionLibrary_eventGetAvatarGuid_Parms
		{
			FString UrlShortcode;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UrlShortcode_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UrlShortcode;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarGuid_Statics::NewProp_UrlShortcode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarGuid_Statics::NewProp_UrlShortcode = { "UrlShortcode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReadyPlayerMeFunctionLibrary_eventGetAvatarGuid_Parms, UrlShortcode), METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarGuid_Statics::NewProp_UrlShortcode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarGuid_Statics::NewProp_UrlShortcode_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarGuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReadyPlayerMeFunctionLibrary_eventGetAvatarGuid_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarGuid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarGuid_Statics::NewProp_UrlShortcode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarGuid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarGuid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "Comment", "/** Get unique id of the avatar. */" },
		{ "DisplayName", "Get Avatar Guid" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeFunctionLibrary.h" },
		{ "ToolTip", "Get unique id of the avatar." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarGuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeFunctionLibrary, nullptr, "GetAvatarGuid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarGuid_Statics::ReadyPlayerMeFunctionLibrary_eventGetAvatarGuid_Parms), Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarGuid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarGuid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarGuid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarGuid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarGuid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetCacheSize_Statics
	{
		struct ReadyPlayerMeFunctionLibrary_eventGetCacheSize_Parms
		{
			int64 ReturnValue;
		};
		static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetCacheSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReadyPlayerMeFunctionLibrary_eventGetCacheSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetCacheSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetCacheSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetCacheSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "Comment", "/** Total Avatars stored in persistent cache. */" },
		{ "DisplayName", "Get Cache Size" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeFunctionLibrary.h" },
		{ "ToolTip", "Total Avatars stored in persistent cache." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetCacheSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeFunctionLibrary, nullptr, "GetCacheSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetCacheSize_Statics::ReadyPlayerMeFunctionLibrary_eventGetCacheSize_Parms), Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetCacheSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetCacheSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetCacheSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetCacheSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetCacheSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetCacheSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsAvatarCacheEmpty_Statics
	{
		struct ReadyPlayerMeFunctionLibrary_eventIsAvatarCacheEmpty_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsAvatarCacheEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ReadyPlayerMeFunctionLibrary_eventIsAvatarCacheEmpty_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsAvatarCacheEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ReadyPlayerMeFunctionLibrary_eventIsAvatarCacheEmpty_Parms), &Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsAvatarCacheEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsAvatarCacheEmpty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsAvatarCacheEmpty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsAvatarCacheEmpty_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "Comment", "/** Is there any avatars present in the persistent cache. */" },
		{ "DisplayName", "Is Avatar Cache Empty" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeFunctionLibrary.h" },
		{ "ToolTip", "Is there any avatars present in the persistent cache." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsAvatarCacheEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeFunctionLibrary, nullptr, "IsAvatarCacheEmpty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsAvatarCacheEmpty_Statics::ReadyPlayerMeFunctionLibrary_eventIsAvatarCacheEmpty_Parms), Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsAvatarCacheEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsAvatarCacheEmpty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsAvatarCacheEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsAvatarCacheEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsAvatarCacheEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsAvatarCacheEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReadyPlayerMeFunctionLibrary);
	UClass* Z_Construct_UClass_UReadyPlayerMeFunctionLibrary_NoRegister()
	{
		return UReadyPlayerMeFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UReadyPlayerMeFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReadyPlayerMeFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ReadyPlayerMe,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UReadyPlayerMeFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatar, "ClearAvatar" }, // 2787152324
		{ &Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_ClearAvatarCache, "ClearAvatarCache" }, // 3291590259
		{ &Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarCount, "GetAvatarCount" }, // 1281212090
		{ &Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetAvatarGuid, "GetAvatarGuid" }, // 1105457067
		{ &Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_GetCacheSize, "GetCacheSize" }, // 2178476993
		{ &Z_Construct_UFunction_UReadyPlayerMeFunctionLibrary_IsAvatarCacheEmpty, "IsAvatarCacheEmpty" }, // 2681438788
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Static functions to be used from the blueprint.\n */" },
		{ "IncludePath", "ReadyPlayerMeFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeFunctionLibrary.h" },
		{ "ToolTip", "Static functions to be used from the blueprint." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReadyPlayerMeFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReadyPlayerMeFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReadyPlayerMeFunctionLibrary_Statics::ClassParams = {
		&UReadyPlayerMeFunctionLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMeFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReadyPlayerMeFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UReadyPlayerMeFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReadyPlayerMeFunctionLibrary.OuterSingleton, Z_Construct_UClass_UReadyPlayerMeFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReadyPlayerMeFunctionLibrary.OuterSingleton;
	}
	template<> READYPLAYERME_API UClass* StaticClass<UReadyPlayerMeFunctionLibrary>()
	{
		return UReadyPlayerMeFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReadyPlayerMeFunctionLibrary);
	UReadyPlayerMeFunctionLibrary::~UReadyPlayerMeFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReadyPlayerMeFunctionLibrary, UReadyPlayerMeFunctionLibrary::StaticClass, TEXT("UReadyPlayerMeFunctionLibrary"), &Z_Registration_Info_UClass_UReadyPlayerMeFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReadyPlayerMeFunctionLibrary), 531841911U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeFunctionLibrary_h_839461037(TEXT("/Script/ReadyPlayerMe"),
		Z_CompiledInDeferFile_FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

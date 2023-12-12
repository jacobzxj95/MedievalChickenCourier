// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadyPlayerMe/Public/ReadyPlayerMeGlbLoader.h"
#include "glTFRuntime/Public/glTFRuntimeParser.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReadyPlayerMeGlbLoader() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	GLTFRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FglTFRuntimeSkeletalMeshConfig();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeGlbLoader();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeGlbLoader_NoRegister();
	READYPLAYERME_API UEnum* Z_Construct_UEnum_ReadyPlayerMe_EAvatarBodyType();
	READYPLAYERME_API UFunction* Z_Construct_UDelegateFunction_ReadyPlayerMe_GlbLoadCompleted__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ReadyPlayerMe();
// End Cross Module References
	DEFINE_FUNCTION(UReadyPlayerMeGlbLoader::execOnSkeletalMeshLoaded)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_SkeletalMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSkeletalMeshLoaded(Z_Param_SkeletalMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadyPlayerMeGlbLoader::execLoadFromData)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
		P_GET_ENUM(EAvatarBodyType,Z_Param_BodyType);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_LoadCompleted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadFromData(Z_Param_Out_Data,EAvatarBodyType(Z_Param_BodyType),FGlbLoadCompleted(Z_Param_Out_LoadCompleted));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadyPlayerMeGlbLoader::execLoadFromFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_LocalModelPath);
		P_GET_ENUM(EAvatarBodyType,Z_Param_BodyType);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_LoadCompleted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadFromFile(Z_Param_LocalModelPath,EAvatarBodyType(Z_Param_BodyType),FGlbLoadCompleted(Z_Param_Out_LoadCompleted));
		P_NATIVE_END;
	}
	void UReadyPlayerMeGlbLoader::StaticRegisterNativesUReadyPlayerMeGlbLoader()
	{
		UClass* Class = UReadyPlayerMeGlbLoader::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadFromData", &UReadyPlayerMeGlbLoader::execLoadFromData },
			{ "LoadFromFile", &UReadyPlayerMeGlbLoader::execLoadFromFile },
			{ "OnSkeletalMeshLoaded", &UReadyPlayerMeGlbLoader::execOnSkeletalMeshLoaded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromData_Statics
	{
		struct ReadyPlayerMeGlbLoader_eventLoadFromData_Parms
		{
			TArray<uint8> Data;
			EAvatarBodyType BodyType;
			FScriptDelegate LoadCompleted;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BodyType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BodyType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_LoadCompleted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromData_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromData_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReadyPlayerMeGlbLoader_eventLoadFromData_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromData_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromData_Statics::NewProp_Data_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromData_Statics::NewProp_BodyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromData_Statics::NewProp_BodyType = { "BodyType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReadyPlayerMeGlbLoader_eventLoadFromData_Parms, BodyType), Z_Construct_UEnum_ReadyPlayerMe_EAvatarBodyType, METADATA_PARAMS(nullptr, 0) }; // 3166209864
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromData_Statics::NewProp_LoadCompleted_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromData_Statics::NewProp_LoadCompleted = { "LoadCompleted", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReadyPlayerMeGlbLoader_eventLoadFromData_Parms, LoadCompleted), Z_Construct_UDelegateFunction_ReadyPlayerMe_GlbLoadCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromData_Statics::NewProp_LoadCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromData_Statics::NewProp_LoadCompleted_MetaData)) }; // 801755798
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromData_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromData_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromData_Statics::NewProp_BodyType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromData_Statics::NewProp_BodyType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromData_Statics::NewProp_LoadCompleted,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Load Glb From Data" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeGlbLoader.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeGlbLoader, nullptr, "LoadFromData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromData_Statics::ReadyPlayerMeGlbLoader_eventLoadFromData_Parms), Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromFile_Statics
	{
		struct ReadyPlayerMeGlbLoader_eventLoadFromFile_Parms
		{
			FString LocalModelPath;
			EAvatarBodyType BodyType;
			FScriptDelegate LoadCompleted;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalModelPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LocalModelPath;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BodyType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BodyType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_LoadCompleted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromFile_Statics::NewProp_LocalModelPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromFile_Statics::NewProp_LocalModelPath = { "LocalModelPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReadyPlayerMeGlbLoader_eventLoadFromFile_Parms, LocalModelPath), METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromFile_Statics::NewProp_LocalModelPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromFile_Statics::NewProp_LocalModelPath_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromFile_Statics::NewProp_BodyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromFile_Statics::NewProp_BodyType = { "BodyType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReadyPlayerMeGlbLoader_eventLoadFromFile_Parms, BodyType), Z_Construct_UEnum_ReadyPlayerMe_EAvatarBodyType, METADATA_PARAMS(nullptr, 0) }; // 3166209864
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromFile_Statics::NewProp_LoadCompleted_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromFile_Statics::NewProp_LoadCompleted = { "LoadCompleted", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReadyPlayerMeGlbLoader_eventLoadFromFile_Parms, LoadCompleted), Z_Construct_UDelegateFunction_ReadyPlayerMe_GlbLoadCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromFile_Statics::NewProp_LoadCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromFile_Statics::NewProp_LoadCompleted_MetaData)) }; // 801755798
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromFile_Statics::NewProp_LocalModelPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromFile_Statics::NewProp_BodyType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromFile_Statics::NewProp_BodyType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromFile_Statics::NewProp_LoadCompleted,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ready Player Me" },
		{ "DisplayName", "Load Glb From File" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeGlbLoader.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeGlbLoader, nullptr, "LoadFromFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromFile_Statics::ReadyPlayerMeGlbLoader_eventLoadFromFile_Parms), Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadyPlayerMeGlbLoader_OnSkeletalMeshLoaded_Statics
	{
		struct ReadyPlayerMeGlbLoader_eventOnSkeletalMeshLoaded_Parms
		{
			USkeletalMesh* SkeletalMesh;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReadyPlayerMeGlbLoader_OnSkeletalMeshLoaded_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReadyPlayerMeGlbLoader_eventOnSkeletalMeshLoaded_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeGlbLoader_OnSkeletalMeshLoaded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeGlbLoader_OnSkeletalMeshLoaded_Statics::NewProp_SkeletalMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeGlbLoader_OnSkeletalMeshLoaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReadyPlayerMeGlbLoader.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeGlbLoader_OnSkeletalMeshLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeGlbLoader, nullptr, "OnSkeletalMeshLoaded", nullptr, nullptr, sizeof(Z_Construct_UFunction_UReadyPlayerMeGlbLoader_OnSkeletalMeshLoaded_Statics::ReadyPlayerMeGlbLoader_eventOnSkeletalMeshLoaded_Parms), Z_Construct_UFunction_UReadyPlayerMeGlbLoader_OnSkeletalMeshLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeGlbLoader_OnSkeletalMeshLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeGlbLoader_OnSkeletalMeshLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeGlbLoader_OnSkeletalMeshLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeGlbLoader_OnSkeletalMeshLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeGlbLoader_OnSkeletalMeshLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReadyPlayerMeGlbLoader);
	UClass* Z_Construct_UClass_UReadyPlayerMeGlbLoader_NoRegister()
	{
		return UReadyPlayerMeGlbLoader::StaticClass();
	}
	struct Z_Construct_UClass_UReadyPlayerMeGlbLoader_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetSkeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetSkeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshConfig_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalMeshConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReadyPlayerMeGlbLoader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ReadyPlayerMe,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UReadyPlayerMeGlbLoader_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromData, "LoadFromData" }, // 610881379
		{ &Z_Construct_UFunction_UReadyPlayerMeGlbLoader_LoadFromFile, "LoadFromFile" }, // 1470356829
		{ &Z_Construct_UFunction_UReadyPlayerMeGlbLoader_OnSkeletalMeshLoaded, "OnSkeletalMeshLoaded" }, // 1569563542
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeGlbLoader_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ReadyPlayerMeGlbLoader.h" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeGlbLoader.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeGlbLoader_Statics::NewProp_TargetSkeleton_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "Comment", "/** It provides a flexibility to chose the skeleton that will be used for the loaded avatar.\n\x09 * If it's not set the default skeleton will be used for the loaded avatar. */" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeGlbLoader.h" },
		{ "ToolTip", "It provides a flexibility to chose the skeleton that will be used for the loaded avatar.\nIf it's not set the default skeleton will be used for the loaded avatar." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UReadyPlayerMeGlbLoader_Statics::NewProp_TargetSkeleton = { "TargetSkeleton", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UReadyPlayerMeGlbLoader, TargetSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMeGlbLoader_Statics::NewProp_TargetSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeGlbLoader_Statics::NewProp_TargetSkeleton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeGlbLoader_Statics::NewProp_SkeletalMeshConfig_MetaData[] = {
		{ "Category", "Ready Player Me" },
		{ "Comment", "/**\n\x09 * glTFRuntime skeletal mesh config that will be used for loading the avatar.\n\x09 * This property should be changed only for very custom cases.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeGlbLoader.h" },
		{ "ToolTip", "glTFRuntime skeletal mesh config that will be used for loading the avatar.\nThis property should be changed only for very custom cases." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UReadyPlayerMeGlbLoader_Statics::NewProp_SkeletalMeshConfig = { "SkeletalMeshConfig", nullptr, (EPropertyFlags)0x0010008000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UReadyPlayerMeGlbLoader, SkeletalMeshConfig), Z_Construct_UScriptStruct_FglTFRuntimeSkeletalMeshConfig, METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMeGlbLoader_Statics::NewProp_SkeletalMeshConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeGlbLoader_Statics::NewProp_SkeletalMeshConfig_MetaData)) }; // 3704056235
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReadyPlayerMeGlbLoader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeGlbLoader_Statics::NewProp_TargetSkeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeGlbLoader_Statics::NewProp_SkeletalMeshConfig,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReadyPlayerMeGlbLoader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReadyPlayerMeGlbLoader>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReadyPlayerMeGlbLoader_Statics::ClassParams = {
		&UReadyPlayerMeGlbLoader::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UReadyPlayerMeGlbLoader_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeGlbLoader_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMeGlbLoader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeGlbLoader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReadyPlayerMeGlbLoader()
	{
		if (!Z_Registration_Info_UClass_UReadyPlayerMeGlbLoader.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReadyPlayerMeGlbLoader.OuterSingleton, Z_Construct_UClass_UReadyPlayerMeGlbLoader_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReadyPlayerMeGlbLoader.OuterSingleton;
	}
	template<> READYPLAYERME_API UClass* StaticClass<UReadyPlayerMeGlbLoader>()
	{
		return UReadyPlayerMeGlbLoader::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReadyPlayerMeGlbLoader);
	UReadyPlayerMeGlbLoader::~UReadyPlayerMeGlbLoader() {}
	struct Z_CompiledInDeferFile_FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeGlbLoader_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeGlbLoader_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReadyPlayerMeGlbLoader, UReadyPlayerMeGlbLoader::StaticClass, TEXT("UReadyPlayerMeGlbLoader"), &Z_Registration_Info_UClass_UReadyPlayerMeGlbLoader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReadyPlayerMeGlbLoader), 347200486U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeGlbLoader_h_3383637130(TEXT("/Script/ReadyPlayerMe"),
		Z_CompiledInDeferFile_FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeGlbLoader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeGlbLoader_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadyPlayerMe/Public/ReadyPlayerMeRenderLoader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReadyPlayerMeRenderLoader() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeRenderLoader();
	READYPLAYERME_API UClass* Z_Construct_UClass_UReadyPlayerMeRenderLoader_NoRegister();
	READYPLAYERME_API UEnum* Z_Construct_UEnum_ReadyPlayerMe_EAvatarMorphTarget();
	READYPLAYERME_API UEnum* Z_Construct_UEnum_ReadyPlayerMe_ERenderSceneType();
	READYPLAYERME_API UFunction* Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature();
	READYPLAYERME_API UFunction* Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageFailed__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_ReadyPlayerMe();
// End Cross Module References
	DEFINE_FUNCTION(UReadyPlayerMeRenderLoader::execOnImageDownloaded)
	{
		P_GET_UBOOL(Z_Param_bSuccess);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnImageDownloaded(Z_Param_bSuccess);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadyPlayerMeRenderLoader::execLoad)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ModelUrl);
		P_GET_ENUM_REF(ERenderSceneType,Z_Param_Out_SceneType);
		P_GET_TMAP_REF(EAvatarMorphTarget,float,Z_Param_Out_BlendShapes);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnCompleted);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnFailed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Load(Z_Param_ModelUrl,(ERenderSceneType&)(Z_Param_Out_SceneType),Z_Param_Out_BlendShapes,FDownloadImageCompleted(Z_Param_Out_OnCompleted),FDownloadImageFailed(Z_Param_Out_OnFailed));
		P_NATIVE_END;
	}
	void UReadyPlayerMeRenderLoader::StaticRegisterNativesUReadyPlayerMeRenderLoader()
	{
		UClass* Class = UReadyPlayerMeRenderLoader::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Load", &UReadyPlayerMeRenderLoader::execLoad },
			{ "OnImageDownloaded", &UReadyPlayerMeRenderLoader::execOnImageDownloaded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UReadyPlayerMeRenderLoader_Load_Statics
	{
		struct ReadyPlayerMeRenderLoader_eventLoad_Parms
		{
			FString ModelUrl;
			ERenderSceneType SceneType;
			TMap<EAvatarMorphTarget,float> BlendShapes;
			FScriptDelegate OnCompleted;
			FScriptDelegate OnFailed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModelUrl_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ModelUrl;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SceneType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SceneType;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendShapes_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlendShapes_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BlendShapes_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendShapes_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_BlendShapes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFailed_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnFailed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeRenderLoader_Load_Statics::NewProp_ModelUrl_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UReadyPlayerMeRenderLoader_Load_Statics::NewProp_ModelUrl = { "ModelUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReadyPlayerMeRenderLoader_eventLoad_Parms, ModelUrl), METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeRenderLoader_Load_Statics::NewProp_ModelUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeRenderLoader_Load_Statics::NewProp_ModelUrl_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UReadyPlayerMeRenderLoader_Load_Statics::NewProp_SceneType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeRenderLoader_Load_Statics::NewProp_SceneType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UReadyPlayerMeRenderLoader_Load_Statics::NewProp_SceneType = { "SceneType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReadyPlayerMeRenderLoader_eventLoad_Parms, SceneType), Z_Construct_UEnum_ReadyPlayerMe_ERenderSceneType, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeRenderLoader_Load_Statics::NewProp_SceneType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeRenderLoader_Load_Statics::NewProp_SceneType_MetaData)) }; // 2565145844
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UReadyPlayerMeRenderLoader_Load_Statics::NewProp_BlendShapes_ValueProp = { "BlendShapes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UReadyPlayerMeRenderLoader_Load_Statics::NewProp_BlendShapes_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UReadyPlayerMeRenderLoader_Load_Statics::NewProp_BlendShapes_Key_KeyProp = { "BlendShapes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_ReadyPlayerMe_EAvatarMorphTarget, METADATA_PARAMS(nullptr, 0) }; // 57736107
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeRenderLoader_Load_Statics::NewProp_BlendShapes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UReadyPlayerMeRenderLoader_Load_Statics::NewProp_BlendShapes = { "BlendShapes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReadyPlayerMeRenderLoader_eventLoad_Parms, BlendShapes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeRenderLoader_Load_Statics::NewProp_BlendShapes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeRenderLoader_Load_Statics::NewProp_BlendShapes_MetaData)) }; // 57736107
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeRenderLoader_Load_Statics::NewProp_OnCompleted_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UReadyPlayerMeRenderLoader_Load_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReadyPlayerMeRenderLoader_eventLoad_Parms, OnCompleted), Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeRenderLoader_Load_Statics::NewProp_OnCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeRenderLoader_Load_Statics::NewProp_OnCompleted_MetaData)) }; // 3952274465
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeRenderLoader_Load_Statics::NewProp_OnFailed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UReadyPlayerMeRenderLoader_Load_Statics::NewProp_OnFailed = { "OnFailed", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ReadyPlayerMeRenderLoader_eventLoad_Parms, OnFailed), Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageFailed__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeRenderLoader_Load_Statics::NewProp_OnFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeRenderLoader_Load_Statics::NewProp_OnFailed_MetaData)) }; // 3490479857
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeRenderLoader_Load_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeRenderLoader_Load_Statics::NewProp_ModelUrl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeRenderLoader_Load_Statics::NewProp_SceneType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeRenderLoader_Load_Statics::NewProp_SceneType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeRenderLoader_Load_Statics::NewProp_BlendShapes_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeRenderLoader_Load_Statics::NewProp_BlendShapes_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeRenderLoader_Load_Statics::NewProp_BlendShapes_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeRenderLoader_Load_Statics::NewProp_BlendShapes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeRenderLoader_Load_Statics::NewProp_OnCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeRenderLoader_Load_Statics::NewProp_OnFailed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeRenderLoader_Load_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "BlendShapes, OnCompleted, OnFailed" },
		{ "Category", "Ready Player Me" },
		{ "Comment", "/**\n\x09 * Loads the rendered image.\n\x09 * \n\x09 * @param ModelUrl Model url.\n\x09 * @param SceneType The type of the scene where the avatar should be rendered.\n\x09 * @param BlendShapes A map of the MorphTargets and values for them. BlendShapes can be used for applying facial expressions to the avatar.\n\x09 * @param OnCompleted Success callback. Called when the render is loaded and provides the avatar texture as an argument.\n\x09 * @param OnFailed Failure callback. If the render operation fails, the failure callback will be called.\n\x09 */" },
		{ "DisplayName", "Load" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeRenderLoader.h" },
		{ "ToolTip", "Loads the rendered image.\n\n@param ModelUrl Model url.\n@param SceneType The type of the scene where the avatar should be rendered.\n@param BlendShapes A map of the MorphTargets and values for them. BlendShapes can be used for applying facial expressions to the avatar.\n@param OnCompleted Success callback. Called when the render is loaded and provides the avatar texture as an argument.\n@param OnFailed Failure callback. If the render operation fails, the failure callback will be called." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeRenderLoader_Load_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeRenderLoader, nullptr, "Load", nullptr, nullptr, sizeof(Z_Construct_UFunction_UReadyPlayerMeRenderLoader_Load_Statics::ReadyPlayerMeRenderLoader_eventLoad_Parms), Z_Construct_UFunction_UReadyPlayerMeRenderLoader_Load_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeRenderLoader_Load_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeRenderLoader_Load_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeRenderLoader_Load_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeRenderLoader_Load()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeRenderLoader_Load_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadyPlayerMeRenderLoader_OnImageDownloaded_Statics
	{
		struct ReadyPlayerMeRenderLoader_eventOnImageDownloaded_Parms
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
	void Z_Construct_UFunction_UReadyPlayerMeRenderLoader_OnImageDownloaded_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((ReadyPlayerMeRenderLoader_eventOnImageDownloaded_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReadyPlayerMeRenderLoader_OnImageDownloaded_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ReadyPlayerMeRenderLoader_eventOnImageDownloaded_Parms), &Z_Construct_UFunction_UReadyPlayerMeRenderLoader_OnImageDownloaded_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeRenderLoader_OnImageDownloaded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeRenderLoader_OnImageDownloaded_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeRenderLoader_OnImageDownloaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReadyPlayerMeRenderLoader.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeRenderLoader_OnImageDownloaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeRenderLoader, nullptr, "OnImageDownloaded", nullptr, nullptr, sizeof(Z_Construct_UFunction_UReadyPlayerMeRenderLoader_OnImageDownloaded_Statics::ReadyPlayerMeRenderLoader_eventOnImageDownloaded_Parms), Z_Construct_UFunction_UReadyPlayerMeRenderLoader_OnImageDownloaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeRenderLoader_OnImageDownloaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeRenderLoader_OnImageDownloaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeRenderLoader_OnImageDownloaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeRenderLoader_OnImageDownloaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeRenderLoader_OnImageDownloaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReadyPlayerMeRenderLoader);
	UClass* Z_Construct_UClass_UReadyPlayerMeRenderLoader_NoRegister()
	{
		return UReadyPlayerMeRenderLoader::StaticClass();
	}
	struct Z_Construct_UClass_UReadyPlayerMeRenderLoader_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReadyPlayerMeRenderLoader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ReadyPlayerMe,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UReadyPlayerMeRenderLoader_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UReadyPlayerMeRenderLoader_Load, "Load" }, // 1622516740
		{ &Z_Construct_UFunction_UReadyPlayerMeRenderLoader_OnImageDownloaded, "OnImageDownloaded" }, // 152463722
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeRenderLoader_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Responsible for Loading rendered image from the avatar url.\n */" },
		{ "IncludePath", "ReadyPlayerMeRenderLoader.h" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeRenderLoader.h" },
		{ "ToolTip", "Responsible for Loading rendered image from the avatar url." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReadyPlayerMeRenderLoader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReadyPlayerMeRenderLoader>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReadyPlayerMeRenderLoader_Statics::ClassParams = {
		&UReadyPlayerMeRenderLoader::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMeRenderLoader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeRenderLoader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReadyPlayerMeRenderLoader()
	{
		if (!Z_Registration_Info_UClass_UReadyPlayerMeRenderLoader.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReadyPlayerMeRenderLoader.OuterSingleton, Z_Construct_UClass_UReadyPlayerMeRenderLoader_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReadyPlayerMeRenderLoader.OuterSingleton;
	}
	template<> READYPLAYERME_API UClass* StaticClass<UReadyPlayerMeRenderLoader>()
	{
		return UReadyPlayerMeRenderLoader::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReadyPlayerMeRenderLoader);
	UReadyPlayerMeRenderLoader::~UReadyPlayerMeRenderLoader() {}
	struct Z_CompiledInDeferFile_FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeRenderLoader_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeRenderLoader_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReadyPlayerMeRenderLoader, UReadyPlayerMeRenderLoader::StaticClass, TEXT("UReadyPlayerMeRenderLoader"), &Z_Registration_Info_UClass_UReadyPlayerMeRenderLoader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReadyPlayerMeRenderLoader), 372832502U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeRenderLoader_h_1082379247(TEXT("/Script/ReadyPlayerMe"),
		Z_CompiledInDeferFile_FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeRenderLoader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeRenderLoader_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

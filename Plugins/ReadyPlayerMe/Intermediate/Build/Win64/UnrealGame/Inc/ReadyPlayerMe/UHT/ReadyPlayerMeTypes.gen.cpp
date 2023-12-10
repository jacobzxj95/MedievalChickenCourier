// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadyPlayerMe/Public/ReadyPlayerMeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReadyPlayerMeTypes() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	READYPLAYERME_API UEnum* Z_Construct_UEnum_ReadyPlayerMe_EAvatarBodyType();
	READYPLAYERME_API UEnum* Z_Construct_UEnum_ReadyPlayerMe_EAvatarGender();
	READYPLAYERME_API UEnum* Z_Construct_UEnum_ReadyPlayerMe_EAvatarMorphTarget();
	READYPLAYERME_API UEnum* Z_Construct_UEnum_ReadyPlayerMe_ERenderSceneType();
	READYPLAYERME_API UEnum* Z_Construct_UEnum_ReadyPlayerMe_EStandardMorphTargetGroup();
	READYPLAYERME_API UFunction* Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarDownloadCompleted__DelegateSignature();
	READYPLAYERME_API UFunction* Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarLoadCompleted__DelegateSignature();
	READYPLAYERME_API UFunction* Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarLoadFailed__DelegateSignature();
	READYPLAYERME_API UFunction* Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarPreloadCompleted__DelegateSignature();
	READYPLAYERME_API UFunction* Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature();
	READYPLAYERME_API UFunction* Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageFailed__DelegateSignature();
	READYPLAYERME_API UFunction* Z_Construct_UDelegateFunction_ReadyPlayerMe_GlbLoadCompleted__DelegateSignature();
	READYPLAYERME_API UScriptStruct* Z_Construct_UScriptStruct_FAvatarMetadata();
	UPackage* Z_Construct_UPackage__Script_ReadyPlayerMe();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAvatarGender;
	static UEnum* EAvatarGender_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAvatarGender.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAvatarGender.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ReadyPlayerMe_EAvatarGender, Z_Construct_UPackage__Script_ReadyPlayerMe(), TEXT("EAvatarGender"));
		}
		return Z_Registration_Info_UEnum_EAvatarGender.OuterSingleton;
	}
	template<> READYPLAYERME_API UEnum* StaticEnum<EAvatarGender>()
	{
		return EAvatarGender_StaticEnum();
	}
	struct Z_Construct_UEnum_ReadyPlayerMe_EAvatarGender_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ReadyPlayerMe_EAvatarGender_Statics::Enumerators[] = {
		{ "EAvatarGender::Undefined", (int64)EAvatarGender::Undefined },
		{ "EAvatarGender::Masculine", (int64)EAvatarGender::Masculine },
		{ "EAvatarGender::Feminine", (int64)EAvatarGender::Feminine },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ReadyPlayerMe_EAvatarGender_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Feminine.DisplayName", "Gender Feminine" },
		{ "Feminine.Name", "EAvatarGender::Feminine" },
		{ "Masculine.DisplayName", "Gender Masculine" },
		{ "Masculine.Name", "EAvatarGender::Masculine" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeTypes.h" },
		{ "Undefined.DisplayName", "Gender Undefined" },
		{ "Undefined.Name", "EAvatarGender::Undefined" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ReadyPlayerMe_EAvatarGender_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ReadyPlayerMe,
		nullptr,
		"EAvatarGender",
		"EAvatarGender",
		Z_Construct_UEnum_ReadyPlayerMe_EAvatarGender_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ReadyPlayerMe_EAvatarGender_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ReadyPlayerMe_EAvatarGender_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ReadyPlayerMe_EAvatarGender_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ReadyPlayerMe_EAvatarGender()
	{
		if (!Z_Registration_Info_UEnum_EAvatarGender.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAvatarGender.InnerSingleton, Z_Construct_UEnum_ReadyPlayerMe_EAvatarGender_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAvatarGender.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAvatarBodyType;
	static UEnum* EAvatarBodyType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAvatarBodyType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAvatarBodyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ReadyPlayerMe_EAvatarBodyType, Z_Construct_UPackage__Script_ReadyPlayerMe(), TEXT("EAvatarBodyType"));
		}
		return Z_Registration_Info_UEnum_EAvatarBodyType.OuterSingleton;
	}
	template<> READYPLAYERME_API UEnum* StaticEnum<EAvatarBodyType>()
	{
		return EAvatarBodyType_StaticEnum();
	}
	struct Z_Construct_UEnum_ReadyPlayerMe_EAvatarBodyType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ReadyPlayerMe_EAvatarBodyType_Statics::Enumerators[] = {
		{ "EAvatarBodyType::Undefined", (int64)EAvatarBodyType::Undefined },
		{ "EAvatarBodyType::FullBody", (int64)EAvatarBodyType::FullBody },
		{ "EAvatarBodyType::HalfBody", (int64)EAvatarBodyType::HalfBody },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ReadyPlayerMe_EAvatarBodyType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FullBody.DisplayName", "Full Body Type" },
		{ "FullBody.Name", "EAvatarBodyType::FullBody" },
		{ "HalfBody.DisplayName", "Half Body Type" },
		{ "HalfBody.Name", "EAvatarBodyType::HalfBody" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeTypes.h" },
		{ "Undefined.DisplayName", "Undefined Body Type" },
		{ "Undefined.Name", "EAvatarBodyType::Undefined" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ReadyPlayerMe_EAvatarBodyType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ReadyPlayerMe,
		nullptr,
		"EAvatarBodyType",
		"EAvatarBodyType",
		Z_Construct_UEnum_ReadyPlayerMe_EAvatarBodyType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ReadyPlayerMe_EAvatarBodyType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ReadyPlayerMe_EAvatarBodyType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ReadyPlayerMe_EAvatarBodyType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ReadyPlayerMe_EAvatarBodyType()
	{
		if (!Z_Registration_Info_UEnum_EAvatarBodyType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAvatarBodyType.InnerSingleton, Z_Construct_UEnum_ReadyPlayerMe_EAvatarBodyType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAvatarBodyType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AvatarMetadata;
class UScriptStruct* FAvatarMetadata::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AvatarMetadata.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AvatarMetadata.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAvatarMetadata, Z_Construct_UPackage__Script_ReadyPlayerMe(), TEXT("AvatarMetadata"));
	}
	return Z_Registration_Info_UScriptStruct_AvatarMetadata.OuterSingleton;
}
template<> READYPLAYERME_API UScriptStruct* StaticStruct<FAvatarMetadata>()
{
	return FAvatarMetadata::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAvatarMetadata_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_BodyType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BodyType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutfitGender_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutfitGender_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutfitGender;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkinTone_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SkinTone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdatedAtDate_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UpdatedAtDate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarMetadata_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAvatarMetadata_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAvatarMetadata>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAvatarMetadata_Statics::NewProp_BodyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarMetadata_Statics::NewProp_BodyType_MetaData[] = {
		{ "Category", "ReadyPlayerMe" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAvatarMetadata_Statics::NewProp_BodyType = { "BodyType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAvatarMetadata, BodyType), Z_Construct_UEnum_ReadyPlayerMe_EAvatarBodyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarMetadata_Statics::NewProp_BodyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarMetadata_Statics::NewProp_BodyType_MetaData)) }; // 3166209864
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAvatarMetadata_Statics::NewProp_OutfitGender_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarMetadata_Statics::NewProp_OutfitGender_MetaData[] = {
		{ "Category", "ReadyPlayerMe" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAvatarMetadata_Statics::NewProp_OutfitGender = { "OutfitGender", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAvatarMetadata, OutfitGender), Z_Construct_UEnum_ReadyPlayerMe_EAvatarGender, METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarMetadata_Statics::NewProp_OutfitGender_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarMetadata_Statics::NewProp_OutfitGender_MetaData)) }; // 1993969138
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarMetadata_Statics::NewProp_SkinTone_MetaData[] = {
		{ "Category", "ReadyPlayerMe" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAvatarMetadata_Statics::NewProp_SkinTone = { "SkinTone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAvatarMetadata, SkinTone), METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarMetadata_Statics::NewProp_SkinTone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarMetadata_Statics::NewProp_SkinTone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarMetadata_Statics::NewProp_UpdatedAtDate_MetaData[] = {
		{ "Category", "ReadyPlayerMe" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeTypes.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAvatarMetadata_Statics::NewProp_UpdatedAtDate = { "UpdatedAtDate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAvatarMetadata, UpdatedAtDate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarMetadata_Statics::NewProp_UpdatedAtDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarMetadata_Statics::NewProp_UpdatedAtDate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAvatarMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarMetadata_Statics::NewProp_BodyType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarMetadata_Statics::NewProp_BodyType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarMetadata_Statics::NewProp_OutfitGender_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarMetadata_Statics::NewProp_OutfitGender,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarMetadata_Statics::NewProp_SkinTone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarMetadata_Statics::NewProp_UpdatedAtDate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAvatarMetadata_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ReadyPlayerMe,
		nullptr,
		&NewStructOps,
		"AvatarMetadata",
		sizeof(FAvatarMetadata),
		alignof(FAvatarMetadata),
		Z_Construct_UScriptStruct_FAvatarMetadata_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarMetadata_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarMetadata_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarMetadata_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAvatarMetadata()
	{
		if (!Z_Registration_Info_UScriptStruct_AvatarMetadata.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AvatarMetadata.InnerSingleton, Z_Construct_UScriptStruct_FAvatarMetadata_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AvatarMetadata.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStandardMorphTargetGroup;
	static UEnum* EStandardMorphTargetGroup_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStandardMorphTargetGroup.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStandardMorphTargetGroup.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ReadyPlayerMe_EStandardMorphTargetGroup, Z_Construct_UPackage__Script_ReadyPlayerMe(), TEXT("EStandardMorphTargetGroup"));
		}
		return Z_Registration_Info_UEnum_EStandardMorphTargetGroup.OuterSingleton;
	}
	template<> READYPLAYERME_API UEnum* StaticEnum<EStandardMorphTargetGroup>()
	{
		return EStandardMorphTargetGroup_StaticEnum();
	}
	struct Z_Construct_UEnum_ReadyPlayerMe_EStandardMorphTargetGroup_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ReadyPlayerMe_EStandardMorphTargetGroup_Statics::Enumerators[] = {
		{ "EStandardMorphTargetGroup::None", (int64)EStandardMorphTargetGroup::None },
		{ "EStandardMorphTargetGroup::ArKit", (int64)EStandardMorphTargetGroup::ArKit },
		{ "EStandardMorphTargetGroup::Oculus", (int64)EStandardMorphTargetGroup::Oculus },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ReadyPlayerMe_EStandardMorphTargetGroup_Statics::Enum_MetaDataParams[] = {
		{ "ArKit.DisplayName", "ArKit" },
		{ "ArKit.Name", "EStandardMorphTargetGroup::ArKit" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeTypes.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EStandardMorphTargetGroup::None" },
		{ "Oculus.DisplayName", "Oculus Viseme" },
		{ "Oculus.Name", "EStandardMorphTargetGroup::Oculus" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ReadyPlayerMe_EStandardMorphTargetGroup_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ReadyPlayerMe,
		nullptr,
		"EStandardMorphTargetGroup",
		"EStandardMorphTargetGroup",
		Z_Construct_UEnum_ReadyPlayerMe_EStandardMorphTargetGroup_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ReadyPlayerMe_EStandardMorphTargetGroup_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ReadyPlayerMe_EStandardMorphTargetGroup_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ReadyPlayerMe_EStandardMorphTargetGroup_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ReadyPlayerMe_EStandardMorphTargetGroup()
	{
		if (!Z_Registration_Info_UEnum_EStandardMorphTargetGroup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStandardMorphTargetGroup.InnerSingleton, Z_Construct_UEnum_ReadyPlayerMe_EStandardMorphTargetGroup_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStandardMorphTargetGroup.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAvatarMorphTarget;
	static UEnum* EAvatarMorphTarget_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAvatarMorphTarget.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAvatarMorphTarget.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ReadyPlayerMe_EAvatarMorphTarget, Z_Construct_UPackage__Script_ReadyPlayerMe(), TEXT("EAvatarMorphTarget"));
		}
		return Z_Registration_Info_UEnum_EAvatarMorphTarget.OuterSingleton;
	}
	template<> READYPLAYERME_API UEnum* StaticEnum<EAvatarMorphTarget>()
	{
		return EAvatarMorphTarget_StaticEnum();
	}
	struct Z_Construct_UEnum_ReadyPlayerMe_EAvatarMorphTarget_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ReadyPlayerMe_EAvatarMorphTarget_Statics::Enumerators[] = {
		{ "EAvatarMorphTarget::Viseme_aa", (int64)EAvatarMorphTarget::Viseme_aa },
		{ "EAvatarMorphTarget::Viseme_E", (int64)EAvatarMorphTarget::Viseme_E },
		{ "EAvatarMorphTarget::Viseme_I", (int64)EAvatarMorphTarget::Viseme_I },
		{ "EAvatarMorphTarget::Viseme_O", (int64)EAvatarMorphTarget::Viseme_O },
		{ "EAvatarMorphTarget::Viseme_U", (int64)EAvatarMorphTarget::Viseme_U },
		{ "EAvatarMorphTarget::Viseme_CH", (int64)EAvatarMorphTarget::Viseme_CH },
		{ "EAvatarMorphTarget::Viseme_DD", (int64)EAvatarMorphTarget::Viseme_DD },
		{ "EAvatarMorphTarget::Viseme_FF", (int64)EAvatarMorphTarget::Viseme_FF },
		{ "EAvatarMorphTarget::Viseme_kk", (int64)EAvatarMorphTarget::Viseme_kk },
		{ "EAvatarMorphTarget::Viseme_nn", (int64)EAvatarMorphTarget::Viseme_nn },
		{ "EAvatarMorphTarget::Viseme_PP", (int64)EAvatarMorphTarget::Viseme_PP },
		{ "EAvatarMorphTarget::Viseme_RR", (int64)EAvatarMorphTarget::Viseme_RR },
		{ "EAvatarMorphTarget::Viseme_sil", (int64)EAvatarMorphTarget::Viseme_sil },
		{ "EAvatarMorphTarget::Viseme_SS", (int64)EAvatarMorphTarget::Viseme_SS },
		{ "EAvatarMorphTarget::Viseme_TH", (int64)EAvatarMorphTarget::Viseme_TH },
		{ "EAvatarMorphTarget::BrowDownLeft", (int64)EAvatarMorphTarget::BrowDownLeft },
		{ "EAvatarMorphTarget::BrowDownRight", (int64)EAvatarMorphTarget::BrowDownRight },
		{ "EAvatarMorphTarget::BrowInnerUp", (int64)EAvatarMorphTarget::BrowInnerUp },
		{ "EAvatarMorphTarget::BrowOuterUpLeft", (int64)EAvatarMorphTarget::BrowOuterUpLeft },
		{ "EAvatarMorphTarget::BrowOuterUpRight", (int64)EAvatarMorphTarget::BrowOuterUpRight },
		{ "EAvatarMorphTarget::EyeBlinkLeft", (int64)EAvatarMorphTarget::EyeBlinkLeft },
		{ "EAvatarMorphTarget::EyeBlinkRight", (int64)EAvatarMorphTarget::EyeBlinkRight },
		{ "EAvatarMorphTarget::EyeSquintLeft", (int64)EAvatarMorphTarget::EyeSquintLeft },
		{ "EAvatarMorphTarget::EyeSquintRight", (int64)EAvatarMorphTarget::EyeSquintRight },
		{ "EAvatarMorphTarget::EyeWideLeft", (int64)EAvatarMorphTarget::EyeWideLeft },
		{ "EAvatarMorphTarget::EyeWideRight", (int64)EAvatarMorphTarget::EyeWideRight },
		{ "EAvatarMorphTarget::JawOpen", (int64)EAvatarMorphTarget::JawOpen },
		{ "EAvatarMorphTarget::JawForward", (int64)EAvatarMorphTarget::JawForward },
		{ "EAvatarMorphTarget::JawLeft", (int64)EAvatarMorphTarget::JawLeft },
		{ "EAvatarMorphTarget::JawRight", (int64)EAvatarMorphTarget::JawRight },
		{ "EAvatarMorphTarget::NoseSneerLeft", (int64)EAvatarMorphTarget::NoseSneerLeft },
		{ "EAvatarMorphTarget::NoseSneerRight", (int64)EAvatarMorphTarget::NoseSneerRight },
		{ "EAvatarMorphTarget::CheekPuff", (int64)EAvatarMorphTarget::CheekPuff },
		{ "EAvatarMorphTarget::CheekSquintLeft", (int64)EAvatarMorphTarget::CheekSquintLeft },
		{ "EAvatarMorphTarget::CheekSquintRight", (int64)EAvatarMorphTarget::CheekSquintRight },
		{ "EAvatarMorphTarget::MouthSmileLeft", (int64)EAvatarMorphTarget::MouthSmileLeft },
		{ "EAvatarMorphTarget::MouthSmileRight", (int64)EAvatarMorphTarget::MouthSmileRight },
		{ "EAvatarMorphTarget::MouthLeft", (int64)EAvatarMorphTarget::MouthLeft },
		{ "EAvatarMorphTarget::MouthRight", (int64)EAvatarMorphTarget::MouthRight },
		{ "EAvatarMorphTarget::MouthClose", (int64)EAvatarMorphTarget::MouthClose },
		{ "EAvatarMorphTarget::MouthFunnel", (int64)EAvatarMorphTarget::MouthFunnel },
		{ "EAvatarMorphTarget::MouthDimpleLeft", (int64)EAvatarMorphTarget::MouthDimpleLeft },
		{ "EAvatarMorphTarget::MouthDimpleRight", (int64)EAvatarMorphTarget::MouthDimpleRight },
		{ "EAvatarMorphTarget::MouthStretchLeft", (int64)EAvatarMorphTarget::MouthStretchLeft },
		{ "EAvatarMorphTarget::MouthStretchRight", (int64)EAvatarMorphTarget::MouthStretchRight },
		{ "EAvatarMorphTarget::MouthRollLower", (int64)EAvatarMorphTarget::MouthRollLower },
		{ "EAvatarMorphTarget::MouthRollUpper", (int64)EAvatarMorphTarget::MouthRollUpper },
		{ "EAvatarMorphTarget::MouthPressLeft", (int64)EAvatarMorphTarget::MouthPressLeft },
		{ "EAvatarMorphTarget::MouthPressRight", (int64)EAvatarMorphTarget::MouthPressRight },
		{ "EAvatarMorphTarget::MouthUpperUpLeft", (int64)EAvatarMorphTarget::MouthUpperUpLeft },
		{ "EAvatarMorphTarget::MouthUpperUpRight", (int64)EAvatarMorphTarget::MouthUpperUpRight },
		{ "EAvatarMorphTarget::MouthFrownLeft", (int64)EAvatarMorphTarget::MouthFrownLeft },
		{ "EAvatarMorphTarget::MouthFrownRight", (int64)EAvatarMorphTarget::MouthFrownRight },
		{ "EAvatarMorphTarget::MouthPucker", (int64)EAvatarMorphTarget::MouthPucker },
		{ "EAvatarMorphTarget::MouthShrugLower", (int64)EAvatarMorphTarget::MouthShrugLower },
		{ "EAvatarMorphTarget::MouthShrugUpper", (int64)EAvatarMorphTarget::MouthShrugUpper },
		{ "EAvatarMorphTarget::MouthLowerDownLeft", (int64)EAvatarMorphTarget::MouthLowerDownLeft },
		{ "EAvatarMorphTarget::MouthLowerDownRight", (int64)EAvatarMorphTarget::MouthLowerDownRight },
		{ "EAvatarMorphTarget::MouthOpen", (int64)EAvatarMorphTarget::MouthOpen },
		{ "EAvatarMorphTarget::MouthSmile", (int64)EAvatarMorphTarget::MouthSmile },
		{ "EAvatarMorphTarget::EyesClosed", (int64)EAvatarMorphTarget::EyesClosed },
		{ "EAvatarMorphTarget::EyesLookUp", (int64)EAvatarMorphTarget::EyesLookUp },
		{ "EAvatarMorphTarget::EyesLookDown", (int64)EAvatarMorphTarget::EyesLookDown },
		{ "EAvatarMorphTarget::EyeLookDownLeft", (int64)EAvatarMorphTarget::EyeLookDownLeft },
		{ "EAvatarMorphTarget::EyeLookInLeft", (int64)EAvatarMorphTarget::EyeLookInLeft },
		{ "EAvatarMorphTarget::EyeLookOutLeft", (int64)EAvatarMorphTarget::EyeLookOutLeft },
		{ "EAvatarMorphTarget::EyeLookUpLeft", (int64)EAvatarMorphTarget::EyeLookUpLeft },
		{ "EAvatarMorphTarget::EyeLookDownRight", (int64)EAvatarMorphTarget::EyeLookDownRight },
		{ "EAvatarMorphTarget::EyeLookInRight", (int64)EAvatarMorphTarget::EyeLookInRight },
		{ "EAvatarMorphTarget::EyeLookOutRight", (int64)EAvatarMorphTarget::EyeLookOutRight },
		{ "EAvatarMorphTarget::EyeLookUpRight", (int64)EAvatarMorphTarget::EyeLookUpRight },
		{ "EAvatarMorphTarget::TongueOut", (int64)EAvatarMorphTarget::TongueOut },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ReadyPlayerMe_EAvatarMorphTarget_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BrowDownLeft.Comment", "// ArKit blend shapes\n" },
		{ "BrowDownLeft.DisplayName", "BrowDownLeft" },
		{ "BrowDownLeft.Name", "EAvatarMorphTarget::BrowDownLeft" },
		{ "BrowDownLeft.ToolTip", "ArKit blend shapes" },
		{ "BrowDownRight.DisplayName", "BrowDownRight" },
		{ "BrowDownRight.Name", "EAvatarMorphTarget::BrowDownRight" },
		{ "BrowInnerUp.DisplayName", "BrowInnerUp" },
		{ "BrowInnerUp.Name", "EAvatarMorphTarget::BrowInnerUp" },
		{ "BrowOuterUpLeft.DisplayName", "BrowOuterUpLeft" },
		{ "BrowOuterUpLeft.Name", "EAvatarMorphTarget::BrowOuterUpLeft" },
		{ "BrowOuterUpRight.DisplayName", "BrowOuterUpRight" },
		{ "BrowOuterUpRight.Name", "EAvatarMorphTarget::BrowOuterUpRight" },
		{ "CheekPuff.DisplayName", "CheekPuff" },
		{ "CheekPuff.Name", "EAvatarMorphTarget::CheekPuff" },
		{ "CheekSquintLeft.DisplayName", "CheekSquintLeft" },
		{ "CheekSquintLeft.Name", "EAvatarMorphTarget::CheekSquintLeft" },
		{ "CheekSquintRight.DisplayName", "CheekSquintRight" },
		{ "CheekSquintRight.Name", "EAvatarMorphTarget::CheekSquintRight" },
		{ "EyeBlinkLeft.DisplayName", "EyeBlinkLeft" },
		{ "EyeBlinkLeft.Name", "EAvatarMorphTarget::EyeBlinkLeft" },
		{ "EyeBlinkRight.DisplayName", "EyeBlinkRight" },
		{ "EyeBlinkRight.Name", "EAvatarMorphTarget::EyeBlinkRight" },
		{ "EyeLookDownLeft.DisplayName", "EyeLookDownLeft" },
		{ "EyeLookDownLeft.Name", "EAvatarMorphTarget::EyeLookDownLeft" },
		{ "EyeLookDownRight.DisplayName", "EyeLookDownRight" },
		{ "EyeLookDownRight.Name", "EAvatarMorphTarget::EyeLookDownRight" },
		{ "EyeLookInLeft.DisplayName", "EyeLookInLeft" },
		{ "EyeLookInLeft.Name", "EAvatarMorphTarget::EyeLookInLeft" },
		{ "EyeLookInRight.DisplayName", "EyeLookInRight" },
		{ "EyeLookInRight.Name", "EAvatarMorphTarget::EyeLookInRight" },
		{ "EyeLookOutLeft.DisplayName", "EyeLookOutLeft" },
		{ "EyeLookOutLeft.Name", "EAvatarMorphTarget::EyeLookOutLeft" },
		{ "EyeLookOutRight.DisplayName", "EyeLookOutRight" },
		{ "EyeLookOutRight.Name", "EAvatarMorphTarget::EyeLookOutRight" },
		{ "EyeLookUpLeft.DisplayName", "EyeLookUpLeft" },
		{ "EyeLookUpLeft.Name", "EAvatarMorphTarget::EyeLookUpLeft" },
		{ "EyeLookUpRight.DisplayName", "EyeLookUpRight" },
		{ "EyeLookUpRight.Name", "EAvatarMorphTarget::EyeLookUpRight" },
		{ "EyesClosed.DisplayName", "EyesClosed" },
		{ "EyesClosed.Name", "EAvatarMorphTarget::EyesClosed" },
		{ "EyesLookDown.DisplayName", "EyesLookDown" },
		{ "EyesLookDown.Name", "EAvatarMorphTarget::EyesLookDown" },
		{ "EyesLookUp.DisplayName", "EyesLookUp" },
		{ "EyesLookUp.Name", "EAvatarMorphTarget::EyesLookUp" },
		{ "EyeSquintLeft.DisplayName", "EyeSquintLeft" },
		{ "EyeSquintLeft.Name", "EAvatarMorphTarget::EyeSquintLeft" },
		{ "EyeSquintRight.DisplayName", "EyeSquintRight" },
		{ "EyeSquintRight.Name", "EAvatarMorphTarget::EyeSquintRight" },
		{ "EyeWideLeft.DisplayName", "EyeWideLeft" },
		{ "EyeWideLeft.Name", "EAvatarMorphTarget::EyeWideLeft" },
		{ "EyeWideRight.DisplayName", "EyeWideRight" },
		{ "EyeWideRight.Name", "EAvatarMorphTarget::EyeWideRight" },
		{ "JawForward.DisplayName", "JawForward" },
		{ "JawForward.Name", "EAvatarMorphTarget::JawForward" },
		{ "JawLeft.DisplayName", "JawLeft" },
		{ "JawLeft.Name", "EAvatarMorphTarget::JawLeft" },
		{ "JawOpen.DisplayName", "JawOpen" },
		{ "JawOpen.Name", "EAvatarMorphTarget::JawOpen" },
		{ "JawRight.DisplayName", "JawRight" },
		{ "JawRight.Name", "EAvatarMorphTarget::JawRight" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeTypes.h" },
		{ "MouthClose.DisplayName", "MouthClose" },
		{ "MouthClose.Name", "EAvatarMorphTarget::MouthClose" },
		{ "MouthDimpleLeft.DisplayName", "MouthDimpleLeft" },
		{ "MouthDimpleLeft.Name", "EAvatarMorphTarget::MouthDimpleLeft" },
		{ "MouthDimpleRight.DisplayName", "MouthDimpleRight" },
		{ "MouthDimpleRight.Name", "EAvatarMorphTarget::MouthDimpleRight" },
		{ "MouthFrownLeft.DisplayName", "MouthFrownLeft" },
		{ "MouthFrownLeft.Name", "EAvatarMorphTarget::MouthFrownLeft" },
		{ "MouthFrownRight.DisplayName", "MouthFrownRight" },
		{ "MouthFrownRight.Name", "EAvatarMorphTarget::MouthFrownRight" },
		{ "MouthFunnel.DisplayName", "MouthFunnel" },
		{ "MouthFunnel.Name", "EAvatarMorphTarget::MouthFunnel" },
		{ "MouthLeft.DisplayName", "MouthLeft" },
		{ "MouthLeft.Name", "EAvatarMorphTarget::MouthLeft" },
		{ "MouthLowerDownLeft.DisplayName", "MouthLowerDownLeft" },
		{ "MouthLowerDownLeft.Name", "EAvatarMorphTarget::MouthLowerDownLeft" },
		{ "MouthLowerDownRight.DisplayName", "MouthLowerDownRight" },
		{ "MouthLowerDownRight.Name", "EAvatarMorphTarget::MouthLowerDownRight" },
		{ "MouthOpen.Comment", "// Additional blend shapes\n" },
		{ "MouthOpen.DisplayName", "MouthOpen" },
		{ "MouthOpen.Name", "EAvatarMorphTarget::MouthOpen" },
		{ "MouthOpen.ToolTip", "Additional blend shapes" },
		{ "MouthPressLeft.DisplayName", "MouthPressLeft" },
		{ "MouthPressLeft.Name", "EAvatarMorphTarget::MouthPressLeft" },
		{ "MouthPressRight.DisplayName", "MouthPressRight" },
		{ "MouthPressRight.Name", "EAvatarMorphTarget::MouthPressRight" },
		{ "MouthPucker.DisplayName", "MouthPucker" },
		{ "MouthPucker.Name", "EAvatarMorphTarget::MouthPucker" },
		{ "MouthRight.DisplayName", "MouthRight" },
		{ "MouthRight.Name", "EAvatarMorphTarget::MouthRight" },
		{ "MouthRollLower.DisplayName", "MouthRollLower" },
		{ "MouthRollLower.Name", "EAvatarMorphTarget::MouthRollLower" },
		{ "MouthRollUpper.DisplayName", "MouthRollUpper" },
		{ "MouthRollUpper.Name", "EAvatarMorphTarget::MouthRollUpper" },
		{ "MouthShrugLower.DisplayName", "MouthShrugLower" },
		{ "MouthShrugLower.Name", "EAvatarMorphTarget::MouthShrugLower" },
		{ "MouthShrugUpper.DisplayName", "MouthShrugUpper" },
		{ "MouthShrugUpper.Name", "EAvatarMorphTarget::MouthShrugUpper" },
		{ "MouthSmile.DisplayName", "MouthSmile" },
		{ "MouthSmile.Name", "EAvatarMorphTarget::MouthSmile" },
		{ "MouthSmileLeft.DisplayName", "MouthSmileLeft" },
		{ "MouthSmileLeft.Name", "EAvatarMorphTarget::MouthSmileLeft" },
		{ "MouthSmileRight.DisplayName", "MouthSmileRight" },
		{ "MouthSmileRight.Name", "EAvatarMorphTarget::MouthSmileRight" },
		{ "MouthStretchLeft.DisplayName", "MouthStretchLeft" },
		{ "MouthStretchLeft.Name", "EAvatarMorphTarget::MouthStretchLeft" },
		{ "MouthStretchRight.DisplayName", "MouthStretchRight" },
		{ "MouthStretchRight.Name", "EAvatarMorphTarget::MouthStretchRight" },
		{ "MouthUpperUpLeft.DisplayName", "MouthUpperUpLeft" },
		{ "MouthUpperUpLeft.Name", "EAvatarMorphTarget::MouthUpperUpLeft" },
		{ "MouthUpperUpRight.DisplayName", "MouthUpperUpRight" },
		{ "MouthUpperUpRight.Name", "EAvatarMorphTarget::MouthUpperUpRight" },
		{ "NoseSneerLeft.DisplayName", "NoseSneerLeft" },
		{ "NoseSneerLeft.Name", "EAvatarMorphTarget::NoseSneerLeft" },
		{ "NoseSneerRight.DisplayName", "NoseSneerRight" },
		{ "NoseSneerRight.Name", "EAvatarMorphTarget::NoseSneerRight" },
		{ "TongueOut.DisplayName", "TongueOut" },
		{ "TongueOut.Name", "EAvatarMorphTarget::TongueOut" },
		{ "Viseme_aa.Comment", "// Oculus Viseme blend shapes\n" },
		{ "Viseme_aa.DisplayName", "Viseme_aa" },
		{ "Viseme_aa.Name", "EAvatarMorphTarget::Viseme_aa" },
		{ "Viseme_aa.ToolTip", "Oculus Viseme blend shapes" },
		{ "Viseme_CH.DisplayName", "Viseme_CH" },
		{ "Viseme_CH.Name", "EAvatarMorphTarget::Viseme_CH" },
		{ "Viseme_DD.DisplayName", "Viseme_DD" },
		{ "Viseme_DD.Name", "EAvatarMorphTarget::Viseme_DD" },
		{ "Viseme_E.DisplayName", "Viseme_E" },
		{ "Viseme_E.Name", "EAvatarMorphTarget::Viseme_E" },
		{ "Viseme_FF.DisplayName", "Viseme_FF" },
		{ "Viseme_FF.Name", "EAvatarMorphTarget::Viseme_FF" },
		{ "Viseme_I.DisplayName", "Viseme_I" },
		{ "Viseme_I.Name", "EAvatarMorphTarget::Viseme_I" },
		{ "Viseme_kk.DisplayName", "Viseme_kk" },
		{ "Viseme_kk.Name", "EAvatarMorphTarget::Viseme_kk" },
		{ "Viseme_nn.DisplayName", "Viseme_nn" },
		{ "Viseme_nn.Name", "EAvatarMorphTarget::Viseme_nn" },
		{ "Viseme_O.DisplayName", "Viseme_O" },
		{ "Viseme_O.Name", "EAvatarMorphTarget::Viseme_O" },
		{ "Viseme_PP.DisplayName", "Viseme_PP" },
		{ "Viseme_PP.Name", "EAvatarMorphTarget::Viseme_PP" },
		{ "Viseme_RR.DisplayName", "Viseme_RR" },
		{ "Viseme_RR.Name", "EAvatarMorphTarget::Viseme_RR" },
		{ "Viseme_sil.DisplayName", "Viseme_sil" },
		{ "Viseme_sil.Name", "EAvatarMorphTarget::Viseme_sil" },
		{ "Viseme_SS.DisplayName", "Viseme_SS" },
		{ "Viseme_SS.Name", "EAvatarMorphTarget::Viseme_SS" },
		{ "Viseme_TH.DisplayName", "Viseme_TH" },
		{ "Viseme_TH.Name", "EAvatarMorphTarget::Viseme_TH" },
		{ "Viseme_U.DisplayName", "Viseme_U" },
		{ "Viseme_U.Name", "EAvatarMorphTarget::Viseme_U" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ReadyPlayerMe_EAvatarMorphTarget_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ReadyPlayerMe,
		nullptr,
		"EAvatarMorphTarget",
		"EAvatarMorphTarget",
		Z_Construct_UEnum_ReadyPlayerMe_EAvatarMorphTarget_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ReadyPlayerMe_EAvatarMorphTarget_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ReadyPlayerMe_EAvatarMorphTarget_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ReadyPlayerMe_EAvatarMorphTarget_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ReadyPlayerMe_EAvatarMorphTarget()
	{
		if (!Z_Registration_Info_UEnum_EAvatarMorphTarget.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAvatarMorphTarget.InnerSingleton, Z_Construct_UEnum_ReadyPlayerMe_EAvatarMorphTarget_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAvatarMorphTarget.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarDownloadCompleted__DelegateSignature_Statics
	{
		struct _Script_ReadyPlayerMe_eventAvatarDownloadCompleted_Parms
		{
			USkeletalMesh* Mesh;
			FAvatarMetadata Metadata;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarDownloadCompleted__DelegateSignature_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ReadyPlayerMe_eventAvatarDownloadCompleted_Parms, Mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarDownloadCompleted__DelegateSignature_Statics::NewProp_Metadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarDownloadCompleted__DelegateSignature_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ReadyPlayerMe_eventAvatarDownloadCompleted_Parms, Metadata), Z_Construct_UScriptStruct_FAvatarMetadata, METADATA_PARAMS(Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarDownloadCompleted__DelegateSignature_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarDownloadCompleted__DelegateSignature_Statics::NewProp_Metadata_MetaData)) }; // 1360335926
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarDownloadCompleted__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarDownloadCompleted__DelegateSignature_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarDownloadCompleted__DelegateSignature_Statics::NewProp_Metadata,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarDownloadCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReadyPlayerMeTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarDownloadCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ReadyPlayerMe, nullptr, "AvatarDownloadCompleted__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarDownloadCompleted__DelegateSignature_Statics::_Script_ReadyPlayerMe_eventAvatarDownloadCompleted_Parms), Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarDownloadCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarDownloadCompleted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarDownloadCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarDownloadCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarDownloadCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarDownloadCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarLoadCompleted__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarLoadCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReadyPlayerMeTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarLoadCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ReadyPlayerMe, nullptr, "AvatarLoadCompleted__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarLoadCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarLoadCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarLoadCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarLoadCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarLoadFailed__DelegateSignature_Statics
	{
		struct _Script_ReadyPlayerMe_eventAvatarLoadFailed_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarLoadFailed__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarLoadFailed__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ReadyPlayerMe_eventAvatarLoadFailed_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarLoadFailed__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarLoadFailed__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarLoadFailed__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarLoadFailed__DelegateSignature_Statics::NewProp_ErrorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarLoadFailed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReadyPlayerMeTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarLoadFailed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ReadyPlayerMe, nullptr, "AvatarLoadFailed__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarLoadFailed__DelegateSignature_Statics::_Script_ReadyPlayerMe_eventAvatarLoadFailed_Parms), Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarLoadFailed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarLoadFailed__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarLoadFailed__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarLoadFailed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarLoadFailed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarLoadFailed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature_Statics
	{
		struct _Script_ReadyPlayerMe_eventDownloadImageCompleted_Parms
		{
			UTexture2D* Texture;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ReadyPlayerMe_eventDownloadImageCompleted_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature_Statics::NewProp_Texture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReadyPlayerMeTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ReadyPlayerMe, nullptr, "DownloadImageCompleted__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature_Statics::_Script_ReadyPlayerMe_eventDownloadImageCompleted_Parms), Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageFailed__DelegateSignature_Statics
	{
		struct _Script_ReadyPlayerMe_eventDownloadImageFailed_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageFailed__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageFailed__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ReadyPlayerMe_eventDownloadImageFailed_Parms, ErrorMessage), METADATA_PARAMS(Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageFailed__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageFailed__DelegateSignature_Statics::NewProp_ErrorMessage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageFailed__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageFailed__DelegateSignature_Statics::NewProp_ErrorMessage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageFailed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReadyPlayerMeTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageFailed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ReadyPlayerMe, nullptr, "DownloadImageFailed__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageFailed__DelegateSignature_Statics::_Script_ReadyPlayerMe_eventDownloadImageFailed_Parms), Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageFailed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageFailed__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageFailed__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageFailed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageFailed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ReadyPlayerMe_DownloadImageFailed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_ReadyPlayerMe_GlbLoadCompleted__DelegateSignature_Statics
	{
		struct _Script_ReadyPlayerMe_eventGlbLoadCompleted_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ReadyPlayerMe_GlbLoadCompleted__DelegateSignature_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_ReadyPlayerMe_eventGlbLoadCompleted_Parms, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ReadyPlayerMe_GlbLoadCompleted__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ReadyPlayerMe_GlbLoadCompleted__DelegateSignature_Statics::NewProp_SkeletalMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ReadyPlayerMe_GlbLoadCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReadyPlayerMeTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ReadyPlayerMe_GlbLoadCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ReadyPlayerMe, nullptr, "GlbLoadCompleted__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ReadyPlayerMe_GlbLoadCompleted__DelegateSignature_Statics::_Script_ReadyPlayerMe_eventGlbLoadCompleted_Parms), Z_Construct_UDelegateFunction_ReadyPlayerMe_GlbLoadCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReadyPlayerMe_GlbLoadCompleted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ReadyPlayerMe_GlbLoadCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReadyPlayerMe_GlbLoadCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ReadyPlayerMe_GlbLoadCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ReadyPlayerMe_GlbLoadCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarPreloadCompleted__DelegateSignature_Statics
	{
		struct _Script_ReadyPlayerMe_eventAvatarPreloadCompleted_Parms
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
	void Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarPreloadCompleted__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_ReadyPlayerMe_eventAvatarPreloadCompleted_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarPreloadCompleted__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_ReadyPlayerMe_eventAvatarPreloadCompleted_Parms), &Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarPreloadCompleted__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarPreloadCompleted__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarPreloadCompleted__DelegateSignature_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarPreloadCompleted__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ReadyPlayerMeTypes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarPreloadCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ReadyPlayerMe, nullptr, "AvatarPreloadCompleted__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarPreloadCompleted__DelegateSignature_Statics::_Script_ReadyPlayerMe_eventAvatarPreloadCompleted_Parms), Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarPreloadCompleted__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarPreloadCompleted__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarPreloadCompleted__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarPreloadCompleted__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarPreloadCompleted__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ReadyPlayerMe_AvatarPreloadCompleted__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERenderSceneType;
	static UEnum* ERenderSceneType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERenderSceneType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERenderSceneType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ReadyPlayerMe_ERenderSceneType, Z_Construct_UPackage__Script_ReadyPlayerMe(), TEXT("ERenderSceneType"));
		}
		return Z_Registration_Info_UEnum_ERenderSceneType.OuterSingleton;
	}
	template<> READYPLAYERME_API UEnum* StaticEnum<ERenderSceneType>()
	{
		return ERenderSceneType_StaticEnum();
	}
	struct Z_Construct_UEnum_ReadyPlayerMe_ERenderSceneType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ReadyPlayerMe_ERenderSceneType_Statics::Enumerators[] = {
		{ "ERenderSceneType::FullBodyPortrait", (int64)ERenderSceneType::FullBodyPortrait },
		{ "ERenderSceneType::HalfBodyPortrait", (int64)ERenderSceneType::HalfBodyPortrait },
		{ "ERenderSceneType::FullBodyPortraitTransparent", (int64)ERenderSceneType::FullBodyPortraitTransparent },
		{ "ERenderSceneType::HalfBodyPortraitTransparent", (int64)ERenderSceneType::HalfBodyPortraitTransparent },
		{ "ERenderSceneType::FullBodyPostureTransparent", (int64)ERenderSceneType::FullBodyPostureTransparent },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ReadyPlayerMe_ERenderSceneType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FullBodyPortrait.DisplayName", "Full Body Portrait" },
		{ "FullBodyPortrait.Name", "ERenderSceneType::FullBodyPortrait" },
		{ "FullBodyPortraitTransparent.DisplayName", "Full Body Portrait Transparent" },
		{ "FullBodyPortraitTransparent.Name", "ERenderSceneType::FullBodyPortraitTransparent" },
		{ "FullBodyPostureTransparent.DisplayName", "Full Body Posture Transparent" },
		{ "FullBodyPostureTransparent.Name", "ERenderSceneType::FullBodyPostureTransparent" },
		{ "HalfBodyPortrait.DisplayName", "Half Body Portrait" },
		{ "HalfBodyPortrait.Name", "ERenderSceneType::HalfBodyPortrait" },
		{ "HalfBodyPortraitTransparent.DisplayName", "Half Body Portrait Transparent" },
		{ "HalfBodyPortraitTransparent.Name", "ERenderSceneType::HalfBodyPortraitTransparent" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ReadyPlayerMe_ERenderSceneType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ReadyPlayerMe,
		nullptr,
		"ERenderSceneType",
		"ERenderSceneType",
		Z_Construct_UEnum_ReadyPlayerMe_ERenderSceneType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ReadyPlayerMe_ERenderSceneType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ReadyPlayerMe_ERenderSceneType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ReadyPlayerMe_ERenderSceneType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ReadyPlayerMe_ERenderSceneType()
	{
		if (!Z_Registration_Info_UEnum_ERenderSceneType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERenderSceneType.InnerSingleton, Z_Construct_UEnum_ReadyPlayerMe_ERenderSceneType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERenderSceneType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeTypes_h_Statics::EnumInfo[] = {
		{ EAvatarGender_StaticEnum, TEXT("EAvatarGender"), &Z_Registration_Info_UEnum_EAvatarGender, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1993969138U) },
		{ EAvatarBodyType_StaticEnum, TEXT("EAvatarBodyType"), &Z_Registration_Info_UEnum_EAvatarBodyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3166209864U) },
		{ EStandardMorphTargetGroup_StaticEnum, TEXT("EStandardMorphTargetGroup"), &Z_Registration_Info_UEnum_EStandardMorphTargetGroup, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1891371433U) },
		{ EAvatarMorphTarget_StaticEnum, TEXT("EAvatarMorphTarget"), &Z_Registration_Info_UEnum_EAvatarMorphTarget, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 57736107U) },
		{ ERenderSceneType_StaticEnum, TEXT("ERenderSceneType"), &Z_Registration_Info_UEnum_ERenderSceneType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2565145844U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeTypes_h_Statics::ScriptStructInfo[] = {
		{ FAvatarMetadata::StaticStruct, Z_Construct_UScriptStruct_FAvatarMetadata_Statics::NewStructOps, TEXT("AvatarMetadata"), &Z_Registration_Info_UScriptStruct_AvatarMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAvatarMetadata), 1360335926U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeTypes_h_1124401730(TEXT("/Script/ReadyPlayerMe"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS

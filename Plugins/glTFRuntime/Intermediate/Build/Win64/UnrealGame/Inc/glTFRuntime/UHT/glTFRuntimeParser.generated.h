// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "glTFRuntimeParser.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USkeletalMesh;
class UStaticMesh;
struct FglTFRuntimeMeshLOD;
#ifdef GLTFRUNTIME_glTFRuntimeParser_generated_h
#error "glTFRuntimeParser.generated.h already included, missing '#pragma once' in glTFRuntimeParser.h"
#endif
#define GLTFRUNTIME_glTFRuntimeParser_generated_h

#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_35_DELEGATE \
struct _Script_glTFRuntime_eventglTFRuntimeError_Parms \
{ \
	FString ErrorContext; \
	FString ErrorMessage; \
}; \
static inline void FglTFRuntimeError_DelegateWrapper(const FMulticastScriptDelegate& glTFRuntimeError, const FString& ErrorContext, const FString& ErrorMessage) \
{ \
	_Script_glTFRuntime_eventglTFRuntimeError_Parms Parms; \
	Parms.ErrorContext=ErrorContext; \
	Parms.ErrorMessage=ErrorMessage; \
	glTFRuntimeError.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_37_DELEGATE \
struct _Script_glTFRuntime_eventglTFRuntimeOnStaticMeshCreated_Parms \
{ \
	UStaticMesh* StaticMesh; \
}; \
static inline void FglTFRuntimeOnStaticMeshCreated_DelegateWrapper(const FMulticastScriptDelegate& glTFRuntimeOnStaticMeshCreated, UStaticMesh* StaticMesh) \
{ \
	_Script_glTFRuntime_eventglTFRuntimeOnStaticMeshCreated_Parms Parms; \
	Parms.StaticMesh=StaticMesh; \
	glTFRuntimeOnStaticMeshCreated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_38_DELEGATE \
struct _Script_glTFRuntime_eventglTFRuntimeOnSkeletalMeshCreated_Parms \
{ \
	USkeletalMesh* SkeletalMesh; \
}; \
static inline void FglTFRuntimeOnSkeletalMeshCreated_DelegateWrapper(const FMulticastScriptDelegate& glTFRuntimeOnSkeletalMeshCreated, USkeletalMesh* SkeletalMesh) \
{ \
	_Script_glTFRuntime_eventglTFRuntimeOnSkeletalMeshCreated_Parms Parms; \
	Parms.SkeletalMesh=SkeletalMesh; \
	glTFRuntimeOnSkeletalMeshCreated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_117_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FglTFRuntimeBasisMatrix_Statics; \
	GLTFRUNTIME_API static class UScriptStruct* StaticStruct();


template<> GLTFRUNTIME_API UScriptStruct* StaticStruct<struct FglTFRuntimeBasisMatrix>();

#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_148_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FglTFRuntimeConfig_Statics; \
	GLTFRUNTIME_API static class UScriptStruct* StaticStruct();


template<> GLTFRUNTIME_API UScriptStruct* StaticStruct<struct FglTFRuntimeConfig>();

#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_268_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FglTFRuntimeScene_Statics; \
	GLTFRUNTIME_API static class UScriptStruct* StaticStruct();


template<> GLTFRUNTIME_API UScriptStruct* StaticStruct<struct FglTFRuntimeScene>();

#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_289_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FglTFRuntimeNode_Statics; \
	GLTFRUNTIME_API static class UScriptStruct* StaticStruct();


template<> GLTFRUNTIME_API UScriptStruct* StaticStruct<struct FglTFRuntimeNode>();

#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_358_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FglTFRuntimeSocket_Statics; \
	GLTFRUNTIME_API static class UScriptStruct* StaticStruct();


template<> GLTFRUNTIME_API UScriptStruct* StaticStruct<struct FglTFRuntimeSocket>();

#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_370_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FglTFRuntimeBone_Statics; \
	GLTFRUNTIME_API static class UScriptStruct* StaticStruct();


template<> GLTFRUNTIME_API UScriptStruct* StaticStruct<struct FglTFRuntimeBone>();

#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_390_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FglTFRuntimeMorphTarget_Statics; \
	GLTFRUNTIME_API static class UScriptStruct* StaticStruct();


template<> GLTFRUNTIME_API UScriptStruct* StaticStruct<struct FglTFRuntimeMorphTarget>();

#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_405_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FglTFRuntimeImagesConfig_Statics; \
	GLTFRUNTIME_API static class UScriptStruct* StaticStruct();


template<> GLTFRUNTIME_API UScriptStruct* StaticStruct<struct FglTFRuntimeImagesConfig>();

#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_455_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FglTFRuntimeTextureSampler_Statics; \
	GLTFRUNTIME_API static class UScriptStruct* StaticStruct();


template<> GLTFRUNTIME_API UScriptStruct* StaticStruct<struct FglTFRuntimeTextureSampler>();

#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_485_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FglTFRuntimeMaterialsConfig_Statics; \
	GLTFRUNTIME_API static class UScriptStruct* StaticStruct();


template<> GLTFRUNTIME_API UScriptStruct* StaticStruct<struct FglTFRuntimeMaterialsConfig>();

#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_558_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FglTFRuntimeStaticMeshConfig_Statics; \
	GLTFRUNTIME_API static class UScriptStruct* StaticStruct();


template<> GLTFRUNTIME_API UScriptStruct* StaticStruct<struct FglTFRuntimeStaticMeshConfig>();

#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_665_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FglTFRuntimeProceduralMeshConfig_Statics; \
	GLTFRUNTIME_API static class UScriptStruct* StaticStruct();


template<> GLTFRUNTIME_API UScriptStruct* StaticStruct<struct FglTFRuntimeProceduralMeshConfig>();

#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_700_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FglTFRuntimeLightConfig_Statics; \
	GLTFRUNTIME_API static class UScriptStruct* StaticStruct();


template<> GLTFRUNTIME_API UScriptStruct* StaticStruct<struct FglTFRuntimeLightConfig>();

#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_711_DELEGATE \
struct _Script_glTFRuntime_eventglTFRuntimeBoneRemapper_Parms \
{ \
	int32 NodeIndex; \
	FString BoneName; \
	UObject* Context; \
	FString ReturnValue; \
}; \
static inline FString FglTFRuntimeBoneRemapper_DelegateWrapper(const FScriptDelegate& glTFRuntimeBoneRemapper, const int32 NodeIndex, const FString& BoneName, UObject* Context) \
{ \
	_Script_glTFRuntime_eventglTFRuntimeBoneRemapper_Parms Parms; \
	Parms.NodeIndex=NodeIndex; \
	Parms.BoneName=BoneName; \
	Parms.Context=Context; \
	glTFRuntimeBoneRemapper.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_716_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FglTFRuntimeSkeletonBoneRemapperHook_Statics; \
	GLTFRUNTIME_API static class UScriptStruct* StaticStruct();


template<> GLTFRUNTIME_API UScriptStruct* StaticStruct<struct FglTFRuntimeSkeletonBoneRemapperHook>();

#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_729_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FglTFRuntimeSkeletonConfig_Statics; \
	GLTFRUNTIME_API static class UScriptStruct* StaticStruct();


template<> GLTFRUNTIME_API UScriptStruct* StaticStruct<struct FglTFRuntimeSkeletonConfig>();

#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_818_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FglTFRuntimeCapsule_Statics; \
	GLTFRUNTIME_API static class UScriptStruct* StaticStruct();


template<> GLTFRUNTIME_API UScriptStruct* StaticStruct<struct FglTFRuntimeCapsule>();

#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_844_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FglTFRuntimeSphere_Statics; \
	GLTFRUNTIME_API static class UScriptStruct* StaticStruct();


template<> GLTFRUNTIME_API UScriptStruct* StaticStruct<struct FglTFRuntimeSphere>();

#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_862_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FglTFRuntimePhysicsConstraint_Statics; \
	GLTFRUNTIME_API static class UScriptStruct* StaticStruct();


template<> GLTFRUNTIME_API UScriptStruct* StaticStruct<struct FglTFRuntimePhysicsConstraint>();

#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_886_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FglTFRuntimePhysicsBody_Statics; \
	GLTFRUNTIME_API static class UScriptStruct* StaticStruct();


template<> GLTFRUNTIME_API UScriptStruct* StaticStruct<struct FglTFRuntimePhysicsBody>();

#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_937_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FglTFRuntimePhysicsAssetAutoBodyConfig_Statics; \
	GLTFRUNTIME_API static class UScriptStruct* StaticStruct();


template<> GLTFRUNTIME_API UScriptStruct* StaticStruct<struct FglTFRuntimePhysicsAssetAutoBodyConfig>();

#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_976_DELEGATE \
struct _Script_glTFRuntime_eventglTFRuntimeBoneBoundsFilter_Parms \
{ \
	FString BoneName; \
	FBox Box; \
	UObject* Context; \
	FBox ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	_Script_glTFRuntime_eventglTFRuntimeBoneBoundsFilter_Parms() \
		: ReturnValue(ForceInit) \
	{ \
	} \
}; \
static inline FBox FglTFRuntimeBoneBoundsFilter_DelegateWrapper(const FScriptDelegate& glTFRuntimeBoneBoundsFilter, const FString& BoneName, FBox const& Box, UObject* Context) \
{ \
	_Script_glTFRuntime_eventglTFRuntimeBoneBoundsFilter_Parms Parms; \
	Parms.BoneName=BoneName; \
	Parms.Box=Box; \
	Parms.Context=Context; \
	glTFRuntimeBoneBoundsFilter.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_981_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FglTFRuntimeBoneBoundsFilterHook_Statics; \
	GLTFRUNTIME_API static class UScriptStruct* StaticStruct();


template<> GLTFRUNTIME_API UScriptStruct* StaticStruct<struct FglTFRuntimeBoneBoundsFilterHook>();

#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_993_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FglTFRuntimeSkeletalMeshConfig_Statics; \
	GLTFRUNTIME_API static class UScriptStruct* StaticStruct();


template<> GLTFRUNTIME_API UScriptStruct* StaticStruct<struct FglTFRuntimeSkeletalMeshConfig>();

#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_1122_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FglTFRuntimePathItem_Statics; \
	GLTFRUNTIME_API static class UScriptStruct* StaticStruct();


template<> GLTFRUNTIME_API UScriptStruct* StaticStruct<struct FglTFRuntimePathItem>();

#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_1136_DELEGATE \
struct _Script_glTFRuntime_eventglTFRuntimeAnimationCurveRemapper_Parms \
{ \
	int32 NodeIndex; \
	FString CurveName; \
	FString Path; \
	UObject* Context; \
	FString ReturnValue; \
}; \
static inline FString FglTFRuntimeAnimationCurveRemapper_DelegateWrapper(const FScriptDelegate& glTFRuntimeAnimationCurveRemapper, const int32 NodeIndex, const FString& CurveName, const FString& Path, UObject* Context) \
{ \
	_Script_glTFRuntime_eventglTFRuntimeAnimationCurveRemapper_Parms Parms; \
	Parms.NodeIndex=NodeIndex; \
	Parms.CurveName=CurveName; \
	Parms.Path=Path; \
	Parms.Context=Context; \
	glTFRuntimeAnimationCurveRemapper.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_1137_DELEGATE \
struct _Script_glTFRuntime_eventglTFRuntimeAnimationFrameTranslationRemapper_Parms \
{ \
	FString CurveName; \
	int32 FrameNumber; \
	FVector Translation; \
	UObject* Context; \
	FVector ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	_Script_glTFRuntime_eventglTFRuntimeAnimationFrameTranslationRemapper_Parms() \
		: ReturnValue(ForceInit) \
	{ \
	} \
}; \
static inline FVector FglTFRuntimeAnimationFrameTranslationRemapper_DelegateWrapper(const FScriptDelegate& glTFRuntimeAnimationFrameTranslationRemapper, const FString& CurveName, const int32 FrameNumber, FVector Translation, UObject* Context) \
{ \
	_Script_glTFRuntime_eventglTFRuntimeAnimationFrameTranslationRemapper_Parms Parms; \
	Parms.CurveName=CurveName; \
	Parms.FrameNumber=FrameNumber; \
	Parms.Translation=Translation; \
	Parms.Context=Context; \
	glTFRuntimeAnimationFrameTranslationRemapper.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_1138_DELEGATE \
struct _Script_glTFRuntime_eventglTFRuntimeAnimationFrameRotationRemapper_Parms \
{ \
	FString CurveName; \
	int32 FrameNumber; \
	FRotator Rotation; \
	UObject* Context; \
	FRotator ReturnValue; \
 \
	/** Constructor, initializes return property only **/ \
	_Script_glTFRuntime_eventglTFRuntimeAnimationFrameRotationRemapper_Parms() \
		: ReturnValue(ForceInit) \
	{ \
	} \
}; \
static inline FRotator FglTFRuntimeAnimationFrameRotationRemapper_DelegateWrapper(const FScriptDelegate& glTFRuntimeAnimationFrameRotationRemapper, const FString& CurveName, const int32 FrameNumber, FRotator Rotation, UObject* Context) \
{ \
	_Script_glTFRuntime_eventglTFRuntimeAnimationFrameRotationRemapper_Parms Parms; \
	Parms.CurveName=CurveName; \
	Parms.FrameNumber=FrameNumber; \
	Parms.Rotation=Rotation; \
	Parms.Context=Context; \
	glTFRuntimeAnimationFrameRotationRemapper.ProcessDelegate<UObject>(&Parms); \
	return Parms.ReturnValue; \
}


#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_1143_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FglTFRuntimeSkeletalAnimationCurveRemapperHook_Statics; \
	GLTFRUNTIME_API static class UScriptStruct* StaticStruct();


template<> GLTFRUNTIME_API UScriptStruct* StaticStruct<struct FglTFRuntimeSkeletalAnimationCurveRemapperHook>();

#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_1155_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FglTFRuntimeSkeletalAnimationFrameTranslationRemapperHook_Statics; \
	GLTFRUNTIME_API static class UScriptStruct* StaticStruct();


template<> GLTFRUNTIME_API UScriptStruct* StaticStruct<struct FglTFRuntimeSkeletalAnimationFrameTranslationRemapperHook>();

#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_1167_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FglTFRuntimeSkeletalAnimationFrameRotationRemapperHook_Statics; \
	GLTFRUNTIME_API static class UScriptStruct* StaticStruct();


template<> GLTFRUNTIME_API UScriptStruct* StaticStruct<struct FglTFRuntimeSkeletalAnimationFrameRotationRemapperHook>();

#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_1179_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FglTFRuntimeSkeletalAnimationConfig_Statics; \
	GLTFRUNTIME_API static class UScriptStruct* StaticStruct();


template<> GLTFRUNTIME_API UScriptStruct* StaticStruct<struct FglTFRuntimeSkeletalAnimationConfig>();

#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_1519_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FglTFRuntimeMeshLOD_Statics; \
	GLTFRUNTIME_API static class UScriptStruct* StaticStruct();


template<> GLTFRUNTIME_API UScriptStruct* StaticStruct<struct FglTFRuntimeMeshLOD>();

#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_1673_SPARSE_DATA
#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_1673_RPC_WRAPPERS
#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_1673_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_1673_ACCESSORS
#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_1673_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUglTFRuntimeTextureMipDataProviderFactory(); \
	friend struct Z_Construct_UClass_UglTFRuntimeTextureMipDataProviderFactory_Statics; \
public: \
	DECLARE_CLASS(UglTFRuntimeTextureMipDataProviderFactory, UTextureMipDataProviderFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/glTFRuntime"), NO_API) \
	DECLARE_SERIALIZER(UglTFRuntimeTextureMipDataProviderFactory)


#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_1673_INCLASS \
private: \
	static void StaticRegisterNativesUglTFRuntimeTextureMipDataProviderFactory(); \
	friend struct Z_Construct_UClass_UglTFRuntimeTextureMipDataProviderFactory_Statics; \
public: \
	DECLARE_CLASS(UglTFRuntimeTextureMipDataProviderFactory, UTextureMipDataProviderFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/glTFRuntime"), NO_API) \
	DECLARE_SERIALIZER(UglTFRuntimeTextureMipDataProviderFactory)


#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_1673_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UglTFRuntimeTextureMipDataProviderFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UglTFRuntimeTextureMipDataProviderFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UglTFRuntimeTextureMipDataProviderFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UglTFRuntimeTextureMipDataProviderFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UglTFRuntimeTextureMipDataProviderFactory(UglTFRuntimeTextureMipDataProviderFactory&&); \
	NO_API UglTFRuntimeTextureMipDataProviderFactory(const UglTFRuntimeTextureMipDataProviderFactory&); \
public: \
	NO_API virtual ~UglTFRuntimeTextureMipDataProviderFactory();


#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_1673_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UglTFRuntimeTextureMipDataProviderFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UglTFRuntimeTextureMipDataProviderFactory(UglTFRuntimeTextureMipDataProviderFactory&&); \
	NO_API UglTFRuntimeTextureMipDataProviderFactory(const UglTFRuntimeTextureMipDataProviderFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UglTFRuntimeTextureMipDataProviderFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UglTFRuntimeTextureMipDataProviderFactory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UglTFRuntimeTextureMipDataProviderFactory) \
	NO_API virtual ~UglTFRuntimeTextureMipDataProviderFactory();


#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_1670_PROLOG
#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_1673_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_1673_SPARSE_DATA \
	FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_1673_RPC_WRAPPERS \
	FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_1673_ACCESSORS \
	FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_1673_INCLASS \
	FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_1673_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_1673_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_1673_SPARSE_DATA \
	FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_1673_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_1673_ACCESSORS \
	FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_1673_INCLASS_NO_PURE_DECLS \
	FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_1673_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GLTFRUNTIME_API UClass* StaticClass<class UglTFRuntimeTextureMipDataProviderFactory>();

#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_1856_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FglTFRuntimeAudioEmitter_Statics; \
	GLTFRUNTIME_API static class UScriptStruct* StaticStruct();


template<> GLTFRUNTIME_API UScriptStruct* StaticStruct<struct FglTFRuntimeAudioEmitter>();

#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_1885_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FglTFRuntimeAudioConfig_Statics; \
	GLTFRUNTIME_API static class UScriptStruct* StaticStruct();


template<> GLTFRUNTIME_API UScriptStruct* StaticStruct<struct FglTFRuntimeAudioConfig>();

#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_1921_DELEGATE \
struct _Script_glTFRuntime_eventglTFRuntimeStaticMeshAsync_Parms \
{ \
	UStaticMesh* StaticMesh; \
}; \
static inline void FglTFRuntimeStaticMeshAsync_DelegateWrapper(const FScriptDelegate& glTFRuntimeStaticMeshAsync, UStaticMesh* StaticMesh) \
{ \
	_Script_glTFRuntime_eventglTFRuntimeStaticMeshAsync_Parms Parms; \
	Parms.StaticMesh=StaticMesh; \
	glTFRuntimeStaticMeshAsync.ProcessDelegate<UObject>(&Parms); \
}


#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_1922_DELEGATE \
struct _Script_glTFRuntime_eventglTFRuntimeSkeletalMeshAsync_Parms \
{ \
	USkeletalMesh* SkeletalMesh; \
}; \
static inline void FglTFRuntimeSkeletalMeshAsync_DelegateWrapper(const FScriptDelegate& glTFRuntimeSkeletalMeshAsync, USkeletalMesh* SkeletalMesh) \
{ \
	_Script_glTFRuntime_eventglTFRuntimeSkeletalMeshAsync_Parms Parms; \
	Parms.SkeletalMesh=SkeletalMesh; \
	glTFRuntimeSkeletalMeshAsync.ProcessDelegate<UObject>(&Parms); \
}


#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h_1923_DELEGATE \
struct _Script_glTFRuntime_eventglTFRuntimeMeshLODAsync_Parms \
{ \
	bool bValid; \
	FglTFRuntimeMeshLOD MeshLOD; \
}; \
static inline void FglTFRuntimeMeshLODAsync_DelegateWrapper(const FScriptDelegate& glTFRuntimeMeshLODAsync, bool bValid, FglTFRuntimeMeshLOD const& MeshLOD) \
{ \
	_Script_glTFRuntime_eventglTFRuntimeMeshLODAsync_Parms Parms; \
	Parms.bValid=bValid ? true : false; \
	Parms.MeshLOD=MeshLOD; \
	glTFRuntimeMeshLODAsync.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeParser_h


#define FOREACH_ENUM_EGLTFRUNTIMETRANSFORMBASETYPE(op) \
	op(EglTFRuntimeTransformBaseType::Default) \
	op(EglTFRuntimeTransformBaseType::Matrix) \
	op(EglTFRuntimeTransformBaseType::Transform) \
	op(EglTFRuntimeTransformBaseType::YForward) \
	op(EglTFRuntimeTransformBaseType::BasisMatrix) \
	op(EglTFRuntimeTransformBaseType::Identity) \
	op(EglTFRuntimeTransformBaseType::LeftHanded) \
	op(EglTFRuntimeTransformBaseType::IdentityXInverted) \
	op(EglTFRuntimeTransformBaseType::ForwardInverted) 

enum class EglTFRuntimeTransformBaseType : uint8;
template<> struct TIsUEnumClass<EglTFRuntimeTransformBaseType> { enum { Value = true }; };
template<> GLTFRUNTIME_API UEnum* StaticEnum<EglTFRuntimeTransformBaseType>();

#define FOREACH_ENUM_EGLTFRUNTIMENORMALSGENERATIONSTRATEGY(op) \
	op(EglTFRuntimeNormalsGenerationStrategy::IfMissing) \
	op(EglTFRuntimeNormalsGenerationStrategy::Never) \
	op(EglTFRuntimeNormalsGenerationStrategy::Always) 

enum class EglTFRuntimeNormalsGenerationStrategy : uint8;
template<> struct TIsUEnumClass<EglTFRuntimeNormalsGenerationStrategy> { enum { Value = true }; };
template<> GLTFRUNTIME_API UEnum* StaticEnum<EglTFRuntimeNormalsGenerationStrategy>();

#define FOREACH_ENUM_EGLTFRUNTIMETANGENTSGENERATIONSTRATEGY(op) \
	op(EglTFRuntimeTangentsGenerationStrategy::IfMissing) \
	op(EglTFRuntimeTangentsGenerationStrategy::Never) \
	op(EglTFRuntimeTangentsGenerationStrategy::Always) 

enum class EglTFRuntimeTangentsGenerationStrategy : uint8;
template<> struct TIsUEnumClass<EglTFRuntimeTangentsGenerationStrategy> { enum { Value = true }; };
template<> GLTFRUNTIME_API UEnum* StaticEnum<EglTFRuntimeTangentsGenerationStrategy>();

#define FOREACH_ENUM_EGLTFRUNTIMEMORPHTARGETSDUPLICATESTRATEGY(op) \
	op(EglTFRuntimeMorphTargetsDuplicateStrategy::Ignore) \
	op(EglTFRuntimeMorphTargetsDuplicateStrategy::Merge) \
	op(EglTFRuntimeMorphTargetsDuplicateStrategy::AppendMorphIndex) \
	op(EglTFRuntimeMorphTargetsDuplicateStrategy::AppendDuplicateCounter) 

enum class EglTFRuntimeMorphTargetsDuplicateStrategy : uint8;
template<> struct TIsUEnumClass<EglTFRuntimeMorphTargetsDuplicateStrategy> { enum { Value = true }; };
template<> GLTFRUNTIME_API UEnum* StaticEnum<EglTFRuntimeMorphTargetsDuplicateStrategy>();

#define FOREACH_ENUM_EGLTFRUNTIMEPHYSICSASSETAUTOBODYCOLLISIONTYPE(op) \
	op(EglTFRuntimePhysicsAssetAutoBodyCollisionType::Capsule) \
	op(EglTFRuntimePhysicsAssetAutoBodyCollisionType::Sphere) \
	op(EglTFRuntimePhysicsAssetAutoBodyCollisionType::Box) 

enum class EglTFRuntimePhysicsAssetAutoBodyCollisionType : uint8;
template<> struct TIsUEnumClass<EglTFRuntimePhysicsAssetAutoBodyCollisionType> { enum { Value = true }; };
template<> GLTFRUNTIME_API UEnum* StaticEnum<EglTFRuntimePhysicsAssetAutoBodyCollisionType>();

#define FOREACH_ENUM_EGLTFRUNTIMERECURSIVEMODE(op) \
	op(EglTFRuntimeRecursiveMode::Ignore) \
	op(EglTFRuntimeRecursiveMode::Node) \
	op(EglTFRuntimeRecursiveMode::Tree) 

enum class EglTFRuntimeRecursiveMode : uint8;
template<> struct TIsUEnumClass<EglTFRuntimeRecursiveMode> { enum { Value = true }; };
template<> GLTFRUNTIME_API UEnum* StaticEnum<EglTFRuntimeRecursiveMode>();

#define FOREACH_ENUM_EGLTFRUNTIMEMATERIALTYPE(op) \
	op(EglTFRuntimeMaterialType::Opaque) \
	op(EglTFRuntimeMaterialType::Translucent) \
	op(EglTFRuntimeMaterialType::TwoSided) \
	op(EglTFRuntimeMaterialType::TwoSidedTranslucent) \
	op(EglTFRuntimeMaterialType::Masked) \
	op(EglTFRuntimeMaterialType::TwoSidedMasked) 

enum class EglTFRuntimeMaterialType : uint8;
template<> struct TIsUEnumClass<EglTFRuntimeMaterialType> { enum { Value = true }; };
template<> GLTFRUNTIME_API UEnum* StaticEnum<EglTFRuntimeMaterialType>();

#define FOREACH_ENUM_EGLTFRUNTIMECACHEMODE(op) \
	op(EglTFRuntimeCacheMode::ReadWrite) \
	op(EglTFRuntimeCacheMode::None) \
	op(EglTFRuntimeCacheMode::Read) \
	op(EglTFRuntimeCacheMode::Write) 

enum class EglTFRuntimeCacheMode : uint8;
template<> struct TIsUEnumClass<EglTFRuntimeCacheMode> { enum { Value = true }; };
template<> GLTFRUNTIME_API UEnum* StaticEnum<EglTFRuntimeCacheMode>();

#define FOREACH_ENUM_EGLTFRUNTIMEPIVOTPOSITION(op) \
	op(EglTFRuntimePivotPosition::Asset) \
	op(EglTFRuntimePivotPosition::Center) \
	op(EglTFRuntimePivotPosition::Top) \
	op(EglTFRuntimePivotPosition::Bottom) 

enum class EglTFRuntimePivotPosition : uint8;
template<> struct TIsUEnumClass<EglTFRuntimePivotPosition> { enum { Value = true }; };
template<> GLTFRUNTIME_API UEnum* StaticEnum<EglTFRuntimePivotPosition>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

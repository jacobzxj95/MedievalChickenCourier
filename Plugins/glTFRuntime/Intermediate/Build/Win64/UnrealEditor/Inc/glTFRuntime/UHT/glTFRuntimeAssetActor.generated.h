// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "glTFRuntimeAssetActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshComponent;
class UStaticMeshComponent;
struct FglTFRuntimeNode;
#ifdef GLTFRUNTIME_glTFRuntimeAssetActor_generated_h
#error "glTFRuntimeAssetActor.generated.h already included, missing '#pragma once' in glTFRuntimeAssetActor.h"
#endif
#define GLTFRUNTIME_glTFRuntimeAssetActor_generated_h

#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeAssetActor_h_13_SPARSE_DATA
#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeAssetActor_h_13_RPC_WRAPPERS \
	virtual void ReceiveOnSkeletalMeshComponentCreated_Implementation(USkeletalMeshComponent* SkeletalMeshComponent, FglTFRuntimeNode const& Node); \
	virtual void ReceiveOnStaticMeshComponentCreated_Implementation(UStaticMeshComponent* StaticMeshComponent, FglTFRuntimeNode const& Node); \
 \
	DECLARE_FUNCTION(execSetCurveAnimationByName); \
	DECLARE_FUNCTION(execReceiveOnSkeletalMeshComponentCreated); \
	DECLARE_FUNCTION(execReceiveOnStaticMeshComponentCreated);


#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeAssetActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ReceiveOnSkeletalMeshComponentCreated_Implementation(USkeletalMeshComponent* SkeletalMeshComponent, FglTFRuntimeNode const& Node); \
	virtual void ReceiveOnStaticMeshComponentCreated_Implementation(UStaticMeshComponent* StaticMeshComponent, FglTFRuntimeNode const& Node); \
 \
	DECLARE_FUNCTION(execSetCurveAnimationByName); \
	DECLARE_FUNCTION(execReceiveOnSkeletalMeshComponentCreated); \
	DECLARE_FUNCTION(execReceiveOnStaticMeshComponentCreated);


#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeAssetActor_h_13_ACCESSORS
#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeAssetActor_h_13_CALLBACK_WRAPPERS
#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeAssetActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAglTFRuntimeAssetActor(); \
	friend struct Z_Construct_UClass_AglTFRuntimeAssetActor_Statics; \
public: \
	DECLARE_CLASS(AglTFRuntimeAssetActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/glTFRuntime"), NO_API) \
	DECLARE_SERIALIZER(AglTFRuntimeAssetActor)


#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeAssetActor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAglTFRuntimeAssetActor(); \
	friend struct Z_Construct_UClass_AglTFRuntimeAssetActor_Statics; \
public: \
	DECLARE_CLASS(AglTFRuntimeAssetActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/glTFRuntime"), NO_API) \
	DECLARE_SERIALIZER(AglTFRuntimeAssetActor)


#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeAssetActor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AglTFRuntimeAssetActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AglTFRuntimeAssetActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AglTFRuntimeAssetActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AglTFRuntimeAssetActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AglTFRuntimeAssetActor(AglTFRuntimeAssetActor&&); \
	NO_API AglTFRuntimeAssetActor(const AglTFRuntimeAssetActor&); \
public: \
	NO_API virtual ~AglTFRuntimeAssetActor();


#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeAssetActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AglTFRuntimeAssetActor(AglTFRuntimeAssetActor&&); \
	NO_API AglTFRuntimeAssetActor(const AglTFRuntimeAssetActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AglTFRuntimeAssetActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AglTFRuntimeAssetActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AglTFRuntimeAssetActor) \
	NO_API virtual ~AglTFRuntimeAssetActor();


#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeAssetActor_h_10_PROLOG
#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeAssetActor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeAssetActor_h_13_SPARSE_DATA \
	FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeAssetActor_h_13_RPC_WRAPPERS \
	FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeAssetActor_h_13_ACCESSORS \
	FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeAssetActor_h_13_CALLBACK_WRAPPERS \
	FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeAssetActor_h_13_INCLASS \
	FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeAssetActor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeAssetActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeAssetActor_h_13_SPARSE_DATA \
	FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeAssetActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeAssetActor_h_13_ACCESSORS \
	FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeAssetActor_h_13_CALLBACK_WRAPPERS \
	FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeAssetActor_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeAssetActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GLTFRUNTIME_API UClass* StaticClass<class AglTFRuntimeAssetActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_krist_GitHub_MedievalChickenCourier_Plugins_glTFRuntime_Source_glTFRuntime_Public_glTFRuntimeAssetActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ReadyPlayerMeMemoryCache.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UReadyPlayerMeAvatarConfig;
class USkeletalMesh;
struct FAvatarMemoryCacheData;
struct FAvatarMetadata;
struct FAvatarPreloadData;
#ifdef READYPLAYERME_ReadyPlayerMeMemoryCache_generated_h
#error "ReadyPlayerMeMemoryCache.generated.h already included, missing '#pragma once' in ReadyPlayerMeMemoryCache.h"
#endif
#define READYPLAYERME_ReadyPlayerMeMemoryCache_generated_h

#define FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAvatarPreloadData_Statics; \
	READYPLAYERME_API static class UScriptStruct* StaticStruct();


template<> READYPLAYERME_API UScriptStruct* StaticStruct<struct FAvatarPreloadData>();

#define FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAvatarMemoryCacheData_Statics; \
	READYPLAYERME_API static class UScriptStruct* StaticStruct();


template<> READYPLAYERME_API UScriptStruct* StaticStruct<struct FAvatarMemoryCacheData>();

#define FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_53_SPARSE_DATA
#define FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_53_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAvatarLoadFailed); \
	DECLARE_FUNCTION(execOnAvatarDownloaded); \
	DECLARE_FUNCTION(execClearAvatars); \
	DECLARE_FUNCTION(execRemoveAvatar); \
	DECLARE_FUNCTION(execAddAvatar); \
	DECLARE_FUNCTION(execGetAvatarCacheData); \
	DECLARE_FUNCTION(execPreload);


#define FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAvatarLoadFailed); \
	DECLARE_FUNCTION(execOnAvatarDownloaded); \
	DECLARE_FUNCTION(execClearAvatars); \
	DECLARE_FUNCTION(execRemoveAvatar); \
	DECLARE_FUNCTION(execAddAvatar); \
	DECLARE_FUNCTION(execGetAvatarCacheData); \
	DECLARE_FUNCTION(execPreload);


#define FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_53_ACCESSORS
#define FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReadyPlayerMeMemoryCache(); \
	friend struct Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics; \
public: \
	DECLARE_CLASS(UReadyPlayerMeMemoryCache, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ReadyPlayerMe"), NO_API) \
	DECLARE_SERIALIZER(UReadyPlayerMeMemoryCache)


#define FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_53_INCLASS \
private: \
	static void StaticRegisterNativesUReadyPlayerMeMemoryCache(); \
	friend struct Z_Construct_UClass_UReadyPlayerMeMemoryCache_Statics; \
public: \
	DECLARE_CLASS(UReadyPlayerMeMemoryCache, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ReadyPlayerMe"), NO_API) \
	DECLARE_SERIALIZER(UReadyPlayerMeMemoryCache)


#define FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_53_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReadyPlayerMeMemoryCache(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReadyPlayerMeMemoryCache) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReadyPlayerMeMemoryCache); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReadyPlayerMeMemoryCache); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReadyPlayerMeMemoryCache(UReadyPlayerMeMemoryCache&&); \
	NO_API UReadyPlayerMeMemoryCache(const UReadyPlayerMeMemoryCache&); \
public: \
	NO_API virtual ~UReadyPlayerMeMemoryCache();


#define FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_53_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReadyPlayerMeMemoryCache(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReadyPlayerMeMemoryCache(UReadyPlayerMeMemoryCache&&); \
	NO_API UReadyPlayerMeMemoryCache(const UReadyPlayerMeMemoryCache&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReadyPlayerMeMemoryCache); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReadyPlayerMeMemoryCache); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReadyPlayerMeMemoryCache) \
	NO_API virtual ~UReadyPlayerMeMemoryCache();


#define FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_50_PROLOG
#define FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_53_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_53_SPARSE_DATA \
	FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_53_RPC_WRAPPERS \
	FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_53_ACCESSORS \
	FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_53_INCLASS \
	FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_53_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_53_SPARSE_DATA \
	FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_53_ACCESSORS \
	FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_53_INCLASS_NO_PURE_DECLS \
	FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> READYPLAYERME_API UClass* StaticClass<class UReadyPlayerMeMemoryCache>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeMemoryCache_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

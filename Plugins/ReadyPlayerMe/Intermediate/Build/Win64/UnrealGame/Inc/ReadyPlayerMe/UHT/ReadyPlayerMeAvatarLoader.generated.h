// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ReadyPlayerMeAvatarLoader.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UReadyPlayerMeAvatarConfig;
class USkeletalMesh;
class USkeleton;
struct FglTFRuntimeSkeletalMeshConfig;
#ifdef READYPLAYERME_ReadyPlayerMeAvatarLoader_generated_h
#error "ReadyPlayerMeAvatarLoader.generated.h already included, missing '#pragma once' in ReadyPlayerMeAvatarLoader.h"
#endif
#define READYPLAYERME_ReadyPlayerMeAvatarLoader_generated_h

#define FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarLoader_h_18_SPARSE_DATA
#define FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarLoader_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnGlbLoaded); \
	DECLARE_FUNCTION(execOnModelDownloaded); \
	DECLARE_FUNCTION(execOnMetadataDownloaded); \
	DECLARE_FUNCTION(execCancelAvatarLoad); \
	DECLARE_FUNCTION(execLoadAvatar);


#define FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarLoader_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnGlbLoaded); \
	DECLARE_FUNCTION(execOnModelDownloaded); \
	DECLARE_FUNCTION(execOnMetadataDownloaded); \
	DECLARE_FUNCTION(execCancelAvatarLoad); \
	DECLARE_FUNCTION(execLoadAvatar);


#define FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarLoader_h_18_ACCESSORS
#define FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarLoader_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUReadyPlayerMeAvatarLoader(); \
	friend struct Z_Construct_UClass_UReadyPlayerMeAvatarLoader_Statics; \
public: \
	DECLARE_CLASS(UReadyPlayerMeAvatarLoader, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ReadyPlayerMe"), NO_API) \
	DECLARE_SERIALIZER(UReadyPlayerMeAvatarLoader)


#define FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarLoader_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUReadyPlayerMeAvatarLoader(); \
	friend struct Z_Construct_UClass_UReadyPlayerMeAvatarLoader_Statics; \
public: \
	DECLARE_CLASS(UReadyPlayerMeAvatarLoader, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ReadyPlayerMe"), NO_API) \
	DECLARE_SERIALIZER(UReadyPlayerMeAvatarLoader)


#define FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarLoader_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UReadyPlayerMeAvatarLoader(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UReadyPlayerMeAvatarLoader) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReadyPlayerMeAvatarLoader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReadyPlayerMeAvatarLoader); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReadyPlayerMeAvatarLoader(UReadyPlayerMeAvatarLoader&&); \
	NO_API UReadyPlayerMeAvatarLoader(const UReadyPlayerMeAvatarLoader&); \
public: \
	NO_API virtual ~UReadyPlayerMeAvatarLoader();


#define FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarLoader_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UReadyPlayerMeAvatarLoader(UReadyPlayerMeAvatarLoader&&); \
	NO_API UReadyPlayerMeAvatarLoader(const UReadyPlayerMeAvatarLoader&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UReadyPlayerMeAvatarLoader); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UReadyPlayerMeAvatarLoader); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UReadyPlayerMeAvatarLoader) \
	NO_API virtual ~UReadyPlayerMeAvatarLoader();


#define FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarLoader_h_15_PROLOG
#define FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarLoader_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarLoader_h_18_SPARSE_DATA \
	FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarLoader_h_18_RPC_WRAPPERS \
	FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarLoader_h_18_ACCESSORS \
	FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarLoader_h_18_INCLASS \
	FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarLoader_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarLoader_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarLoader_h_18_SPARSE_DATA \
	FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarLoader_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarLoader_h_18_ACCESSORS \
	FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarLoader_h_18_INCLASS_NO_PURE_DECLS \
	FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarLoader_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> READYPLAYERME_API UClass* StaticClass<class UReadyPlayerMeAvatarLoader>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeAvatarLoader_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

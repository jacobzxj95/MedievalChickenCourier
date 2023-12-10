// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ReadyPlayerMeEditorTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef READYPLAYERMEEDITOR_ReadyPlayerMeEditorTypes_generated_h
#error "ReadyPlayerMeEditorTypes.generated.h already included, missing '#pragma once' in ReadyPlayerMeEditorTypes.h"
#endif
#define READYPLAYERMEEDITOR_ReadyPlayerMeEditorTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CapstoneDesigner_GDNBS_Project_08_S0_TeamMetallic_MedievalChickenCourier_Plugins_ReadyPlayerMe_Source_ReadyPlayerMeEditor_Public_ReadyPlayerMeEditorTypes_h


#define FOREACH_ENUM_ERPMANALYTICSEVENTTYPE(op) \
	op(ERpmAnalyticsEventType::OpenProject) \
	op(ERpmAnalyticsEventType::CloseProject) \
	op(ERpmAnalyticsEventType::EnableCaching) \
	op(ERpmAnalyticsEventType::SetUserProperties) \
	op(ERpmAnalyticsEventType::AllowLogging) \
	op(ERpmAnalyticsEventType::OpenIntegrationGuide) \
	op(ERpmAnalyticsEventType::LoadQuickStartScene) \
	op(ERpmAnalyticsEventType::OpenAvatarDocumentation) \
	op(ERpmAnalyticsEventType::OpenSamplesDocumentation) \
	op(ERpmAnalyticsEventType::OpenAnimationDocumentation) \
	op(ERpmAnalyticsEventType::OpenAvatarCreatorDocumentation) \
	op(ERpmAnalyticsEventType::ViewPrivacyPolicy) 

enum class ERpmAnalyticsEventType : uint8;
template<> struct TIsUEnumClass<ERpmAnalyticsEventType> { enum { Value = true }; };
template<> READYPLAYERMEEDITOR_API UEnum* StaticEnum<ERpmAnalyticsEventType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS

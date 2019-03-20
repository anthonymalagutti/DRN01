// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FOscDataElemStruct;
#ifdef OSC_OscReceiverActor_generated_h
#error "OscReceiverActor.generated.h already included, missing '#pragma once' in OscReceiverActor.h"
#endif
#define OSC_OscReceiverActor_generated_h

#define DRN01_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_12_RPC_WRAPPERS
#define DRN01_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define DRN01_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_12_EVENT_PARMS \
	struct OscReceiverActor_eventOnOscReceived_Parms \
	{ \
		FName Address; \
		TArray<FOscDataElemStruct> Data; \
		FString SenderIp; \
	};


#define DRN01_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_12_CALLBACK_WRAPPERS
#define DRN01_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOscReceiverActor(); \
	friend OSC_API class UClass* Z_Construct_UClass_AOscReceiverActor(); \
public: \
	DECLARE_CLASS(AOscReceiverActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/OSC"), NO_API) \
	DECLARE_SERIALIZER(AOscReceiverActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define DRN01_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAOscReceiverActor(); \
	friend OSC_API class UClass* Z_Construct_UClass_AOscReceiverActor(); \
public: \
	DECLARE_CLASS(AOscReceiverActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/OSC"), NO_API) \
	DECLARE_SERIALIZER(AOscReceiverActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define DRN01_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOscReceiverActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOscReceiverActor) \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOscReceiverActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOscReceiverActor(AOscReceiverActor&&); \
	NO_API AOscReceiverActor(const AOscReceiverActor&); \
public:


#define DRN01_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOscReceiverActor(AOscReceiverActor&&); \
	NO_API AOscReceiverActor(const AOscReceiverActor&); \
public: \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOscReceiverActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AOscReceiverActor)


#define DRN01_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_12_PRIVATE_PROPERTY_OFFSET
#define DRN01_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_9_PROLOG \
	DRN01_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_12_EVENT_PARMS


#define DRN01_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DRN01_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_12_PRIVATE_PROPERTY_OFFSET \
	DRN01_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_12_RPC_WRAPPERS \
	DRN01_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_12_CALLBACK_WRAPPERS \
	DRN01_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_12_INCLASS \
	DRN01_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DRN01_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DRN01_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_12_PRIVATE_PROPERTY_OFFSET \
	DRN01_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DRN01_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_12_CALLBACK_WRAPPERS \
	DRN01_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_12_INCLASS_NO_PURE_DECLS \
	DRN01_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DRN01_Plugins_OSC_Source_OSC_Public_Receive_OscReceiverActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

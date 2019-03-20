// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FOscMessageStruct;
struct FOscDataElemStruct;
#ifdef OSC_OscFunctionLibrary_generated_h
#error "OscFunctionLibrary.generated.h already included, missing '#pragma once' in OscFunctionLibrary.h"
#endif
#define OSC_OscFunctionLibrary_generated_h

#define DRN01_Plugins_OSC_Source_OSC_Public_Common_OscFunctionLibrary_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddSendOscTarget) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_IpPort); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UOscFunctionLibrary::AddSendOscTarget(Z_Param_IpPort); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendOscBundle) \
	{ \
		P_GET_TARRAY_REF(FOscMessageStruct,Z_Param_Out_Messages); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TargetIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOscFunctionLibrary::SendOscBundle(Z_Param_Out_Messages,Z_Param_TargetIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendOsc) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Address); \
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_Data); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TargetIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOscFunctionLibrary::SendOsc(Z_Param_Address,Z_Param_Out_Data,Z_Param_TargetIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFromBlob) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FOscDataElemStruct*)Z_Param__Result=UOscFunctionLibrary::FromBlob(Z_Param_Out_input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFromString) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FOscDataElemStruct*)Z_Param__Result=UOscFunctionLibrary::FromString(Z_Param_input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFromInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FOscDataElemStruct*)Z_Param__Result=UOscFunctionLibrary::FromInt(Z_Param_input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFromFloat) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FOscDataElemStruct*)Z_Param__Result=UOscFunctionLibrary::FromFloat(Z_Param_input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFromBool) \
	{ \
		P_GET_UBOOL(Z_Param_input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FOscDataElemStruct*)Z_Param__Result=UOscFunctionLibrary::FromBool(Z_Param_input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAsBlob) \
	{ \
		P_GET_STRUCT_REF(FOscDataElemStruct,Z_Param_Out_input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<uint8>*)Z_Param__Result=UOscFunctionLibrary::AsBlob(Z_Param_Out_input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAsString) \
	{ \
		P_GET_STRUCT_REF(FOscDataElemStruct,Z_Param_Out_input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UOscFunctionLibrary::AsString(Z_Param_Out_input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAsInt) \
	{ \
		P_GET_STRUCT_REF(FOscDataElemStruct,Z_Param_Out_input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UOscFunctionLibrary::AsInt(Z_Param_Out_input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAsFloat) \
	{ \
		P_GET_STRUCT_REF(FOscDataElemStruct,Z_Param_Out_input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UOscFunctionLibrary::AsFloat(Z_Param_Out_input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAsBool) \
	{ \
		P_GET_STRUCT_REF(FOscDataElemStruct,Z_Param_Out_input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UOscFunctionLibrary::AsBool(Z_Param_Out_input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPushBlob) \
	{ \
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_input); \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Value); \
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOscFunctionLibrary::PushBlob(Z_Param_Out_input,Z_Param_Out_Value,Z_Param_Out_output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPushString) \
	{ \
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_input); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Value); \
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOscFunctionLibrary::PushString(Z_Param_Out_input,Z_Param_Value,Z_Param_Out_output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPushInt) \
	{ \
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_input); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOscFunctionLibrary::PushInt(Z_Param_Out_input,Z_Param_Value,Z_Param_Out_output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPushFloat) \
	{ \
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_input); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOscFunctionLibrary::PushFloat(Z_Param_Out_input,Z_Param_Value,Z_Param_Out_output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPushBool) \
	{ \
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_input); \
		P_GET_UBOOL(Z_Param_Value); \
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOscFunctionLibrary::PushBool(Z_Param_Out_input,Z_Param_Value,Z_Param_Out_output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPopBlob) \
	{ \
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_input); \
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_output); \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOscFunctionLibrary::PopBlob(Z_Param_Out_input,Z_Param_Out_output,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPopString) \
	{ \
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_input); \
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_output); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOscFunctionLibrary::PopString(Z_Param_Out_input,Z_Param_Out_output,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPopInt) \
	{ \
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_input); \
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_output); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOscFunctionLibrary::PopInt(Z_Param_Out_input,Z_Param_Out_output,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPopFloat) \
	{ \
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_input); \
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_output); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOscFunctionLibrary::PopFloat(Z_Param_Out_input,Z_Param_Out_output,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPopBool) \
	{ \
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_input); \
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_output); \
		P_GET_UBOOL_REF(Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOscFunctionLibrary::PopBool(Z_Param_Out_input,Z_Param_Out_output,Z_Param_Out_Value); \
		P_NATIVE_END; \
	}


#define DRN01_Plugins_OSC_Source_OSC_Public_Common_OscFunctionLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddSendOscTarget) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_IpPort); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UOscFunctionLibrary::AddSendOscTarget(Z_Param_IpPort); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendOscBundle) \
	{ \
		P_GET_TARRAY_REF(FOscMessageStruct,Z_Param_Out_Messages); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TargetIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOscFunctionLibrary::SendOscBundle(Z_Param_Out_Messages,Z_Param_TargetIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendOsc) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Address); \
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_Data); \
		P_GET_PROPERTY(UIntProperty,Z_Param_TargetIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOscFunctionLibrary::SendOsc(Z_Param_Address,Z_Param_Out_Data,Z_Param_TargetIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFromBlob) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FOscDataElemStruct*)Z_Param__Result=UOscFunctionLibrary::FromBlob(Z_Param_Out_input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFromString) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FOscDataElemStruct*)Z_Param__Result=UOscFunctionLibrary::FromString(Z_Param_input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFromInt) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FOscDataElemStruct*)Z_Param__Result=UOscFunctionLibrary::FromInt(Z_Param_input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFromFloat) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FOscDataElemStruct*)Z_Param__Result=UOscFunctionLibrary::FromFloat(Z_Param_input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFromBool) \
	{ \
		P_GET_UBOOL(Z_Param_input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FOscDataElemStruct*)Z_Param__Result=UOscFunctionLibrary::FromBool(Z_Param_input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAsBlob) \
	{ \
		P_GET_STRUCT_REF(FOscDataElemStruct,Z_Param_Out_input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<uint8>*)Z_Param__Result=UOscFunctionLibrary::AsBlob(Z_Param_Out_input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAsString) \
	{ \
		P_GET_STRUCT_REF(FOscDataElemStruct,Z_Param_Out_input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UOscFunctionLibrary::AsString(Z_Param_Out_input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAsInt) \
	{ \
		P_GET_STRUCT_REF(FOscDataElemStruct,Z_Param_Out_input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UOscFunctionLibrary::AsInt(Z_Param_Out_input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAsFloat) \
	{ \
		P_GET_STRUCT_REF(FOscDataElemStruct,Z_Param_Out_input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UOscFunctionLibrary::AsFloat(Z_Param_Out_input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAsBool) \
	{ \
		P_GET_STRUCT_REF(FOscDataElemStruct,Z_Param_Out_input); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UOscFunctionLibrary::AsBool(Z_Param_Out_input); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPushBlob) \
	{ \
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_input); \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Value); \
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOscFunctionLibrary::PushBlob(Z_Param_Out_input,Z_Param_Out_Value,Z_Param_Out_output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPushString) \
	{ \
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_input); \
		P_GET_PROPERTY(UNameProperty,Z_Param_Value); \
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOscFunctionLibrary::PushString(Z_Param_Out_input,Z_Param_Value,Z_Param_Out_output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPushInt) \
	{ \
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_input); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOscFunctionLibrary::PushInt(Z_Param_Out_input,Z_Param_Value,Z_Param_Out_output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPushFloat) \
	{ \
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_input); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOscFunctionLibrary::PushFloat(Z_Param_Out_input,Z_Param_Value,Z_Param_Out_output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPushBool) \
	{ \
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_input); \
		P_GET_UBOOL(Z_Param_Value); \
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_output); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOscFunctionLibrary::PushBool(Z_Param_Out_input,Z_Param_Value,Z_Param_Out_output); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPopBlob) \
	{ \
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_input); \
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_output); \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOscFunctionLibrary::PopBlob(Z_Param_Out_input,Z_Param_Out_output,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPopString) \
	{ \
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_input); \
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_output); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOscFunctionLibrary::PopString(Z_Param_Out_input,Z_Param_Out_output,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPopInt) \
	{ \
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_input); \
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_output); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOscFunctionLibrary::PopInt(Z_Param_Out_input,Z_Param_Out_output,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPopFloat) \
	{ \
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_input); \
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_output); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOscFunctionLibrary::PopFloat(Z_Param_Out_input,Z_Param_Out_output,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPopBool) \
	{ \
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_input); \
		P_GET_TARRAY_REF(FOscDataElemStruct,Z_Param_Out_output); \
		P_GET_UBOOL_REF(Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOscFunctionLibrary::PopBool(Z_Param_Out_input,Z_Param_Out_output,Z_Param_Out_Value); \
		P_NATIVE_END; \
	}


#define DRN01_Plugins_OSC_Source_OSC_Public_Common_OscFunctionLibrary_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOscFunctionLibrary(); \
	friend OSC_API class UClass* Z_Construct_UClass_UOscFunctionLibrary(); \
public: \
	DECLARE_CLASS(UOscFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/OSC"), NO_API) \
	DECLARE_SERIALIZER(UOscFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define DRN01_Plugins_OSC_Source_OSC_Public_Common_OscFunctionLibrary_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUOscFunctionLibrary(); \
	friend OSC_API class UClass* Z_Construct_UClass_UOscFunctionLibrary(); \
public: \
	DECLARE_CLASS(UOscFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/OSC"), NO_API) \
	DECLARE_SERIALIZER(UOscFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define DRN01_Plugins_OSC_Source_OSC_Public_Common_OscFunctionLibrary_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOscFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOscFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOscFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOscFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOscFunctionLibrary(UOscFunctionLibrary&&); \
	NO_API UOscFunctionLibrary(const UOscFunctionLibrary&); \
public:


#define DRN01_Plugins_OSC_Source_OSC_Public_Common_OscFunctionLibrary_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOscFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOscFunctionLibrary(UOscFunctionLibrary&&); \
	NO_API UOscFunctionLibrary(const UOscFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOscFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOscFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOscFunctionLibrary)


#define DRN01_Plugins_OSC_Source_OSC_Public_Common_OscFunctionLibrary_h_11_PRIVATE_PROPERTY_OFFSET
#define DRN01_Plugins_OSC_Source_OSC_Public_Common_OscFunctionLibrary_h_8_PROLOG
#define DRN01_Plugins_OSC_Source_OSC_Public_Common_OscFunctionLibrary_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DRN01_Plugins_OSC_Source_OSC_Public_Common_OscFunctionLibrary_h_11_PRIVATE_PROPERTY_OFFSET \
	DRN01_Plugins_OSC_Source_OSC_Public_Common_OscFunctionLibrary_h_11_RPC_WRAPPERS \
	DRN01_Plugins_OSC_Source_OSC_Public_Common_OscFunctionLibrary_h_11_INCLASS \
	DRN01_Plugins_OSC_Source_OSC_Public_Common_OscFunctionLibrary_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DRN01_Plugins_OSC_Source_OSC_Public_Common_OscFunctionLibrary_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DRN01_Plugins_OSC_Source_OSC_Public_Common_OscFunctionLibrary_h_11_PRIVATE_PROPERTY_OFFSET \
	DRN01_Plugins_OSC_Source_OSC_Public_Common_OscFunctionLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DRN01_Plugins_OSC_Source_OSC_Public_Common_OscFunctionLibrary_h_11_INCLASS_NO_PURE_DECLS \
	DRN01_Plugins_OSC_Source_OSC_Public_Common_OscFunctionLibrary_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DRN01_Plugins_OSC_Source_OSC_Public_Common_OscFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

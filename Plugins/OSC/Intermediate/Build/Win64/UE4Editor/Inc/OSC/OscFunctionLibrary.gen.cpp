// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/OscPrivatePCH.h"
#include "Public/Common/OscFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOscFunctionLibrary() {}
// Cross Module References
	OSC_API UClass* Z_Construct_UClass_UOscFunctionLibrary_NoRegister();
	OSC_API UClass* Z_Construct_UClass_UOscFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_OSC();
	OSC_API UFunction* Z_Construct_UFunction_UOscFunctionLibrary_AddSendOscTarget();
	OSC_API UFunction* Z_Construct_UFunction_UOscFunctionLibrary_AsBlob();
	OSC_API UScriptStruct* Z_Construct_UScriptStruct_FOscDataElemStruct();
	OSC_API UFunction* Z_Construct_UFunction_UOscFunctionLibrary_AsBool();
	OSC_API UFunction* Z_Construct_UFunction_UOscFunctionLibrary_AsFloat();
	OSC_API UFunction* Z_Construct_UFunction_UOscFunctionLibrary_AsInt();
	OSC_API UFunction* Z_Construct_UFunction_UOscFunctionLibrary_AsString();
	OSC_API UFunction* Z_Construct_UFunction_UOscFunctionLibrary_FromBlob();
	OSC_API UFunction* Z_Construct_UFunction_UOscFunctionLibrary_FromBool();
	OSC_API UFunction* Z_Construct_UFunction_UOscFunctionLibrary_FromFloat();
	OSC_API UFunction* Z_Construct_UFunction_UOscFunctionLibrary_FromInt();
	OSC_API UFunction* Z_Construct_UFunction_UOscFunctionLibrary_FromString();
	OSC_API UFunction* Z_Construct_UFunction_UOscFunctionLibrary_PopBlob();
	OSC_API UFunction* Z_Construct_UFunction_UOscFunctionLibrary_PopBool();
	OSC_API UFunction* Z_Construct_UFunction_UOscFunctionLibrary_PopFloat();
	OSC_API UFunction* Z_Construct_UFunction_UOscFunctionLibrary_PopInt();
	OSC_API UFunction* Z_Construct_UFunction_UOscFunctionLibrary_PopString();
	OSC_API UFunction* Z_Construct_UFunction_UOscFunctionLibrary_PushBlob();
	OSC_API UFunction* Z_Construct_UFunction_UOscFunctionLibrary_PushBool();
	OSC_API UFunction* Z_Construct_UFunction_UOscFunctionLibrary_PushFloat();
	OSC_API UFunction* Z_Construct_UFunction_UOscFunctionLibrary_PushInt();
	OSC_API UFunction* Z_Construct_UFunction_UOscFunctionLibrary_PushString();
	OSC_API UFunction* Z_Construct_UFunction_UOscFunctionLibrary_SendOsc();
	OSC_API UFunction* Z_Construct_UFunction_UOscFunctionLibrary_SendOscBundle();
	OSC_API UScriptStruct* Z_Construct_UScriptStruct_FOscMessageStruct();
// End Cross Module References
	void UOscFunctionLibrary::StaticRegisterNativesUOscFunctionLibrary()
	{
		UClass* Class = UOscFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddSendOscTarget", &UOscFunctionLibrary::execAddSendOscTarget },
			{ "AsBlob", &UOscFunctionLibrary::execAsBlob },
			{ "AsBool", &UOscFunctionLibrary::execAsBool },
			{ "AsFloat", &UOscFunctionLibrary::execAsFloat },
			{ "AsInt", &UOscFunctionLibrary::execAsInt },
			{ "AsString", &UOscFunctionLibrary::execAsString },
			{ "FromBlob", &UOscFunctionLibrary::execFromBlob },
			{ "FromBool", &UOscFunctionLibrary::execFromBool },
			{ "FromFloat", &UOscFunctionLibrary::execFromFloat },
			{ "FromInt", &UOscFunctionLibrary::execFromInt },
			{ "FromString", &UOscFunctionLibrary::execFromString },
			{ "PopBlob", &UOscFunctionLibrary::execPopBlob },
			{ "PopBool", &UOscFunctionLibrary::execPopBool },
			{ "PopFloat", &UOscFunctionLibrary::execPopFloat },
			{ "PopInt", &UOscFunctionLibrary::execPopInt },
			{ "PopString", &UOscFunctionLibrary::execPopString },
			{ "PushBlob", &UOscFunctionLibrary::execPushBlob },
			{ "PushBool", &UOscFunctionLibrary::execPushBool },
			{ "PushFloat", &UOscFunctionLibrary::execPushFloat },
			{ "PushInt", &UOscFunctionLibrary::execPushInt },
			{ "PushString", &UOscFunctionLibrary::execPushString },
			{ "SendOsc", &UOscFunctionLibrary::execSendOsc },
			{ "SendOscBundle", &UOscFunctionLibrary::execSendOscBundle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UOscFunctionLibrary_AddSendOscTarget()
	{
		struct OscFunctionLibrary_eventAddSendOscTarget_Parms
		{
			FString IpPort;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventAddSendOscTarget_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_IpPort = { UE4CodeGen_Private::EPropertyClass::Str, "IpPort", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventAddSendOscTarget_Parms, IpPort), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IpPort,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "OSC" },
				{ "CPP_Default_IpPort", "127.0.0.1:8000" },
				{ "ModuleRelativePath", "Public/Common/OscFunctionLibrary.h" },
				{ "ToolTip", "@brief Add Ip:Port to the available OSC send targets.\n@param IpPort \"ip:port\". e.g. \"192.168.0.1:7777\"\n@return The created TargetIndex to pass to the SendOsc function.\n\nUse this function to add target at runtime. Generally, it is best\nto define your targets in the OSC plugin settings.\n\n@see SendOsc" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOscFunctionLibrary, "AddSendOscTarget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(OscFunctionLibrary_eventAddSendOscTarget_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOscFunctionLibrary_AsBlob()
	{
		struct OscFunctionLibrary_eventAsBlob_Parms
		{
			FOscDataElemStruct input;
			TArray<uint8> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventAsBlob_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_input_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_input = { UE4CodeGen_Private::EPropertyClass::Struct, "input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventAsBlob_Parms, input), Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(NewProp_input_MetaData, ARRAY_COUNT(NewProp_input_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_input,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "OSC" },
				{ "ModuleRelativePath", "Public/Common/OscFunctionLibrary.h" },
				{ "ToolTip", "Interpret an OSC argument as a blob." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOscFunctionLibrary, "AsBlob", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(OscFunctionLibrary_eventAsBlob_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOscFunctionLibrary_AsBool()
	{
		struct OscFunctionLibrary_eventAsBool_Parms
		{
			FOscDataElemStruct input;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((OscFunctionLibrary_eventAsBool_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(OscFunctionLibrary_eventAsBool_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_input_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_input = { UE4CodeGen_Private::EPropertyClass::Struct, "input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventAsBool_Parms, input), Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(NewProp_input_MetaData, ARRAY_COUNT(NewProp_input_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_input,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "OSC" },
				{ "ModuleRelativePath", "Public/Common/OscFunctionLibrary.h" },
				{ "ToolTip", "Interpret an OSC argument as a boolean" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOscFunctionLibrary, "AsBool", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(OscFunctionLibrary_eventAsBool_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOscFunctionLibrary_AsFloat()
	{
		struct OscFunctionLibrary_eventAsFloat_Parms
		{
			FOscDataElemStruct input;
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventAsFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_input_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_input = { UE4CodeGen_Private::EPropertyClass::Struct, "input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventAsFloat_Parms, input), Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(NewProp_input_MetaData, ARRAY_COUNT(NewProp_input_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_input,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "OSC" },
				{ "ModuleRelativePath", "Public/Common/OscFunctionLibrary.h" },
				{ "ToolTip", "Interpret an OSC argument as a floating point." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOscFunctionLibrary, "AsFloat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(OscFunctionLibrary_eventAsFloat_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOscFunctionLibrary_AsInt()
	{
		struct OscFunctionLibrary_eventAsInt_Parms
		{
			FOscDataElemStruct input;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventAsInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_input_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_input = { UE4CodeGen_Private::EPropertyClass::Struct, "input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventAsInt_Parms, input), Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(NewProp_input_MetaData, ARRAY_COUNT(NewProp_input_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_input,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "OSC" },
				{ "ModuleRelativePath", "Public/Common/OscFunctionLibrary.h" },
				{ "ToolTip", "Interpret an OSC argument as a integer." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOscFunctionLibrary, "AsInt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(OscFunctionLibrary_eventAsInt_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOscFunctionLibrary_AsString()
	{
		struct OscFunctionLibrary_eventAsString_Parms
		{
			FOscDataElemStruct input;
			FName ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Name, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventAsString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_input_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_input = { UE4CodeGen_Private::EPropertyClass::Struct, "input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventAsString_Parms, input), Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(NewProp_input_MetaData, ARRAY_COUNT(NewProp_input_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_input,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "OSC" },
				{ "ModuleRelativePath", "Public/Common/OscFunctionLibrary.h" },
				{ "ToolTip", "Interpret an OSC argument as a string." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOscFunctionLibrary, "AsString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(OscFunctionLibrary_eventAsString_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOscFunctionLibrary_FromBlob()
	{
		struct OscFunctionLibrary_eventFromBlob_Parms
		{
			TArray<uint8> input;
			FOscDataElemStruct ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventFromBlob_Parms, ReturnValue), Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_input_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_input = { UE4CodeGen_Private::EPropertyClass::Array, "input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventFromBlob_Parms, input), METADATA_PARAMS(NewProp_input_MetaData, ARRAY_COUNT(NewProp_input_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_input_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_input,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_input_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "OSC" },
				{ "ModuleRelativePath", "Public/Common/OscFunctionLibrary.h" },
				{ "ToolTip", "Create an OSC argument from a blob." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOscFunctionLibrary, "FromBlob", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(OscFunctionLibrary_eventFromBlob_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOscFunctionLibrary_FromBool()
	{
		struct OscFunctionLibrary_eventFromBool_Parms
		{
			bool input;
			FOscDataElemStruct ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventFromBool_Parms, ReturnValue), Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_input_SetBit = [](void* Obj){ ((OscFunctionLibrary_eventFromBool_Parms*)Obj)->input = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_input = { UE4CodeGen_Private::EPropertyClass::Bool, "input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(OscFunctionLibrary_eventFromBool_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_input_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_input,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "OSC" },
				{ "ModuleRelativePath", "Public/Common/OscFunctionLibrary.h" },
				{ "ToolTip", "Create an OSC argument from a boolean" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOscFunctionLibrary, "FromBool", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(OscFunctionLibrary_eventFromBool_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOscFunctionLibrary_FromFloat()
	{
		struct OscFunctionLibrary_eventFromFloat_Parms
		{
			float input;
			FOscDataElemStruct ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventFromFloat_Parms, ReturnValue), Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_input = { UE4CodeGen_Private::EPropertyClass::Float, "input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventFromFloat_Parms, input), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_input,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "OSC" },
				{ "ModuleRelativePath", "Public/Common/OscFunctionLibrary.h" },
				{ "ToolTip", "Create an OSC argument from a floating point." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOscFunctionLibrary, "FromFloat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(OscFunctionLibrary_eventFromFloat_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOscFunctionLibrary_FromInt()
	{
		struct OscFunctionLibrary_eventFromInt_Parms
		{
			int32 input;
			FOscDataElemStruct ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventFromInt_Parms, ReturnValue), Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_input = { UE4CodeGen_Private::EPropertyClass::Int, "input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventFromInt_Parms, input), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_input,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "OSC" },
				{ "ModuleRelativePath", "Public/Common/OscFunctionLibrary.h" },
				{ "ToolTip", "Create an OSC argument from a integer." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOscFunctionLibrary, "FromInt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(OscFunctionLibrary_eventFromInt_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOscFunctionLibrary_FromString()
	{
		struct OscFunctionLibrary_eventFromString_Parms
		{
			FName input;
			FOscDataElemStruct ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventFromString_Parms, ReturnValue), Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_input = { UE4CodeGen_Private::EPropertyClass::Name, "input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventFromString_Parms, input), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_input,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "OSC" },
				{ "ModuleRelativePath", "Public/Common/OscFunctionLibrary.h" },
				{ "ToolTip", "Create an OSC argument from a string." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOscFunctionLibrary, "FromString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(OscFunctionLibrary_eventFromString_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOscFunctionLibrary_PopBlob()
	{
		struct OscFunctionLibrary_eventPopBlob_Parms
		{
			TArray<FOscDataElemStruct> input;
			TArray<FOscDataElemStruct> output;
			TArray<uint8> Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Array, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventPopBlob_Parms, Value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Value_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_output = { UE4CodeGen_Private::EPropertyClass::Array, "output", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventPopBlob_Parms, output), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_output_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "output", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_input_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_input = { UE4CodeGen_Private::EPropertyClass::Array, "input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventPopBlob_Parms, input), METADATA_PARAMS(NewProp_input_MetaData, ARRAY_COUNT(NewProp_input_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_input_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_output,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_output_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_input,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_input_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "OSC" },
				{ "ModuleRelativePath", "Public/Common/OscFunctionLibrary.h" },
				{ "ToolTip", "Get the next value from an OSC message as a blob." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOscFunctionLibrary, "PopBlob", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(OscFunctionLibrary_eventPopBlob_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOscFunctionLibrary_PopBool()
	{
		struct OscFunctionLibrary_eventPopBool_Parms
		{
			TArray<FOscDataElemStruct> input;
			TArray<FOscDataElemStruct> output;
			bool Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_Value_SetBit = [](void* Obj){ ((OscFunctionLibrary_eventPopBool_Parms*)Obj)->Value = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Bool, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(OscFunctionLibrary_eventPopBool_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Value_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_output = { UE4CodeGen_Private::EPropertyClass::Array, "output", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventPopBool_Parms, output), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_output_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "output", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_input_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_input = { UE4CodeGen_Private::EPropertyClass::Array, "input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventPopBool_Parms, input), METADATA_PARAMS(NewProp_input_MetaData, ARRAY_COUNT(NewProp_input_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_input_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_output,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_output_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_input,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_input_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "OSC" },
				{ "ModuleRelativePath", "Public/Common/OscFunctionLibrary.h" },
				{ "ToolTip", "Get the next value from an OSC message as a boolean." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOscFunctionLibrary, "PopBool", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(OscFunctionLibrary_eventPopBool_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOscFunctionLibrary_PopFloat()
	{
		struct OscFunctionLibrary_eventPopFloat_Parms
		{
			TArray<FOscDataElemStruct> input;
			TArray<FOscDataElemStruct> output;
			float Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventPopFloat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_output = { UE4CodeGen_Private::EPropertyClass::Array, "output", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventPopFloat_Parms, output), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_output_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "output", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_input_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_input = { UE4CodeGen_Private::EPropertyClass::Array, "input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventPopFloat_Parms, input), METADATA_PARAMS(NewProp_input_MetaData, ARRAY_COUNT(NewProp_input_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_input_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_output,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_output_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_input,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_input_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "OSC" },
				{ "ModuleRelativePath", "Public/Common/OscFunctionLibrary.h" },
				{ "ToolTip", "Get the next value from an OSC message as a floating point." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOscFunctionLibrary, "PopFloat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(OscFunctionLibrary_eventPopFloat_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOscFunctionLibrary_PopInt()
	{
		struct OscFunctionLibrary_eventPopInt_Parms
		{
			TArray<FOscDataElemStruct> input;
			TArray<FOscDataElemStruct> output;
			int32 Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Int, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventPopInt_Parms, Value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_output = { UE4CodeGen_Private::EPropertyClass::Array, "output", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventPopInt_Parms, output), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_output_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "output", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_input_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_input = { UE4CodeGen_Private::EPropertyClass::Array, "input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventPopInt_Parms, input), METADATA_PARAMS(NewProp_input_MetaData, ARRAY_COUNT(NewProp_input_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_input_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_output,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_output_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_input,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_input_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "OSC" },
				{ "ModuleRelativePath", "Public/Common/OscFunctionLibrary.h" },
				{ "ToolTip", "Get the next value from an OSC message as a integer." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOscFunctionLibrary, "PopInt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(OscFunctionLibrary_eventPopInt_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOscFunctionLibrary_PopString()
	{
		struct OscFunctionLibrary_eventPopString_Parms
		{
			TArray<FOscDataElemStruct> input;
			TArray<FOscDataElemStruct> output;
			FName Value;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Name, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventPopString_Parms, Value), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_output = { UE4CodeGen_Private::EPropertyClass::Array, "output", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventPopString_Parms, output), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_output_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "output", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_input_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_input = { UE4CodeGen_Private::EPropertyClass::Array, "input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventPopString_Parms, input), METADATA_PARAMS(NewProp_input_MetaData, ARRAY_COUNT(NewProp_input_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_input_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_output,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_output_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_input,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_input_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "OSC" },
				{ "ModuleRelativePath", "Public/Common/OscFunctionLibrary.h" },
				{ "ToolTip", "Get the next value from an OSC message as a string." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOscFunctionLibrary, "PopString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(OscFunctionLibrary_eventPopString_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOscFunctionLibrary_PushBlob()
	{
		struct OscFunctionLibrary_eventPushBlob_Parms
		{
			TArray<FOscDataElemStruct> input;
			TArray<uint8> Value;
			TArray<FOscDataElemStruct> output;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_output = { UE4CodeGen_Private::EPropertyClass::Array, "output", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventPushBlob_Parms, output), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_output_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "output", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Array, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventPushBlob_Parms, Value), METADATA_PARAMS(NewProp_Value_MetaData, ARRAY_COUNT(NewProp_Value_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Value_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_input_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_input = { UE4CodeGen_Private::EPropertyClass::Array, "input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventPushBlob_Parms, input), METADATA_PARAMS(NewProp_input_MetaData, ARRAY_COUNT(NewProp_input_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_input_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_output,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_output_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_input,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_input_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AutoCreateRefTerm", "input" },
				{ "Category", "OSC" },
				{ "ModuleRelativePath", "Public/Common/OscFunctionLibrary.h" },
				{ "ToolTip", "Add a blob to an OSC message." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOscFunctionLibrary, "PushBlob", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(OscFunctionLibrary_eventPushBlob_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOscFunctionLibrary_PushBool()
	{
		struct OscFunctionLibrary_eventPushBool_Parms
		{
			TArray<FOscDataElemStruct> input;
			bool Value;
			TArray<FOscDataElemStruct> output;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_output = { UE4CodeGen_Private::EPropertyClass::Array, "output", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventPushBool_Parms, output), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_output_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "output", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_Value_SetBit = [](void* Obj){ ((OscFunctionLibrary_eventPushBool_Parms*)Obj)->Value = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Bool, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(OscFunctionLibrary_eventPushBool_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Value_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_input_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_input = { UE4CodeGen_Private::EPropertyClass::Array, "input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventPushBool_Parms, input), METADATA_PARAMS(NewProp_input_MetaData, ARRAY_COUNT(NewProp_input_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_input_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_output,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_output_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_input,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_input_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AutoCreateRefTerm", "input" },
				{ "Category", "OSC" },
				{ "ModuleRelativePath", "Public/Common/OscFunctionLibrary.h" },
				{ "ToolTip", "Add a boolean value to an OSC message." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOscFunctionLibrary, "PushBool", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(OscFunctionLibrary_eventPushBool_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOscFunctionLibrary_PushFloat()
	{
		struct OscFunctionLibrary_eventPushFloat_Parms
		{
			TArray<FOscDataElemStruct> input;
			float Value;
			TArray<FOscDataElemStruct> output;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_output = { UE4CodeGen_Private::EPropertyClass::Array, "output", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventPushFloat_Parms, output), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_output_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "output", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventPushFloat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_input_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_input = { UE4CodeGen_Private::EPropertyClass::Array, "input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventPushFloat_Parms, input), METADATA_PARAMS(NewProp_input_MetaData, ARRAY_COUNT(NewProp_input_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_input_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_output,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_output_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_input,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_input_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AutoCreateRefTerm", "input" },
				{ "Category", "OSC" },
				{ "ModuleRelativePath", "Public/Common/OscFunctionLibrary.h" },
				{ "ToolTip", "Add a floating point value to an OSC message." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOscFunctionLibrary, "PushFloat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(OscFunctionLibrary_eventPushFloat_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOscFunctionLibrary_PushInt()
	{
		struct OscFunctionLibrary_eventPushInt_Parms
		{
			TArray<FOscDataElemStruct> input;
			int32 Value;
			TArray<FOscDataElemStruct> output;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_output = { UE4CodeGen_Private::EPropertyClass::Array, "output", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventPushInt_Parms, output), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_output_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "output", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Int, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventPushInt_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_input_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_input = { UE4CodeGen_Private::EPropertyClass::Array, "input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventPushInt_Parms, input), METADATA_PARAMS(NewProp_input_MetaData, ARRAY_COUNT(NewProp_input_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_input_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_output,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_output_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_input,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_input_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AutoCreateRefTerm", "input" },
				{ "Category", "OSC" },
				{ "ModuleRelativePath", "Public/Common/OscFunctionLibrary.h" },
				{ "ToolTip", "Add a integer value to an OSC message." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOscFunctionLibrary, "PushInt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(OscFunctionLibrary_eventPushInt_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOscFunctionLibrary_PushString()
	{
		struct OscFunctionLibrary_eventPushString_Parms
		{
			TArray<FOscDataElemStruct> input;
			FName Value;
			TArray<FOscDataElemStruct> output;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_output = { UE4CodeGen_Private::EPropertyClass::Array, "output", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventPushString_Parms, output), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_output_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "output", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Name, "Value", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventPushString_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_input_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_input = { UE4CodeGen_Private::EPropertyClass::Array, "input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventPushString_Parms, input), METADATA_PARAMS(NewProp_input_MetaData, ARRAY_COUNT(NewProp_input_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_input_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "input", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_output,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_output_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Value,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_input,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_input_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AutoCreateRefTerm", "input" },
				{ "Category", "OSC" },
				{ "ModuleRelativePath", "Public/Common/OscFunctionLibrary.h" },
				{ "ToolTip", "Add a string value to an OSC message." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOscFunctionLibrary, "PushString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(OscFunctionLibrary_eventPushString_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOscFunctionLibrary_SendOsc()
	{
		struct OscFunctionLibrary_eventSendOsc_Parms
		{
			FName Address;
			TArray<FOscDataElemStruct> Data;
			int32 TargetIndex;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetIndex = { UE4CodeGen_Private::EPropertyClass::Int, "TargetIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventSendOsc_Parms, TargetIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data = { UE4CodeGen_Private::EPropertyClass::Array, "Data", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventSendOsc_Parms, Data), METADATA_PARAMS(NewProp_Data_MetaData, ARRAY_COUNT(NewProp_Data_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Data", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Address = { UE4CodeGen_Private::EPropertyClass::Name, "Address", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventSendOsc_Parms, Address), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Data,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Data_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Address,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AutoCreateRefTerm", "Data" },
				{ "Category", "OSC" },
				{ "ModuleRelativePath", "Public/Common/OscFunctionLibrary.h" },
				{ "ToolTip", "@brief Send an OSC message.\n@param Address OSC address.\n@param Data result of successive PushFloat/Int/String/etc.\n@param TargetIndex index of the destination, -1 for all destinations. (SendTarget list of the plugin settings)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOscFunctionLibrary, "SendOsc", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(OscFunctionLibrary_eventSendOsc_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UOscFunctionLibrary_SendOscBundle()
	{
		struct OscFunctionLibrary_eventSendOscBundle_Parms
		{
			TArray<FOscMessageStruct> Messages;
			int32 TargetIndex;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetIndex = { UE4CodeGen_Private::EPropertyClass::Int, "TargetIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventSendOscBundle_Parms, TargetIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Messages_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Messages = { UE4CodeGen_Private::EPropertyClass::Array, "Messages", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(OscFunctionLibrary_eventSendOscBundle_Parms, Messages), METADATA_PARAMS(NewProp_Messages_MetaData, ARRAY_COUNT(NewProp_Messages_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Messages_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Messages", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FOscMessageStruct, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TargetIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Messages,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Messages_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "OSC" },
				{ "ModuleRelativePath", "Public/Common/OscFunctionLibrary.h" },
				{ "ToolTip", "@brief Send several OSC messages in an OSC bundle.\n@param Messages of the bundle.\n@param TargetIndex index of the destination, -1 for all destinations. (SendTarget list of the plugin settings)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UOscFunctionLibrary, "SendOscBundle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(OscFunctionLibrary_eventSendOscBundle_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOscFunctionLibrary_NoRegister()
	{
		return UOscFunctionLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UOscFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_OSC,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UOscFunctionLibrary_AddSendOscTarget, "AddSendOscTarget" }, // 35410308
				{ &Z_Construct_UFunction_UOscFunctionLibrary_AsBlob, "AsBlob" }, // 3723948747
				{ &Z_Construct_UFunction_UOscFunctionLibrary_AsBool, "AsBool" }, // 1016466104
				{ &Z_Construct_UFunction_UOscFunctionLibrary_AsFloat, "AsFloat" }, // 2423334814
				{ &Z_Construct_UFunction_UOscFunctionLibrary_AsInt, "AsInt" }, // 492900954
				{ &Z_Construct_UFunction_UOscFunctionLibrary_AsString, "AsString" }, // 3047802668
				{ &Z_Construct_UFunction_UOscFunctionLibrary_FromBlob, "FromBlob" }, // 858405457
				{ &Z_Construct_UFunction_UOscFunctionLibrary_FromBool, "FromBool" }, // 518322557
				{ &Z_Construct_UFunction_UOscFunctionLibrary_FromFloat, "FromFloat" }, // 354693545
				{ &Z_Construct_UFunction_UOscFunctionLibrary_FromInt, "FromInt" }, // 1900220900
				{ &Z_Construct_UFunction_UOscFunctionLibrary_FromString, "FromString" }, // 2332486949
				{ &Z_Construct_UFunction_UOscFunctionLibrary_PopBlob, "PopBlob" }, // 1184603480
				{ &Z_Construct_UFunction_UOscFunctionLibrary_PopBool, "PopBool" }, // 3721041585
				{ &Z_Construct_UFunction_UOscFunctionLibrary_PopFloat, "PopFloat" }, // 1653858263
				{ &Z_Construct_UFunction_UOscFunctionLibrary_PopInt, "PopInt" }, // 2786559545
				{ &Z_Construct_UFunction_UOscFunctionLibrary_PopString, "PopString" }, // 1621822995
				{ &Z_Construct_UFunction_UOscFunctionLibrary_PushBlob, "PushBlob" }, // 94434379
				{ &Z_Construct_UFunction_UOscFunctionLibrary_PushBool, "PushBool" }, // 1355779581
				{ &Z_Construct_UFunction_UOscFunctionLibrary_PushFloat, "PushFloat" }, // 907538844
				{ &Z_Construct_UFunction_UOscFunctionLibrary_PushInt, "PushInt" }, // 329316702
				{ &Z_Construct_UFunction_UOscFunctionLibrary_PushString, "PushString" }, // 290990371
				{ &Z_Construct_UFunction_UOscFunctionLibrary_SendOsc, "SendOsc" }, // 2225777483
				{ &Z_Construct_UFunction_UOscFunctionLibrary_SendOscBundle, "SendOscBundle" }, // 3432444417
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "Common/OscFunctionLibrary.h" },
				{ "ModuleRelativePath", "Public/Common/OscFunctionLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UOscFunctionLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UOscFunctionLibrary::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOscFunctionLibrary, 2576628707);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOscFunctionLibrary(Z_Construct_UClass_UOscFunctionLibrary, &UOscFunctionLibrary::StaticClass, TEXT("/Script/OSC"), TEXT("UOscFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOscFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

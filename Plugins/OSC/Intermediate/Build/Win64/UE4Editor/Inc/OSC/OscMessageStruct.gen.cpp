// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/OscPrivatePCH.h"
#include "Public/Common/OscMessageStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOscMessageStruct() {}
// Cross Module References
	OSC_API UScriptStruct* Z_Construct_UScriptStruct_FOscMessageStruct();
	UPackage* Z_Construct_UPackage__Script_OSC();
	OSC_API UScriptStruct* Z_Construct_UScriptStruct_FOscDataElemStruct();
// End Cross Module References
class UScriptStruct* FOscMessageStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OSC_API uint32 Get_Z_Construct_UScriptStruct_FOscMessageStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOscMessageStruct, Z_Construct_UPackage__Script_OSC(), TEXT("OscMessageStruct"), sizeof(FOscMessageStruct), Get_Z_Construct_UScriptStruct_FOscMessageStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOscMessageStruct(FOscMessageStruct::StaticStruct, TEXT("/Script/OSC"), TEXT("OscMessageStruct"), false, nullptr, nullptr);
static struct FScriptStruct_OSC_StaticRegisterNativesFOscMessageStruct
{
	FScriptStruct_OSC_StaticRegisterNativesFOscMessageStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OscMessageStruct")),new UScriptStruct::TCppStructOps<FOscMessageStruct>);
	}
} ScriptStruct_OSC_StaticRegisterNativesFOscMessageStruct;
	UScriptStruct* Z_Construct_UScriptStruct_FOscMessageStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOscMessageStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_OSC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OscMessageStruct"), sizeof(FOscMessageStruct), Get_Z_Construct_UScriptStruct_FOscMessageStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Common/OscMessageStruct.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOscMessageStruct>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
				{ "Category", "OscMessageStruct" },
				{ "ModuleRelativePath", "Public/Common/OscMessageStruct.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data = { UE4CodeGen_Private::EPropertyClass::Array, "Data", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOscMessageStruct, Data), METADATA_PARAMS(NewProp_Data_MetaData, ARRAY_COUNT(NewProp_Data_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Data", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Address_MetaData[] = {
				{ "Category", "OscMessageStruct" },
				{ "ModuleRelativePath", "Public/Common/OscMessageStruct.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Address = { UE4CodeGen_Private::EPropertyClass::Name, "Address", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FOscMessageStruct, Address), METADATA_PARAMS(NewProp_Address_MetaData, ARRAY_COUNT(NewProp_Address_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Data,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Data_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Address,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_OSC,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"OscMessageStruct",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FOscMessageStruct),
				alignof(FOscMessageStruct),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOscMessageStruct_CRC() { return 3015104994U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

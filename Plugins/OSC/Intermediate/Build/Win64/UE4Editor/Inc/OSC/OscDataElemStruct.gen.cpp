// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/OscPrivatePCH.h"
#include "Public/Common/OscDataElemStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOscDataElemStruct() {}
// Cross Module References
	OSC_API UScriptStruct* Z_Construct_UScriptStruct_FOscDataElemStruct();
	UPackage* Z_Construct_UPackage__Script_OSC();
// End Cross Module References
class UScriptStruct* FOscDataElemStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OSC_API uint32 Get_Z_Construct_UScriptStruct_FOscDataElemStruct_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOscDataElemStruct, Z_Construct_UPackage__Script_OSC(), TEXT("OscDataElemStruct"), sizeof(FOscDataElemStruct), Get_Z_Construct_UScriptStruct_FOscDataElemStruct_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOscDataElemStruct(FOscDataElemStruct::StaticStruct, TEXT("/Script/OSC"), TEXT("OscDataElemStruct"), false, nullptr, nullptr);
static struct FScriptStruct_OSC_StaticRegisterNativesFOscDataElemStruct
{
	FScriptStruct_OSC_StaticRegisterNativesFOscDataElemStruct()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OscDataElemStruct")),new UScriptStruct::TCppStructOps<FOscDataElemStruct>);
	}
} ScriptStruct_OSC_StaticRegisterNativesFOscDataElemStruct;
	UScriptStruct* Z_Construct_UScriptStruct_FOscDataElemStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOscDataElemStruct_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_OSC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OscDataElemStruct"), sizeof(FOscDataElemStruct), Get_Z_Construct_UScriptStruct_FOscDataElemStruct_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Common/OscDataElemStruct.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOscDataElemStruct>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_OSC,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"OscDataElemStruct",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FOscDataElemStruct),
				alignof(FOscDataElemStruct),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOscDataElemStruct_CRC() { return 2658508017U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

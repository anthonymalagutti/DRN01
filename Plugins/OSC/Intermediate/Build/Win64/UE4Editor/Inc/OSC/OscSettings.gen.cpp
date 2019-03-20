// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/OscPrivatePCH.h"
#include "Private/OscSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOscSettings() {}
// Cross Module References
	OSC_API UClass* Z_Construct_UClass_UOscSettings_NoRegister();
	OSC_API UClass* Z_Construct_UClass_UOscSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_OSC();
// End Cross Module References
	void UOscSettings::StaticRegisterNativesUOscSettings()
	{
	}
	UClass* Z_Construct_UClass_UOscSettings_NoRegister()
	{
		return UOscSettings::StaticClass();
	}
	UClass* Z_Construct_UClass_UOscSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_OSC,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "OscSettings.h" },
				{ "ModuleRelativePath", "Private/OscSettings.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MulticastLoopback_MetaData[] = {
				{ "Category", "Network" },
				{ "ModuleRelativePath", "Private/OscSettings.h" },
			};
#endif
			auto NewProp_MulticastLoopback_SetBit = [](void* Obj){ ((UOscSettings*)Obj)->MulticastLoopback = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MulticastLoopback = { UE4CodeGen_Private::EPropertyClass::Bool, "MulticastLoopback", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UOscSettings), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_MulticastLoopback_SetBit)>::SetBit, METADATA_PARAMS(NewProp_MulticastLoopback_MetaData, ARRAY_COUNT(NewProp_MulticastLoopback_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[] = {
				{ "Category", "Input" },
				{ "ModuleRelativePath", "Private/OscSettings.h" },
				{ "ToolTip", "List of the messages treated as inputs.\n\nEvery entry adds a key in the input mapping project setting.\ne.g. \"/position/x\" -> \"OSC_position_x\"" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Inputs = { UE4CodeGen_Private::EPropertyClass::Array, "Inputs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UOscSettings, Inputs), METADATA_PARAMS(NewProp_Inputs_MetaData, ARRAY_COUNT(NewProp_Inputs_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Inputs_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "Inputs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SendTargets_MetaData[] = {
				{ "Category", "Send" },
				{ "ModuleRelativePath", "Private/OscSettings.h" },
				{ "ToolTip", "Specify the addresses (ip:port) to send messages to.\n\nAddresses can also be added at runtime with the AddSendOscTarget function." },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SendTargets = { UE4CodeGen_Private::EPropertyClass::Array, "SendTargets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UOscSettings, SendTargets), METADATA_PARAMS(NewProp_SendTargets_MetaData, ARRAY_COUNT(NewProp_SendTargets_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SendTargets_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "SendTargets", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000004000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReceiveFrom_MetaData[] = {
				{ "Category", "Receive" },
				{ "ModuleRelativePath", "Private/OscSettings.h" },
				{ "ToolTip", "Specify the [address:]port to listen to.\n\ne.g.\n- \"8000\" listen to messages from any sender on port 8000.  [default]\n- \"224.0.0.100:8000\" listen multi-cast messages of group 224.0.0.100 on port 8000.\n- \"192.168.0.1:8000\" listen messages addressed specifically to 192.168.0.1 on port 8000, useful if there are several addresses for this machine." },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReceiveFrom = { UE4CodeGen_Private::EPropertyClass::Str, "ReceiveFrom", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000004001, 1, nullptr, STRUCT_OFFSET(UOscSettings, ReceiveFrom), METADATA_PARAMS(NewProp_ReceiveFrom_MetaData, ARRAY_COUNT(NewProp_ReceiveFrom_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MulticastLoopback,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Inputs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Inputs_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SendTargets,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SendTargets_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReceiveFrom,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UOscSettings>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UOscSettings::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000086u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Engine",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOscSettings, 1490751051);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOscSettings(Z_Construct_UClass_UOscSettings, &UOscSettings::StaticClass, TEXT("/Script/OSC"), TEXT("UOscSettings"), false, nullptr, nullptr, nullptr);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

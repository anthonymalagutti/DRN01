// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/OscPrivatePCH.h"
#include "Public/Receive/OscReceiverActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOscReceiverActor() {}
// Cross Module References
	OSC_API UClass* Z_Construct_UClass_AOscReceiverActor_NoRegister();
	OSC_API UClass* Z_Construct_UClass_AOscReceiverActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_OSC();
	OSC_API UFunction* Z_Construct_UFunction_AOscReceiverActor_OnOscReceived();
	OSC_API UScriptStruct* Z_Construct_UScriptStruct_FOscDataElemStruct();
// End Cross Module References
	static FName NAME_AOscReceiverActor_OnOscReceived = FName(TEXT("OnOscReceived"));
	void AOscReceiverActor::OnOscReceived(FName const& Address, TArray<FOscDataElemStruct> const& Data, const FString& SenderIp)
	{
		OscReceiverActor_eventOnOscReceived_Parms Parms;
		Parms.Address=Address;
		Parms.Data=Data;
		Parms.SenderIp=SenderIp;
		ProcessEvent(FindFunctionChecked(NAME_AOscReceiverActor_OnOscReceived),&Parms);
	}
	void AOscReceiverActor::StaticRegisterNativesAOscReceiverActor()
	{
	}
	UFunction* Z_Construct_UFunction_AOscReceiverActor_OnOscReceived()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenderIp_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SenderIp = { UE4CodeGen_Private::EPropertyClass::Str, "SenderIp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(OscReceiverActor_eventOnOscReceived_Parms, SenderIp), METADATA_PARAMS(NewProp_SenderIp_MetaData, ARRAY_COUNT(NewProp_SenderIp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data = { UE4CodeGen_Private::EPropertyClass::Array, "Data", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(OscReceiverActor_eventOnOscReceived_Parms, Data), METADATA_PARAMS(NewProp_Data_MetaData, ARRAY_COUNT(NewProp_Data_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Data", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Address_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Address = { UE4CodeGen_Private::EPropertyClass::Name, "Address", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(OscReceiverActor_eventOnOscReceived_Parms, Address), METADATA_PARAMS(NewProp_Address_MetaData, ARRAY_COUNT(NewProp_Address_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SenderIp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Data,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Data_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Address,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "OSC" },
				{ "ModuleRelativePath", "Public/Receive/OscReceiverActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AOscReceiverActor, "OnOscReceived", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420800, sizeof(OscReceiverActor_eventOnOscReceived_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AOscReceiverActor_NoRegister()
	{
		return AOscReceiverActor::StaticClass();
	}
	UClass* Z_Construct_UClass_AOscReceiverActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_OSC,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AOscReceiverActor_OnOscReceived, "OnOscReceived" }, // 147749348
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "ClassGroupNames", "OSC" },
				{ "IncludePath", "Receive/OscReceiverActor.h" },
				{ "ModuleRelativePath", "Public/Receive/OscReceiverActor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddressFilter_MetaData[] = {
				{ "Category", "OSC" },
				{ "ModuleRelativePath", "Public/Receive/OscReceiverActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AddressFilter = { UE4CodeGen_Private::EPropertyClass::Str, "AddressFilter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AOscReceiverActor, AddressFilter), METADATA_PARAMS(NewProp_AddressFilter_MetaData, ARRAY_COUNT(NewProp_AddressFilter_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AddressFilter,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AOscReceiverActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AOscReceiverActor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOscReceiverActor, 1649648248);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOscReceiverActor(Z_Construct_UClass_AOscReceiverActor, &AOscReceiverActor::StaticClass, TEXT("/Script/OSC"), TEXT("AOscReceiverActor"), false, nullptr, nullptr, nullptr);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

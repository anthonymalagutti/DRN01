// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/OscPrivatePCH.h"
#include "Public/Receive/OscReceiverComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOscReceiverComponent() {}
// Cross Module References
	OSC_API UFunction* Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OSC();
	OSC_API UScriptStruct* Z_Construct_UScriptStruct_FOscDataElemStruct();
	OSC_API UClass* Z_Construct_UClass_UOscReceiverComponent_NoRegister();
	OSC_API UClass* Z_Construct_UClass_UOscReceiverComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature()
	{
		struct _Script_OSC_eventComponentOscReceivedSignature_Parms
		{
			FName Address;
			TArray<FOscDataElemStruct> Data;
			FString SenderIp;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenderIp_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_SenderIp = { UE4CodeGen_Private::EPropertyClass::Str, "SenderIp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_OSC_eventComponentOscReceivedSignature_Parms, SenderIp), METADATA_PARAMS(NewProp_SenderIp_MetaData, ARRAY_COUNT(NewProp_SenderIp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data = { UE4CodeGen_Private::EPropertyClass::Array, "Data", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(_Script_OSC_eventComponentOscReceivedSignature_Parms, Data), METADATA_PARAMS(NewProp_Data_MetaData, ARRAY_COUNT(NewProp_Data_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Data", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FOscDataElemStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Address_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Address = { UE4CodeGen_Private::EPropertyClass::Name, "Address", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(_Script_OSC_eventComponentOscReceivedSignature_Parms, Address), METADATA_PARAMS(NewProp_Address_MetaData, ARRAY_COUNT(NewProp_Address_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SenderIp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Data,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Data_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Address,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/Receive/OscReceiverComponent.h" },
				{ "ToolTip", "declare the OnOscReceived event type" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OSC, "ComponentOscReceivedSignature__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_OSC_eventComponentOscReceivedSignature_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void UOscReceiverComponent::StaticRegisterNativesUOscReceiverComponent()
	{
	}
	UClass* Z_Construct_UClass_UOscReceiverComponent_NoRegister()
	{
		return UOscReceiverComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UOscReceiverComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_OSC,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "OSC" },
				{ "IncludePath", "Receive/OscReceiverComponent.h" },
				{ "ModuleRelativePath", "Public/Receive/OscReceiverComponent.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnOscReceived_MetaData[] = {
				{ "Category", "OSC" },
				{ "ModuleRelativePath", "Public/Receive/OscReceiverComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOscReceived = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnOscReceived", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UOscReceiverComponent, OnOscReceived), Z_Construct_UDelegateFunction_OSC_ComponentOscReceivedSignature__DelegateSignature, METADATA_PARAMS(NewProp_OnOscReceived_MetaData, ARRAY_COUNT(NewProp_OnOscReceived_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddressFilter_MetaData[] = {
				{ "Category", "OSC" },
				{ "ModuleRelativePath", "Public/Receive/OscReceiverComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_AddressFilter = { UE4CodeGen_Private::EPropertyClass::Str, "AddressFilter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UOscReceiverComponent, AddressFilter), METADATA_PARAMS(NewProp_AddressFilter_MetaData, ARRAY_COUNT(NewProp_AddressFilter_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnOscReceived,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_AddressFilter,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UOscReceiverComponent>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UOscReceiverComponent::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(UOscReceiverComponent, 3402212564);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOscReceiverComponent(Z_Construct_UClass_UOscReceiverComponent, &UOscReceiverComponent::StaticClass, TEXT("/Script/OSC"), TEXT("UOscReceiverComponent"), false, nullptr, nullptr, nullptr);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

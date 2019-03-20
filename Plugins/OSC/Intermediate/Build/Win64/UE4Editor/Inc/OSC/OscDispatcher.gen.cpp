// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/OscPrivatePCH.h"
#include "Private/Receive/OscDispatcher.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOscDispatcher() {}
// Cross Module References
	OSC_API UClass* Z_Construct_UClass_UOscDispatcher_NoRegister();
	OSC_API UClass* Z_Construct_UClass_UOscDispatcher();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_OSC();
// End Cross Module References
	void UOscDispatcher::StaticRegisterNativesUOscDispatcher()
	{
	}
	UClass* Z_Construct_UClass_UOscDispatcher_NoRegister()
	{
		return UOscDispatcher::StaticClass();
	}
	UClass* Z_Construct_UClass_UOscDispatcher()
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
				{ "IncludePath", "Receive/OscDispatcher.h" },
				{ "ModuleRelativePath", "Private/Receive/OscDispatcher.h" },
				{ "ToolTip", "Singleton that dispatches the OSC messages to listeners." },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UOscDispatcher>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UOscDispatcher::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(UOscDispatcher, 1001361534);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOscDispatcher(Z_Construct_UClass_UOscDispatcher, &UOscDispatcher::StaticClass, TEXT("/Script/OSC"), TEXT("UOscDispatcher"), false, nullptr, nullptr, nullptr);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

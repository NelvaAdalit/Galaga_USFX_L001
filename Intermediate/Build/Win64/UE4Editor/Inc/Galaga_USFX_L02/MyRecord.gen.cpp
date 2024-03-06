// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L02/MyRecord.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyRecord() {}
// Cross Module References
	GALAGA_USFX_L02_API UClass* Z_Construct_UClass_AMyRecord_NoRegister();
	GALAGA_USFX_L02_API UClass* Z_Construct_UClass_AMyRecord();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L02();
// End Cross Module References
	void AMyRecord::StaticRegisterNativesAMyRecord()
	{
	}
	UClass* Z_Construct_UClass_AMyRecord_NoRegister()
	{
		return AMyRecord::StaticClass();
	}
	struct Z_Construct_UClass_AMyRecord_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyRecord_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyRecord_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyRecord.h" },
		{ "ModuleRelativePath", "MyRecord.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyRecord_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyRecord>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyRecord_Statics::ClassParams = {
		&AMyRecord::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyRecord_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyRecord_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyRecord()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyRecord_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyRecord, 3677449911);
	template<> GALAGA_USFX_L02_API UClass* StaticClass<AMyRecord>()
	{
		return AMyRecord::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyRecord(Z_Construct_UClass_AMyRecord, &AMyRecord::StaticClass, TEXT("/Script/Galaga_USFX_L02"), TEXT("AMyRecord"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyRecord);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

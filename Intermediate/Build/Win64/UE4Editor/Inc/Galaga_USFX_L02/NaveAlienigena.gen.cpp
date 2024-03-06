// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L02/NaveAlienigena.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveAlienigena() {}
// Cross Module References
	GALAGA_USFX_L02_API UClass* Z_Construct_UClass_ANaveAlienigena_NoRegister();
	GALAGA_USFX_L02_API UClass* Z_Construct_UClass_ANaveAlienigena();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L02();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ANaveAlienigena::StaticRegisterNativesANaveAlienigena()
	{
	}
	UClass* Z_Construct_UClass_ANaveAlienigena_NoRegister()
	{
		return ANaveAlienigena::StaticClass();
	}
	struct Z_Construct_UClass_ANaveAlienigena_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Navealienigenamesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Navealienigenamesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveAlienigena_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveAlienigena_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaveAlienigena.h" },
		{ "ModuleRelativePath", "NaveAlienigena.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveAlienigena_Statics::NewProp_Navealienigenamesh_MetaData[] = {
		{ "Category", "NaveAlienigena" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NaveAlienigena.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaveAlienigena_Statics::NewProp_Navealienigenamesh = { "Navealienigenamesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveAlienigena, Navealienigenamesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANaveAlienigena_Statics::NewProp_Navealienigenamesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveAlienigena_Statics::NewProp_Navealienigenamesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveAlienigena_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveAlienigena_Statics::NewProp_Navealienigenamesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveAlienigena_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveAlienigena>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveAlienigena_Statics::ClassParams = {
		&ANaveAlienigena::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveAlienigena_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveAlienigena_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveAlienigena_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveAlienigena_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveAlienigena()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveAlienigena_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveAlienigena, 1703745422);
	template<> GALAGA_USFX_L02_API UClass* StaticClass<ANaveAlienigena>()
	{
		return ANaveAlienigena::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveAlienigena(Z_Construct_UClass_ANaveAlienigena, &ANaveAlienigena::StaticClass, TEXT("/Script/Galaga_USFX_L02"), TEXT("ANaveAlienigena"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveAlienigena);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

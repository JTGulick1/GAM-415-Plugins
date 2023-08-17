// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/CubeActorRMC.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCubeActorRMC() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_ACubeActorRMC_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_ACubeActorRMC();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MyProject();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshComponentStatic_NoRegister();
// End Cross Module References
	void ACubeActorRMC::StaticRegisterNativesACubeActorRMC()
	{
	}
	UClass* Z_Construct_UClass_ACubeActorRMC_NoRegister()
	{
		return ACubeActorRMC::StaticClass();
	}
	struct Z_Construct_UClass_ACubeActorRMC_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cube1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cube1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACubeActorRMC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeActorRMC_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CubeActorRMC.h" },
		{ "ModuleRelativePath", "CubeActorRMC.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeActorRMC_Statics::NewProp_cube1_MetaData[] = {
		{ "Category", "CubeActorRMC" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CubeActorRMC.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACubeActorRMC_Statics::NewProp_cube1 = { "cube1", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACubeActorRMC, cube1), Z_Construct_UClass_URuntimeMeshComponentStatic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACubeActorRMC_Statics::NewProp_cube1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACubeActorRMC_Statics::NewProp_cube1_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACubeActorRMC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubeActorRMC_Statics::NewProp_cube1,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACubeActorRMC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACubeActorRMC>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACubeActorRMC_Statics::ClassParams = {
		&ACubeActorRMC::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACubeActorRMC_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACubeActorRMC_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACubeActorRMC_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACubeActorRMC_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACubeActorRMC()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACubeActorRMC_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACubeActorRMC, 2142618202);
	template<> MYPROJECT_API UClass* StaticClass<ACubeActorRMC>()
	{
		return ACubeActorRMC::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACubeActorRMC(Z_Construct_UClass_ACubeActorRMC, &ACubeActorRMC::StaticClass, TEXT("/Script/MyProject"), TEXT("ACubeActorRMC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACubeActorRMC);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

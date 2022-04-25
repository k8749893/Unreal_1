// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "project_2_01/project_2_01GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeproject_2_01GameModeBase() {}
// Cross Module References
	PROJECT_2_01_API UClass* Z_Construct_UClass_Aproject_2_01GameModeBase_NoRegister();
	PROJECT_2_01_API UClass* Z_Construct_UClass_Aproject_2_01GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_project_2_01();
// End Cross Module References
	void Aproject_2_01GameModeBase::StaticRegisterNativesAproject_2_01GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_Aproject_2_01GameModeBase_NoRegister()
	{
		return Aproject_2_01GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_Aproject_2_01GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aproject_2_01GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_project_2_01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aproject_2_01GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "project_2_01GameModeBase.h" },
		{ "ModuleRelativePath", "project_2_01GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aproject_2_01GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aproject_2_01GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aproject_2_01GameModeBase_Statics::ClassParams = {
		&Aproject_2_01GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_Aproject_2_01GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Aproject_2_01GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aproject_2_01GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Aproject_2_01GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Aproject_2_01GameModeBase, 581572593);
	template<> PROJECT_2_01_API UClass* StaticClass<Aproject_2_01GameModeBase>()
	{
		return Aproject_2_01GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aproject_2_01GameModeBase(Z_Construct_UClass_Aproject_2_01GameModeBase, &Aproject_2_01GameModeBase::StaticClass, TEXT("/Script/project_2_01"), TEXT("Aproject_2_01GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aproject_2_01GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

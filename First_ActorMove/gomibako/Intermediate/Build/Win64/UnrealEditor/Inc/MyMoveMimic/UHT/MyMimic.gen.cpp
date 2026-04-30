// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyMoveMimic/MyMimic.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeMyMimic() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
MYMOVEMIMIC_API UClass* Z_Construct_UClass_AMyMimic();
MYMOVEMIMIC_API UClass* Z_Construct_UClass_AMyMimic_NoRegister();
UPackage* Z_Construct_UPackage__Script_MyMoveMimic();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMyMimic *****************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AMyMimic;
UClass* AMyMimic::GetPrivateStaticClass()
{
	using TClass = AMyMimic;
	if (!Z_Registration_Info_UClass_AMyMimic.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("MyMimic"),
			Z_Registration_Info_UClass_AMyMimic.InnerSingleton,
			StaticRegisterNativesAMyMimic,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AMyMimic.InnerSingleton;
}
UClass* Z_Construct_UClass_AMyMimic_NoRegister()
{
	return AMyMimic::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMyMimic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyMimic.h" },
		{ "ModuleRelativePath", "MyMimic.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class AMyMimic constinit property declarations *********************************
// ********** End Class AMyMimic constinit property declarations ***********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyMimic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AMyMimic_Statics
UObject* (*const Z_Construct_UClass_AMyMimic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MyMoveMimic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyMimic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyMimic_Statics::ClassParams = {
	&AMyMimic::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyMimic_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyMimic_Statics::Class_MetaDataParams)
};
void AMyMimic::StaticRegisterNativesAMyMimic()
{
}
UClass* Z_Construct_UClass_AMyMimic()
{
	if (!Z_Registration_Info_UClass_AMyMimic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyMimic.OuterSingleton, Z_Construct_UClass_AMyMimic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyMimic.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AMyMimic);
AMyMimic::~AMyMimic() {}
// ********** End Class AMyMimic *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_kimis_Desktop_Unreal_class_Unreal_mission_First_ActorMove_MyMoveMimic_Source_MyMoveMimic_MyMimic_h__Script_MyMoveMimic_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyMimic, AMyMimic::StaticClass, TEXT("AMyMimic"), &Z_Registration_Info_UClass_AMyMimic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyMimic), 790667733U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_kimis_Desktop_Unreal_class_Unreal_mission_First_ActorMove_MyMoveMimic_Source_MyMoveMimic_MyMimic_h__Script_MyMoveMimic_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kimis_Desktop_Unreal_class_Unreal_mission_First_ActorMove_MyMoveMimic_Source_MyMoveMimic_MyMimic_h__Script_MyMoveMimic_3208388122{
	TEXT("/Script/MyMoveMimic"),
	Z_CompiledInDeferFile_FID_Users_kimis_Desktop_Unreal_class_Unreal_mission_First_ActorMove_MyMoveMimic_Source_MyMoveMimic_MyMimic_h__Script_MyMoveMimic_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kimis_Desktop_Unreal_class_Unreal_mission_First_ActorMove_MyMoveMimic_Source_MyMoveMimic_MyMimic_h__Script_MyMoveMimic_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GreatestHunt/Public/Data/ActorStructDataType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorStructDataType() {}

// Begin Cross Module References
GREATESTHUNT_API UEnum* Z_Construct_UEnum_GreatestHunt_ECharacterActionType();
GREATESTHUNT_API UEnum* Z_Construct_UEnum_GreatestHunt_ENPCState();
GREATESTHUNT_API UEnum* Z_Construct_UEnum_GreatestHunt_EWeaponType();
UPackage* Z_Construct_UPackage__Script_GreatestHunt();
// End Cross Module References

// Begin Enum EWeaponType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeaponType;
static UEnum* EWeaponType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWeaponType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWeaponType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GreatestHunt_EWeaponType, (UObject*)Z_Construct_UPackage__Script_GreatestHunt(), TEXT("EWeaponType"));
	}
	return Z_Registration_Info_UEnum_EWeaponType.OuterSingleton;
}
template<> GREATESTHUNT_API UEnum* StaticEnum<EWeaponType>()
{
	return EWeaponType_StaticEnum();
}
struct Z_Construct_UEnum_GreatestHunt_EWeaponType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DoubleSword.DisplayName", "DoubleSword" },
		{ "DoubleSword.Name", "EWeaponType::DoubleSword" },
		{ "IsBlueprintBase", "true" },
		{ "Katana.DisplayName", "Katana" },
		{ "Katana.Name", "EWeaponType::Katana" },
		{ "ModuleRelativePath", "Public/Data/ActorStructDataType.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWeaponType::Katana", (int64)EWeaponType::Katana },
		{ "EWeaponType::DoubleSword", (int64)EWeaponType::DoubleSword },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GreatestHunt_EWeaponType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GreatestHunt,
	nullptr,
	"EWeaponType",
	"EWeaponType",
	Z_Construct_UEnum_GreatestHunt_EWeaponType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GreatestHunt_EWeaponType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GreatestHunt_EWeaponType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GreatestHunt_EWeaponType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GreatestHunt_EWeaponType()
{
	if (!Z_Registration_Info_UEnum_EWeaponType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeaponType.InnerSingleton, Z_Construct_UEnum_GreatestHunt_EWeaponType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWeaponType.InnerSingleton;
}
// End Enum EWeaponType

// Begin Enum ECharacterActionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharacterActionType;
static UEnum* ECharacterActionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECharacterActionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECharacterActionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GreatestHunt_ECharacterActionType, (UObject*)Z_Construct_UPackage__Script_GreatestHunt(), TEXT("ECharacterActionType"));
	}
	return Z_Registration_Info_UEnum_ECharacterActionType.OuterSingleton;
}
template<> GREATESTHUNT_API UEnum* StaticEnum<ECharacterActionType>()
{
	return ECharacterActionType_StaticEnum();
}
struct Z_Construct_UEnum_GreatestHunt_ECharacterActionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Attacking.DisplayName", "Attacking" },
		{ "Attacking.Name", "ECharacterActionType::Attacking" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/ActorStructDataType.h" },
		{ "NotAttacking.DisplayName", "NotAttacking" },
		{ "NotAttacking.Name", "ECharacterActionType::NotAttacking" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECharacterActionType::NotAttacking", (int64)ECharacterActionType::NotAttacking },
		{ "ECharacterActionType::Attacking", (int64)ECharacterActionType::Attacking },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GreatestHunt_ECharacterActionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GreatestHunt,
	nullptr,
	"ECharacterActionType",
	"ECharacterActionType",
	Z_Construct_UEnum_GreatestHunt_ECharacterActionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GreatestHunt_ECharacterActionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GreatestHunt_ECharacterActionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GreatestHunt_ECharacterActionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GreatestHunt_ECharacterActionType()
{
	if (!Z_Registration_Info_UEnum_ECharacterActionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharacterActionType.InnerSingleton, Z_Construct_UEnum_GreatestHunt_ECharacterActionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECharacterActionType.InnerSingleton;
}
// End Enum ECharacterActionType

// Begin Enum ENPCState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENPCState;
static UEnum* ENPCState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENPCState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENPCState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GreatestHunt_ENPCState, (UObject*)Z_Construct_UPackage__Script_GreatestHunt(), TEXT("ENPCState"));
	}
	return Z_Registration_Info_UEnum_ENPCState.OuterSingleton;
}
template<> GREATESTHUNT_API UEnum* StaticEnum<ENPCState>()
{
	return ENPCState_StaticEnum();
}
struct Z_Construct_UEnum_GreatestHunt_ENPCState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AttackTriggered.DisplayName", "AttackTriggered" },
		{ "AttackTriggered.Name", "AttackTriggered" },
		{ "BlueprintType", "true" },
		{ "Idle.DisplayName", "Idle" },
		{ "Idle.Name", "Idle" },
		{ "ModuleRelativePath", "Public/Data/ActorStructDataType.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "Idle", (int64)Idle },
		{ "AttackTriggered", (int64)AttackTriggered },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GreatestHunt_ENPCState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GreatestHunt,
	nullptr,
	"ENPCState",
	"ENPCState",
	Z_Construct_UEnum_GreatestHunt_ENPCState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GreatestHunt_ENPCState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GreatestHunt_ENPCState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GreatestHunt_ENPCState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GreatestHunt_ENPCState()
{
	if (!Z_Registration_Info_UEnum_ENPCState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENPCState.InnerSingleton, Z_Construct_UEnum_GreatestHunt_ENPCState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENPCState.InnerSingleton;
}
// End Enum ENPCState

// Begin Registration
struct Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_Data_ActorStructDataType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWeaponType_StaticEnum, TEXT("EWeaponType"), &Z_Registration_Info_UEnum_EWeaponType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 534430365U) },
		{ ECharacterActionType_StaticEnum, TEXT("ECharacterActionType"), &Z_Registration_Info_UEnum_ECharacterActionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1062170452U) },
		{ ENPCState_StaticEnum, TEXT("ENPCState"), &Z_Registration_Info_UEnum_ENPCState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 178934282U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_Data_ActorStructDataType_h_3257807742(TEXT("/Script/GreatestHunt"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_Data_ActorStructDataType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GreatestHunt_Source_GreatestHunt_Public_Data_ActorStructDataType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

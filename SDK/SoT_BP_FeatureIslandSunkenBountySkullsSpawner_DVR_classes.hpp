#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_FeatureIslandSunkenBountySkullsSpawner_DVR_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FeatureIslandSunkenBountySkullsSpawner_DVR.BP_FeatureIslandSunkenBountySkullsSpawner_DVR_C
// 0x0000 (0x0500 - 0x0500)
class UBP_FeatureIslandSunkenBountySkullsSpawner_DVR_C : public USalvageItemSpawnComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_FeatureIslandSunkenBountySkullsSpawner_DVR.BP_FeatureIslandSunkenBountySkullsSpawner_DVR_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ResourceIslandWashedUpMessageInABottleSpawner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ResourceIslandWashedUpMessageInABottleSpawner.BP_ResourceIslandWashedUpMessageInABottleSpawner_C
// 0x0000 (0x0500 - 0x0500)
class UBP_ResourceIslandWashedUpMessageInABottleSpawner_C : public USalvageItemSpawnComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_ResourceIslandWashedUpMessageInABottleSpawner.BP_ResourceIslandWashedUpMessageInABottleSpawner_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ShipwreckTreasureChest_Proxy_Legendary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShipwreckTreasureChest_Proxy_Legendary.BP_ShipwreckTreasureChest_Proxy_Legendary_C
// 0x0000 (0x09C8 - 0x09C8)
class ABP_ShipwreckTreasureChest_Proxy_Legendary_C : public ABP_TreasureChestProxy_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShipwreckTreasureChest_Proxy_Legendary.BP_ShipwreckTreasureChest_Proxy_Legendary_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
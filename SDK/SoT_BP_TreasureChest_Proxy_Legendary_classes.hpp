#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TreasureChest_Proxy_Legendary_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TreasureChest_Proxy_Legendary.BP_TreasureChest_Proxy_Legendary_C
// 0x0000 (0x0980 - 0x0980)
class ABP_TreasureChest_Proxy_Legendary_C : public ABP_TreasureChestProxy_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_TreasureChest_Proxy_Legendary.BP_TreasureChest_Proxy_Legendary_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_TreasureChest_ItemInfo_Weeping_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TreasureChest_ItemInfo_Weeping.BP_TreasureChest_ItemInfo_Weeping_C
// 0x0008 (0x05E8 - 0x05E0)
class ABP_TreasureChest_ItemInfo_Weeping_C : public AWeepingChestItemInfo
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x05E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_TreasureChest_ItemInfo_Weeping.BP_TreasureChest_ItemInfo_Weeping_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

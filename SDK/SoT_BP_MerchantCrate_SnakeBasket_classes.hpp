#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MerchantCrate_SnakeBasket_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MerchantCrate_SnakeBasket.BP_MerchantCrate_SnakeBasket_C
// 0x0008 (0x07E8 - 0x07E0)
class ABP_MerchantCrate_SnakeBasket_C : public AMerchantCrate
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x07E0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MerchantCrate_SnakeBasket.BP_MerchantCrate_SnakeBasket_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
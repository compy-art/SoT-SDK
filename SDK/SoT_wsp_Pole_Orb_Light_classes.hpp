#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_wsp_Pole_Orb_Light_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass wsp_Pole_Orb_Light.wsp_Pole_Orb_Light_C
// 0x0040 (0x04B0 - 0x0470)
class Awsp_Pole_Orb_Light_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0470(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass wsp_Pole_Orb_Light.wsp_Pole_Orb_Light_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
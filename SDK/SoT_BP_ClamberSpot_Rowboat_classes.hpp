#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ClamberSpot_Rowboat_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ClamberSpot_Rowboat.BP_ClamberSpot_Rowboat_C
// 0x0000 (0x06B0 - 0x06B0)
class ABP_ClamberSpot_Rowboat_C : public ABP_BaseClamberSpot_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_ClamberSpot_Rowboat.BP_ClamberSpot_Rowboat_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_liv_makeupClothingCategory_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass liv_makeupClothingCategory.Liv_MakeupClothingCategory_C
// 0x0000 (0x0078 - 0x0078)
class ULiv_MakeupClothingCategory_C : public UClothingCategory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass liv_makeupClothingCategory.Liv_MakeupClothingCategory_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
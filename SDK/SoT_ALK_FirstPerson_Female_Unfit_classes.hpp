#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_ALK_FirstPerson_Female_Unfit_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ALK_FirstPerson_Female_Unfit.ALK_FirstPerson_Female_Unfit_C
// 0x0000 (0x0028 - 0x0028)
class UALK_FirstPerson_Female_Unfit_C : public UAnimationDataStoreId
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ALK_FirstPerson_Female_Unfit.ALK_FirstPerson_Female_Unfit_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
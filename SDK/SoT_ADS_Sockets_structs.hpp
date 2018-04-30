#pragma once

// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_Basic.hpp"
#include "SoT_Athena_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// AnimDataEntryStruct ADS_Sockets.ADS_Sockets
// 0x0002
struct FADS_Sockets
{
	TEnumAsByte<EAthenaAnimationSocketGroupCharacterSize> HipStashSocket_11_2893BE234613BF11CA9E87BDEC3F8FBC;       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1E2];                                     // 0x0001(0x01E2) MISSED OFFSET
	TEnumAsByte<EAthenaAnimationSocketGroup>           ControllableHandSocketGroup_4_E2B44462485C20DD896BBF943561D191;// 0x01E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
// Sea of Thieves (1.0.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_bsp_palm_cluster_02_b_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bsp_palm_cluster_02_b.bsp_palm_cluster_02_b_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Absp_palm_cluster_02_b_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bsp_palm_cluster_02_b.bsp_palm_cluster_02_b_C.UserConstructionScript");

	Absp_palm_cluster_02_b_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_ActorGlow_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ActorGlow.BP_ActorGlow_C
// 0x0030 (0x04C8 - 0x0498)
class ABP_ActorGlow_C : public ALandmarkReactionActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0498(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UMaterialInstanceDynamic*>            DecalMaterials;                                           // 0x04A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Reveal_Duration;                                          // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04BC(0x0004) MISSED OFFSET
	class ABP_StepsTrigger_C*                          StepsTriggerActor;                                        // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_ActorGlow.BP_ActorGlow_C");
		return ptr;
	}


	void StartGlowEffect();
	bool StartReaction();
	bool StopReaction();
	void CollectDecalMaterials();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ActorGlow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

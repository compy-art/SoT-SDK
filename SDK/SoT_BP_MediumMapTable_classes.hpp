#pragma once

// Sea of Thieves (1.4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SoT_BP_MediumMapTable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MediumMapTable.BP_MediumMapTable_C
// 0x0045 (0x06AD - 0x0668)
class ABP_MediumMapTable_C : public AMapTable
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0668(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                        ControlPoint_4;                                           // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ControlPoint_3;                                           // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ControlPoint_2;                                           // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ControlPoint_1;                                           // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTextureFeedbackComponent*                   TextureFeedback;                                          // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Cube;                                                     // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Map;                                                      // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ActiveRange;                                              // 0x06A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsActive;                                                 // 0x06AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass BP_MediumMapTable.BP_MediumMapTable_C");
		return ptr;
	}


	void UpdateBlurEffect();
	struct FVector GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SetEffectActiveWhenClose();
	void OnMapActivate(bool IsMapActive, class UTextureRenderTarget2D* Texture);
	void OnMapMove(const struct FVector2D& CentreLocation, const struct FVector2D& ZoomLevel);
	void ExecuteUbergraph_BP_MediumMapTable(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

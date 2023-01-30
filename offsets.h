#pragma once
namespace Offsets
{
	constexpr auto
		Key = 0x9094F78, //uworld_key 
		State = 0x9094F40,  //uworld_state 
		ProcessEvent = 0x336A1F0,
		StaticFindObject = 0x33A8400,
		TriggerVEH = 0x1BA1AA0,
		GetActorBounds = 0x47B95A0;  //void GetActorBounds(bool bOnlyCollidingComponents, struct FVector& Origin, struct FVector& BoxExtent, bool bIncludeFromChildActors); // Function Engine.Actor.GetActorBounds // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
}

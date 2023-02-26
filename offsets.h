#pragma once
namespace Offsets
{
	constexpr auto
		
		State = 0x9182500,  //uworld_state 
                Key = State + 0x38, //uworld_key 
		ProcessEvent = 0x3405390,
		StaticFindObject = 0x34435A0,
		TriggerVEH = 0x1C15C00,
                ProjectToWorld = 0x4BD4300,
		GetActorBounds = 0x486CC80;  //void GetActorBounds(bool bOnlyCollidingComponents, struct FVector& Origin, struct FVector& BoxExtent, bool bIncludeFromChildActors); // Function Engine.Actor.GetActorBounds // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
}

#pragma once
namespace Offsets
{
	constexpr auto
		
		State = 0x912B300,  //uworld_state 
                Key = State + 0x38, //uworld_key 
		ProcessEvent = 0x33D1230,
		StaticFindObject = 0x340F440,
		TriggerVEH = 0x1BF5BC0,
                ProjectToWorld = 0x4BA0050,
		GetActorBounds = 0x4838720;  //void GetActorBounds(bool bOnlyCollidingComponents, struct FVector& Origin, struct FVector& BoxExtent, bool bIncludeFromChildActors); // Function Engine.Actor.GetActorBounds // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const)
}

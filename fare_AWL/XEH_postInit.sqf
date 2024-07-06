//------------------------------------------------------------------------------------
// XEH_postInit.sqf
// Initializes AWL
// author: thoreaufare
//------------------------------------------------------------------------------------

//TODO add debug flag?

//make sure we have a player, not a server or HC
if (!hasInterface) exitWith {};

//player initialization
[{(!isNull player) && !(isNull (findDisplay 46))}, 
{
	//TODO check if player is virtual, if so, don't start script

	//update eventhandlers
	call fare_fnc_setupHandlers;

	//run auto lower on mission start
	[animationState player] call fare_fnc_autoLower;
}] call CBA_fnc_waitUntilAndExecute;





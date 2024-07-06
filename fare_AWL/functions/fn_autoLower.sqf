//------------------------------------------------------------------------------------
// fn_autoLower.sqf
// Checks conditons and then lowers weapon if conditions met
// author: thoreaufare
//------------------------------------------------------------------------------------
	
//Main detection logic for AWL
//Only want one instance of this script running at a time
if (!(player getVariable "fare_script_running")) then {
	player setVariable["fare_script_running", true];
	//if we don't meet conditions, check for shooting/firedNear delay then quit
	//if we do meet the conditions for default delay time, call lowerWeapon function
	[{
		([animationState player] call fare_fnc_checkConditions) isEqualTo false;
	},
	{	
		player setVariable["fare_script_running", false];
	},
	[],
	FARE_DELAY_DEFAULT,
	{
		call fare_fnc_lowerWeapon;
		player setVariable["fare_script_running", false];
	}] call CBA_fnc_waitUntilAndExecute;
};

//------------------------------------------------------------------------------------
// fn_speedUp.sqf
// Speeds up lower and raise animation
// params: [_anim]
// _anim: STRING (animation state)
// returns: nothing
// author: thoreaufare
//------------------------------------------------------------------------------------
params ["_anim"];

//Only want one instance of this script running at a time
if (!(player getVariable "fare_speedup_running")) then {
	player setVariable["fare_speedup_running", true];
	//checks weapon raise, lower, and gear animations
	if ((FARE_lowerAnimations findIf {_x == _anim} != -1 && {FARE_ANIM_RAISE})
	|| {FARE_raiseAnimations findIf {_x == _anim} != -1 && {FARE_ANIM_LOWER}}
	|| {FARE_inventoryAnimations findIf {_x == _anim} != -1}) then {
		//save previous speed so we can restore it once speedup is through
		_prevSpeed = getAnimSpeedCoef player;
		[_anim, _prevSpeed] spawn {
			params ["_anim", "_prevSpeed"];
			while {animationState player == _anim} do {
				player setAnimSpeedCoef FARE_ANIM_SPEEDUP;
			};
			player setAnimSpeedCoef _prevSpeed;
			player setVariable["fare_speedup_running", false];
		};
	} else {
		player setVariable["fare_speedup_running", false];
	};
};
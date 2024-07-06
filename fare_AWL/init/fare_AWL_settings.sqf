//------------------------------------------------------------------------------------
// fare_AWL_settings.sqf
// Sets up user-configurable AWL settings through CBA
// author: thoreaufare
//------------------------------------------------------------------------------------

//TODO remove handlers when disabled, add them back when enabled?
[
	"FARE_ENABLED",
	"CHECKBOX",
	"Master Enable",
	"Auto Weapon Lower",
	true,
	nil,
	{ }
] call CBA_Settings_fnc_init;

[
	"FARE_CHECK_HANDGUN",
	"CHECKBOX",
	"Lower Handguns? ",
	"Auto Weapon Lower",
	true,
	nil,
	{ }
] call CBA_Settings_fnc_init;

//default delay before weapon is lowered
[
	"FARE_DELAY_DEFAULT",
	"SLIDER",
	"Default (in seconds) ",
	["Auto Weapon Lower", "Delays"],
	[0.1, 15, 2, 1],
	nil,
	{ }
] call CBA_Settings_fnc_init;

//delay to lowering weapon added from shooting
[
	"FARE_DELAY_SHOOT",
	"SLIDER",
	"Shooting Delay (in seconds) ",
	["Auto Weapon Lower", "Delays"],
	[1, 60, 3, 1],
	nil,
	{ }
] call CBA_Settings_fnc_init;

//delay to lowering weapon added from firedNear
[
	"FARE_DELAY_NEAR",
	"SLIDER",
	"Fired Near Delay (in seconds) ",
	["Auto Weapon Lower", "Delays"],
	[0, 60, 0, 1],
	nil,
	{ }
] call CBA_Settings_fnc_init;

//daytime brightness threshold for auto disabling flashlight/laser check
[
	"FARE_DELAY_DAYTIME",
	"SLIDER",
	"Daytime threshold (0 is night, 1 is day) ",
	["Auto Weapon Lower", "Delays"],
	[0, 1, 0.8, 1],
	nil,
	{ }
] call CBA_Settings_fnc_init;

//distance for firedNear check
[
	"FARE_DISTANCE_FIRED",
	"SLIDER",
	"Fired Near Distance (in meters) ",
	["Auto Weapon Lower", "Delays"],
	[0, 69, 10, 0],
	nil,
	{ }
] call CBA_Settings_fnc_init;

//restore weapon state after accessing inventory
[
	"FARE_STATE_GEAR",
	"CHECKBOX",
	"Restore weapon state after closing inventory? ",
	["Auto Weapon Lower", "States"],
	true,
	nil,
	{ }
] call CBA_Settings_fnc_init;

//restore weapon state after medical
[
	"FARE_STATE_MEDICAL",
	"CHECKBOX",
	"Restore weapon state after medical? ",
	["Auto Weapon Lower", "States"],
	true,
	nil,
	{ }
] call CBA_Settings_fnc_init;

//lower weapon if ACE medical menu open
[
	"FARE_STATE_ACE_MENU",
	"CHECKBOX",
	"Auto lower when ACE medical menu open? ",
	["Auto Weapon Lower", "States"],
	true,
	nil,
	{ }
] call CBA_Settings_fnc_init;

//disable check for flashlight/laser during daytime
[
	"FARE_STATE_DAYTIME",
	"CHECKBOX",
	"Auto disable flashlight/laser check during daytime? ",
	["Auto Weapon Lower", "States"],
	true,
	nil,
	{ }
] call CBA_Settings_fnc_init;

/*
//reset all variables and stance if manually lowering weapon
[
	"FARE_STATE_RESET",
	"CHECKBOX",
	"Reset AWL by manually lowering? (Alleviates bugs) ",
	["Auto Weapon Lower", "States"],
	true,
	nil,
	{ }
] call CBA_Settings_fnc_init;
*/

//enable/disable check for movement
[
	"FARE_CHECK_MOVE",
	"CHECKBOX",
	"Moving (Recommended: On) ",
	["Auto Weapon Lower", "Checks"],
	true,
	nil,
	{ }
] call CBA_Settings_fnc_init;

//enable/disable check for weapon resting
[
	"FARE_CHECK_REST",
	"CHECKBOX",
	"Weapon resting ",
	["Auto Weapon Lower", "Checks"],
	true,
	nil,
	{ }
] call CBA_Settings_fnc_init;

//enable/disable check for shooting
[
	"FARE_CHECK_SHOOT",
	"CHECKBOX",
	"Shooting (Recommended: On) ",
	["Auto Weapon Lower", "Checks"],
	true,
	nil,
	{ }
] call CBA_Settings_fnc_init;

//enable/disable check for shooting
[
	"FARE_CHECK_NEAR",
	"CHECKBOX",
	"Fired Near ",
	["Auto Weapon Lower", "Checks"],
	false,
	nil,
	{ }
] call CBA_Settings_fnc_init;

//enable/disable check for reloading
[
	"FARE_CHECK_RELOAD",
	"CHECKBOX",
	"Reloading (Recommended: On) ",
	["Auto Weapon Lower", "Checks"],
	true,
	nil,
	{ }
] call CBA_Settings_fnc_init;	

//enable/disable check for aiming down sights
[
	"FARE_CHECK_ADS",
	"CHECKBOX",
	"Aiming down sights (Recommended: On) ",
	["Auto Weapon Lower", "Checks"],
	true,
	nil,
	{ }
] call CBA_Settings_fnc_init;	

//enable/disable check for flashlight
[
	"FARE_CHECK_LIGHT",
	"CHECKBOX",
	"Weapon flashlight (Recommended: On) ",
	["Auto Weapon Lower", "Checks"],
	true,
	nil,
	{ }
] call CBA_Settings_fnc_init;	

//enable/disable check for IR laser
[
	"FARE_CHECK_LASER",
	"CHECKBOX",
	"Weapon laser ",
	["Auto Weapon Lower", "Checks"],
	true,
	nil,
	{ }
] call CBA_Settings_fnc_init;	

//enable/disable check for tactical pace
[
	"FARE_CHECK_TACTICAL",
	"CHECKBOX",
	"Tactical pace ",
	["Auto Weapon Lower", "Checks"],
	true,
	nil,
	{ }
] call CBA_Settings_fnc_init;	

//enable/disable check for walking
[
	"FARE_CHECK_WALK",
	"CHECKBOX",
	"Walking ",
	["Auto Weapon Lower", "Checks"],
	true,
	nil,
	{ }
] call CBA_Settings_fnc_init;	

//enable/disable check for leaning
[
	"FARE_CHECK_LEAN",
	"CHECKBOX",
	"Leaning ",
	["Auto Weapon Lower", "Checks"],
	true,
	nil,
	{ }
] call CBA_Settings_fnc_init;	

/*
//use alt anim instead of default lower?
[
	"FARE_ANIM_ALT",
	"CHECKBOX",
	"Use alternative animation? ",
	["Auto Weapon Lower", "Animation"],
	false,
	nil,
	{ }
] call CBA_Settings_fnc_init;*/

//speed up lowering animation
[
	"FARE_ANIM_LOWER",
	"CHECKBOX",
	"Speed up lowering animation? ",
	["Auto Weapon Lower", "Animation"],
	true,
	nil,
	{ }
] call CBA_Settings_fnc_init;	

//speed up raising animation
[
	"FARE_ANIM_RAISE",
	"CHECKBOX",
	"Speed up raising animation? ",
	["Auto Weapon Lower", "Animation"],
	true,
	nil,
	{ }
] call CBA_Settings_fnc_init;	

//anim speedup speed slider
[
	"FARE_ANIM_SPEEDUP",
	"SLIDER",
	"Animation speed multiplier ",
	["Auto Weapon Lower", "Animation"],
	[1, 2, 1.3, 2],
	nil,
	{ }
] call CBA_Settings_fnc_init;

//Add toggle keybind
[
	"Auto Weapon Lower",
	"FARE_ENABLED_Key",
	"Toggle AWL",
	{
		FARE_ENABLED_TOGGLE = !FARE_ENABLED_TOGGLE;
	},
	{},
	[],
	false
] call CBA_fnc_addKeybind;
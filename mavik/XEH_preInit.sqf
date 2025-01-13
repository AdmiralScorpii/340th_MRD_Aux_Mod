#include "\a3\ui_f\hpp\defineDIKCodes.inc"

[
	"Mavic_showInterface",
	"CHECKBOX",
	["Show Interface","Show/hide interface for Mavic"],
	"Mavic Settings",
	true,
	0,
	{}
] call CBA_fnc_addSetting;

[
	"Mavic_allowDrop",
	"CHECKBOX",
	["Allow Drop","Enable/Disable attaching grenade to mavic and drop it."],
	"Mavic Settings",
	true,
	1,
	{ publicVariable "Mavic_allowDrop" }
] call CBA_fnc_addSetting;

[
	"Mavic_windCoef",
	"SLIDER",
	["Wind coefficient","Wind effect for dropping grenade."],
	"Mavic Settings",
	[0.1/4,0.2,0.1/0.9,2],
	1,
	{ publicVariable "Mavic_windCoef" }
] call CBA_fnc_addSetting;

[
	"Mavic_allowedGrenades",
	"EDITBOX",
	["Allowed Grenades", "Allowed grenades for attach to Mavic."],
	"Mavic Settings",
	"['mavick_M67', 'mavick_V40', 'Mavic_F1', 'Mavic_VOG25', 'Mavic_TBG', 'Mavic_M433']",
	1,
	{ publicVariable "Mavic_allowedGrenades" }
] call CBA_fnc_addSetting;

[
	"Mavic Drop",
	"MavicDropKey",
	["Mavic Drop Key","Used to drop the attached grenades from Mavic."],
	{private _uav = getConnectedUAV player; if !(isNull _uav) then {player call mavic_fnc_checkUAVGrenadeDrop;}; },
	{},
	[DIK_G, [false, false, false]]
] call CBA_fnc_addKeybind;

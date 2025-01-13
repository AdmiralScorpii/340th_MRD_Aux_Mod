//Allows a grenade to be attached to a drone but doesn't spawn one
_drone = param[0];
_number = param[1,1];

_drone addEventHandler ["Disassembled", {
	params ["_entity", "_primaryBag", "_secondaryBag"];
	removeAllActions _entity;
}];

//Loop for multiple grenades
for "_j" from 1 to _number do {
	_dropId = _drone addAction ["<t color='#FF0000'>Attach grenade</t>", {
		_this call mavic_drop_fnc_uiGrenadeSelector;
	}, nil, 10, true, true, "", "!(_this in _target) and (alive _target) and (count (_target getVariable [""grenadeObj"", []]) < 2) and Mavic_allowDrop", 3];

	_detachId = _drone addAction ["<t color='#00FF00'>Detach grenades</t>", {
		_this call mavic_drop_fnc_detach_uiGrenadeSelector;
	}, nil, 10, true, true, "", "!(_this in _target) and (alive _target) and (count (_target getVariable [""grenadeObj"", []]) > 0) and Mavic_allowDrop", 3];
};

_drone addEventHandler ["Killed", {
	params ["_unit", "_killer", "_instigator", "_useEffects"];
	removeAllActions _unit;
	private _iterationGreandes = _unit getVariable ["grenadeObj", []];
	private _count = count _iterationGreandes;
	for "_i" from 0 to _count - 1 do {
		[_unit, true] call mavic_drop_fnc_dropGrenade;
	};
}];

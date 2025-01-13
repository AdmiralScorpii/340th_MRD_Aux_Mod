//
// fn_initDrone.sqf
//
// mavic_drop_fnc_initDrone
//
// Spawns a drone with a grenade attached
//
params ["_drone", "_grenade"];
if (is3DEN) exitWith {};

_grenadeAmmo = getText(configFile >> "CfgMagazines" >> _grenade >> "ammo");
_grenadeLive = getNumber(configFile >> "CfgAmmo" >> _grenadeAmmo >> "timeToLive");

_attachedGrenades = _drone getVariable ["grenadeObj", []];
//private _selection = [[0.35, 0.53, -0.06], [0.43, 0.53, -0.06]] select (count _attachedGrenades > 0);
_selectionMagazine = [[-0.14,0,0.55], [-0.07,0,0.55]] select (count _attachedGrenades > 0);
_selectionAmmo = [[-0.02, 0, -0.04], [0.02, 0, -0.04]] select (count _attachedGrenades > 0);

_holder = objNull;
if (_grenadeLive isEqualTo 1e+10) then {
	_holder = _grenadeAmmo createVehicle [0,0,1000];
	_holder setVectorDirandUp [[0,0,-1],[0.1,0.1,1]];
	_holder attachTo [_drone, _selectionAmmo];
} else {
	_holder = "GroundWeaponHolder_Scripted" createVehicle [0,0,1000];
	_holder addMagazineCargoGlobal [_grenade, 1];
	_holder lockInventory true;
	_holder attachTo [_drone, _selectionMagazine];
	
	[_holder, _drone] spawn {
		params ["_target", "_vehicle"];
		waitUntil {sleep 1; !alive _target || ((magazineCargo _target) isEqualTo [])};
		if (alive _target) exitWith {
			_objAttached = _vehicle getVariable ["grenadeObj", []];
			_objAttached deleteAt (_objAttached findIf {_target in _x});
			_vehicle setVariable ["grenadeObj", _objAttached, true];
			deleteVehicle _target;
		};
	};
};

_attachedGrenades pushBack [_grenade, _holder];
_drone setVariable ["grenadeObj", _attachedGrenades, true];

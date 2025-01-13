//
// fn_dropGrenade.sqf
//
// mavic_drop_fnc_dropGrenade
//
// Spawns projectile(ammo) from magazine on drone and drop it.
//
params [["_caller", player], ["_isForce", false]];

private _drone = objNull;
if (_isForce) then {_drone = _caller} else {_drone = getConnectedUAV _caller;};

if ((typeOf _drone) in ["mavik_3_OPF", "mavik_3_BLU", "mavik_3_IND", "mavik_3_CIV", "mavik_3T_OPF", "mavik_3T_BLU", "mavik_3T_IND", "mavik_3T_CIV"]) then {
	[missionNamespace, "DB_mavic_showMessage", []] call BIS_fnc_callScriptedEventHandler;
};

private _attachedGrenades = _drone getVariable ["grenadeObj", []];
if (_attachedGrenades isEqualTo []) exitWith {false};

//detach old grenade
_dropGrenade = _attachedGrenades select 0;
_holder = _dropGrenade select 1;
_grenade = _dropGrenade select 0;
_grenadeAmmo = getText(configFile >> "CfgMagazines" >> _grenade >> "ammo");

deleteVehicle _holder;
_attachedGrenades deleteAt 0;
_drone setVariable ["grenadeObj", _attachedGrenades, true];

_droneVelocity = velocity _drone;
_wind = wind;
_windEffectMultiplier = (missionNamespace getVariable ["Mavic_windCoef", 0.1/0.9]);
_grenadeMass = (getNumber(configFile >> "CfgAmmo" >> _grenadeAmmo >> "mavic_weight") / 1000) max 0.200;
_scaledWind = [
  (_wind select 0) * _windEffectMultiplier / _grenadeMass, 
  (_wind select 1) * _windEffectMultiplier / _grenadeMass
];

_projectile = _grenadeAmmo createVehicle [0,0,1000];
[_projectile, _drone] remoteExecCall ["disableCollisionWith", 0, _drone];
_projectile setPos (_drone modelToWorld [0, 0, -0.3]);

_projectile setVectorDirandUp [[0,0,-1],[0.1,0.1,1]];
_projectile setVelocity [
	(_droneVelocity select 0) + (_scaledWind select 0),
	(_droneVelocity select 1) + (_scaledWind select 1),
	-3
];

true

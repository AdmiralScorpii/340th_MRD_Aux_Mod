params ["_vehicle", "_gunner"];

private _vehicleCargo = (getMagazineCargo _vehicle) select 0;
private _vehPos = getPosATL _vehicle;

if ("rhs_fgm148_magazine_AT" in _vehicleCargo) then 
{
    if (_gunner != vehicle _gunner) then {
			moveOut _gunner;
			sleep 0.2;
			waitUntil {_gunner == vehicle _gunner};
		};
		_gunner attachTo [_vehicle, [1.3, -0.6, 0.2]];
		_gunner playMove  'rhs_snorkel_mount';
		sleep 20;
		if (_vehicle distance _vehPos > 5) exitwith {hint "Reload fail"; detach _gunner;};
		_gunner playMove  'AinvPknlMstpSlayWrflDnon_medic';
		sleep 4;
		if (_vehicle distance _vehPos > 5) exitwith {hint "Reload fail"; detach _gunner;};
		detach _gunner;
		private _vehicleCargo = (getMagazineCargo _vehicle) select 0;
		if ("rhs_fgm148_magazine_AT" in _vehicleCargo) then {
		[_vehicle, "rhs_fgm148_magazine_AT"] call CBA_fnc_removeMagazineCargo;
		[_vehicle,["FGM148_veh_AT", 1]] remoteExec ["setAmmo",_vehicle];
		} else {hint "No Javelin missiles in vehicle inventory"};
}
else {hint "No Javelin missiles in vehicle inventory"};
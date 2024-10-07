_veh = _this select 0;

[_veh] execVM "bs_bmp_2m\scripts\inWater_bmp2m.sqf";

_ammoCountArr = [];

_p_arr = getAllPylonsInfo _veh;
{
	_p = _x select 1;
	_p_mag = _x select 3;
	_ammoCount = _x select 4;
	_veh setPylonLoadout [_p, _p_mag, true, [0]];
	_ammoCountArr = _ammoCountArr + [_ammoCount];
} foreach _p_arr;

_veh setvariable ['ammoCountArr', _ammoCountArr, true];

_veh removeWeaponTurret ["bs_weap_kornet_d_launcher", [-1]];
_veh removeWeaponTurret ["bs_weap_kornet_d_launcher", [0,0]];
_veh removeWeaponTurret ["atg_weap_ag17", [-1]];
_veh removeWeaponTurret ["atg_weap_ag17", [0,0]];
_veh removeWeaponTurret ["rhs_weap_902a", [-1]];
_veh removeWeaponTurret ["rhs_weap_902a", [0,0]];

{ _veh addWeaponTurret [_x, [-1]]; } foreach (getArray (configFile >> "CfgVehicles" >> typeof _veh >> "weapons"));
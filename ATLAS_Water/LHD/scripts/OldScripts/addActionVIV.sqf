_VIVLHD = _this;
	sleep 0.1;
	hint "addActionVIV sqf has fired";
	for "_j" from 0 to ((count getVehicleCargo _VIVLHD) -1) do
	{
		_LoadedVehicle = getVehicleCargo _VIVLHD select _j;
		_avoidDuplication = _LoadedVehicle removeEventHandler ["CargoUnloaded", 0];
		_VehicleSafeGetout = _LoadedVehicle addEventHandler ["CargoUnloaded", {_this execVM "ATLAS_Water\LHD\scripts\VehicleSafeGetOut.sqf"}];
		for "_i" from 0 to ((count crew _LoadedVehicle) -1) do
		{
			_LoadedMan = crew _LoadedVehicle select _i;
			_avoidDuplication = _LoadedMan removeEventHandler ["GetOutMan", 0];
			_safeGetout = _LoadedMan addEventHandler ["getOutMan", {_this execVM "ATLAS_Water\LHD\scripts\SafeGetOut.sqf"}];
		};
	};
/*
	for "_j" from 0 to ((count getVehicleCargo _VIVLHD) -1) do
	{
		_vehicleCargos = getVehicleCargo _VIVLHD select _j;
		removeAllActions _vehicleCargos;
		_vehicleCargos addAction ["To Starboard elevator",'ATLAS_Water\LHD\scripts\UnloadScript.sqf',nil,1.5,false,true,"",""];
		_vehicleCargos addAction ["To Port elevator",'ATLAS_Water\LHD\scripts\UnloadScriptPort.sqf',nil,1.5,false,true,"",""];
		for "_i" from 0 to ((count crew _vehicleCargos) -1) do
		{
			_LoadedMan = crew _vehicleCargos select _i;
			_avoidDuplication = _LoadedMan removeEventHandler ["GetOutMan", 0];
			_safeGetout = _LoadedMan addEventHandler ["getOutMan", {_this execVM "ATLAS_Water\LHD\scripts\SafeGetOut.sqf"}];
		};
	};
*/
_VIVLHD2 = (_this select 0); // L1
//hint "addCargoUnloadEH sqf has fired"; L2
sleep 0.1; // L3
	for "_j" from 0 to ((count (getVehicleCargo _VIVLHD2)) -1) do  //l4
	{ //l5
		_vehicleCargos = (getVehicleCargo (_VIVLHD2) select _j);  // l6
		_safeVehicleGetout = _vehicleCargos addEventHandler ["CargoUnloaded", {_this execVM "ATLAS_Water\LHD\scripts\VehicleSafeGetOut.sqf"}];
		for "_i" from 0 to ((count crew _vehicleCargos) -1) do
		{
			_LoadedMan = crew _vehicleCargos select _i;
			_safeGetout = _LoadedMan addEventHandler ["getOutMan", {_this execVM "ATLAS_Water\LHD\scripts\SafeGetOut.sqf"}];
		};
	};
// 
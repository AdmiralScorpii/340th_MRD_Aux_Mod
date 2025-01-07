_VIVLHD = (_this select 0);
	for "_j" from 0 to ((count (getVehicleCargo _VIVLHD)) -1) do 
	{
		_vehicleCargos = getVehicleCargo (_VIVLHD) select _j;
		_safeVehicleGetout = _vehicleCargos addEventHandler ["CargoUnloaded", {_vehicleCargos setPosASL [(getPos (nearestObjects [_vehicleCargos, ["ATLAS_B_LHD_helper"], 300] select 0) select 0)+ (-22*(cos (getDir (nearestObjects [_vehicleCargos, ["ATLAS_B_LHD_helper"], 300] select 0)))) + (90*(sin (getDir (nearestObjects [_vehicleCargos, ["ATLAS_B_LHD_helper"], 300] select 0)))), (getPos (nearestObjects [_vehicleCargos, ["ATLAS_B_LHD_helper"], 300] select 0) select 1)+ (90*(cos (getDir (nearestObjects [_vehicleCargos, ["ATLAS_B_LHD_helper"], 300] select 0)))) + (22*(sin (getDir (nearestObjects [_vehicleCargos, ["ATLAS_B_LHD_helper"], 300] select 0)))), (getPosASL (nearestObjects [_vehicleCargos, ["ATLAS_B_LHD_helper"], 300] select 0) select 2) +17]; _vehicleCargos setDir (getDir (nearestObjects [_vehicleCargos, ["ATLAS_B_LHD_helper"], 300] select 0) +90); _vehicleCargos removeEventHandler ["CargoUnloaded", 0];}];
		for "_i" from 0 to ((count crew _vehicleCargos) -1) do
		{
			_LoadedMan = crew _vehicleCargos select _i;
			_safeGetout = _LoadedMan addEventHandler ["getOutMan", {_LoadedMan setPosASL [(getPos (nearestObjects [_LoadedMan, ["ATLAS_ViV_LHD_helper_Script"], 300] select 0) select 0), (getPos (nearestObjects [_LoadedMan, ["ATLAS_ViV_LHD_helper_Script"], 300] select 0) select 1), (getPosASL (nearestObjects [_LoadedMan, ["ATLAS_ViV_LHD_helper_Script"], 300] select 0) select 2) +10]; _LoadedMan setDir (getDir (nearestObjects [_LoadedMan, ["ATLAS_ViV_LHD_helper_Script"], 300] select 0)); _LoadedMan removeEventHandler ["GetOutMan", 0];}];
		};
	};

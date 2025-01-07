_VIVLHD = (_this select 0);
_VIVattach = _VIVLHD attachTo [(nearestObjects [_VIVLHD, ["ATLAS_B_LHD_helper"], 300] select 0), [1.3, 65.8, -7.10]];
	for "_j" from 0 to ((count (getVehicleCargo _VIVLHD)) -1) do 
	{
		_vehicleCargos = (getVehicleCargo (_VIVLHD) select _j);
		_safeVehicleGetout = _vehicleCargos addEventHandler ["CargoUnloaded", {params ["_parentVehicle", "_cargoVehicle"]; _cargoVehicle setPosASL [(getPos (nearestObjects [_cargoVehicle, ["ATLAS_B_LHD_helper"], 300] select 0) select 0)+ (-22*(cos (getDir (nearestObjects [_cargoVehicle, ["ATLAS_B_LHD_helper"], 300] select 0)))) + (90*(sin (getDir (nearestObjects [_cargoVehicle, ["ATLAS_B_LHD_helper"], 300] select 0)))), (getPos (nearestObjects [_cargoVehicle, ["ATLAS_B_LHD_helper"], 300] select 0) select 1)+ (90*(cos (getDir (nearestObjects [_cargoVehicle, ["ATLAS_B_LHD_helper"], 300] select 0)))) + (22*(sin (getDir (nearestObjects [_cargoVehicle, ["ATLAS_B_LHD_helper"], 300] select 0)))), (getPosASL (nearestObjects [_cargoVehicle, ["ATLAS_B_LHD_helper"], 300] select 0) select 2) +17]; _cargoVehicle setDir (getDir (nearestObjects [_cargoVehicle, ["ATLAS_B_LHD_helper"], 300] select 0) +90); _cargoVehicle removeEventHandler ["CargoUnloaded", 0];}];
		for "_i" from 0 to ((count crew _cargoVehicle) -1) do
		{
			_LoadedMan = crew _cargoVehicle select _i;
			_safeGetout = _LoadedMan addEventHandler ["getOutMan", {_LoadedMan setPosASL [(getPos (nearestObjects [_LoadedMan, ["ATLAS_ViV_LHD_helper_Script"], 300] select 0) select 0), (getPos (nearestObjects [_LoadedMan, ["ATLAS_ViV_LHD_helper_Script"], 300] select 0) select 1), (getPosASL (nearestObjects [_LoadedMan, ["ATLAS_ViV_LHD_helper_Script"], 300] select 0) select 2) +10]; _LoadedMan setDir (getDir (nearestObjects [_LoadedMan, ["ATLAS_ViV_LHD_helper_Script"], 300] select 0)); _LoadedMan removeEventHandler ["GetOutMan", 0];}];
		};
	};
_VIVLHDinvisible = _VIVLHD setObjectTexture [0,""];


_VIVLHD = (_this select 0);
for "_j" from 0 to ((count (getVehicleCargo _VIVLHD)) -1) do 
{
	_vehicleCargos = (getVehicleCargo (_VIVLHD) select _j);
	_safeVehicleGetout = _vehicleCargos addEventHandler ["CargoUnloaded", 
	{
		params ["_parentVehicle", "_cargoVehicle"];
		_cargoVehicle setPosASL 
		[
			(getPos (nearestObjects [_cargoVehicle, ["ATLAS_B_LHD_helper"], 300] select 0) select 0)+ (-22*(cos (getDir (nearestObjects [_cargoVehicle, ["ATLAS_B_LHD_helper"], 300] select 0)))) + (90*(sin (getDir (nearestObjects [_cargoVehicle, ["ATLAS_B_LHD_helper"], 300] select 0)))),
			(getPos (nearestObjects [_cargoVehicle, ["ATLAS_B_LHD_helper"], 300] select 0) select 1)+ (90*(cos (getDir (nearestObjects [_cargoVehicle, ["ATLAS_B_LHD_helper"], 300] select 0)))) + (22*(sin (getDir (nearestObjects [_cargoVehicle, ["ATLAS_B_LHD_helper"], 300] select 0)))),
			(getPosASL (nearestObjects [_cargoVehicle, ["ATLAS_B_LHD_helper"], 300] select 0) select 2) +17.2
		];
 		_cargoVehicle setDir (getDir (nearestObjects [_cargoVehicle, ["ATLAS_B_LHD_helper"], 300] select 0) +90); 
		_cargoVehicle removeEventHandler ["CargoUnloaded", _thisEventHandler];
	}];
	for "_i" from 0 to ((count crew _vehicleCargos) -1) do
	{
		_LoadedMan = crew _vehicleCargos select _i;
		_safeGetout = _LoadedMan addEventHandler ["getOutMan", 
		{
			params ["_unit", "_role", "_vehicle", "_turret"];
			_unit setDir (getDir (nearestObjects [_unit, ["ATLAS_B_LHD_helper"], 300] select 0));
			_unit setPosASL 
			[
				(getPos (nearestObjects [_vehicle, ["ATLAS_B_LHD_helper"], 300] select 0) select 0)+ (-21*(cos (getDir (nearestObjects [_vehicle, ["ATLAS_B_LHD_helper"], 300] select 0)))) + (89*(sin (getDir (nearestObjects [_vehicle, ["ATLAS_B_LHD_helper"], 300] select 0)))),
				(getPos (nearestObjects [_vehicle, ["ATLAS_B_LHD_helper"], 300] select 0) select 1)+ (89*(cos (getDir (nearestObjects [_vehicle, ["ATLAS_B_LHD_helper"], 300] select 0)))) + (21*(sin (getDir (nearestObjects [_vehicle, ["ATLAS_B_LHD_helper"], 300] select 0)))),
				(getPosASL (nearestObjects [_vehicle, ["ATLAS_B_LHD_helper"], 300] select 0) select 2) +17.2 
			]; 
			_unit removeEventHandler ["GetOutMan", _thisEventHandler];
		}];
	};
};



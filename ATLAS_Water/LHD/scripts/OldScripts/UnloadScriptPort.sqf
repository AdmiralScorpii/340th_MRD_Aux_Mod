_LoadedVehicle = (_this select 0);
_UnloadVehicle = objNull setVehicleCargo _LoadedVehicle;
	sleep 0.1;
_LoadedVehicle setPosASL   
[  
(getPos (nearestObjects [_LoadedVehicle, ["ATLAS_B_LHD_helper"], 300] select 0) select 0)   
+ (22*(cos (getDir (nearestObjects [_LoadedVehicle, ["ATLAS_B_LHD_helper"], 300] select 0))))   
+ (40*(sin (getDir (nearestObjects [_LoadedVehicle, ["ATLAS_B_LHD_helper"], 300] select 0)))),
   
(getPos (nearestObjects [_LoadedVehicle, ["ATLAS_B_LHD_helper"], 300] select 0) select 1)   
+ (40*(cos (getDir (nearestObjects [_LoadedVehicle, ["ATLAS_B_LHD_helper"], 300] select 0))))   
+ (-22*(sin (getDir (nearestObjects [_LoadedVehicle, ["ATLAS_B_LHD_helper"], 300] select 0)))),
   
(getPosASL (nearestObjects [_LoadedVehicle, ["ATLAS_B_LHD_helper"], 300] select 0) select 2) +17  
]; _LoadedVehicle setDir (getDir (nearestObjects [_LoadedVehicle, ["ATLAS_B_LHD_helper"], 300] select 0) -90);

removeAllActions _LoadedVehicle;

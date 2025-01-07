_LoadedMan = (_this select 0);
sleep 0.1;
_LoadedMan setPosASL [(getPos (nearestObjects [_LoadedMan, ["ATLAS_ViV_LHD_helper_Script"], 300] select 0) select 0), (getPos (nearestObjects [_LoadedMan, ["ATLAS_ViV_LHD_helper_Script"], 300] select 0) select 1), (getPosASL (nearestObjects [_LoadedMan, ["ATLAS_ViV_LHD_helper_Script"], 300] select 0) select 2) +10];
_LoadedMan setDir (getDir (nearestObjects [_LoadedMan, ["ATLAS_ViV_LHD_helper_Script"], 300] select 0));
//_LoadedMan removeEventHandler ["GetOutMan", _safeGetout];
_LoadedMan removeEventHandler ["GetOutMan", 0];
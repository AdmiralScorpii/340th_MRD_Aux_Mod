_VIVLHD = (_this select 0);
//_VIVattach = _VIVLHD attachTo [(nearestObjects [_VIVLHD, ["ATLAS_B_LHD_helper"], 300] select 0), [1.3, 65.8, -7.10]];
//_FirstAdd= _VIVLHD execVM "ATLAS_Water\LHD\scripts\addCargoUnloadEH.sqf";

	for "_j" from 0 to ((count (getVehicleCargo _VIVLHD)) -1) do 
	{
		_vehicleCargos = (getVehicleCargo (_VIVLHD) select _j);
		_safeVehicleGetout = _vehicleCargos addEventHandler ["CargoUnloaded", {_this execVM "ATLAS_Water\LHD\scripts\VehicleSafeGetOut.sqf"}];
		for "_i" from 0 to ((count crew _vehicleCargos) -1) do
		{
			_LoadedMan = crew _vehicleCargos select _i;
			_safeGetout = _LoadedMan addEventHandler ["getOutMan", {_this execVM "ATLAS_Water\LHD\scripts\SafeGetOut.sqf"}];
		};
	};
//_VIVLHDinvisible = _VIVLHD setObjectTexture [0,""];







//_RepeatAdds= _VIVLHD execVM "ATLAS_Water\LHD\scripts\addActionVIV.sqf";
//sleep 10;
/*while {alive _VIVLHD} do 
{
	//_VIVLHD = (_this select 0);
	_RepeatAdds= _VIVLHD execVM "ATLAS_Water\LHD\scripts\addActionVIV.sqf";

	//hint "init is working";
	sleep 10;
};*/

//_primer = 
//_RepeatAdds= _VIVLHD addEventHandler ["GetIn",{_VIVLHD exec "ATLAS_Water\LHD\scripts\addActionVIV.sqf"}];
// _GO_EH_2 = _this addEventHandler ["GetOut",{_this exec "ATLAS_Water\LHD\scripts\getout_action_boat_2.sqf"}];
//_EasyLoader= _VIVLHD execVM "ATLAS_Water\LHD\scripts\addActionVIVLoad.sqf";
//_combinedScript= _VIVLHD execVM "ATLAS_Water\LHD\scripts\addActionVIVComb.sqf";

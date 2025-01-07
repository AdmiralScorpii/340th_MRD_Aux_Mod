_VIVLHD = (_this select 0);
//_VIVattach = _VIVLHD attachTo [(nearestObjects [_VIVLHD, ["ATLAS_B_LHD_helper"], 300] select 0), [1.3, 65.8, -7.10]];
//sleep 10;
//_VIVLHDinvisible = _VIVLHD setObjectTexture [0,""];
//while {alive _VIVLHD} do 
//{
	//_VIVLHD = (_this select 0);
	_RepeatAdds= _VIVLHD execVM "ATLAS_Water\LHD\scripts\addActionVIV.sqf";
	//hint "init is working";
//	sleep 10;
//};

//_primer = 
//_RepeatAdds= _VIVLHD addEventHandler ["GetIn",{_VIVLHD exec "ATLAS_Water\LHD\scripts\addActionVIV.sqf"}];
// _GO_EH_2 = _this addEventHandler ["GetOut",{_this exec "ATLAS_Water\LHD\scripts\getout_action_boat_2.sqf"}];
//_EasyLoader= _VIVLHD execVM "ATLAS_Water\LHD\scripts\addActionVIVLoad.sqf";
//_combinedScript= _VIVLHD execVM "ATLAS_Water\LHD\scripts\addActionVIVComb.sqf";

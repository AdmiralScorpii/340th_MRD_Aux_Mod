_ship = (_this select 0);
_attpoint = _this select 1;
_boat = "";

//NATO
if(side player == WEST)then
{
	_boat = "B_Boat_Armed_01_minigun_F";
};
//CSAT
if(side player == EAST)then
{
	_boat = "O_Boat_Armed_01_hmg_F";
};
//AAF
if(side player == RESISTANCE)then
{
	_boat = "I_Boat_Armed_01_minigun_F";
};

_boat_veh = createvehicle [_boat,_ship,[],0,"NONE"];
null = [_ship,_boat_veh,'hook_1_deck',_attpoint]execVM "ATLAS_Water\LHD\scripts\addaction_boat.sqf";
_boat_veh attachto [_ship,[0,0,-10],_attpoint];
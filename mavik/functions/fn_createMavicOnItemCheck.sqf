params ["_unit", "_container", "_item"];

if !(_item in ["Item_Mavic3T", "Item_Mavic3", "Item_Mavic"]) exitWith {};
if ((typeOf _container) != "GroundWeaponHolder") exitWith {};

private _magazines = magazinesAmmo _container;
private _containerCargo = magazineCargo _container;
private _magazineIndex = _containerCargo find _item;
private _fuel = 100;
if (_magazineIndex != -1) then
{
	private _magazineSelected = _magazines select _magazineIndex;
	_fuel = _magazineSelected select 1;
};

private _fuelReal = _fuel / 100;

private _uavType = ["mavik_3", "mavik_3T"] select (_item == "Item_Mavic3T");

private _uavClass = switch (side _unit) do {
    case EAST: { _uavType + "_OPF" };
    case WEST: { _uavType + "_BLU" };
    case RESISTANCE: { _uavType + "_IND" };
    case CIVILIAN: { _uavType + "_CIV" };
    default { _uavType + "_CIV" };
};

private _mavic = createVehicle [_uavClass, getPosATL _container, [], 0, "CAN_COLLIDE"];
createVehicleCrew _mavic;
_mavic setFuel _fuelReal;

private _fn_removeMagazineFromContainer =
{
   private ["_container","_magazine","_cargo","_index"];
   _container = _this select 0;
   _magazine = _this select 1;
   _cargo = magazineCargo _container;
_index = _cargo find _magazine;
   if (_index != -1) then
   {
	private ["_i"];
	_i = 0;
       clearMagazineCargo _container;
       {
		if (_index != _i) then {_container addMagazineCargo [_x,1]};
		_i = _i+1;
	}
	forEach _cargo;
   };
};

[_container, _item] call _fn_removeMagazineFromContainer;
params ["_uav", "_player"];

private _itemType = ["Item_Mavic3", "Item_Mavic3T"] select ((typeOf _uav) isKindOf "mavic3T_drone_base_F");

private _fuelReal = fuel _uav;
private _fuel = round (_fuelReal * 100);

_player addMagazine [_itemType, _fuel];

private _attachedGrenades = _uav getVariable ["grenadeObj", []];

if (_attachedGrenades isEqualTo []) exitWith {
	deleteVehicle _uav;
	_player action ["TakeBag", objNull];
};

{
	_Grenades = _x select 0;
	_player addMagazine _Grenades;
} forEach _attachedGrenades;

_uav setVariable ["grenadeObj", [], true];
{ deleteVehicle _x; } forEach attachedObjects _uav;

deleteVehicle _uav;
_player action ["TakeBag", objNull];

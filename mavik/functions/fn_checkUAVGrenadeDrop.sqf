params ["_player"];

private _uav = getConnectedUAV _player;
if (isNull _uav) exitWith {};
//private _connectedUAVType = typeOf _uav;
//if !(_connectedUAVType isKindOf "mavic_drone_base_F") exitWith {};
if (cameraOn == _uav) exitWith {[_player] call mavic_drop_fnc_dropGrenade;};

params ["_attached_veh","_position","_caller"];

private ["_gopoint","_veh","_pos"];

if (local _caller) then {
	_gopoint = "hook_1_deck";
	_veh = attachedTo _attached_veh;
	_pos = AGLToASL (_veh modelToWorld (_veh selectionPosition _gopoint));
	_pos set [2,((_pos select 2) + 0.1)];

	_caller action ["GetOut",_attached_veh];

	_caller setPosASL _pos;
	_caller setDir ((getDir _veh) - 90);
};
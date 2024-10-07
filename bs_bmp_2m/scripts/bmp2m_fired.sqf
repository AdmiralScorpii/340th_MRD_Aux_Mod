_unit = _this select 0;
_weapon = _this select 1;
_magazine = _this select 5;
_projectile = _this select 6;

if (_weapon in ['bs_weap_kornet_d_launcher']) then {

	_ammoCountArrFull = _unit getvariable 'ammoCountArr';
	_ammoCountArr = [];
	{ _ammoCount = _x select 4; _ammoCountArr = _ammoCountArr + [_ammoCount]; } foreach getAllPylonsInfo _unit;

	_current_barrel = count _ammoCountArrFull;

	for "_i" from 0 to (count _ammoCountArrFull - 1) do {
		if (_ammoCountArrFull select _i > _ammoCountArr select _i) then {
			_current_barrel = (getAllPylonsInfo _unit) select _i select 0;
		};
	};

	_unit setvariable ['ammoCountArr', _ammoCountArr, true];

	_vectorDir = vectorDir _projectile;
	_vel = velocity _projectile;
	_speed = 150; 
	_projectile setVelocity [(_vel select 0) + ((_vectorDir select 0)*_speed), (_vel select 1) + ((_vectorDir select 1)*_speed), (_vel select 2) + ((_vectorDir select 2)*_speed)];

	_p3d = "\bs_bmp_2m\proxy\mkk_kornet_front_Cap.p3d";
	_shposmem1 = _unit selectionPosition format ["front_cap_pos_%1", _current_barrel];
	_shposmem2 = _unit selectionPosition format ["front_cap_dir_%1", _current_barrel];
	_vel = 20;
		
	_ejectWorldPos = _unit modelToWorld _shposmem1;
	_ejectWorldDir = _unit modelToWorld _shposmem2;
	_vector = [((_ejectWorldDir select 0) - (_ejectWorldPos select 0))*_vel, ((_ejectWorldDir select 1) - (_ejectWorldPos select 1))*_vel, 0];

	_shell1 = "#particlesource" createVehicle getpos _unit;	
	_shell1 setParticleRandom [0, [0.1, 0.1, 0.1], [0, 0, 0.5], 0, 0.1, [0, 0, 0, 0], 0, 1];
	_shell1 setParticleParams [[_p3d, 1, 0, 1], "", "SpaceObject", 1, 42.5, _shposmem1, _vector, 1, 16, 1, 0, [1, 1], [[0.9,0.9,0.9,1]], [1000], 0.1, 0.05, "", "", _unit, 0, true, 0.35];
	_shell1 setDropInterval 60;
		
	_p3d = "\bs_bmp_2m\proxy\mkk_kornet_back_Cap.p3d";
	_shposmem1 = _unit selectionPosition format ["back_cap_pos_%1", _current_barrel];
	_shposmem2 = _unit selectionPosition format ["back_cap_dir_%1", _current_barrel];
	_vel = 20;
		
	_ejectWorldPos = _unit modelToWorld _shposmem1;
	_ejectWorldDir = _unit modelToWorld _shposmem2;
	_vector = [((_ejectWorldDir select 0) - (_ejectWorldPos select 0))*_vel, ((_ejectWorldDir select 1) - (_ejectWorldPos select 1))*_vel, 0];

	_shell2 = "#particlesource" createVehicle getpos _unit;	
	_shell2 setParticleRandom [0, [0.1, 0.1, 0.1], [0, 0, 0.5], 0, 0.1, [0, 0, 0, 0], 0, 1];
	_shell2 setParticleParams [[_p3d, 1, 0, 1], "", "SpaceObject", 1, 42.5, _shposmem1, _vector, 1, 20, 1, 0, [1, 1], [[0.9,0.9,0.9,1]], [1000], 0.1, 0.05, "", "", _unit, 0, true, 0.35];
	_shell2 setDropInterval 60;

	sleep 3;
	deleteVehicle _shell1;	
	deleteVehicle _shell2;

};
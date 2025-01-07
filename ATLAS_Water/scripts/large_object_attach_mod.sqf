if(IsServer)then{
	_spawn = _this select 0;
	_spawn setvariable ["ATLAS_LHD_BuildFinished",false,true];
	
	_parts = (_this select 1);
	_spawn setdir ((getdir _spawn )-180);
	_dir = getdir _spawn;
	_spawnpoint = getposasl _spawn;


	//freeze all objects that arent the ship to prevent them from falling to the ground

	_objects = nearestobjects [_spawn,[],150];

	{
		_x                       ;
		_x                                 }foreach _objects;


	//spawn the ship
	{
		_section = _x createvehicle _spawnpoint;
		_section setdir _dir;
		_section setpos _spawnpoint;
		_section setposasl [getposasl _section select 0, getposasl _section select 1,0];
		//diag_log format ["%4:[%1,%2,%3]",_spawnpoint select 0,_spawnpoint select 1,0,_section];
	}foreach _parts;

	//hide but dont delete the helper so it can be accessed later if needed
	_spawn hideobject true;
	_spawn hideobjectglobal true;
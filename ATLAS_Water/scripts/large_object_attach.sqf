if(IsServer)then{
	_spawn = _this select 0;
	_spawn setvariable ["ATLAS_LHD_BuildFinished",false,true];
	
	_parts = (_this select 1);
	//_spawn setdir ((getdir _spawn )-180);
	_dir = getdir _spawn;
	_spawnpoint = getposasl _spawn;


	//freeze all objects that arent the ship to prevent them from falling to the ground

	/*
	_objects = nearestobjects [_spawn,[],700];
	{
		_x enablesimulation false;
		_x enablesimulationglobal false;
	}foreach _objects;
	*/

	_objs = [];
	//spawn the ship
	{
		_section = _x createvehicle _spawnpoint;
		_section setdir _dir;
		_section setpos _spawnpoint;
		_section setposasl [getposasl _section select 0, getposasl _section select 1,0];
		if(is3DEN || is3DENMultiplayer)then{
			_section attachto [_spawn];
		};
		//diag_log format ["%4:[%1,%2,%3]",_spawnpoint select 0,_spawnpoint select 1,0,_section];
		_objs = _objs + [_section];
	}foreach _parts;
	
	_spawn addEventHandler ["UnregisteredFromWorld3DEN",{{deletevehicle _x;}foreach attachedObjects (_this select 0);}];
	
	//_code = format ["{[_this select 0,%1,%2] call FNC_ATLAS_Spawn_ship}",_parts,_objs];
	//_spawn addEventHandler ["AttributesChanged3DEN",_code];
	
	//hide but dont delete the helper so it can be accessed later if needed
	_spawn hideobject true;
	_spawn hideobjectglobal true;

	/*
	//give the surrounding objects their simulation back
	if(!is3DEN || !is3DENMultiplayer)then
	{
		{
			_x enablesimulation true;
			_x enablesimulationglobal true;
		}foreach _objects;
	};
	*/
	sleep 0.1;
	_spawn setvariable ["ATLAS_LHD_BuildFinished",true,true];
};

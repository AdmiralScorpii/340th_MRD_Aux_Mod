NER_1l271_aistyonok_detectableClasses = [
	"ShellCore",
	"Shell",
	"MissileCore",
	"Missile",
	"RocketCore",
	"Rocket",
	"BombCore",
	"SubmunitionCore",
	"R_min_rf_122mm_Grad",
	"R_min_rf_122mm_Grad_fly"
];

NER_1l271_aistyonok_mapDrawingEnabled = true;
NER_1l271_aistyonok_projectileIdCounter = 0;
NER_1l271_aistyonok_detectedTargets = [];
NER_1l271_aistyonok_projectileDetectionRange = 12000;
NER_1l271_aistyonok_detectionError = 15;
NER_1l271_aistyonok_mapProjectilesDrawTimeout = 15;
NER_1l271_aistyonok_markerCounter = 0;
NER_1l271_aistyonok_markerPrefix = "NER_1l271_aistyonok_markerNo";

NER_1l271_aistyonok_detectIncomingProjectiles = {
	params["_radarVehicle"];	
			
	private _nearAmmo = _radarVehicle nearObjects ["Default", NER_1l271_aistyonok_projectileDetectionRange];
	_nearAmmo = _nearAmmo select {
		private _projectile = _x;

		private _typeOfProj = typeOf _projectile;
		private _isClassAllowedAmmo = false;
		{
			if(_typeOfProj isKindOf [_x,configFile >> "CfgAmmo"]) exitWith {
				_isClassAllowedAmmo = true;
			};
		} foreach NER_1l271_aistyonok_detectableClasses;		
		

		if(speed _projectile < 50) then {
			continueWith false;
		};

		private _isInFront = [getPosWorld _radarVehicle, getDir _radarVehicle, 180, getPosWorld _projectile] call BIS_fnc_inAngleSector;
		if(!(_isInFront)) then {
			continueWith false;	
		};
		
		private _isVisible = [_radarVehicle, "FIRE"] checkVisibility [getPosWorld _radarVehicle, getPosWorld _projectile] > 0;
		if(!(_isVisible)) then {
			continueWith false;
		};

		true;
	};

	private _uniqueAmmo = [];
	{
		_uniqueAmmo pushBackUnique _x;
	} foreach _nearAmmo;
	
	_uniqueAmmo;
};

NER_1l271_aistyonok_predictFallTime = {
	params["_projectile"];

	private _position = getPosATL _projectile;
	private _velocity = velocity _projectile;
	private _gravity = [0,0,-9.81];
	private _time = 0;

	while {_position select 2 >= 0} do {
		_position = _position vectorAdd (_velocity vectorMultiply 0.1);
		_velocity = _velocity vectorAdd (_gravity vectorMultiply 0.1);

		_time = _time + 0.1;
	};

	_time
};

NER_1l271_aistyonok_predictFallPos = {
	params["_projectile"];
	
	private _position = getPosATL _projectile;
	private _velocity = velocity _projectile;
	private _gravity = [0,0,-9.81];
	private _time = 0;
	private _iterations = 0;
	
	while {_position select 2 >= 0} do {
		
		_position = _position vectorAdd (_velocity vectorMultiply 0.1);
		_velocity = _velocity vectorAdd (_gravity vectorMultiply 0.1);
		
		_time = _time + 0.1;
		_iterations = _iterations + 1;
	};	

	_position;
};

NER_1l271_aistyonok_triggerRadarScan = {
	params["_vehicle"];

	private _incomingProjectiles = _vehicle call NER_1l271_aistyonok_detectIncomingProjectiles;
	if(count _incomingProjectiles <= 0) exitWith {};

	_incomingProjectiles apply {
		private _currentId = _x getVariable["NER_1l271_aistyonok_projectileId", -1];
		if(_currentId == -1) then {
			_x setVariable ["NER_1l271_aistyonok_projectileId", NER_1l271_aistyonok_projectileIdCounter];
			NER_1l271_aistyonok_projectileIdCounter = NER_1l271_aistyonok_projectileIdCounter + 1;
		};
	};

	_incomingProjectiles apply {
		private _projectile = _x;
		private _allSideUnits = units (side player);
		_allSideUnits apply {
			_x reveal _projectile;
		};		
		
		private _projectilePosWithError = _projectile getRelPos [random NER_1l271_aistyonok_detectionError, random 360];		
		private _projectileHeight = (getPos _projectile) select 2;		
		private _projectileImpactETA = _projectile call NER_1l271_aistyonok_predictFallTime;
		private _projectileImpactPosition = _projectile call NER_1l271_aistyonok_predictFallPos;

		private _currentKnownProjectiles = NER_1l271_aistyonok_detectedTargets;
		private _projectileId = _projectile getVariable["NER_1l271_aistyonok_projectileId", -1];
		private _projectileIndex = _currentKnownProjectiles findIf {
			(_x select 0) isEqualTo _projectileId;
		};

		if(_projectileIndex != -1) then {
			private _currentProjectileData = _currentKnownProjectiles select _projectileIndex;

			_currentProjectileData set [2, getPos _projectile];
			_currentProjectileData set [3, _projectileImpactPosition];
			_currentProjectileData set [4, _projectileImpactETA];
			_currentProjectileData set [5, serverTime];
			_currentKnownProjectiles set [_projectileIndex, _currentProjectileData];
		} else {		
			private _projectileReportData  = [_projectileId, _projectilePosWithError, getPos _projectile, _projectileImpactPosition, _projectileImpactETA, serverTime];
			_currentKnownProjectiles pushBack _projectileReportData;			

			private _markerName = format["%1_%2",NER_1l271_aistyonok_markerPrefix,NER_1l271_aistyonok_markerCounter];
			private _detectionMarker = createMarkerLocal [_markerName, _projectilePosWithError];
			_detectionMarker setMarkerShapeLocal "ICON";
			_detectionMarker setMarkerTypeLocal "mil_circle_noShadow";
			_detectionMarker setMarkerTextLocal format["Projectile %1 H: %2m",NER_1l271_aistyonok_markerCounter, _projectileHeight];
			_detectionMarker setMarkerColorLocal "ColorRed";
			_detectionMarker setMarkerAlphaLocal 0.5;
			playSound3D ["A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_2.wss", player, false, getPosASL player, 0.5, 2, 0];

		};	
		NER_1l271_aistyonok_detectedTargets = _currentKnownProjectiles;
				
	};

};

NER_1l271_aistyonok_drawTarget = {
	params["_mapCtrl","_targetData"];
	_targetData params ["_projectileId", "_projectileFiringPos", "_projectilePos", "_projectileImpactPosition", "_projectileImpactETA", "_projectileLastReportAt"];

	if(serverTime - _projectileLastReportAt > NER_1l271_aistyonok_mapProjectilesDrawTimeout) then {		
		continue;
	};

	if(_projectilePos distance2d _projectileImpactPosition < 100) then {		
		continue;
	};

	_mapCtrl drawLine [_projectileFiringPos, _projectilePos, [1,0,0,1] ];	
	_mapCtrl drawIcon [
		"\A3\ui_f\data\map\markers\military\triangle_CA.paa", 
		[1,0,0,1],
		_projectilePos,
		24,
		24,
		0,
		format["PROJECTILE #%1, ETA: %2s", _projectileId, _projectileImpactETA ],
		0,
		-1,
		"RobotoCondensed",
		"right"
	];

	_mapCtrl drawIcon [
		"\A3\ui_f\data\map\markers\military\destroy_CA.paa", 
		[1,0,0,1],
		_projectileImpactPosition,
		24,
		24,
		0,
		format["PROJECTILE #%1 IMPACT, ETA: %2s", _projectileId, _projectileImpactETA ],
		0,
		-1,
		"RobotoCondensed",
		"right"
	];

};

NER_1l271_aistyonok_mapDrawEH = {
	params["_mapCtrl"];

	if(!("ItemGPS" in (assignedItems player))) exitWith {};
	
	NER_1l271_aistyonok_detectedTargets apply {
		
		[_mapCtrl, _x] call NER_1l271_aistyonok_drawTarget;
	};
};

NER_1l271_aistyonok_monitorLoop = {
	private _allRadars = ("ner_1l271_aistyonok_b" allObjects 1) + ("ner_1l271_aistyonok_o" allObjects 1) + ("ner_1l271_aistyonok_i" allObjects 1);
	private _friendlyRadars = _allRadars select {
		side _x == side player;
	};	

	_friendlyRadars apply {
		_x call NER_1l271_aistyonok_triggerRadarScan;
	};
};

if(hasInterface) then {
	[] spawn {
		private _fName = "NER_1l271_aistyonok_initThread: ";
		diag_log format[_fName + "enter"];
		
		waitUntil{
			sleep 3;
			diag_log format[_fName + "waiting till client is loaded.."];		
			!isNull findDisplay 46 && !(getPlayerUID player isEqualTo '');
		};

		NER_1l271_aistyonok_perFrameEH_handle = [
			{		
				if(!(NER_1l271_aistyonok_mapDrawingEnabled)) exitWith {};
				call NER_1l271_aistyonok_monitorLoop;
			}, 
			0.25
		] call CBA_fnc_addPerFrameHandler;
		diag_log format[_fName + "NER_1l271_aistyonok_perFrameEH_handle: %1", NER_1l271_aistyonok_perFrameEH_handle];


		NER_1l271_aistyonok_mapDrawEH_handle = ((findDisplay 12) displayCtrl 51) ctrlAddEventHandler ["Draw", {
			if(!(NER_1l271_aistyonok_mapDrawingEnabled)) exitWith {};
			[_this select 0] call NER_1l271_aistyonok_mapDrawEH;
		}];		
		diag_log format[_fName + "NER_1l271_aistyonok_mapDrawEH_handle: %1", NER_1l271_aistyonok_mapDrawEH_handle];

		diag_log format[_fName + "exit"];

	};
};


NER_1l271_aistyonok_loaded = true;

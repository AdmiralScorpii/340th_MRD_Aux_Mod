private _Ka52 = _this select 0;

//Запуск только для локальных Ка-52 и проверка на класс
if((!local _Ka52)) exitWith {
	systemChat "not local!";
};

//Дожидаемся дисплея
//waituntil {!isnull (finddisplay 46)};

//Дополнительно проверяем, что Ка-52 пережил это всё
if (!alive _Ka52) exitWith {
	systemChat "not alive!";
};

[_Ka52] spawn {
	sleep 1;
	private _Ka52 = _this select 0;
	while {alive _Ka52} do {
		//Ждем включения основных огней
		waitUntil {isCollisionLightOn _Ka52};
		//Создаем БАНО и присоединяем их к точкам памяти
		private _TailLight = createVehicle ["LS_Ka52_CollisionLight_White", [0,0,0], [], 0, "NONE"];
		_TailLight attachTo [_Ka52,[0,0,0],"bily pozicni","tail"];
		private _RedLight = createVehicle ["LS_Ka52_CollisionLight_Red", [0,0,0], [], 0, "NONE"];
		_RedLight attachTo [_Ka52,[0,0,0],"cerveny pozicni"];
		private _GreenLight = createVehicle ["LS_Ka52_CollisionLight_Green", [0,0,0], [], 0, "NONE"];
		_GreenLight attachTo [_Ka52,[0,0,0],"zeleny pozicni"];
		//Ждем пока летчик дотянется до переключателя проблесковых маяков
		sleep 0.6;
		//Создаем красный и белый проблесковые маяки и присоединяем на свои места
		private _Beacon_Red = createVehicle ["LS_Ka52_Beacon_Red", [0,0,0], [], 0, "NONE"];
		_Beacon_Red attachTo [_Ka52,[0,0.325,-2.156]];
		private _Beacon_White = createVehicle ["LS_Ka52_Beacon_White", [0,0,0], [], 0, "NONE"];
		_Beacon_White attachTo [_Ka52,[0,-0.984,-0.087]];
		//Прячем статичные проблесковые маяки на модели
		_Ka52 animate ["beacons_hide", 1]; 
		
		//Ждем отключения основных огней
		waitUntil {!isCollisionLightOn _Ka52 or !alive _Ka52};
		//Удаляем хвостовой огонь
		{deleteVehicle _x} forEach [_TailLight, _RedLight, _GreenLight];
		//Ждем пока летчик дотянется до переключателя проблесковых маяков
		sleep 0.6;
		//Удаляем проблесковые маяки
		{deleteVehicle _x} forEach [_Beacon_Red,_Beacon_White];
		//Показываем статичные проблесковые маяки на модели
		_Ka52 animate ["beacons_hide", 0];
		//Ждем пока летчик дотянется до переключателя контурных огней
		sleep 0.6;
		//Скрываем контурные огни если есть
		{_Ka52 animate [_x, 0];} forEach ["PositionLight_blade_2_8","PositionLight_blade_3_8", "PositionLight_blade_1_8"];
	};
};
private _fName = "ner_1l271_aistyonok::XEH_preInit: ";
diag_log format[_fName + "enter"];

["NER_1l271_aistyonok_mapDrawingEnabled", "CHECKBOX", ["Enabled", "Enables or disables backend for detecting/drawing of targets on the map."], ["Field Artillery Radar: 1L271 Aistyonok", "1. General"], [true], 1, {}, false] call CBA_fnc_addSetting;

diag_log format[_fName + "CBA settings loaded"];
diag_log format[_fName + "exit"];
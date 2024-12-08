if (soundVolume == 1) then {

hint "Earplugs On";
3 fadeSound 0.1; 
3 fadeEnvironment 0.1;
3 fadeMusic 0.1;

} else {

hint 'Earplugs Off';
3 fadeSound 1; 
3 fadeEnvironment 1;
3 fadeMusic 1;

};
private "_inwater";
_bmp2m=_this select 0;


_count=3; 

sleep 0.5;

if ((getposASL _bmp2m select 2)<-0.3) then 
{
	_inwater=1;
    _bmp2m animate ["front_panel", 1];
    _bmp2m animate ["breakwater_mount_01_rotation", 1];
    _bmp2m animate ["breakwater_mount_02_rotation", 1];
} 
else 
{
    _inwater=0
};
             
while {alive _bmp2m} do 
{
	sleep 0.5;
    if ((getposASL _bmp2m select 2)>-0.3) then 
    {
     	if (_inwater==1) then 
        {
            _count=0;
            _inwater=0; 
		};
        
        if (_count<4) then 
        {
            _count=_count+1
		}; 
	} 
    else	
    {
    	if (_inwater==0) then {
            _count=0;
            _inwater=1; 
		};            
		if (_count<4) then 
        {
            _count=_count+1
		};                   
	}; 

	if (_count==3) then
    {
		_bmp2m animate ["front_panel", _inwater];
		_bmp2m animate ["breakwater_mount_01_rotation", _inwater];
		_bmp2m animate ["breakwater_mount_02_rotation", _inwater];        
	};        
};
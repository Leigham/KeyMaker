//test.sqf
disableSerialization;

//Define idc's for controls for easy access
_variable = Lega_KeyCost;
//store display, passed from onLoad
_display = _this select 0;
_foo = ctrlSetText [4590, format["Cost: %1 %2!", _variable,Currencyname]];
_listBoxA = 7458;
//Add to our lb and combo lists
{
	_index = lbAdd [_listBoxA, _x];
} forEach ["Green Key ","Red Key ","Yellow Key ","Black Key ","Blue Key "];




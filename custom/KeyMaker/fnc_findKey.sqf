//FNC find Key 
//function to find the keyclassname from display name. 
	private["_displayName","_out","_cfgWeapons"]; 

	_displayName = _this; 
	_out = "displayName not found";

	_cfgWeapons = configFile >> "CfgWeapons";

	for "_i" from 0 to count (_cfgWeapons) do { //fix for access error
		if ((isClass (_cfgWeapons select _i)) && {_displayName == getText(_cfgWeapons select _i >> "displayName")}) exitWith { 
			_out = configName (_cfgWeapons select _i); 
		}; 
	}; 
	_out
	
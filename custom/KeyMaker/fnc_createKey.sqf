
//scriptName.sqf
disableSerialization;
private ["_display","_listbox","_listboxa","_box1","_box2","_box3","_box4","_keyClassname","_keyselected","_ItemsPlayer","_PlayerCash","_VehExists","_handled","_hasCost","_isKeyOK","_isOk","_selection","_tID","_x","_This"];
 
//Get the passed ctrl
_display = findDisplay 7459;

_listbox = _display displayCtrl 7458;
_selection = lbCurSel _listbox; if(_selection < 0) exitWith{};
_listboxa = _listbox lbText _selection;

_box1 = ctrlText 7454;
_box2 = ctrlText 7455;
_box3 = ctrlText 7456;
_box4 = ctrlText 7457;

//Finding all the data about the key early for use in the whole script.//
_keySelected = format["%1(%2%3%4%5)",_listboxA,_box1,_box2,_box3,_box4];
_KeyClassname = _Keyselected call fnc_findkey;
_isKeyOK = isClass (configFile >> "CfgWeapons" >> _KeyClassname);
_keyId = getNumber (configFile >> "CfgWeapons" >> _keyClassname >> "keyid");



_gotMoney = true;
_hasKey = _KeyClassname in items Player;

 if(_haskey)exitwith{systemchat format ["You already have a %1.",_keySelected];};
if (lega_KeySingleCurrency) then {
	_PlayerCash = player getVariable [Z_moneyVariable,0];
	_gotMoney = if(_PlayerCash < Lega_KeyCost) then {false} else {true};
}else{
	_hasCost = Lega_KeyCost in (items Player);
	_gotMoney = if !(_hasCost) then {false} else {true};
};

//exit early if not enough money
if !(_gotMoney) exitWith {
	if (lega_KeySingleCurrency) then {
		systemChat format["You need %1 more to complete the Key",Lega_KeyCost - _playerCash];
	} else {
		systemChat format["You need %1 to complete the format", Lega_KeyCost];
	};
};




//exit early if key does not exist in configs
if !(_isKeyOK) exitWith {systemChat format ["Key %1 does not exist",_keySelected]};

_vehexists = false;

{
	_tID = parseNumber (_x getVariable ["CharacterID","0"]);
	if (_tID == _keyID) exitWith {
		systemChat format ["Vehicle found: %1",(typeOf _x)];
		_VehExists = true;
	};
} forEach vehicles;

if(Lega_Keydebug)then{
	//degug showing Input and output.
	systemChat format ["Input: %1  Output: %2 Veh:%3 Creating Key With output. ", _Keyselected,_KeyClassname,_VehExists];
};

//Exit script early if vehicle does not exist
if !(_VehExists) exitWith { systemChat format ["Vehicle for Key %1 - %2 does not exist.", _KeyClassname ,_keySelected]; };

_isOk = [player,_KeyClassname] call BIS_fnc_invAdd;

//exit script early if not enough space		
if !(_isOK) exitWith {systemchat format ["Key %1 Could not be added to toolbelt, not enough space.",_keySelected];};

if (lega_KeySingleCurrency) then {
	Player playActionnow "Medic";
	Sleep 7;
	player setVariable [Z_moneyVariable,_PlayerCash - Lega_KeyCost, true]; 
} else {
	Player playActionnow "Medic";
	Sleep 7;
	player removeWeapon Lega_KeyCost;
};
systemChat format ["Key Making Completed, please check your toolbelt, %1 Taken from Cash",Lega_KeyCost];
	   

if(Lega_Keydebug)then{
	systemChat format ["%1...%2",_isOk,_isKeyOK];
 };

	 
	
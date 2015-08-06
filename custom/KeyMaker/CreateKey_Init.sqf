
fnc_createKey = compile preprocessfile "custom\KeyMaker\fnc_createKey.sqf";
fnc_findKey = compile preprocessfile "custom\KeyMaker\fnc_findKey.sqf";

execvm "custom\KeyMaker\KeyConfig.sqf";
//Keymaker Addaction.
if ((typeOf cursorTarget) in Lega_TraderSkins) then {
    if (Lega_KeyMake < 0) then {
		Lega_KeyMake = player addAction ["<t color='#FF0000'>KeyMaker</t>","custom\KeyMaker\Key_Dialog.sqf",_cursorTarget, -10, false, true, "",""];
}else{
		player removeaction Lega_KeyMake;
		Lega_KeyMake = -1;
};
};

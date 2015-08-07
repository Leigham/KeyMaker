//Lega KeyMaker
//Keymaker Addaction.
if(_typeOfCursorTarget in Key_Maker) then {
    if (s_maker_dialog < 0) then {
s_maker_dialog = player addAction ["<img image='custom\keymaker\key.paa' shadow='0'/><t color='#0066FF'> KeyMaker</t>","custom\KeyMaker\Key_Dialog.sqf",_cursorTarget, 5, true, true, "",""];
};
}else{
player removeaction s_maker_dialog;
s_maker_dialog = -1;
};
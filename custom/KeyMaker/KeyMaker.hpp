class KeyMakerLega {
	movingEnable = 1;
	idd = 7459;
	onLoad = "_this ExecVM 'custom\keymaker\onload.sqf'";
	class controlsBackground {
			class Lega_BG_Main: IGUIBACK
			{
				idc = 2200;
				x = 0.443287 * safezoneW + safezoneX;
				y = 0.378993 * safezoneH + safezoneY;
				w = 0.113424 * safezoneW;
				h = 0.242013 * safezoneH;
				colorBackground[] = {0,0,0,0.7};
				colorActive[] = {0,0,0,0.7};
			};
			class Lega_Title_BG: IGUIBACK
			{
				idc = 2201;
				moving = 1;
				x = 0.443288 * safezoneW + safezoneX;
				y = 0.356993 * safezoneH + safezoneY;
				w = 0.113424 * safezoneW;
				h = 0.0220011 * safezoneH;
				type = 0;
				style = 0;
				shadow = 1;
				colorShadow[] = {0, 0, 0, 0.5};
				SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
				colorText[] = {1, 1, 1, 1.0};
				linespacing = 1;
				tooltipColorText[] = {1,1,1,1};
				tooltipColorBox[] = {1,1,1,1};
				tooltipColorShade[] = {0,0,0,0.65};
				colorBackground[] = {0.2,0.75,1,1};
			};
							};
				class controls {
			class RscText_Lega_Title: RscText
			{
				idc = 4591;
				x = 0.443288 * safezoneW + safezoneX;
				y = 0.356993 * safezoneH + safezoneY;
				w = 0.113424 * safezoneW;
				h = 0.0220011 * safezoneH;
				text = "Key Maker v1.0 By Lega";
				type = CT_STATIC;
				style = ST_LEFT;
				shadow = 1;
				colorText[] = {1,1,1,1};
				colorShadow[] = {0, 0, 0, 0.5};
				colorbackground[] = {0,0,0,0};
				SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
				linespacing = 1;
				tooltipColorText[] = {1,1,1,1};
				tooltipColorBox[] = {1,1,1,1};
				tooltipColorShade[] = {0,0,0,0.65};
			};
			class RscText_1000:  RscText
			{
				text = "";
				idc = 4590;
				x = 0.453599 * safezoneW + safezoneX;
				y = 0.400995 * safezoneH + safezoneY;
				w = 0.0928017 * safezoneW;
				h = 0.0330017 * safezoneH;
				type = 0;
				style = 0;
				shadow = 1;
				colorShadow[] = {0, 0, 0, 0.5};
				SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
				linespacing = 1;
				tooltipColorText[] = {1,1,1,1};
				tooltipColorBox[] = {1,1,1,1};
				tooltipColorShade[] = {0,0,0,0.65};

			};
			class Lega_Box1: RscEdit
			{
				idc = 7454;
				x = 0.453599 * safezoneW + safezoneX;
				y = 0.455998 * safezoneH + safezoneY;
				w = 0.015467 * safezoneW;
				h = 0.0330017 * safezoneH;
				tooltip = "First Character"; //--- ToDo: Localize;
			};
			class RscEdit_1401: RscEdit
			{
				idc = 7455;
				x = 0.479377 * safezoneW + safezoneX;
				y = 0.455998 * safezoneH + safezoneY;
				w = 0.015467 * safezoneW;
				h = 0.0330017 * safezoneH;
				tooltip = "Second Character"; //--- ToDo: Localize;
			};
			class RscEdit_1402: RscEdit
			{
				idc = 7456;
				x = 0.505156 * safezoneW + safezoneX;
				y = 0.455998 * safezoneH + safezoneY;
				w = 0.015467 * safezoneW;
				h = 0.0330017 * safezoneH;
				tooltip = "Third Character"; //--- ToDo: Localize;
			};
			class RscEdit_1403: RscEdit
			{
				idc = 7457;
				x = 0.530934 * safezoneW + safezoneX;
				y = 0.455998 * safezoneH + safezoneY;
				w = 0.015467 * safezoneW;
				h = 0.0330017 * safezoneH;
				tooltip = "Fourth Character"; //--- ToDo: Localize;
			};
			class RscCombo_2100: RscCombo
			{
				idc = 7458;
				type = CT_COMBO;
				style = ST_LEFT;
				x = 0.453599 * safezoneW + safezoneX;
				y = 0.5 * safezoneH + safezoneY;
				w = 0.0928017 * safezoneW;
				h = 0.0220011 * safezoneH;
				tooltip = "Choose Key Colour"; //--- ToDo: Localize;
				color[] = {0.2,0.75,1,1};
				class ScrollBar
				{
					color[] = {1,1,1,1};
					colorActive[] = {0.2,0.75,1,1};
					colorDisabled[] = {0.2,0.75,1,1};
					shadow = 0;
					thumb = "\ca\ui\data\ui_scrollbar_thumb_ca.paa";
					arrowFull = "\ca\ui\data\ui_arrow_top_active_ca.paa";
					arrowEmpty = "\ca\ui\data\ui_arrow_top_ca.paa";
					border = "\ca\ui\data\ui_border_scroll_ca.paa";
				};
			
			};
			
			class Lega_KeyExit: RscButton
			{
				idc = 1610;
				text = "EXIT"; //--- ToDo: Localize;
				x = 0.453599 * safezoneW + safezoneX;
				y = 0.544002 * safezoneH + safezoneY;
				w = 0.0412452 * safezoneW;
				h = 0.0330017 * safezoneH;
				colorBackground[] = {0.2,0.75,1,1};
				colorText[] = {1,1,1,1};
				tooltip = "Exit the Menu"; //--- ToDo: Localize;
				onbuttonclick = closeDisplay 7459;
			};
			class Lega_Create_Key: RscButton
			{
				idc = 1600;
				text = "CREATE"; //--- ToDo: Localize;
				x = 0.505156 * safezoneW + safezoneX;
				y = 0.544002 * safezoneH + safezoneY;
				w = 0.0412452 * safezoneW;
				h = 0.0330017 * safezoneH;
				colorBackground[] = {0.2,0.75,1,1};
				tooltip = "Create Key Now"; //--- ToDo: Localize;
				onButtonClick =  "[(ctrlText 7454),(ctrlText 7455),(ctrlText 7456),(ctrlText 7457)] call fnc_createkey; ((ctrlParent (_this select 0)) closeDisplay 7459);";

			};
						};
};

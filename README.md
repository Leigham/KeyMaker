// KeyMaker v1.0 By Lega, for EpochMod.com with Help of RayMix ! :D 

This Script Is Configurable from Single Coins Or Item/Gold Trading, with anything, set by Classname (i.e ItemBriefcase50oz)
It uses the 4 letter/number code on the Key and the Key Colour to Make a new key with a set price, you can choose which skins give the scroll wheel option via the configfile. 
You can choose the price whether it be Single Coin or Gold. 
Debug mode is there , Incase you run into problems, again in the configs

//Plans 

Bring in an option to give Keys free, (not reccommended, but still an option).
To make a Mechanic that comes to you on the right click of as radio, and if you kill him, he spawns a group around you with configurable skills/weapons, to hunt you down. 


//Installation Instructions.

1, Extract the Zip, into your root Directory so its in the same folder as your Init.sqf and Description.ext so it should be custom\Keymaker\Files here. 


2,  Open Your Init.sqf, and right at the BOTTOM, put 

			execvm "custom\Keymaker\createkey_init.sqf";
			
3, Defines, If you do not already have a defines, use the one that comes with this zip it should be in the directory 
scripts\defines\Defines.hpp
Again if you dont already have them, include the below in your Description.ext.
			
			#include "scripts\defines\defines.hpp"

4, Configure, Then your done. 

Come check out our forums. 
http://www.unitedbygames.com/forums 
http://www.unitedbygames.com/stats

And post suggestions on our forums for other script Idea's  
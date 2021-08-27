class CfgPatches
{
	class CombinableItems
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgMods
{
	class CombinableItems
	{
		dir="CombinableItems";
		hideName=1;
		hidePicture=1;
		name="CombinableItems";
		credits="Veypor";
		author="Veypor";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"World"
		};
		class defs
		{
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"CombinableItems/Scripts/4_World"
				};
			};
		};
	};
};

#define _ARMA_
class CfgPatches
{
	class 143rdRetexture
	{
		author = "Rowan";
		authors[] = {"Rowan"};
		weapons[] = {"143rd_OPTRE_UNSC_PatrolCap_Marines_Base"};
		requiredVersion = 0.1;
 		requiredAddons[] = {"OPTRE_UNSC_Units_Army"};
	};
};

class CfgWeapons
{
// Includes
	class VestItem;
	class ItemInfo;
	class OPTRE_UNSC_M52A_Armor_Rifleman_MAR;
	class OPTRE_UNSC_CH252_Helmet2_WDL;
	class OPTRE_UNSC_PatrolCap_Marines;

// Vests
	class 143rd_UNSC_M52A_Armor_Rifleman_MAR_Base: OPTRE_UNSC_M52A_Armor_Rifleman_MAR
	{
		author = "Rowan";
		displayName = "143rd M52A Body Armor (Rifleman) [Marine/143rd]";
		hiddenSelectionsTextures[] = {
			"@143rd Retexture\Addons\Uniform\data\M52A\vest_marine_co.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\143_armor_marine_co_Base.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\legs_marine_co.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\ghillie_woodland_co.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\odst_armor_co.paa"};
	};
	class 143rd_UNSC_M52A_Armor_Rifleman_MAR_Command: OPTRE_UNSC_M52A_Armor_Rifleman_MAR
	{
		author = "Rowan";
		displayName = "143rd M52A Body Armor (Rifleman) [Marine/Command]";
		hiddenSelectionsTextures[] = {
			"@143rd Retexture\Addons\Uniform\data\M52A\vest_marine_co.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\143_armor_marine_co_cmd.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\legs_marine_co.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\ghillie_woodland_co.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\odst_armor_co.paa"};
	};
	class 143rd_UNSC_M52A_Armor_Rifleman_MAR_1_1: OPTRE_UNSC_M52A_Armor_Rifleman_MAR
	{
		author = "Rowan";
		displayName = "143rd M52A Body Armor (Rifleman) [Marine/1-1]";
		hiddenSelectionsTextures[] = {
			"@143rd Retexture\Addons\Uniform\data\M52A\vest_marine_co.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\143_armor_marine_co_1_1.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\legs_marine_co.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\ghillie_woodland_co.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\odst_armor_co.paa"};
	};
	class 143rd_UNSC_M52A_Armor_Rifleman_MAR_1_2: OPTRE_UNSC_M52A_Armor_Rifleman_MAR
	{
		author = "Rowan";
		displayName = "143rd M52A Body Armor (Rifleman) [Marine/1-2]";
		hiddenSelectionsTextures[] = {
			"@143rd Retexture\Addons\Uniform\data\M52A\vest_marine_co.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\143_armor_marine_co_1_2.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\legs_marine_co.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\ghillie_woodland_co.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\odst_armor_co.paa"};
	};
	class 143rd_UNSC_M52A_Armor_Rifleman_MAR_1_3: OPTRE_UNSC_M52A_Armor_Rifleman_MAR
	{
		author = "Rowan";
		displayName = "143rd M52A Body Armor (Rifleman) [Marine/1-3]";
		hiddenSelectionsTextures[] = {
			"@143rd Retexture\Addons\Uniform\data\M52A\vest_marine_co.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\143_armor_marine_co_1_3.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\legs_marine_co.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\ghillie_woodland_co.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\odst_armor_co.paa"};
	};
	class 143rd_UNSC_M52A_Armor_Rifleman_MAR_1_4: OPTRE_UNSC_M52A_Armor_Rifleman_MAR
	{
		author = "Rowan";
		displayName = "143rd M52A Body Armor (Rifleman) [Marine/1-4]";
		hiddenSelectionsTextures[] = {
			"@143rd Retexture\Addons\Uniform\data\M52A\vest_marine_co.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\143_armor_marine_co_1_4.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\legs_marine_co.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\ghillie_woodland_co.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\odst_armor_co.paa"};
	};
	class 143rd_UNSC_M52A_Armor_Rifleman_MAR_Flight: OPTRE_UNSC_M52A_Armor_Rifleman_MAR
	{
		author = "Rowan";
		displayName = "143rd M52A Body Armor (Rifleman) [Marine/Flight]";
		hiddenSelectionsTextures[] = {
			"@143rd Retexture\Addons\Uniform\data\M52A\vest_marine_co.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\143_armor_marine_co_flight.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\legs_marine_co.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\ghillie_woodland_co.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\odst_armor_co.paa"};
	};
	class 143rd_UNSC_M52A_Armor_Rifleman_MAR_Tank: OPTRE_UNSC_M52A_Armor_Rifleman_MAR
	{
		author = "Rowan";
		displayName = "143rd M52A Body Armor (Rifleman) [Marine/Tank]";
		hiddenSelectionsTextures[] = {
			"@143rd Retexture\Addons\Uniform\data\M52A\vest_marine_co.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\143_armor_marine_co_tank.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\legs_marine_co.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\ghillie_woodland_co.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\odst_armor_co.paa"};
	};

// High Capacity Vests
	class 143rd_UNSC_M52P_Armor_Rifleman_MAR_Base: OPTRE_UNSC_M52A_Armor_Rifleman_MAR
	{
		author = "Rowan";
		displayName = "143rd M52P High Capacity Body Armor (Rifleman) [Marine/143rd]";
		hiddenSelectionsTextures[] = {
			"@143rd Retexture\Addons\Uniform\data\M52A\vest_marine_co.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\143_armor_marine_co_Base.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\legs_marine_co.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\ghillie_woodland_co.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\odst_armor_co.paa"};
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply400";
			mass = 150;
		};
	};
	class 143rd_UNSC_M52P_Armor_Rifleman_MAR_Command: 143rd_UNSC_M52P_Armor_Rifleman_MAR_Base
	{
		author = "Rowan";
		displayName = "143rd M52P High Capacity Body Armor (Rifleman) [Marine/Command]";
		hiddenSelectionsTextures[] = {
			"@143rd Retexture\Addons\Uniform\data\M52A\vest_marine_co.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\143_armor_marine_co_cmd.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\legs_marine_co.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\ghillie_woodland_co.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\odst_armor_co.paa"};
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply400";
			mass = 150;
		};
	};
	class 143rd_UNSC_M52P_Armor_Rifleman_MAR_1_1: 143rd_UNSC_M52P_Armor_Rifleman_MAR_Base
	{
		author = "Rowan";
		displayName = "143rd M52P High Capacity Body Armor (Rifleman) [Marine/1-1]";
		hiddenSelectionsTextures[] = {
			"@143rd Retexture\Addons\Uniform\data\M52A\vest_marine_co.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\143_armor_marine_co_1_1.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\legs_marine_co.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\ghillie_woodland_co.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\odst_armor_co.paa"};
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply400";
			mass = 150;
		};
	};
	class 143rd_UNSC_M52P_Armor_Rifleman_MAR_1_2: 143rd_UNSC_M52P_Armor_Rifleman_MAR_Base
	{
		author = "Rowan";
		displayName = "143rd M52P High Capacity Body Armor (Rifleman) [Marine/1-2]";
		hiddenSelectionsTextures[] = {
			"@143rd Retexture\Addons\Uniform\data\M52A\vest_marine_co.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\143_armor_marine_co_1_2.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\legs_marine_co.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\ghillie_woodland_co.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\odst_armor_co.paa"};
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply400";
			mass = 150;
		};
	};
	class 143rd_UNSC_M52P_Armor_Rifleman_MAR_1_3: 143rd_UNSC_M52P_Armor_Rifleman_MAR_Base
	{
		author = "Rowan";
		displayName = "143rd M52P High Capacity Body Armor (Rifleman) [Marine/1-3]";
		hiddenSelectionsTextures[] = {
			"@143rd Retexture\Addons\Uniform\data\M52A\vest_marine_co.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\143_armor_marine_co_1_3.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\legs_marine_co.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\ghillie_woodland_co.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\odst_armor_co.paa"};
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply400";
			mass = 150;
		};
	};
	class 143rd_UNSC_M52P_Armor_Rifleman_MAR_1_4: 143rd_UNSC_M52P_Armor_Rifleman_MAR_Base
	{
		author = "Rowan";
		displayName = "143rd M52P High Capacity Body Armor (Rifleman) [Marine/1-4]";
		hiddenSelectionsTextures[] = {
			"@143rd Retexture\Addons\Uniform\data\M52A\vest_marine_co.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\143_armor_marine_co_1_4.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\legs_marine_co.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\ghillie_woodland_co.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\odst_armor_co.paa"};
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply400";
			mass = 150;
		};
	};
	class 143rd_UNSC_M52P_Armor_Rifleman_MAR_Flight: 143rd_UNSC_M52P_Armor_Rifleman_MAR_Base
	{
		author = "Rowan";
		displayName = "143rd M52P High Capacity Body Armor (Rifleman) [Marine/Flight]";
		hiddenSelectionsTextures[] = {
			"@143rd Retexture\Addons\Uniform\data\M52A\vest_marine_co.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\143_armor_marine_co_flight.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\legs_marine_co.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\ghillie_woodland_co.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\odst_armor_co.paa"};
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply400";
			mass = 150;
		};
	};
	class 143rd_UNSC_M52P_Armor_Rifleman_MAR_Tank: 143rd_UNSC_M52P_Armor_Rifleman_MAR_Base
	{
		author = "Rowan";
		displayName = "143rd M52P High Capacity Body Armor (Rifleman) [Marine/Tank]";
		hiddenSelectionsTextures[] = {
			"@143rd Retexture\Addons\Uniform\data\M52A\vest_marine_co.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\143_armor_marine_co_tank.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\legs_marine_co.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\ghillie_woodland_co.paa", 
			"@143rd Retexture\Addons\Uniform\data\M52A\odst_armor_co.paa"};
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply400";
			mass = 150;
		};
	};

// Helmet
	class 143rd_OPTRE_UNSC_CH252_Helmet2_MAR_Color_Map: OPTRE_UNSC_CH252_Helmet2_WDL
	{
		dlc = "OPTRE";
		scope = 2;
		author = "Rowan";
		displayName = "143rd CH252 Helmet (Collar) [Marine/Map]";
		hiddenSelectionsTextures[] = {
			"@143rd Retexture\addons\Uniform\data\CH252\143_Helmet_marine_co_map.paa",
			"@143rd Retexture\addons\Uniform\data\CH252\helmet_visor_ca.paa",
			"@143rd Retexture\addons\Uniform\data\CH252\ghillie_woodland_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {
				"@143rd Retexture\addons\Uniform\data\CH252\143_Helmet_marine_co_map.paa",
				"@143rd Retexture\addons\Uniform\data\CH252\helmet_visor_ca.paa",
				"@143rd Retexture\addons\Uniform\data\CH252\ghillie_woodland_co.paa"};
		};
	};
	class 143rd_OPTRE_UNSC_CH252_Helmet2_MAR_143: OPTRE_UNSC_CH252_Helmet2_WDL
	{
		dlc = "OPTRE";
		scope = 2;
		author = "Rowan";
		displayName = "143rd CH252 Helmet (Collar) [Marine/143rd]";
		hiddenSelectionsTextures[] = {
			"@143rd Retexture\addons\Uniform\data\CH252\143_Helmet_marine_co_base.paa",
			"@143rd Retexture\addons\Uniform\data\CH252\helmet_visor_ca.paa",
			"@143rd Retexture\addons\Uniform\data\CH252\ghillie_woodland_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {
				"@143rd Retexture\addons\Uniform\data\CH252\143_Helmet_marine_co_base.paa",
				"@143rd Retexture\addons\Uniform\data\CH252\helmet_visor_ca.paa",
				"@143rd Retexture\addons\Uniform\data\CH252\ghillie_woodland_co.paa"};
		};
	};
	class 143rd_OPTRE_UNSC_CH252_Helmet2_MAR_Beni: OPTRE_UNSC_CH252_Helmet2_WDL
	{
		dlc = "OPTRE";
		scope = 2;
		author = "Rowan";
		displayName = "143rd CH252 Helmet (Collar) [Marine/Beni]";
		hiddenSelectionsTextures[] = {
			"@143rd Retexture\addons\Uniform\data\CH252\143_Helmet_marine_co_Beni.paa",
			"@143rd Retexture\addons\Uniform\data\CH252\helmet_visor_ca.paa",
			"@143rd Retexture\addons\Uniform\data\CH252\ghillie_woodland_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {
				"@143rd Retexture\addons\Uniform\data\CH252\143_Helmet_marine_co_Beni.paa",
				"@143rd Retexture\addons\Uniform\data\CH252\helmet_visor_ca.paa",
				"@143rd Retexture\addons\Uniform\data\CH252\ghillie_woodland_co.paa"};
		};
	};
	class 143rd_OPTRE_UNSC_CH252_Helmet2_MAR_Hullbuster: OPTRE_UNSC_CH252_Helmet2_WDL
	{
		dlc = "OPTRE";
		scope = 2;
		author = "Rowan";
		displayName = "143rd CH252 Helmet (Collar) [Marine/Hullbuster]";
		hiddenSelectionsTextures[] = {
			"@143rd Retexture\addons\Uniform\data\CH252\143_Helmet_marine_co_Hullbuster.paa",
			"@143rd Retexture\addons\Uniform\data\CH252\helmet_visor_ca.paa",
			"@143rd Retexture\addons\Uniform\data\CH252\ghillie_woodland_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {
				"@143rd Retexture\addons\Uniform\data\CH252\143_Helmet_marine_co_Hullbuster.paa",
				"@143rd Retexture\addons\Uniform\data\CH252\helmet_visor_ca.paa",
				"@143rd Retexture\addons\Uniform\data\CH252\ghillie_woodland_co.paa"};
		};
	};
	class 143rd_OPTRE_UNSC_CH252_Helmet2_MAR_Fuckwits: OPTRE_UNSC_CH252_Helmet2_WDL
	{
		dlc = "OPTRE";
		scope = 2;
		author = "Rowan";
		displayName = "143rd CH252 Helmet (Collar) [Marine/Fuckwits]";
		hiddenSelectionsTextures[] = {
			"@143rd Retexture\addons\Uniform\data\CH252\143_Helmet_marine_co_Fuckwits.paa",
			"@143rd Retexture\addons\Uniform\data\CH252\helmet_visor_ca.paa",
			"@143rd Retexture\addons\Uniform\data\CH252\ghillie_woodland_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {
				"@143rd Retexture\addons\Uniform\data\CH252\143_Helmet_marine_co_Fuckwits.paa",
				"@143rd Retexture\addons\Uniform\data\CH252\helmet_visor_ca.paa",
				"@143rd Retexture\addons\Uniform\data\CH252\ghillie_woodland_co.paa"};
		};
	};
	class 143rd_OPTRE_UNSC_CH252_Helmet2_MAR_Fuckwits2: OPTRE_UNSC_CH252_Helmet2_WDL
	{
		dlc = "OPTRE";
		scope = 2;
		author = "Rowan";
		displayName = "143rd CH252 Helmet (Collar) [Marine/Fuckwits]";
		hiddenSelectionsTextures[] = {
			"@143rd Retexture\addons\Uniform\data\CH252\143_Helmet_marine_co_Fuckwits_w_Skull.paa",
			"@143rd Retexture\addons\Uniform\data\CH252\helmet_visor_ca.paa",
			"@143rd Retexture\addons\Uniform\data\CH252\ghillie_woodland_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {
				"@143rd Retexture\addons\Uniform\data\CH252\143_Helmet_marine_co_Fuckwits_w_Skull.paa",
				"@143rd Retexture\addons\Uniform\data\CH252\helmet_visor_ca.paa",
				"@143rd Retexture\addons\Uniform\data\CH252\ghillie_woodland_co.paa"};
		};
	};
	class 143rd_OPTRE_UNSC_CH252_Helmet2_MAR_Grover: OPTRE_UNSC_CH252_Helmet2_WDL
	{
		dlc = "OPTRE";
		scope = 2;
		author = "Rowan";
		displayName = "143rd CH252 Helmet (Collar) [Marine/Grover]";
		hiddenSelectionsTextures[] = {
			"@143rd Retexture\addons\Uniform\data\CH252\143_Helmet_marine_co_Grover.paa",
			"@143rd Retexture\addons\Uniform\data\CH252\helmet_visor_ca.paa",
			"@143rd Retexture\addons\Uniform\data\CH252\ghillie_woodland_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {
				"@143rd Retexture\addons\Uniform\data\CH252\143_Helmet_marine_co_Grover.paa",
				"@143rd Retexture\addons\Uniform\data\CH252\helmet_visor_ca.paa",
				"@143rd Retexture\addons\Uniform\data\CH252\ghillie_woodland_co.paa"};
		};
	};
	class 143rd_OPTRE_UNSC_CH252_Helmet2_MAR_Nova: OPTRE_UNSC_CH252_Helmet2_WDL
	{
		dlc = "OPTRE";
		scope = 2;
		author = "Rowan";
		displayName = "143rd CH252 Helmet (Collar) [Marine/Nova]";
		hiddenSelectionsTextures[] = {
			"@143rd Retexture\addons\Uniform\data\CH252\143_Helmet_marine_co_Nova.paa",
			"@143rd Retexture\addons\Uniform\data\CH252\helmet_visor_ca.paa",
			"@143rd Retexture\addons\Uniform\data\CH252\ghillie_woodland_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {
				"@143rd Retexture\addons\Uniform\data\CH252\143_Helmet_marine_co_Nova.paa",
				"@143rd Retexture\addons\Uniform\data\CH252\helmet_visor_ca.paa",
				"@143rd Retexture\addons\Uniform\data\CH252\ghillie_woodland_co.paa"};
		};
	};
	class 143rd_OPTRE_UNSC_CH252_Helmet2_MAR_Pride: OPTRE_UNSC_CH252_Helmet2_WDL
	{
		dlc = "OPTRE";
		scope = 2;
		author = "Rowan";
		displayName = "143rd CH252 Helmet (Collar) [Marine/Pride]";
		hiddenSelectionsTextures[] = {
			"@143rd Retexture\addons\Uniform\data\CH252\143_Helmet_marine_co_Pride.paa",
			"@143rd Retexture\addons\Uniform\data\CH252\helmet_visor_ca.paa",
			"@143rd Retexture\addons\Uniform\data\CH252\ghillie_woodland_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {
				"@143rd Retexture\addons\Uniform\data\CH252\143_Helmet_marine_co_Pride.paa",
				"@143rd Retexture\addons\Uniform\data\CH252\helmet_visor_ca.paa",
				"@143rd Retexture\addons\Uniform\data\CH252\ghillie_woodland_co.paa"};
		};
	};
	class 143rd_OPTRE_UNSC_CH252_Helmet2_MAR_143_y0_m1: OPTRE_UNSC_CH252_Helmet2_WDL
	{
		dlc = "OPTRE";
		scope = 2;
		author = "Rowan";
		displayName = "143rd CH252 Helmet (Collar) [Marine/143rd] [1 Month]";
		hiddenSelectionsTextures[] = {
			"@143rd Retexture\addons\Uniform\data\CH252\143_Helmet_marine_co_base_y0_m1.paa",
			"@143rd Retexture\addons\Uniform\data\CH252\helmet_visor_ca.paa",
			"@143rd Retexture\addons\Uniform\data\CH252\ghillie_woodland_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {
				"@143rd Retexture\addons\Uniform\data\CH252\143_Helmet_marine_co_base_y0_m1.paa",
				"@143rd Retexture\addons\Uniform\data\CH252\helmet_visor_ca.paa",
				"@143rd Retexture\addons\Uniform\data\CH252\ghillie_woodland_co.paa"};
		};
	};
	class 143rd_OPTRE_UNSC_CH252_Helmet2_MAR_143_y0_m3: OPTRE_UNSC_CH252_Helmet2_WDL
	{
		dlc = "OPTRE";
		scope = 2;
		author = "Rowan";
		displayName = "143rd CH252 Helmet (Collar) [Marine/143rd] [3 Month]";
		hiddenSelectionsTextures[] = {
			"@143rd Retexture\addons\Uniform\data\CH252\143_Helmet_marine_co_base_y0_m3.paa",
			"@143rd Retexture\addons\Uniform\data\CH252\helmet_visor_ca.paa",
			"@143rd Retexture\addons\Uniform\data\CH252\ghillie_woodland_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {
				"@143rd Retexture\addons\Uniform\data\CH252\143_Helmet_marine_co_base_y0_m3.paa",
				"@143rd Retexture\addons\Uniform\data\CH252\helmet_visor_ca.paa",
				"@143rd Retexture\addons\Uniform\data\CH252\ghillie_woodland_co.paa"};
		};
	};
	class 143rd_OPTRE_UNSC_CH252_Helmet2_MAR_143_y2_m4: OPTRE_UNSC_CH252_Helmet2_WDL
	{
		dlc = "OPTRE";
		scope = 2;
		author = "Rowan";
		displayName = "143rd CH252 Helmet (Collar) [Marine/143rd] [2 Years, 4 Months]";
		hiddenSelectionsTextures[] = {
			"@143rd Retexture\addons\Uniform\data\CH252\143_Helmet_marine_co_base_y2_m4.paa",
			"@143rd Retexture\addons\Uniform\data\CH252\helmet_visor_ca.paa",
			"@143rd Retexture\addons\Uniform\data\CH252\ghillie_woodland_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {
				"@143rd Retexture\addons\Uniform\data\CH252\143_Helmet_marine_co_base_y2_m4.paa",
				"@143rd Retexture\addons\Uniform\data\CH252\helmet_visor_ca.paa",
				"@143rd Retexture\addons\Uniform\data\CH252\ghillie_woodland_co.paa"};
		};
	};
	class 143rd_OPTRE_UNSC_CH252_Helmet2_MAR_143_y5_m0: OPTRE_UNSC_CH252_Helmet2_WDL
	{
		dlc = "OPTRE";
		scope = 2;
		author = "Rowan";
		displayName = "143rd CH252 Helmet (Collar) [Marine/143rd] [5 Years]";
		hiddenSelectionsTextures[] = {
			"@143rd Retexture\addons\Uniform\data\CH252\143_Helmet_marine_co_base_y5_m0.paa",
			"@143rd Retexture\addons\Uniform\data\CH252\helmet_visor_ca.paa",
			"@143rd Retexture\addons\Uniform\data\CH252\ghillie_woodland_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {
				"@143rd Retexture\addons\Uniform\data\CH252\143_Helmet_marine_co_base_y5_m0.paa",
				"@143rd Retexture\addons\Uniform\data\CH252\helmet_visor_ca.paa",
				"@143rd Retexture\addons\Uniform\data\CH252\ghillie_woodland_co.paa"};
		};
	};
	class 143rd_OPTRE_UNSC_CH252_Helmet2_MAR_143_y5_m3: OPTRE_UNSC_CH252_Helmet2_WDL
	{
		dlc = "OPTRE";
		scope = 2;
		author = "Rowan";
		displayName = "143rd CH252 Helmet (Collar) [Marine/143rd] [5 Years, 3 Months]";
		hiddenSelectionsTextures[] = {
			"@143rd Retexture\addons\Uniform\data\CH252\143_Helmet_marine_co_base_y5_m3.paa",
			"@143rd Retexture\addons\Uniform\data\CH252\helmet_visor_ca.paa",
			"@143rd Retexture\addons\Uniform\data\CH252\ghillie_woodland_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {
				"@143rd Retexture\addons\Uniform\data\CH252\143_Helmet_marine_co_base_y5_m3.paa",
				"@143rd Retexture\addons\Uniform\data\CH252\helmet_visor_ca.paa",
				"@143rd Retexture\addons\Uniform\data\CH252\ghillie_woodland_co.paa"};
		};
	};

// Patrol Cap
	class 143rd_OPTRE_UNSC_PatrolCap_Marines_Base: OPTRE_UNSC_PatrolCap_Marines
	{
		author = "Rowan";
		displayName = "143rd Patrol Cap [Marine/143rd]";
		hiddenSelectionsTextures[] = {"@143rd Retexture\addons\Uniform\data\Patrol Cap\143_patrolcap_marines_co_base.paa"};
		ACE_hearing_protection = 1;
		ACE_hearing_lowervolume = 0.1;
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"@143rd Retexture\addons\Uniform\data\Patrol Cap\143_patrolcap_marines_co_base.paa"};
		};
	};
	class 143rd_OPTRE_UNSC_PatrolCap_Marines_Command: OPTRE_UNSC_PatrolCap_Marines
	{
		author = "Rowan";
		displayName = "143rd Patrol Cap [Marines/Command]";
		hiddenSelectionsTextures[] = {"@143rd Retexture\addons\Uniform\data\Patrol Cap\143_patrolcap_marines_co_cmd.paa"};
		ACE_hearing_protection = 1;
		ACE_hearing_lowervolume = 0.1;
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"@143rd Retexture\addons\Uniform\data\Patrol Cap\143_patrolcap_marines_co_cmd.paa"};
		};
	};
	class 143rd_OPTRE_UNSC_PatrolCap_Marines_1_1: OPTRE_UNSC_PatrolCap_Marines
	{
		author = "Rowan";
		displayName = "143rd Patrol Cap [Marines/1-1]";
		hiddenSelectionsTextures[] = {"@143rd Retexture\addons\Uniform\data\Patrol Cap\143_patrolcap_marines_co_1_1.paa"};
		ACE_hearing_protection = 1;
		ACE_hearing_lowervolume = 0.1;
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"@143rd Retexture\addons\Uniform\data\Patrol Cap\143_patrolcap_marines_co_1_1.paa"};
		};
	};
	class 143rd_OPTRE_UNSC_PatrolCap_Marines_1_2: OPTRE_UNSC_PatrolCap_Marines
	{
		author = "Rowan";
		displayName = "143rd Patrol Cap [Marines/1-2]";
		hiddenSelectionsTextures[] = {"@143rd Retexture\addons\Uniform\data\Patrol Cap\143_patrolcap_marines_co_1_2.paa"};
		ACE_hearing_protection = 1;
		ACE_hearing_lowervolume = 0.1;
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"@143rd Retexture\addons\Uniform\data\Patrol Cap\143_patrolcap_marines_co_1_2.paa"};
		};
	};
	class 143rd_OPTRE_UNSC_PatrolCap_Marines_1_3: OPTRE_UNSC_PatrolCap_Marines
	{
		author = "Rowan";
		displayName = "143rd Patrol Cap [Marines/1-3]";
		hiddenSelectionsTextures[] = {"@143rd Retexture\addons\Uniform\data\Patrol Cap\143_patrolcap_marines_co_1_3.paa"};
		ACE_hearing_protection = 1;
		ACE_hearing_lowervolume = 0.1;
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"@143rd Retexture\addons\Uniform\data\Patrol Cap\143_patrolcap_marines_co_1_3.paa"};
		};
	};
	class 143rd_OPTRE_UNSC_PatrolCap_Marines_1_4: OPTRE_UNSC_PatrolCap_Marines
	{
		author = "Rowan";
		displayName = "143rd Patrol Cap [Marines/1-4]";
		hiddenSelectionsTextures[] = {"@143rd Retexture\addons\Uniform\data\Patrol Cap\143_patrolcap_marines_co_1_4.paa"};
		ACE_hearing_protection = 1;
		ACE_hearing_lowervolume = 0.1;
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"@143rd Retexture\addons\Uniform\data\Patrol Cap\143_patrolcap_marines_co_1_4.paa"};
		};
	};
	class 143rd_OPTRE_UNSC_PatrolCap_Marines_Flight: OPTRE_UNSC_PatrolCap_Marines
	{
		author = "Rowan";
		displayName = "143rd Patrol Cap [Marines/Flight]";
		hiddenSelectionsTextures[] = {"@143rd Retexture\addons\Uniform\data\Patrol Cap\143_patrolcap_marines_co_flight.paa"};
		ACE_hearing_protection = 1;
		ACE_hearing_lowervolume = 0.1;
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"@143rd Retexture\addons\Uniform\data\Patrol Cap\143_patrolcap_marines_co_flight.paa"};
		};
	};
	class 143rd_OPTRE_UNSC_PatrolCap_Marines_Tank: OPTRE_UNSC_PatrolCap_Marines
	{
		author = "Rowan";
		displayName = "143rd Patrol Cap [Marines/Tank]";
		hiddenSelectionsTextures[] = {"@143rd Retexture\addons\Uniform\data\Patrol Cap\143_patrolcap_marines_co_tank.paa"};
		ACE_hearing_protection = 1;
		ACE_hearing_lowervolume = 0.1;
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"@143rd Retexture\addons\Uniform\data\Patrol Cap\143_patrolcap_marines_co_tank.paa"};
		};
	};
	class 143rd_OPTRE_UNSC_PatrolCap_Marines_Benni: OPTRE_UNSC_PatrolCap_Marines
	{
		author = "Rowan";
		displayName = "143rd Patrol Cap [Marines/Benni]";
		hiddenSelectionsTextures[] = {"@143rd Retexture\addons\Uniform\data\Patrol Cap\143_patrolcap_marines_co_benni.paa"};
		ACE_hearing_protection = 1;
		ACE_hearing_lowervolume = 0.1;
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"@143rd Retexture\addons\Uniform\data\Patrol Cap\143_patrolcap_marines_co_benni.paa"};
		};
	};
	class 143rd_OPTRE_UNSC_PatrolCap_Marines_Map: OPTRE_UNSC_PatrolCap_Marines
	{
		author = "Rowan";
		displayName = "143rd Patrol Cap [Marines/Map]";
		hiddenSelectionsTextures[] = {"@143rd Retexture\addons\Uniform\data\Patrol Cap\143_patrolcap_marines_co_map.paa"};
		ACE_hearing_protection = 1;
		ACE_hearing_lowervolume = 0.1;
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {"@143rd Retexture\addons\Uniform\data\Patrol Cap\143_patrolcap_marines_co_map.paa"};
		};
	};

// Sangheili Armor
	class OPTRE_FC_Elite_Armor_Major;
	class OPTRE_FC_Elite_Helmet_Major;
	class 143rd_FC_Elite_Armor_Brown: OPTRE_FC_Elite_Armor_Major
	{
		author = "Rowan";
		displayName = "143rd Elite Armor [Brown]";
		hiddenSelectionsTextures[] = {"@143rd Retexture\addons\Uniform\data\Sangheili\143rd_Elite_Body_Armor_CO_Brown.paa","@143rd Retexture\addons\Uniform\data\Sangheili\143rd_Elite_Legs_and_Arms_CO_Brown.paa"};
	};
	class 143rd_FC_Elite_Armor_Orange: OPTRE_FC_Elite_Armor_Major
	{
		author = "Rowan";
		displayName = "143rd Elite Armor [Orange]";
		hiddenSelectionsTextures[] = {"@143rd Retexture\addons\Uniform\data\Sangheili\143rd_Elite_Body_Armor_CO_Orange.paa","@143rd Retexture\addons\Uniform\data\Sangheili\143rd_Elite_Legs_and_Arms_CO_Orange.paa"};
	};
	class 143rd_FC_Elite_Armor_Tan: OPTRE_FC_Elite_Armor_Major
	{
		author = "Rowan";
		displayName = "143rd Elite Armor [Tan]";
		hiddenSelectionsTextures[] = {"@143rd Retexture\addons\Uniform\data\Sangheili\143rd_Elite_Body_Armor_CO_Tan.paa","@143rd Retexture\addons\Uniform\data\Sangheili\143rd_Elite_Legs_and_Arms_CO_Tan.paa"};
	};
	class 143rd_FC_Elite_Armor_Gold: OPTRE_FC_Elite_Armor_Major
	{
		author = "Rowan";
		displayName = "143rd Elite Armor [Gold]";
		hiddenSelectionsTextures[] = {"@143rd Retexture\addons\Uniform\data\Sangheili\143rd_Elite_Body_Armor_CO_Gold.paa","@143rd Retexture\addons\Uniform\data\Sangheili\143rd_Elite_Legs_and_Arms_CO_Gold.paa"};
	};
	class 143rd_FC_Elite_Armor_Rust: OPTRE_FC_Elite_Armor_Major
	{
		author = "Rowan";
		displayName = "143rd Elite Armor [Rust]";
		hiddenSelectionsTextures[] = {"@143rd Retexture\addons\Uniform\data\Sangheili\143rd_Elite_Body_Armor_CO_Rust.paa","@143rd Retexture\addons\Uniform\data\Sangheili\143rd_Elite_Legs_and_Arms_CO_Rust.paa"};
	};

	class 143rd_FC_Elite_Helmet_Brown: OPTRE_FC_Elite_Helmet_Major
	{
		author = "Rowan";
		displayName = "143rd Elite Helmet [Brown]";
		hiddenSelectionsTextures[] = {"@143rd Retexture\addons\Uniform\data\Sangheili\143rd_Elite_Helmet_CO_Brown.paa"};
	};
	class 143rd_FC_Elite_Helmet_Orange: OPTRE_FC_Elite_Helmet_Major
	{
		author = "Rowan";
		displayName = "143rd Elite Helmet [Orange]";
		hiddenSelectionsTextures[] = {"@143rd Retexture\addons\Uniform\data\Sangheili\143rd_Elite_Helmet_CO_Orange.paa"};
	};
	class 143rd_FC_Elite_Helmet_Tan: OPTRE_FC_Elite_Helmet_Major
	{
		author = "Rowan";
		displayName = "143rd Elite Helmet [Tan]";
		hiddenSelectionsTextures[] = {"@143rd Retexture\addons\Uniform\data\Sangheili\143rd_Elite_Helmet_CO_Tan.paa"};
	};
	class 143rd_FC_Elite_Helmet_Gold: OPTRE_FC_Elite_Helmet_Major
	{
		author = "Rowan";
		displayName = "143rd Elite Helmet [Gold]";
		hiddenSelectionsTextures[] = {"@143rd Retexture\addons\Uniform\data\Sangheili\143rd_Elite_Helmet_CO_Gold.paa"};
	};
	class 143rd_FC_Elite_Helmet_Rust: OPTRE_FC_Elite_Helmet_Major
	{
		author = "Rowan";
		displayName = "143rd Elite Helmet [Rust]";
		hiddenSelectionsTextures[] = {"@143rd Retexture\addons\Uniform\data\Sangheili\143rd_Elite_Helmet_CO_Rust.paa"};
	};
};
// this file disables all the vanilla magazines
class CfgMagazines
{
	class CA_Magazine;
	class 16Rnd_9x21_Mag;
	class 10Rnd_9x21_Mag: 16Rnd_9x21_Mag
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_10Rnd_9x21_Mag0";
		count = 10;
		descriptionShort = "$STR_A3_CfgMagazines_10Rnd_9x21_Mag1";
		mass = 4;
		initSpeed = 410;
	};
	class 30Rnd_580x42_Mag_F: CA_Magazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_CfgMagazines_30Rnd_580x42_Mag_F0";
		descriptionShort = "$STR_A3_CfgMagazines_30Rnd_580x42_Mag_F1";
		ammo = "B_580x42_Ball_F";
		count = 30;
		initSpeed = 930;
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_580x42_Mag_F_ca.paa";
		tracersEvery = 0;
		lastRoundsTracer = 4;
		mass = 8;
	};
	class 30Rnd_580x42_Mag_Tracer_F: 30Rnd_580x42_Mag_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_30Rnd_580x42_Mag_Tracer_F0";
		displayNameShort = "$STR_A3_TRACER_DNS";
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_580x42_Mag_Tracer_F_ca.paa";
		tracersEvery = 1;
		lastRoundsTracer = 30;
	};
	class 100Rnd_580x42_Mag_F: 30Rnd_580x42_Mag_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_100Rnd_580x42_Mag_F0";
		descriptionShort = "$STR_A3_CfgMagazines_100Rnd_580x42_Mag_F1";
		count = 100;
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_100Rnd_580x42_Mag_F_ca.paa";
		mass = 20;
	};
	class 100Rnd_580x42_Mag_Tracer_F: 100Rnd_580x42_Mag_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_100Rnd_580x42_Mag_Tracer_F0";
		displayNameShort = "$STR_A3_TRACER_DNS";
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_100Rnd_580x42_Mag_Tracer_F_ca.paa";
		tracersEvery = 1;
		lastRoundsTracer = 100;
	};
	class 20Rnd_650x39_Cased_Mag_F: CA_Magazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_CfgMagazines_20Rnd_650x39_Cased_Mag_F0";
		descriptionShort = "$STR_A3_CfgMagazines_20Rnd_650x39_Cased_Mag_F1";
		ammo = "B_65x39_Case_green";
		count = 20;
		initSpeed = 820;
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_20Rnd_650x39_Cased_Mag_F_ca.paa";
		tracersEvery = 0;
		lastRoundsTracer = 0;
		mass = 7;
	};
	class 10Rnd_50BW_Mag_F: CA_Magazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_CfgMagazines_10Rnd_50BW_Mag_F0";
		descriptionShort = "$STR_A3_CfgMagazines_10Rnd_50BW_Mag_F1";
		ammo = "B_50BW_Ball_F";
		count = 10;
		initSpeed = 580;
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_10Rnd_50BW_Mag_F_ca.paa";
		tracersEvery = 0;
		lastRoundsTracer = 0;
		mass = 12;
	};
	class 150Rnd_556x45_Drum_Mag_F: CA_Magazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_CfgMagazines_150Rnd_556x45_Drum_Mag_F0";
		descriptionShort = "$STR_A3_CfgMagazines_150Rnd_556x45_Drum_Mag_F1";
		ammo = "B_556x45_Ball_Tracer_Red";
		count = 150;
		initSpeed = 930;
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_150Rnd_556x45_Drum_Mag_F_ca.paa";
		tracersEvery = 0;
		lastRoundsTracer = 4;
		mass = 30;
	};
	class 150Rnd_556x45_Drum_Mag_Tracer_F: 150Rnd_556x45_Drum_Mag_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_150Rnd_556x45_Drum_Mag_Tracer_F0";
		displayNameShort = "$STR_A3_TRACER_DNS";
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_150Rnd_556x45_Drum_Mag_Tracer_F_ca.paa";
		tracersEvery = 1;
		lastRoundsTracer = 150;
	};
	class 30Rnd_762x39_Mag_F: CA_Magazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_CfgMagazines_30Rnd_762x39_Mag_F0";
		descriptionShort = "$STR_A3_CfgMagazines_30Rnd_762x39_Mag_F1";
		ammo = "B_762x39_Ball_F";
		count = 30;
		initSpeed = 715;
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_762x39_Mag_F_ca.paa";
		tracersEvery = 0;
		lastRoundsTracer = 4;
		mass = 10;
	};
	class 30Rnd_762x39_Mag_Green_F: 30Rnd_762x39_Mag_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_30Rnd_762x39_Mag_Green_F0";
		ammo = "B_762x39_Ball_Green_F";
	};
	class 30Rnd_762x39_Mag_Tracer_F: 30Rnd_762x39_Mag_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_30Rnd_762x39_Mag_Tracer_F0";
		displayNameShort = "$STR_A3_TRACER_DNS";
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_762x39_Mag_Tracer_F_ca.paa";
		tracersEvery = 1;
		lastRoundsTracer = 30;
	};
	class 30Rnd_762x39_Mag_Tracer_Green_F: 30Rnd_762x39_Mag_Tracer_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_30Rnd_762x39_Mag_Tracer_Green_F0";
		ammo = "B_762x39_Ball_Green_F";
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_762x39_Mag_Tracer_Green_F_ca.paa";
	};
	class 30Rnd_545x39_Mag_F: CA_Magazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_CfgMagazines_30Rnd_545x39_Mag_F0";
		descriptionShort = "$STR_A3_CfgMagazines_30Rnd_545x39_Mag_F1";
		ammo = "B_545x39_Ball_F";
		count = 30;
		initSpeed = 735;
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_545x39_Mag_F_ca.paa";
		tracersEvery = 0;
		lastRoundsTracer = 4;
		mass = 8;
	};
	class 30Rnd_545x39_Mag_Green_F: 30Rnd_545x39_Mag_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_30Rnd_545x39_Mag_Green_F0";
		ammo = "B_545x39_Ball_Green_F";
	};
	class 30Rnd_545x39_Mag_Tracer_F: 30Rnd_545x39_Mag_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_30Rnd_545x39_Mag_Tracer_F0";
		displayNameShort = "$STR_A3_TRACER_DNS";
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_545x39_Mag_Tracer_F_ca.paa";
		tracersEvery = 1;
		lastRoundsTracer = 30;
	};
	class 30Rnd_545x39_Mag_Tracer_Green_F: 30Rnd_545x39_Mag_Tracer_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_30Rnd_545x39_Mag_Tracer_Green_F0";
		ammo = "B_545x39_Ball_Green_F";
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_545x39_Mag_Tracer_Green_F_ca.paa";
	};
	class 200Rnd_556x45_Box_F: CA_Magazine
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_CfgMagazines_200Rnd_556x45_Box_F0";
		descriptionShort = "$STR_A3_CfgMagazines_200Rnd_556x45_Box_F1";
		ammo = "B_556x45_Ball_Tracer_Yellow";
		count = 200;
		initSpeed = 915;
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_200Rnd_556x45_Box_F_ca.paa";
		tracersEvery = 4;
		lastRoundsTracer = 4;
		mass = 40;
	};
	class 200Rnd_556x45_Box_Red_F: 200Rnd_556x45_Box_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_200Rnd_556x45_Box_Red_F0";
		ammo = "B_556x45_Ball_Tracer_Red";
	};
	class 200Rnd_556x45_Box_Tracer_F: 200Rnd_556x45_Box_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_200Rnd_556x45_Box_Tracer_F0";
		displayNameShort = "$STR_A3_TRACER_DNS";
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_200Rnd_556x45_Box_Tracer_F_ca.paa";
		tracersEvery = 1;
		lastRoundsTracer = 200;
	};
	class 200Rnd_556x45_Box_Tracer_Red_F: 200Rnd_556x45_Box_Tracer_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_200Rnd_556x45_Box_Tracer_Red_F0";
		ammo = "B_556x45_Ball_Tracer_Red";
		picture = "\A3\Weapons_F_Exp\Data\UI\icon_200Rnd_556x45_Box_Tracer_Red_F_ca.paa";
	};
	class 200Rnd_65x39_Belt;
	class 500Rnd_65x39_Belt: 200Rnd_65x39_Belt
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 500;
		ammo = "B_65x39_Caseless";
		tracersEvery = 5;
		displayName = "$STR_A3_CfgMagazines_500Rnd_65x39_Belt0";
		descriptionShort = "$STR_A3_CfgMagazines_500Rnd_65x39_Belt1";
	};
	class 500Rnd_65x39_Belt_Tracer_Red_Splash: 500Rnd_65x39_Belt
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "B_65x39_Minigun_Caseless_Red_splash";
		tracersEvery = 1;
		displayName = "$STR_A3_CfgMagazines_500Rnd_65x39_Belt_Tracer_Red0";
		displaynameShort = "$STR_A3_TRACER_DNS";
	};
	class 500Rnd_65x39_Belt_Tracer_Green_Splash: 500Rnd_65x39_Belt
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "B_65x39_Minigun_Caseless_Green_splash";
		tracersEvery = 1;
		displayName = "$STR_A3_CfgMagazines_500Rnd_65x39_Belt_Tracer_Green0";
		displaynameShort = "$STR_A3_TRACER_DNS";
	};
	class 500Rnd_65x39_Belt_Tracer_Yellow_Splash: 500Rnd_65x39_Belt
	{
		author = "$STR_A3_Bohemia_Interactive";
		ammo = "B_65x39_Minigun_Caseless_Yellow_splash";
		tracersEvery = 1;
		displayName = "$STR_A3_CfgMagazines_500Rnd_65x39_Belt_Tracer_Yellow0";
		displaynameShort = "$STR_A3_TRACER_DNS";
	};
	class RPG32_F;
	class RPG7_F: RPG32_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		scope = 2;
		displayName = "$STR_A3_CfgMagazines_RPG7_F0";
		displaynameShort = "$STR_A3_CFGMAGAZINES_TITAN_AT_DNS";
		descriptionShort = "$STR_A3_CfgMagazines_RPG7_F1";
		model = "\A3\Weapons_F_Exp\Launchers\RPG7\rocket_rpg7_item.p3d";
		picture = "\A3\Weapons_F_Exp\Launchers\RPG7\Data\UI\icon_rocket_RPG7_CA.paa";
		initSpeed = 134;
		ammo = "R_PG7_F";
		type = "2*		256";
		mass = 40;
	};
	class 4Rnd_Missile_AGM_01_F;
	class 4Rnd_LG_Jian: 4Rnd_Missile_AGM_01_F
	{
		author = "$STR_A3_Bohemia_Interactive";
		displayName = "$STR_A3_CfgMagazines_4Rnd_LG_Jian0";
		displayNameShort = "$STR_A3_CFGMAGAZINES_8RND_LG_SCALPEL_DNS";
		ammo = "M_Jian_AT";
		count = 4;
		initSpeed = 0;
	};
	class 1000Rnd_20mm_shells;
	class 4000Rnd_20mm_Tracer_Red_shells: 1000Rnd_20mm_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 4000;
		tracersEvery = 1;
	};
	class 40Rnd_40mm_APFSDS_Tracer_Red_shells;
	class 160Rnd_40mm_APFSDS_Tracer_Red_shells: 40Rnd_40mm_APFSDS_Tracer_Red_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 160;
	};
	class 60Rnd_40mm_GPR_Tracer_Red_shells;
	class 240Rnd_40mm_GPR_Tracer_Red_shells: 60Rnd_40mm_GPR_Tracer_Red_shells
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 240;
	};
	class 20Rnd_105mm_HEAT_MP;
	class 100Rnd_105mm_HEAT_MP: 20Rnd_105mm_HEAT_MP
	{
		author = "$STR_A3_Bohemia_Interactive";
		count = 100;
	};
};

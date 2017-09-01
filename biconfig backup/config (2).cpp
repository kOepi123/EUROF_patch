// this file extracted from bohemia files
//			class PointerSlot: PointerSlot{};

class CfgPatches 
{
			class eurof_BI_equipment_patch
			{
						requiredaddons[] = { "A3_Data_F", "A3_UI_F", "A3_Anims_F", "A3_Anims_F_Config_Sdr", "A3_Weapons_F", "A3_Weapons_F_Acc", "A3_Sounds_F_Mark" };
						units[] = 
						{};
						weapons[] = // scope = 0 weapon seem not to go in here, scope = 1 dont seem to go in here either, base clsses can go in here
						{};
						magazines[] = 
						{};
						version = "V1.0";
						author = "kOepi";
			};
};

class SlotInfo;
class CowsSlot: SlotInfo {};
class MuzzleSlot: SlotInfo {};
class PointerSlot: SlotInfo {};
class Mode_SemiAuto {};
class Mode_Burst: Mode_SemiAuto {};
class Mode_FullAuto: Mode_SemiAuto {};
class WeaponSlotsInfo;

class CfgWeapons
{
	class Default;
	class MGunCore;
	class CannonCore;
	class LauncherCore;
	class RocketPods: LauncherCore {};
	class Launcher: LauncherCore
	{
	};
	class Launcher_Base_F: Launcher {};
	class GrenadeCore;
	class GrenadeLauncher: Default {};
	class UGL_F: GrenadeLauncher {};
	class RifleCore: Default{};
	class Rifle: RifleCore {};
	class Rifle_Base_F: Rifle {};
	class Rifle_Short_Base_F: Rifle_Base_F
	{
/*		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[] = {701,901};
		};
*/
	};
	class Rifle_Long_Base_F: Rifle_Base_F
	{
/*		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[] = {};
		};
*/		
	};
	class HandGunBase: Rifle
	{
/*		type = 2;
		initSpeed = 315;
		dexterity = 2;
		nameSound = "sidearm";
		cursor = "hgun";
		cursoraim = "CursorAim";
		value = 4;
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 10;
		midRangeProbab = 0.58;
		maxRange = 60;
		maxRangeProbab = 0.04;
*/
	};
	class PistolCore: Default{};
	class Pistol: PistolCore
	{
/*		htMin = 1;
		htMax = 300;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		autoReload = 0;
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		maxZeroing = 100;
		discreteDistance[] = {50};
		discreteDistanceInitIndex = 0;
		magazineReloadTime = 2;
		opticsFlare = 0;
		nameSound = "Pistol";
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		class WeaponSlotsInfo
		{
			class CowsSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				displayName = "$STR_A3_CowsSlot0";
				compatibleItems[] = {"optic_Nightstalker","optic_tws","optic_tws_mg","optic_NVS","optic_DMS","optic_LRPS","optic_SOS","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn","optic_aco_smg","optic_ACO_grn_smg","optic_hamr","optic_Holosight","optic_Holosight_smg"};
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
				iconPinpoint = "Bottom";
			};
			allowedSlots[] = {801,701,901};
			holsterOffset = "holster";
			holsterScale = 1;
		};
*/		
	};
	class Pistol_Base_F: Pistol
	{
/*		bullet1[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_01",0.56234133,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_02",0.56234133,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_03",0.56234133,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_04",0.56234133,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_01",0.56234133,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_02",0.56234133,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_03",0.56234133,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_04",0.56234133,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_01",0.56234133,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_02",0.56234133,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_03",0.56234133,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_04",0.56234133,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		optics = 1;
		modelOptics = "-";
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		cursor = "hgun";
		cursoraim = "cursorAim";
		minRange = 0;
		minRangeProbab = 0.1;
		midRange = 30;
		midRangeProbab = 0.3;
		maxRange = 50;
		maxRangeProbab = 0.04;
		reloadAction = "GestureReloadPistol";
		recoil = "recoil_default";
		weaponPoolAvailable = 1;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: SlotInfo
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName = "$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
				compatibleItems[] = {"muzzle_snds_L"};
				iconPicture = "\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinpoint = "Center";
			};
		};
		textureType = "semi";
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "PistolCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
*/		
	};
	class Throw: GrenadeLauncher
	{
/*		scope = 1;
		autoAimEnabled = 0;
		cursor = "EmptyCursor";
		cursorAim = "throw";
		value = 0;
		type = 0;
		displayName = "$STR_DN_THROW";
		canDrop = 0;
		textureType = "semi";
		magazineReloadTime = 0.0;
		reloadTime = 0.0;
		muzzles[] = {"HandGrenade_Stone","HandGrenadeMuzzle","MiniGrenadeMuzzle","SmokeShellMuzzle","SmokeShellYellowMuzzle","SmokeShellGreenMuzzle","SmokeShellRedMuzzle","SmokeShellPurpleMuzzle","SmokeShellOrangeMuzzle","SmokeShellBlueMuzzle","ChemlightGreenMuzzle","ChemlightRedMuzzle","ChemlightYellowMuzzle","ChemlightBlueMuzzle","IRGrenade"};
		class ThrowMuzzle: GrenadeLauncher
		{
			cursor = "EmptyCursor";
			cursorAim = "throw";
			sound[] = {"",0.00031622776,1};
			reloadSound[] = {"",0.00031622776,1};
			aiDispersionCoefX = 6;
			aiDispersionCoefY = 6;
			reloadTime = 0;
			magazineReloadTime = 2.5;
			enableAttack = 0;
			showEmpty = 0;
			autoReload = 1;
			modelOptics = "";
			minRange = 10;
			minRangeProbab = 0.2;
			midRange = 45;
			midRangeProbab = 0.9;
			maxRange = 60;
			maxRangeProbab = 0.03;
			keepInInventory = 1;
		};
		class HandGrenadeMuzzle: ThrowMuzzle
		{
			magazines[] = {"HandGrenade"};
		};
		class MiniGrenadeMuzzle: ThrowMuzzle
		{
			magazines[] = {"MiniGrenade"};
		};
		class HandGrenade_Stone: ThrowMuzzle
		{
			magazines[] = {"HandGrenade_Stone"};
			displayName = "$STR_DN_STONE";
			minRange = 5;
			minRangeProbab = 0.01;
			midRange = 45;
			midRangeProbab = 0.1;
			maxRange = 80;
			maxRangeProbab = 0.01;
		};
		class SmokeShellMuzzle: ThrowMuzzle
		{
			displayName = "$STR_MN_SMOKE";
			magazines[] = {"SmokeShell"};
		};
		class SmokeShellYellowMuzzle: ThrowMuzzle
		{
			displayName = "$STR_MN_SMOKE";
			magazines[] = {"SmokeShellYellow"};
		};
		class SmokeShellRedMuzzle: ThrowMuzzle
		{
			displayName = "$STR_MN_SMOKE";
			magazines[] = {"SmokeShellRed"};
		};
		class SmokeShellGreenMuzzle: ThrowMuzzle
		{
			displayName = "$STR_MN_SMOKE";
			magazines[] = {"SmokeShellGreen"};
		};
		class SmokeShellPurpleMuzzle: ThrowMuzzle
		{
			displayName = "$STR_MN_SMOKE";
			magazines[] = {"SmokeShellPurple"};
		};
		class SmokeShellBlueMuzzle: ThrowMuzzle
		{
			displayName = "$STR_MN_SMOKE";
			magazines[] = {"SmokeShellBlue"};
		};
		class SmokeShellOrangeMuzzle: ThrowMuzzle
		{
			displayName = "$STR_MN_SMOKE";
			magazines[] = {"SmokeShellOrange"};
		};
		class ChemlightGreenMuzzle: ThrowMuzzle
		{
			displayName = "$STR_cfgWeapons_Throw_ChemlightMuzzle0";
			magazines[] = {"Chemlight_green"};
		};
		class ChemlightRedMuzzle: ChemlightGreenMuzzle
		{
			magazines[] = {"Chemlight_red"};
		};
		class ChemlightYellowMuzzle: ChemlightGreenMuzzle
		{
			magazines[] = {"Chemlight_yellow"};
		};
		class ChemlightBlueMuzzle: ChemlightGreenMuzzle
		{
			magazines[] = {"Chemlight_blue"};
		};
		class IRGrenade: ThrowMuzzle
		{
			displayName = "$STR_A3_cfgWeapons_Throw_IRGrenade0";
			magazines[] = {"B_IR_Grenade","O_IR_Grenade","I_IR_Grenade"};
			cursorSize = 1;
		};
*/		
	};
	class Put: Default
	{
/*		scope = 1;
		value = 0;
		type = 0;
		displayName = "$STR_DN_PUT";
		canDrop = 0;
		muzzles[] = {"TimeBombMuzzle","PipeBombMuzzle","MineMuzzle"};
		class PutMuzzle: Default
		{
			sound[] = {"",0.00031622776,1};
			reloadSound[] = {"",0.00031622776,1};
			enableAttack = 0;
			optics = 0;
			showEmpty = 0;
			canLock = 0;
			primary = 10;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 3;
			midRangeProbab = 0.9;
			maxRange = 15;
			maxRangeProbab = 0.04;
			moveToInternal = 0;
			opticsZoomMin = 0.25;
			opticsZoomMax = 1.25;
			opticsZoomInit = 0.75;
		};
		class TimeBombMuzzle: PutMuzzle
		{
			displayName = "$STR_A3_cfgWeapons_Put_TimeBombMuzzle0";
			magazines[] = {"SatchelCharge_Remote_Mag"};
			enableAttack = 1;
		};
		class PipeBombMuzzle: PutMuzzle
		{
			displayName = "$STR_DN_PIPE_BOMB";
			magazines[] = {"SatchelCharge_Remote_Mag"};
			enableAttack = 1;
		};
		class MineMuzzle: PutMuzzle
		{
			displayName = "$STR_DN_MINE";
			magazines[] = {"ATMine_Range_Mag"};
		};
*/		
	};
/*	class CarHorn: Default
	{
		cursor = "";
		cursorAim = "";
		scope = 1;
		displayName = "$STR_A3_cfgWeapons_CarHorn0";
		reloadTime = 0;
		drySound[] = {"A3\Sounds_F\weapons\horns\MRAP_02_horn_2",1.0,1,200};
		canLock = 0;
		optics = 0;
		enableAttack = 0;
	};
	class BikeHorn: CarHorn
	{
		drySound[] = {"",1.0,1,200};
	};
	class TruckHorn: CarHorn
	{
		drySound[] = {"A3\Sounds_F\weapons\horns\MRAP_02_horn_1",1.0,1,200};
	};
	class TruckHorn2: CarHorn
	{
		drySound[] = {"A3\Sounds_F\weapons\horns\truck_horn_2",1.0,1,250};
	};
	class TruckHorn3: CarHorn
	{
		drySound[] = {"A3\Sounds_F\weapons\horns\truck_horn_3",1.0,1,300};
	};
	class SportCarHorn: CarHorn
	{
		drySound[] = {"A3\Sounds_F\weapons\horns\car_horn_1",1.0,1,150};
	};
	class MiniCarHorn: CarHorn
	{
		drySound[] = {"A3\Sounds_F\weapons\horns\car_horn_2",1.0,1,100};
	};
	class FakeHorn: CarHorn
	{
		displayName = "";
	};
*/	
	class ItemCore: Default
	{
		type = 131072;
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		picture = "\A3\Weapons_F\Data\UI\gear_satchel_CA.paa";
		muzzles[] = {};
		class Armory
		{
			disabled = 1;
		};
	};
	class ItemWatch: ItemCore
	{
/*		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "ItemWatch";
		scope = 2;
		displayName = "$STR_A3_cfgWeapons_ItemWatch0";
		simulation = "ItemWatch";
		picture = "\A3\Weapons_F\Data\UI\gear_item_watch_ca.paa";
		model = "\a3\Weapons_F\Ammo\mag_watch.p3d";
		descriptionShort = "$STR_A3_cfgWeapons_ItemWatch1";
		descriptionUse = "$STR_A3_cfgWeapons_Default_ItemWatch0";
*/		
		class ItemInfo { mass = 1.9; };
	};
	class ItemCompass: ItemCore
	{
/*		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "ItemCompass";
		scope = 2;
		displayName = "$STR_A3_cfgWeapons_ItemCompass0";
		descriptionUse = "$STR_A3_cfgWeapons_Default_ItemCompass0";
		simulation = "ItemCompass";
		picture = "\A3\Weapons_F\Data\UI\gear_item_compass_ca.paa";
		model = "\a3\Weapons_F\Ammo\mag_compass.p3d";
		descriptionShort = "$STR_A3_cfgWeapons_ItemCompass1";
*/		
		class ItemInfo { mass = 2.5; };
	};
	class ItemGPS: ItemCore
	{
/*		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "ItemGPS";
		scope = 2;
		displayName = "$STR_A3_cfgWeapons_ItemGPS0";
		descriptionUse = "$STR_A3_cfgWeapons_Default_ItemGPS0";
		simulation = "ItemGPS";
		picture = "\A3\Weapons_F\Data\UI\gear_item_gps_CA.paa";
		model = "\a3\Weapons_F\Ammo\mag_gps.p3d";
		descriptionShort = "$STR_A3_cfgWeapons_ItemGPS1";
*/
		class ItemInfo
		{
			mass = 8;
		};
	};
	class ItemRadio: ItemCore
	{ scope = 2;
	
/*	author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "ItemRadio";

		displayName = "$STR_A3_cfgWeapons_ItemRadio0";
		simulation = "ItemRadio";
		picture = "\A3\Weapons_F\Data\UI\gear_item_radio_ca.paa";
		model = "\a3\Weapons_F\Ammo\mag_radio.p3d";
		descriptionShort = "$STR_A3_cfgWeapons_ItemRadio1";		
		class ItemInfo
		{
			mass = 8;
		};
*/		
	};
	class ItemMap: ItemCore
	{
/*		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "ItemMap";
		scope = 2;
		displayName = "$STR_A3_cfgWeapons_ItemMap0";
		descriptionUse = "$STR_A3_cfgWeapons_Default_ItemMap0";
		simulation = "ItemMap";
		picture = "\A3\Weapons_F\Data\UI\gear_item_map_ca.paa";
		model = "\a3\Weapons_F\Ammo\mag_map.p3d";
		descriptionShort = "$STR_A3_cfgWeapons_ItemMap1";
		class ItemInfo
		{
			mass = 2;
		};
*/		
	};
	class DetectorCore;
	class MineDetector: DetectorCore
	{
/*		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "MineDetector";
		weaponPoolAvailable = 1;
		scope = 2;
		displayName = "$STR_A3_cfgweapons_minedetector0";
		descriptionshort = "$STR_A3_cfgweapons_minedetector1";
		detectRange = 15;
		soundMineDetector[] = {"A3\Sounds_F\sfx\blip1.wss",1,1};
		mineDetectorSoundFrequency = 1;
		mineDetectorPitchStart = 1;
		mineDetectorPitchEnd = 2;
		class ItemInfo
		{
			mass = 20;
		};
		picture = "\A3\Weapons_F\Items\data\UI\gear_MineDetector_CA.paa";
		model = "\a3\Weapons_F\Ammo\mag_minedetector.p3d";
*/		
	};
	class Binocular: Default
	{
/*		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Binocular";
		opticsDisablePeripherialVision = 1;
		weaponPoolAvailable = 1;
		scope = 2;
		simulation = "Binocular";
		model = "\A3\Weapons_f\binocular\binoculars_proxy";
		modelOptics = "\A3\weapons_f\reticle\optics_binoculars";
		opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
		visionMode[] = {"Normal"};
		picture = "\A3\Weapons_F\Data\UI\gear_binoculars_CA.paa";
		value = 5;
		type = 4096;
		displayName = "$STR_DN_BINOCULAR";
		nameSound = "binoculars";
		descriptionUse = "$STR_A3_cfgWeapons_Default_Binocular1";
		reloadTime = 0;
		sound[] = {"",0,1};
		canLock = 0;
		optics = 1;
		forceOptics = 0;
		useAsBinocular = 1;
		primary = 0;
		opticsZoomMin = 0.02;
		opticsZoomMax = 0.0625;
		opticsZoomInit = 0.0625;
		minRange = 150;
		midRange = 500;
		maxRange = 2500;
		magazines[] = {};
		class Library
		{
			libTextDesc = "$STR_LIB_BINOCULAR";
		};
		descriptionShort = "$STR_DSS_BINOCULAR";
*/		
		class WeaponSlotsInfo
		{
			mass = 13.8;
		};
};
	class Rangefinder: Binocular
	{ scope = 2;
/*		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Rangefinder";
		
		displayName = "$STR_A3_cfgWeapons_Rangefinder0";
		class Library
		{
			libTextDesc = "$STR_A3_cfgWeapons_Rangefinder_Library0";
		};
		descriptionShort = "$STR_A3_cfgWeapons_Rangefinder1";
		model = "\a3\Weapons_f\Binocular\rangefinder_proxy.p3d";
		modelOptics = "\A3\Weapons_F\Binocular\LRTV_optics.p3d";
		picture = "\A3\Weapons_F\Data\UI\gear_rangefinder_CA.paa";
		opticsZoomMin = 0.01;
		opticsZoomMax = 0.05;
		opticsZoomInit = 0.05;
		distanceZoomMin = 100;
		distanceZoomMax = 2300;
		weaponInfoType = "RscOptics_Rangefinder";
		visionMode[] = {"Normal","NVG"};
		class WeaponSlotsInfo
		{
			mass = 20;
		};
*/		
	};
	class NVGoggles: Binocular
	{
/*		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "NVGoggles";
		displayName = "$STR_A3_cfgweapons_nvg_brown0";
		nameSound = "nvgoggles";
		simulation = "NVGoggles";
		showEmpty = 0;
		muzzlePos = "usti hlavne";
		muzzleEnd = "konec hlavne";
		value = 5;
		opticsZoomMin = 1;
		opticsZoomMax = 1;
		modelOptics = "\A3\weapons_f\reticle\optics_night";
		model = "\A3\Weapons_f\binocular\nvg_proxy";
		picture = "\A3\Weapons_F\Data\UI\gear_nvg_CA.paa";
		descriptionUse = "$STR_A3_cfgWeapons_Default_NVGoggles1";
		visionMode[] = {"Normal","NVG"};
		class Library
		{
			libTextDesc = "$STR_LIB_NV_GOGGLES";
		};
		descriptionShort = "$STR_DSS_NV_GOGGLES";
		class ItemInfo
		{
			type = 616;
			uniformModel = "A3\weapons_f\binocular\nvg_proxy.p3d";
			modelOff = "A3\weapons_f\binocular\NVG_proxy_off.p3d";
			mass = 20;
		};
*/		
	};
	class NVGoggles_OPFOR: NVGoggles
	{ scope = 2;
/*		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "NVGoggles_OPFOR";
		modelOptics = "\A3\weapons_f\reticle\optics_night";
		model = "\A3\Weapons_f\binocular\nvg_proxy_OPFOR";
		picture = "\A3\Weapons_F\Data\UI\gear_nvg_opfor_CA.paa";
		displayName = "$STR_A3_cfgweapons_nvg_black0";
		class ItemInfo: ItemInfo
		{
			uniformModel = "A3\weapons_f\binocular\nvg_proxy_OPFOR.p3d";
			modelOff = "A3\weapons_f\binocular\NVG_proxy_off_OPFOR.p3d";
		};
*/		
	};
	class NVGoggles_INDEP: NVGoggles
	{ scope = 2;
/*		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "NVGoggles_INDEP";
		modelOptics = "\A3\weapons_f\reticle\optics_night";
		model = "\A3\Weapons_f\binocular\nvg_proxy_INDEP";
		picture = "\A3\Weapons_F\Data\UI\gear_nvg_indep_CA.paa";
		displayName = "$STR_A3_cfgweapons_nvg_green0";
		class ItemInfo: ItemInfo
		{
			uniformModel = "A3\weapons_f\binocular\nvg_proxy_INDEP.p3d";
			modelOff = "A3\weapons_f\binocular\NVG_proxy_off_INDEP.p3d";
		};
*/		
	};
	class Integrated_NVG_F: NVGoggles
	{ scope = 2;
/*		visionMode[] = {"Normal","NVG"};
		modelOptics = "";
*/		
	};
	class Integrated_NVG_TI_0_F: NVGoggles
	{ scope = 2;
/*		visionMode[] = {"Normal","NVG","TI"};
		thermalMode[] = {0};
		modelOptics = "";
*/		
	};
	class Integrated_NVG_TI_1_F: NVGoggles
	{ scope = 2;
/*		visionMode[] = {"Normal","NVG","TI"};
		thermalMode[] = {1};
		modelOptics = "";
*/		
	};
	class Laserdesignator: Binocular
	{ scope = 2; };
/*		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Laserdesignator";
		model = "\A3\Weapons_F_beta\Binocular\ltlm.p3d";
		modelOptics = "\A3\Weapons_F_beta\Binocular\lasermarker_optics";
		opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
		displayName = "$STR_cfgWeapons_Laserdesignator0";
		descriptionUse = "$STR_A3_cfgWeapons_Default_Laserdesignator1";
		picture = "\A3\Weapons_F\Data\UI\gear_lasermarker_CA.paa";
		magazines[] = {"Laserbatteries"};
		cursor = "laserDesignator";
		cursorAim = "EmptyCursor";
		cursorAimOn = "EmptyCursor";
		showSwitchAction = 1;
		simulation = "weapon";
		forceOptics = 0;
		class WeaponSlotsInfo
		{
			mass = 20;
		};
		Laser = 1;
		descriptionShort = "$STR_DSS_Laserdesignator";
		weaponInfoType = "RscOptics_LaserDesignator";
		visionMode[] = {"Normal","NVG","TI"};
		thermalMode[] = {2};
		opticsZoomMin = 0.01;
		opticsZoomMax = 0.05;
		opticsZoomInit = 0.05;
		distanceZoomMin = 100;
		distanceZoomMax = 2300;
		minRange = 150;
		midRange = 500;
		maxRange = 5000;
	};
	class Laserdesignator_02: Laserdesignator{};
	class Laserdesignator_03: Laserdesignator{};
*/	
};
// this file extracted from bohemia files
//			class PointerSlot: PointerSlot{};
#include "CfgMagazines.hpp"

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
	class Rifle: RifleCore { class WeaponSlotsInfo: WeaponSlotsInfo	{ allowedSlots[] = {701,901,931}; }; };			// this line aims to allow rifles to go into launcher slot
	class Rifle_Base_F: Rifle { class WeaponSlotsInfo: WeaponSlotsInfo	{ allowedSlots[] = {701,901,931}; }; };			// this line aims to allow rifles to go into launcher slot
	class Rifle_Short_Base_F: Rifle_Base_F { class WeaponSlotsInfo: WeaponSlotsInfo	{ allowedSlots[] = {701,901,931}; }; };			// this line aims to allow rifles to go into launcher slot
	class Rifle_Long_Base_F: Rifle_Base_F { class WeaponSlotsInfo: WeaponSlotsInfo	{ allowedSlots[] = {701,901,931}; }; };			// this line aims to allow rifles to go into launcher slot
	class HandGunBase: Rifle {};
	class PistolCore: Default{};
	class Pistol: PistolCore {};
	class Pistol_Base_F: Pistol {};
	class Throw: GrenadeLauncher {};
	class Put: Default {};
	class ItemCore: Default {};
	class ItemWatch: ItemCore { class ItemInfo { mass = 1.9; }; };
	class ItemCompass: ItemCore	{ class ItemInfo { mass = 2.5; }; };
	class ItemGPS: ItemCore { class ItemInfo { mass = 20; }; };
	class ItemRadio: ItemCore { scope = 1; };
	class ItemMap: ItemCore	{};
	class DetectorCore;
	class MineDetector: DetectorCore {};
	class Binocular: Default { class WeaponSlotsInfo	{ mass = 13.8; }; };
	class Rangefinder: Binocular { scope = 1; class WeaponSlotsInfo { mass = 43.2; }; };	// Melios GVS-5 4,3125 lb
	class NVGoggles: Binocular { scope = 1; class ItemInfo	{ mass = 12.5; }; };		// PVS-14 with batteries	350 m detection radios, 300 m recognition radius, 40° FOV
	class NVGoggles_OPFOR: NVGoggles { scope = 1; };
	class NVGoggles_INDEP: NVGoggles { scope = 1; };
	class Integrated_NVG_F: NVGoggles { scope = 1; };
	class Integrated_NVG_TI_0_F: NVGoggles { scope = 1;};
	class Integrated_NVG_TI_1_F: NVGoggles { scope = 1; };
	class Laserdesignator: Binocular { scope = 1; class WeaponSlotsInfo { mass = 20; }; };
	class Laserdesignator_02: Laserdesignator{};
	class Laserdesignator_03: Laserdesignator{};
};
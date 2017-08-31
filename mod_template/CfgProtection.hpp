// handles the armor values for helmets and vests

class Default;
	class ItemCore: Default{};
	class UniformItem;
	class HeadgearItem;
	class VestItem;
	class Uniform_Base;
	
	class usm_helmet_cvc: ItemCore
	{
		weaponPoolAvailable = 1;
		displayName = "Helmet, CVC";
		class ItemInfo: HeadgearItem
		{
			mass = 25;
			allowedSlots[] = {701,901};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 4;
					passThrough = 0.5;
				};
			};
		};
	};
	class usm_vest_pasgt: ItemCore
	{
		weaponPoolAvailable = 1;
		allowedSlots[] = {901};
		displayName = "Vest, PASGT, woodland";
		class ItemInfo: VestItem
		{
			containerClass = "Supply20";
			mass = 60;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20;
					passThrough = 0.9;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 30;
					passThrough = 0.9;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 30;
					passThrough = 0.9;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 30;
					passThrough = 0.9;
				};
			};
		};
	};
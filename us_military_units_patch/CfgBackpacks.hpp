// military units patch, backpack config

	class Bag_Base;
	class usm_pack_alice: Bag_Base
	{
		author = "Tim";
		allowedSlots[] = {501,601,701,801,901};
		displayName = "Field Pack, LC-1, Large";
		maximumLoad = 938;
		mass = 30.6;
	};

	class usm_pack_alice_medic: usm_pack_alice
	{
		author = "Tim";
		displayName = "Field Pack, LC-1, Large, medical";
	};
	class usm_pack_alice_prc119: usm_pack_alice
	{
		author = "Tim";
		displayName = "Field Pack, LC-1, Large, for AN/PRC-117";
		descriptionshort = "Alice LC-1, Large, w/o radio, w/ 3m antenna";
		maximumLoad = 900;
		mass = 45.6;
	};
	class usm_pack_alice_prc77: usm_pack_alice_prc119
	{
		author = "Tim";
		displayName = "Field Pack, LC-1, Large, for AN/PRC-77";
		descriptionshort = "Alice LC-1, Large, w/o radio, w/ 3m AT-271B/PRC antenna";
		maximumLoad = 900;
		mass = 53.1;
	};
	class usm_pack_st138_prc77: Bag_Base
	{
		author = "Tim";
		displayName = "ST-138 frame, for AN/PRC-77 ";
		descriptionshort = "Frame for AN/PRC-77, w/o radio, w/ 3m antenna";
		maximumLoad = 204;
		mass = 60;
	};
	class usm_pack_m5_medic: Bag_Base
	{
		author = "Tim";
		displayName = "Bag, M5, Combat Life Saver";
		allowedSlots[] = {501,601,701,801,901};
		maximumLoad = 160;
		mass = 11;
	};
	class usm_pack_abag_m60: Bag_Base
	{
		author = "Tim";
		displayName = "Spare barrel bag, M60, empty";
		maximumLoad = 80;
		mass = 3;
		allowedSlots[] = {801,901};
	};
	class usm_pack_762x51_bandoliers: Bag_Base
	{
		author = "Tim";
		displayName = "Bandolier, NATO 7.62x45mm, 100 rnd x 4";
		descriptionshort = "can hold 400 rounds 7.62 with steel M13 links";	
		maximumLoad = 266.7;
		mass = 5;
		allowedSlots[] = {901,801};
		class TransportMagazines
		{
			class _xx_CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M
			{
				magazine = "150Rnd_762x51_Box";		
				count = 4;
			};
		};
	};
	class usm_pack_200rnd_556_bandoliers: Bag_Base
	{
		author = "Tim";
		displayName = "Bandolier, NATO 5.56x45mm, 200 rnd x 4";
		descriptionshort = "can hold 800 rounds 5.56 with steel M27 links";
		maximumLoad = 279.1;
		mass = 5;
		allowedSlots[] = {901,801};
		class TransportMagazines
		{
			class _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249
			{
				magazine = "200Rnd_556x45_Box_F";
				count = 4;
			};
		};
	};
	class usm_pack_762x51_ammobelts: Bag_Base
	{
		author = "Tim";
		displayName = "Linked, NATO 7.62x51mm, 200 rounds";
		maximumLoad = 131;
		mass = 0.5;
		allowedSlots[] = {901};
		icon = "iconBackpack";
		mapSize = 2;
		class TransportMagazines
		{
			class _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249
			{
				magazine = "150Rnd_762x51_Box";		
				count = 1;
			};
		};		
	};
	class usm_pack_556x45_ammobelts: usm_pack_762x51_ammobelts
	{
		author = "Tim";
		displayName = "Linked, NATO 5.56x45mm, 200 rounds";
		maximumLoad = 69.8;
		class TransportMagazines
		{
			class _xx_CUP_200Rnd_TE4_Red_Tracer_556x45_M249
			{
				magazine = "200Rnd_556x45_Box_F";
				count = 1;
			};
		};
	};

	
/*
	class Headgear_Base_F;
	class Item_Base_F;
	class Vest_Base_F;
	class gh_usm_gasmaskcarrier: Item_Base_F
	{
		scopeCurator = 2;
		displayName = "GasMask Carrier";
		class TransportItems
		{
			class usm_gasmaskcarrier
			{
				name = "usm_gasmaskcarrier";
				count = 1;
			};
		};
	};
	class gh_usm_gear_earmuffs: Headgear_Base_F
	{
		scopeCurator = 2;
		displayName = "Ear muffs";
		class TransportItems
		{
			class usm_gear_earmuffs
			{
				name = "usm_gear_earmuffs";
				count = 1;
			};
		};
	};
*/
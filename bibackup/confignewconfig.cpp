class CfgWeapons
{
	class Default;
	class MGunCore;
	class CannonCore;
	class LauncherCore;
	class RocketPods: LauncherCore
	{
		scope = 1;
		cursor = "EmptyCursor";
		cursorAim = "rocket";
		type = 65536;
		reloadTime = 0.2;
		magazineReloadTime = 0.2;
		autoFire = 1;
		minRange = 50;
		minRangeProbab = 0.1;
		midRange = 600;
		midRangeProbab = 0.25;
		maxRange = 2500;
		maxRangeProbab = 0.05;
		canLock = 2;
		weaponLockDelay = 3.0;
		nameSound = "rockets";
		textureType = "semi";
	};
	class MGun: MGunCore
	{
		type = 65536;
		cursor = "EmptyCursor";
		cursoraim = "mg";
		displayName = "";
		nameSound = "mgun";
		reloadTime = 0.25;
		autoFire = 1;
		reloadAction = "ManActReloadMagazine";
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\Static_HMG\reload_static_HMG",10.0,1,20};
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG_050_01",1.5848932,1,2100};
			begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG_050_02",1.5848932,1,2100};
			begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG_050_03",1.5848932,1,2100};
			soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
		};
		soundContinuous = 0;
		initSpeed = 0;
		flash = "gunfire";
		flashSize = 0.5;
		optics = 0;
		textureType = "fullAuto";
	};
	class M2: MGun
	{
		scope = 1;
	};
	class LMG_RCWS: MGun
	{
		class GunClouds{};
		bullet1[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt1",1.0,1,15};
		bullet2[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt2",1.0,1,15};
		bullet3[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt3",1.0,1,15};
		bullet4[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt4",1.0,1,15};
		bullet5[] = {"A3\Sounds_F\weapons\bullets\7_62-hard1",1.0,1,15};
		bullet6[] = {"A3\Sounds_F\weapons\bullets\7_62-hard2",1.0,1,15};
		bullet7[] = {"A3\Sounds_F\weapons\bullets\7_62-hard3",1.0,1,15};
		bullet8[] = {"A3\Sounds_F\weapons\bullets\7_62-hard4",1.0,1,15};
		bullet9[] = {"A3\Sounds_F\weapons\bullets\7_62-metal1",1.0,1,15};
		bullet10[] = {"A3\Sounds_F\weapons\bullets\7_62-metal2",1.0,1,15};
		bullet11[] = {"A3\Sounds_F\weapons\bullets\7_62-metal3",1.0,1,15};
		bullet12[] = {"A3\Sounds_F\weapons\bullets\7_62-metal4",1.0,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		class GunParticles
		{
			class effect1
			{
				positionName = "usti hlavne2";
				directionName = "konec hlavne2";
				effectName = "MachineGunCloud";
			};
		};
		scope = 1;
		displayName = "$STR_A3_LMG_RCWS0";
		aiDispersionCoefY = 15.0;
		aiDispersionCoefX = 20.0;
		magazines[] = {"200Rnd_65x39_Belt","200Rnd_65x39_Belt_Tracer_Red","200Rnd_65x39_Belt_Tracer_Green","200Rnd_65x39_Belt_Tracer_Yellow","2000Rnd_65x39_Belt","2000Rnd_65x39_Belt_Green","2000Rnd_65x39_Belt_Yellow","1000Rnd_65x39_Belt","1000Rnd_65x39_Belt_Green","1000Rnd_65x39_Belt_Yellow","2000Rnd_65x39_Belt_Tracer_Red","2000Rnd_65x39_Belt_Tracer_Green","2000Rnd_65x39_Belt_Tracer_Yellow","1000Rnd_65x39_Belt_Tracer_Red","1000Rnd_65x39_Belt_Tracer_Green","1000Rnd_65x39_Belt_Tracer_Yellow","2000Rnd_65x39_Belt_Tracer_Green_Splash","2000Rnd_65x39_Belt_Tracer_Yellow_Splash"};
		magazineReloadTime = 5;
		canLock = 0;
		modes[] = {"manual","close","short","medium","far"};
		ballisticsComputer = "2 + 16";
		FCSMaxLeadSpeed = 0;
		FCSZeroingDelay = 1;
		maxZeroing = 1500;
		class manual: MGun
		{
			displayName = "$STR_A3_LMG_RCWS0";
			reloadTime = 0.075;
			dispersion = 0.00093;
			aiRateOfFire = 1;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				closure1[] = {"A3\sounds_f\weapons\closure\sfx7",0.56234133,1,40};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx8",0.56234133,1,40};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG_65mm_turret_01",1.0,1,2100};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG_65mm_turret_02",1.0,1,2100};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG_65mm_turret_03",1.0,1,2100};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
			};
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			burst = 12;
			aiBurstTerminable = 1;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.1;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 10;
			aiBurstTerminable = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.1;
		};
		class medium: close
		{
			burst = 9;
			aiBurstTerminable = 1;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			burst = 5;
			aiBurstTerminable = 1;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 750;
			midRangeProbab = 0.4;
			maxRange = 1000;
			maxRangeProbab = 0.01;
		};
	};
	class LMG_65mm_body: LMG_RCWS
	{
		class manual: MGun
		{
			displayName = "$STR_A3_LMG_RCWS0";
			reloadTime = 0.075;
			dispersion = 0.00093;
			aiRateOfFire = 1;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				closure1[] = {"A3\sounds_f\weapons\closure\sfx7",0.56234133,1,40};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx8",0.56234133,1,40};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG_65mm_body_01",1.0,1,2100};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG_65mm_body_02",1.0,1,2100};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG_65mm_body_03",1.0,1,2100};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
			};
		};
		class close: manual
		{
			burst = 12;
			aiBurstTerminable = 1;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.1;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 10;
			aiBurstTerminable = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.1;
		};
		class medium: close
		{
			burst = 9;
			aiBurstTerminable = 1;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			burst = 5;
			aiBurstTerminable = 1;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 750;
			midRangeProbab = 0.4;
			maxRange = 1000;
			maxRangeProbab = 0.01;
		};
	};
	class LMG_M200: LMG_RCWS
	{
		displayName = "$STR_A3_LMG_M2000";
	};
	class LMG_M200_body: LMG_M200
	{
		ballisticsComputer = "2 + 16";
		FCSMaxLeadSpeed = 27.778;
		FCSZeroingDelay = 1;
		maxZeroing = 1500;
		class manual: MGun
		{
			displayName = "$STR_A3_LMG_RCWS0";
			reloadTime = 0.075;
			dispersion = 0.00093;
			aiRateOfFire = 1;
			soundBurst = 0;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				closure1[] = {"A3\sounds_f\weapons\closure\sfx7",0.56234133,1,40};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx8",0.56234133,1,40};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG_65mm_body_01",1.0,1,2100};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG_65mm_body_02",1.0,1,2100};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG_65mm_body_03",1.0,1,2100};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
			};
		};
		class close: manual
		{
			burst = 12;
			aiBurstTerminable = 1;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.1;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 10;
			aiBurstTerminable = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.1;
		};
		class medium: close
		{
			burst = 9;
			aiBurstTerminable = 1;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			burst = 5;
			aiBurstTerminable = 1;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 750;
			midRangeProbab = 0.4;
			maxRange = 1000;
			maxRangeProbab = 0.01;
		};
	};
	class LMG_Minigun: LMG_RCWS
	{
		displayName = "$STR_A3_LMG_Minigun0";
		ballisticsComputer = 2;
		class gunParticles
		{
			class effect1
			{
				positionName = "machinegun_eject_pos";
				directionName = "machinegun_eject_dir";
				effectName = "MachineGunCartridge1";
			};
			class effect2
			{
				positionName = "machinegun_end";
				directionName = "machinegun_beg";
				effectName = "MachineGun1";
			};
		};
		class manual: MGun
		{
			displayName = "$STR_A3_LMG_Minigun0";
			autoFire = 1;
			aiRateOfFire = 0.5;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_Minigun_65mm\LMG_minigun_65mm_01",1.0,1,2000};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_Minigun_65mm\LMG_minigun_65mm_02",1.0,1.1,2000};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_Minigun_65mm\LMG_minigun_65mm_03",1.0,0.9,2000};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				closure1[] = {"A3\sounds_f\weapons\gatling\gatling_rotation_short_2",0.31622776,1,20};
				closure2[] = {"A3\sounds_f\weapons\gatling\gatling_rotation_short_3",0.31622776,1,20};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			reloadTime = 0.033;
			dispersion = 0.0087;
			showToPlayer = 1;
			soundContinuous = 0;
			burst = 1;
			multiplier = 3;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 10;
			aiBurstTerminable = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 200;
			maxRangeProbab = 0.1;
		};
		class short: close
		{
			burst = 8;
			aiBurstTerminable = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.1;
		};
		class medium: close
		{
			burst = 6;
			aiBurstTerminable = 1;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			burst = 4;
			aiBurstTerminable = 1;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 500;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.4;
			maxRange = 800;
			maxRangeProbab = 0.01;
		};
	};
	class LMG_Minigun_heli: LMG_Minigun
	{
		showAimCursorInternal = 0;
		class manual: manual
		{
			displayName = "$STR_A3_LMG_Minigun0";
			reloadTime = 0.033;
			dispersion = 0.0087;
			aiRateOfFire = 0.5;
			showToPlayer = 1;
			soundContinuous = 0;
			multiplier = 3;
		};
		class close: manual
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 10;
			aiBurstTerminable = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 200;
			maxRangeProbab = 0.1;
		};
		class short: close
		{
			burst = 8;
			aiBurstTerminable = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.1;
		};
		class medium: close
		{
			burst = 6;
			aiBurstTerminable = 1;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			burst = 5;
			aiBurstTerminable = 1;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 500;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.4;
			maxRange = 800;
			maxRangeProbab = 0.01;
		};
	};
	class HMG_127: LMG_RCWS
	{
		displayName = "$STR_A3_HMG_1270";
		scope = 1;
		magazines[] = {"500Rnd_127x99_mag","500Rnd_127x99_mag_Tracer_Red","500Rnd_127x99_mag_Tracer_Green","500Rnd_127x99_mag_Tracer_Yellow","200Rnd_127x99_mag","200Rnd_127x99_mag_Tracer_Red","200Rnd_127x99_mag_Tracer_Green","200Rnd_127x99_mag_Tracer_Yellow"};
		class GunParticles
		{
			class effect1
			{
				positionName = "usti hlavne";
				directionName = "konec hlavne";
				effectName = "MachineGunCloud";
			};
		};
		showAimCursorInternal = 0;
		class manual: MGun
		{
			displayName = "12.7mm HMG";
			reloadTime = 0.1;
			dispersion = 0.00087;
			aiRateOfFire = 1;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_127mm\HMG_127mm_01",1.5848932,1,2100};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_127mm\HMG_127mm_02",1.5848932,1,2100};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_127mm\HMG_127mm_03",1.5848932,1,2100};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				closure1[] = {"A3\Sounds_F\weapons\Closure\sfx10",0.63095737,1,20};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx11",0.63095737,1.2,20};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			burst = 7;
			aiBurstTerminable = 1;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.1;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 6;
			aiBurstTerminable = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.1;
		};
		class medium: close
		{
			burst = 5;
			aiBurstTerminable = 1;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			burst = 4;
			aiBurstTerminable = 1;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 850;
			midRangeProbab = 0.4;
			maxRange = 1100;
			maxRangeProbab = 0.01;
		};
	};
	class HMG_127_APC: HMG_127
	{
		class GunParticles
		{
			class effect1
			{
				positionName = "usti hlavne2";
				directionName = "konec hlavne2";
				effectName = "MachineGunCloud";
			};
		};
	};
	class HMG_127_UGV: HMG_127
	{
		class GunParticles
		{
			class effect1
			{
				positionName = "usti hlavne2";
				directionName = "konec hlavne2";
				effectName = "MachineGunCloud";
			};
		};
	};
	class HMG_01: HMG_127
	{
		displayName = "$STR_A3_HMG_Mk300";
		showAimCursorInternal = 1;
		class GunParticles
		{
			class effect1
			{
				positionName = "usti hlavne2";
				directionName = "konec hlavne2";
				effectName = "MachineGunCloud";
			};
			class effect2
			{
				positionName = "machinegun_eject_pos";
				directionName = "machinegun_eject_dir";
				effectName = "MachineGunCartridge1";
			};
		};
		class manual: manual
		{
			reloadTime = 0.12;
			dispersion = 0.00087;
			aiRateOfFire = 0.5;
		};
		class close: manual
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 6;
			aiBurstTerminable = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.1;
		};
		class short: close
		{
			burst = 5;
			aiBurstTerminable = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.1;
		};
		class medium: close
		{
			burst = 4;
			aiBurstTerminable = 1;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 375;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 750;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			burst = 3;
			aiBurstTerminable = 1;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 625;
			minRangeProbab = 0.05;
			midRange = 750;
			midRangeProbab = 0.4;
			maxRange = 1000;
			maxRangeProbab = 0.01;
		};
	};
	class HMG_static: HMG_01
	{
		class manual: manual
		{
			reloadTime = 0.12;
			dispersion = 0.00087;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Static_HMG\static_HMG_01",1.7782794,1,2100};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Static_HMG\static_HMG_02",1.7782794,1,2100};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_static\Static_HMG\static_HMG_03",1.7782794,1,2100};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				closure1[] = {"A3\Sounds_F\weapons\Closure\sfx10",0.63095737,1,20};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx11",0.63095737,1.2,20};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			soundContinuous = 0;
			soundBurst = 0;
		};
	};
	class HMG_M2: HMG_01
	{
		displayName = "$STR_A3_HMG_M20";
		magazines[] = {"100Rnd_127x99_mag","100Rnd_127x99_mag_Tracer_Red","100Rnd_127x99_mag_Tracer_Green","100Rnd_127x99_mag_Tracer_Yellow"};
		ballisticsComputer = 2;
		class GunParticles
		{
			class effect1
			{
				positionName = "usti hlavne";
				directionName = "konec hlavne";
				effectName = "MachineGunCloud";
			};
			class effect2
			{
				positionName = "nabojnicestart";
				directionName = "nabojniceend";
				effectName = "MachineGunEject";
			};
			class effect3
			{
				positionName = "nabojnicestart";
				directionName = "nabojniceend";
				effectName = "MachineGunCartridge2";
			};
		};
		class manual: manual
		{
			reloadTime = 0.095;
			aiRateOfFire = 1;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				drySound[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG050_dry",1.0,1,10};
				reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_050\HMG050_reload",1.0,1,10};
				soundsetshot[] = {"HMG050_Shot_SoundSet","HMG050_tail_SoundSet"};
			};
			soundContinuous = 0;
			soundBurst = 0;
		};
		class close: manual
		{
			burst = 10;
			aiBurstTerminable = 1;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.1;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 9;
			aiBurstTerminable = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.1;
		};
		class medium: close
		{
			burst = 7;
			aiBurstTerminable = 1;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			burst = 6;
			aiBurstTerminable = 1;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 750;
			midRangeProbab = 0.4;
			maxRange = 1000;
			maxRangeProbab = 0.01;
		};
	};
	class HMG_NSVT: HMG_127
	{
		displayName = "$STR_A3_HMG_NSVT0";
		magazines[] = {"450Rnd_127x108_Ball","150Rnd_127x108_Ball","50Rnd_127x108_Ball"};
		class GunParticles
		{
			class effect1
			{
				positionName = "usti hlavne2";
				directionName = "konec hlavne2";
				effectName = "MachineGunCloud";
			};
		};
		showAimCursorInternal = 0;
		class manual: manual
		{
			reloadTime = 0.075;
			dispersion = 0.0011;
			aiRateOfFire = 1;
		};
		class close: manual
		{
			burst = 10;
			aiBurstTerminable = 1;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.1;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 9;
			aiBurstTerminable = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.1;
		};
		class medium: close
		{
			burst = 7;
			aiBurstTerminable = 1;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			burst = 6;
			aiBurstTerminable = 1;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 850;
			midRangeProbab = 0.4;
			maxRange = 1100;
			maxRangeProbab = 0.01;
		};
	};
	class SmokeLauncher: MGun
	{
		scope = 2;
		displayName = "$STR_A3_SmokeLauncher0";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_01",0.56234133,1,200};
			begin2[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_02",0.56234133,1,200};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			class SoundTails
			{
				class TailInterior
				{
					sound[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_tail_interior",2.2387211,1,200};
					frequency = 1;
					volume = "interior";
				};
				class TailTrees
				{
					sound[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_tail_trees",1.0,1,200};
					frequency = 1;
					volume = "(1-interior/1.4)*trees";
				};
				class TailForest
				{
					sound[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_tail_forest",1.0,1,200};
					frequency = 1;
					volume = "(1-interior/1.4)*forest";
				};
				class TailMeadows
				{
					sound[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_tail_meadows",1.0,1,200};
					frequency = 1;
					volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
				};
				class TailHouses
				{
					sound[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_tail_houses",1.0,1,200};
					frequency = 1;
					volume = "(1-interior/1.4)*houses";
				};
			};
		};
		magazines[] = {"SmokeLauncherMag","SmokeLauncherMag_boat"};
		reloadTime = 3;
		magazineReloadTime = 60;
		canLock = 0;
		autoFire = 0;
		simulation = "cmlauncher";
		showToPlayer = 1;
		minRange = 0;
		maxRange = 10000;
		textureType = "semi";
	};
	class FlareLauncher: SmokeLauncher
	{
		scope = 2;
		displayName = "$STR_A3_cfgWeapons_FlareLauncher0";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\sounds_f\weapons\Flare_Gun\flaregun_1",0.56234133,1,200};
			soundBegin[] = {"begin1",1};
		};
		magazines[] = {"FlareLauncherMag"};
		reloadTime = 0.2;
		magazineReloadTime = 0.2;
		canLock = 0;
		autoFire = 0;
	};
	class CMFlareLauncher: SmokeLauncher
	{
		scope = 2;
		displayName = "$STR_A3_CMFlareLauncher0";
		magazines[] = {"60Rnd_CMFlareMagazine","120Rnd_CMFlareMagazine","240Rnd_CMFlareMagazine","60Rnd_CMFlare_Chaff_Magazine","120Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine","192Rnd_CMFlare_Chaff_Magazine","168Rnd_CMFlare_Chaff_Magazine","300Rnd_CMFlare_Chaff_Magazine"};
		magazineReloadTime = 0.2;
		simulation = "cmlauncher";
		modes[] = {"Burst","Single","AIBurst"};
		class Single: Mode_SemiAuto
		{
			displayName = "$STR_A3_CMFlareLauncher_weapon_mode_Single_name";
			reloadTime = 0.05;
			burst = 1;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\HMG\HMG_grenade",1.0,1,300};
				soundBegin[] = {"begin1",1};
			};
			showToPlayer = 1;
			multiplier = 2;
			minRange = 0;
			maxRange = 200;
			soundBurst = 0;
		};
		class Burst: Mode_Burst
		{
			displayName = "$STR_A3_CMFlareLauncher_weapon_mode_Burst_name";
			reloadTime = 0.2;
			burst = 5;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\HMG\HMG_grenade",1.0,1,300};
				soundBegin[] = {"begin1",1};
			};
			showToPlayer = 1;
			multiplier = 2;
			minRange = 0;
			maxRange = 0;
			soundBurst = 0;
		};
		class AIBurst: Burst
		{
			burst = 3;
			burstRangeMax = 7;
			showToPlayer = 0;
			minRange = 200;
			maxRange = 10000;
			soundBurst = 0;
		};
	};
	class CMFlareLauncher_Singles: CMFlareLauncher
	{
		class Single: Single
		{
			burst = 2;
			reloadTime = 0.1;
			multiplier = 1;
		};
		class Burst: Burst
		{
			multiplier = 1;
			reloadTime = 0.1;
			burst = 10;
		};
		class AIBurst: AIBurst
		{
			multiplier = 1;
			reloadTime = 0.1;
			burst = 6;
			burstRangeMax = 14;
		};
	};
	class CMFlareLauncher_Triples: CMFlareLauncher
	{
		class Single: Single
		{
			multiplier = 3;
		};
		class Burst: Burst
		{
			multiplier = 3;
			reloadTime = 0.25;
			burst = 4;
		};
		class AIBurst: AIBurst
		{
			multiplier = 3;
			reloadTime = 0.25;
			burst = 2;
			burstRangeMax = 6;
		};
	};
	class M134_minigun: MGunCore
	{
		scope = 1;
		displayName = "$STR_A3_M134_minigun0";
		cursor = "EmptyCursor";
		cursorAim = "mg";
		magazines[] = {"5000Rnd_762x51_Belt","5000Rnd_762x51_Yellow_Belt"};
		canLock = 0;
		modes[] = {"HighROF","LowROF","close","short","medium","far"};
		weight = 40;
		type = 65536;
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "MachineGun1";
				positionName = "z_gunL_muzzle";
				directionName = "z_gunL_chamber";
			};
			class SecondEffect
			{
				effectName = "MachineGun1";
				positionName = "z_gunR_muzzle";
				directionName = "z_gunR_chamber";
			};
			class effect1
			{
				positionName = "machinegun_eject_pos";
				directionName = "machinegun_eject_dir";
				effectName = "MachineGunCartridge";
			};
			class effect2
			{
				positionName = "machinegun_eject_2_pos";
				directionName = "machinegun_eject_2_dir";
				effectName = "MachineGunCartridge";
			};
		};
		class LowROF: Mode_FullAuto
		{
			displayName = "$STR_A3_M134_minigun0";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\gatling_762mm\762mm_01_burst",3.9810717,1,1300,{2,36879}};
				soundBegin[] = {"begin1",1};
			};
			soundContinuous = 1;
			flash = "gunfire";
			flashSize = 0.1;
			recoil = "Empty";
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 10;
			ffMagnitude = 0.5;
			ffFrequency = 11;
			ffCount = 6;
			reloadTime = 0.03;
			dispersion = 0.0023;
			minRange = 1;
			minRangeProbab = 0.06;
			midRange = 2;
			midRangeProbab = 0.06;
			maxRange = 3;
			maxRangeProbab = 0.004;
			showToPlayer = 0;
			multiplier = 1;
		};
		class HighROF: LowROF
		{
			displayName = "$STR_A3_M134_minigun0";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\gatling_762mm\762mm_01_burst",2.5118864,1,1500,{2,36879}};
				soundBegin[] = {"begin1",1};
			};
			soundContinuous = 1;
			minRange = 1;
			minRangeProbab = 0.08;
			midRange = 2;
			midRangeProbab = 0.058;
			maxRange = 3;
			maxRangeProbab = 0.004;
			reloadTime = 0.03;
			dispersion = 0.0023;
			aiRateOfFire = 0.5;
			showToPlayer = 1;
			multiplier = 3;
		};
		class close: HighROF
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 15;
			aiBurstTerminable = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 1000;
			maxRangeProbab = 0.1;
		};
		class short: close
		{
			burst = 10;
			aiBurstTerminable = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 500;
			minRangeProbab = 0.05;
			midRange = 1000;
			midRangeProbab = 0.7;
			maxRange = 1500;
			maxRangeProbab = 0.1;
		};
		class medium: LowROF
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 7;
			aiBurstTerminable = 1;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 1000;
			minRangeProbab = 0.05;
			midRange = 1500;
			midRangeProbab = 0.58;
			maxRange = 2000;
			maxRangeProbab = 0.04;
		};
		class far: medium
		{
			burst = 4;
			aiBurstTerminable = 1;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 1500;
			minRangeProbab = 0.05;
			midRange = 2500;
			midRangeProbab = 0.4;
			maxRange = 3000;
			maxRangeProbab = 0.01;
		};
	};
	class mortar_82mm: CannonCore
	{
		scope = 1;
		displayname = "$STR_A3_mortar_82mm0";
		nameSound = "CannonCore";
		cursor = "mortar";
		cursorAim = "EmptyCursor";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",1.2589254,1,250};
			begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",1.2589254,1,250};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
		reloadSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",1.0,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_magazine_Mortar",1.0,1,20};
		soundServo[] = {"",0.0001,1.0};
		minRange = 80;
		minRangeProbab = 0.7;
		midRange = 2000;
		midRangeProbab = 0.7;
		maxRange = 4000;
		maxRangeProbab = 0.1;
		reloadTime = 1.8;
		magazineReloadTime = 5;
		maxLeadSpeed = 100;
		autoReload = 1;
		canLock = 0;
		magazines[] = {"8Rnd_82mm_Mo_shells","8Rnd_82mm_Mo_Flare_white","8Rnd_82mm_Mo_Smoke_white","8Rnd_82mm_Mo_guided","8Rnd_82mm_Mo_LG"};
		ballisticsComputer = 2;
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "MortarFired";
				positionName = "Usti Hlavne";
				directionName = "Konec Hlavne";
			};
		};
		modes[] = {"Single1","Single2","Single3","Burst1","Burst2","Burst3"};
		class Single1: Mode_SemiAuto
		{
			displayName = "$STR_A3_mortar_82mm_Single10";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",1.2589254,1,250};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",1.2589254,1,250};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			reloadSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",1.0,1,20};
			soundServo[] = {"",0.0001,1.0};
			reloadTime = 1.8;
			minRange = 0;
			midRange = 0;
			maxRange = 0;
			artilleryDispersion = 1.9;
			artilleryCharge = 0.35;
		};
		class Single2: Single1
		{
			displayName = "$STR_A3_mortar_82mm_Single20";
			artilleryCharge = 0.7;
		};
		class Single3: Single1
		{
			displayName = "$STR_A3_mortar_82mm_Single30";
			artilleryCharge = 1;
		};
		class Burst1: Mode_Burst
		{
			showToPlayer = 0;
			displayName = "$STR_A3_mortar_82mm_Burst10";
			burst = 4;
			aiBurstTerminable = 1;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",1.2589254,1,250};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",1.2589254,1,250};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			reloadSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",1.0,1,20};
			soundServo[] = {"",0.0001,1.0};
			soundBurst = 0;
			reloadTime = 1.8;
			minRange = 60;
			minRangeProbab = 0.5;
			midRange = 290;
			midRangeProbab = 0.7;
			maxRange = 665;
			maxRangeProbab = 0.5;
			artilleryDispersion = 2.2;
			artilleryCharge = 0.35;
		};
		class Burst2: Burst1
		{
			showToPlayer = 0;
			displayName = "$STR_A3_mortar_82mm_Burst20";
			minRange = 230;
			minRangeProbab = 0.4;
			midRange = 1175;
			midRangeProbab = 0.6;
			maxRange = 2660;
			maxRangeProbab = 0.4;
			artilleryCharge = 0.7;
		};
		class Burst3: Burst1
		{
			showToPlayer = 0;
			displayName = "$STR_A3_mortar_82mm_Burst30";
			minRange = 540;
			minRangeProbab = 0.3;
			midRange = 2355;
			midRangeProbab = 0.4;
			maxRange = 5500;
			maxRangeProbab = 0.3;
			artilleryCharge = 1;
		};
	};
	class MissileLauncher: LauncherCore
	{
		scope = 1;
		type = 65536;
		reloadTime = 0.5;
		nameSound = "MissileLauncher";
		cursor = "EmptyCursor";
		cursorAim = "missile";
		textureType = "fullAuto";
	};
	class missiles_DAGR: RocketPods
	{
		displayName = "$STR_A3_missiles_DAGR0";
		magazines[] = {"24Rnd_PG_missiles","12Rnd_PG_missiles","PylonRack_12Rnd_PG_missiles"};
		modes[] = {"Far_AI","Medium_AI","Close_AI","Burst"};
		canLock = 2;
		weaponLockDelay = 3.0;
		weaponLockSystem = 2;
		cmImmunity = 0.3;
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.56234133,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.56234133,2.5};
		cursor = "EmptyCursor";
		cursorAim = "missile";
		showAimCursorInternal = 1;
		holdsterAnimValue = 1;
		class Far_AI: RocketPods
		{
			showToPlayer = 0;
			minRange = 2500;
			minRangeProbab = 0.31;
			midRange = 5000;
			midRangeProbab = 0.61;
			maxRange = 7500;
			maxRangeProbab = 0.11;
			displayName = "$STR_A3_missiles_dar0";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\Rockets\new_rocket_7",1.7782794,1.2,1600};
				soundBegin[] = {"begin1",1};
			};
			soundFly[] = {"\A3\Sounds_F\weapons\Rockets\rocket_fly_2",1.0,1.2,700};
			burst = 1;
			reloadTime = 2.0;
			autoFire = 0;
		};
		class Medium_AI: Far_AI
		{
			minRange = 800;
			minRangeProbab = 0.31;
			midRange = 2000;
			midRangeProbab = 0.71;
			maxRange = 5200;
			maxRangeProbab = 0.31;
			burst = 1;
			reloadTime = 1.2;
		};
		class Close_AI: Far_AI
		{
			minRange = 200;
			minRangeProbab = 0.21;
			midRange = 800;
			midRangeProbab = 0.81;
			maxRange = 1500;
			maxRangeProbab = 0.31;
			reloadTime = 0.7;
			burst = 1;
		};
		class Burst: RocketPods
		{
			displayName = "$STR_A3_missiles_DAGR0";
			minRange = 1;
			minRangeProbab = 0.001;
			midRange = 2;
			midRangeProbab = 0.001;
			maxRange = 3;
			maxRangeProbab = 0.001;
			burst = 1;
			reloadTime = 0.08;
			soundContinuous = 0;
			autoFire = 0;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\Rockets\new_rocket_7",1.7782794,1.2,1600};
				soundBegin[] = {"begin1",1};
			};
			soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",1.7782794,1.2,700};
			textureType = "semi";
		};
	};
	class missiles_DAR: RocketPods
	{
		displayName = "$STR_A3_missiles_dar0";
		magazines[] = {"24Rnd_missiles","12Rnd_missiles","PylonRack_12Rnd_missiles"};
		modes[] = {"Far_AI","Medium_AI","Burst"};
		canLock = 0;
		weaponLockDelay = 0.0;
		cursor = "EmptyCursor";
		cursorAim = "rocket";
		holdsterAnimValue = 1;
		weight = 80;
		class Far_AI: RocketPods
		{
			showToPlayer = 0;
			minRange = 700;
			minRangeProbab = 0.31;
			midRange = 1200;
			midRangeProbab = 0.61;
			maxRange = 2500;
			maxRangeProbab = 0.11;
			displayName = "$STR_A3_missiles_dar0";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\Rockets\new_rocket_8",1.7782794,1.2,1600};
				soundBegin[] = {"begin1",1};
			};
			soundFly[] = {"\A3\Sounds_F\weapons\Rockets\rocket_fly_2",1.1220185,1.2,700};
			burst = 1;
			reloadTime = 2.0;
			autoFire = 0;
		};
		class Medium_AI: Far_AI
		{
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 800;
			midRangeProbab = 0.71;
			maxRange = 1200;
			maxRangeProbab = 0.31;
			reloadTime = 1.0;
		};
		class Burst: RocketPods
		{
			displayName = "$STR_A3_missiles_dar0";
			minRange = 1;
			minRangeProbab = 0.001;
			midRange = 2;
			midRangeProbab = 0.001;
			maxRange = 3;
			maxRangeProbab = 0.001;
			burst = 1;
			reloadTime = 0.08;
			soundContinuous = 0;
			autoFire = 1;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\Rockets\new_rocket_8",1.7782794,1.2,1600};
				soundBegin[] = {"begin1",1};
			};
			soundFly[] = {"\A3\Sounds_F\weapons\Rockets\rocket_fly_2",1.7782794,1.2,700};
			textureType = "fullAuto";
		};
	};
	class GMG_F: MGun
	{
		reloadTime = 0.17;
		dispersion = 0.006;
		magazineReloadTime = 6;
		minRange = 8;
		minRangeProbab = 0.6;
		midRange = 500;
		midRangeProbab = 0.7;
		maxRange = 1500;
		maxRangeProbab = 0.1;
		autoReload = 1;
		canLock = 0;
		aiRateOfFire = 4;
		aiRateOfFireDistance = 500;
		ballisticsComputer = "2 + 16";
		FCSMaxLeadSpeed = 0;
		FCSZeroingDelay = 1;
		maxZeroing = 1000;
		autoFire = 1;
		cursor = "EmptyCursor";
		cursorAim = "gl";
	};
	class GMG_20mm: GMG_F
	{
		scope = 1;
		displayName = "$STR_A3_GMG_20mm0";
		magazines[] = {"200Rnd_20mm_G_belt","40Rnd_20mm_g_belt"};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\Static_GMG\reload_static_GMG",0.8912509,1,20};
		class GunClouds{};
		class GunParticles
		{
			class effect1
			{
				positionName = "usti hlavne3";
				directionName = "konec hlavne3";
				effectName = "GrenadeLauncherCloud";
			};
		};
		modes[] = {"manual","close","short","medium","far"};
		class manual: GMG_F
		{
			displayName = "$STR_A3_GMG_20mm0";
			aiRateOfFire = 1;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG_01",1.1220185,1.0,1200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG_02",1.1220185,1.0,1200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG_03",1.1220185,1.0,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			soundContinuous = 0;
			soundBurst = 0;
		};
		class close: manual
		{
			burst = 6;
			aiBurstTerminable = 1;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 50;
			minRange = 8;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.1;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 5;
			aiBurstTerminable = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.1;
		};
		class medium: close
		{
			burst = 4;
			aiBurstTerminable = 1;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			burst = 3;
			aiBurstTerminable = 1;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 750;
			midRangeProbab = 0.4;
			maxRange = 1000;
			maxRangeProbab = 0.01;
		};
	};
	class GMG_40mm: GMG_F
	{
		scope = 1;
		displayName = "$STR_A3_GMG_40mm0";
		magazines[] = {"200Rnd_40mm_G_belt","96Rnd_40mm_G_belt","64Rnd_40mm_G_belt","32Rnd_40mm_G_belt"};
		showAimCursorInternal = 0;
		modes[] = {"manual","close","short","medium","far"};
		class manual: GMG_F
		{
			displayName = "$STR_A3_GMG_40mm0";
			aiRateOfFire = 1;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG_01",1.1220185,1.0,1200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG_02",1.1220185,1.0,1200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG_03",1.1220185,1.0,1200};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			burst = 6;
			aiBurstTerminable = 1;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.1;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 5;
			aiBurstTerminable = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.1;
		};
		class medium: close
		{
			burst = 4;
			aiBurstTerminable = 1;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			burst = 3;
			aiBurstTerminable = 1;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 750;
			midRangeProbab = 0.4;
			maxRange = 1000;
			maxRangeProbab = 0.01;
		};
		class GunParticles
		{
			class effect1
			{
				positionName = "usti hlavne";
				directionName = "konec hlavne";
				effectName = "GrenadeLauncherCloud";
			};
		};
	};
	class Laserdesignator_mounted: Default
	{
		scope = 2;
		cursor = "laserDesignator";
		cursorAim = "EmptyCursor";
		cursorAimOn = "CursorAimOn";
		opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
		displayName = "$STR_A3_Laserdesignator_mounted0";
		magazines[] = {"Laserbatteries"};
		Laser = 1;
		canLock = 0;
		showAimCursorInternal = 0;
		canShootInWater = 1;
		minRange = 100;
		minRangeProbab = 1.0;
		midRange = 2000;
		midRangeProbab = 1.0;
		maxRange = 5000;
		maxRangeProbab = 1.0;
	};
	class Laserdesignator_pilotCamera: Laserdesignator_mounted
	{
		cursor = "EmptyCursor";
		cursorAimOn = "EmptyCursor";
		minRange = 1;
		minRangeProbab = 0;
		midRange = 2;
		midRangeProbab = 0;
		maxRange = 3;
		maxRangeProbab = 0;
	};
	class autocannon_Base_F: CannonCore
	{
		scope = 1;
		cursor = "EmptyCursor";
		cursorAim = "cannon";
		nameSound = "cannon";
		sound[] = {"A3\sounds_f\dummysound",2.5118864,1,1800};
		soundContinuous = 0;
		minRange = 5;
		minRangeProbab = 0.7;
		midRange = 1200;
		midRangeProbab = 0.7;
		maxRange = 2500;
		maxRangeProbab = 0.1;
		reloadTime = 0.3;
		aiRateOfFire = 0.6;
		aiRateOfFireDistance = 500;
		magazineReloadTime = 2;
		autoReload = 1;
		ballisticsComputer = "2 + 16";
		FCSMaxLeadSpeed = 27.778;
		FCSZeroingDelay = 1;
		canLock = 0;
		autoFire = 1;
		modes[] = {"player","close","short","medium","far"};
		shotFromTurret = 1;
		showAimCursorInternal = 0;
		class GunParticles
		{
			class Effect
			{
				effectName = "AutoCannonFired";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
			class Shell
			{
				positionName = "shell_eject_pos";
				directionName = "shell_eject_dir";
				effectName = "HeavyGunCartridge1";
			};
		};
		class player: Mode_FullAuto
		{
			aiRateOfFire = 0.5;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_01",1.9952624,1,1500};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_02",1.9952624,1,1500};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_03",1.9952624,1,1500};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			soundContinuous = 0;
			reloadTime = 0.3;
			dispersion = 0.00035;
		};
		class close: player
		{
			showToPlayer = 0;
			burst = 5;
			aiBurstTerminable = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 1000;
			maxRangeProbab = 0.2;
			aiDispersionCoefX = 6;
			aiDispersionCoefY = 6;
		};
		class short: close
		{
			burst = 4;
			aiBurstTerminable = 1;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			minRange = 500;
			minRangeProbab = 0.05;
			midRange = 1000;
			midRangeProbab = 0.7;
			maxRange = 1500;
			maxRangeProbab = 0.2;
		};
		class medium: short
		{
			burst = 3;
			aiBurstTerminable = 1;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 1000;
			minRangeProbab = 0.05;
			midRange = 1500;
			midRangeProbab = 0.7;
			maxRange = 2000;
			maxRangeProbab = 0.1;
		};
		class far: medium
		{
			burst = 3;
			aiBurstTerminable = 1;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 1500;
			minRangeProbab = 0.05;
			midRange = 2500;
			midRangeProbab = 0.4;
			maxRange = 3000;
			maxRangeProbab = 0.01;
		};
	};
	class autocannon_40mm_CTWS: autocannon_Base_F
	{
		displayName = "$STR_A3_autocannon_40mm_CTWS0";
		muzzles[] = {"HE","AP"};
		class HE: autocannon_Base_F
		{
			displayName = "$STR_A3_autocannon_40mm_CTWS0";
			magazines[] = {"60Rnd_40mm_GPR_shells","60Rnd_40mm_GPR_Tracer_Red_shells","60Rnd_40mm_GPR_Tracer_Green_shells","60Rnd_40mm_GPR_Tracer_Yellow_shells"};
			class player: player
			{
				dispersion = 0.00055;
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\autocannon_40mm_body_01",1.9952624,1,1500};
					begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\autocannon_40mm_body_02",1.9952624,1,1500};
					begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\autocannon_40mm_body_03",1.9952624,1,1500};
					soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				};
			};
			class close: close
			{
				dispersion = 0.00055;
			};
			class short: short
			{
				dispersion = 0.00055;
			};
			class medium: medium
			{
				dispersion = 0.00055;
			};
			class far: far
			{
				dispersion = 0.00055;
			};
		};
		class AP: autocannon_Base_F
		{
			displayName = "$STR_A3_autocannon_40mm_CTWS0";
			magazines[] = {"40Rnd_40mm_APFSDS_shells","40Rnd_40mm_APFSDS_Tracer_Red_shells","40Rnd_40mm_APFSDS_Tracer_Green_shells","40Rnd_40mm_APFSDS_Tracer_Yellow_shells"};
			class player: player
			{
				dispersion = 0.00055;
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\autocannon_40mm_body_01",1.9952624,1,1500};
					begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\autocannon_40mm_body_02",1.9952624,1,1500};
					begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_40mm\autocannon_40mm_body_03",1.9952624,1,1500};
					soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				};
			};
		};
	};
	class autocannon_30mm_CTWS: autocannon_Base_F
	{
		displayName = "$STR_A3_GATLING_30MM_CTWS0";
		muzzles[] = {"HE","AP"};
		class HE: autocannon_Base_F
		{
			displayName = "$STR_A3_GATLING_30MM_CTWS0";
			magazines[] = {"140Rnd_30mm_MP_shells","140Rnd_30mm_MP_shells_Tracer_Red","140Rnd_30mm_MP_shells_Tracer_Green","140Rnd_30mm_MP_shells_Tracer_Yellow"};
			class player: player
			{
				dispersion = 0.0006;
			};
			class close: close
			{
				dispersion = 0.0006;
			};
			class short: short
			{
				dispersion = 0.0006;
			};
			class medium: medium
			{
				dispersion = 0.0006;
			};
			class far: far
			{
				dispersion = 0.0006;
			};
		};
		class AP: autocannon_Base_F
		{
			displayName = "$STR_A3_GATLING_30MM_CTWS0";
			magazines[] = {"60Rnd_30mm_APFSDS_shells","60Rnd_30mm_APFSDS_shells_Tracer_Red","60Rnd_30mm_APFSDS_shells_Tracer_Green","60Rnd_30mm_APFSDS_shells_Tracer_Yellow"};
			class player: player
			{
				dispersion = 0.0004;
			};
			class close: close
			{
				dispersion = 0.0004;
			};
			class short: short
			{
				dispersion = 0.0004;
			};
			class medium: medium
			{
				dispersion = 0.0004;
			};
			class far: far
			{
				dispersion = 0.0004;
			};
		};
	};
	class gatling_20mm: CannonCore
	{
		scope = 1;
		displayName = "$STR_A3_GATLING_20MM0";
		nameSound = "cannon";
		cursor = "EmptyCursor";
		cursorAim = "mg";
		magazines[] = {"2000Rnd_20mm_shells","1000Rnd_20mm_shells","300Rnd_20mm_shells","PylonWeapon_300Rnd_20mm_shells"};
		canLock = 0;
		ballisticsComputer = "2 + 4 + 8";
		modes[] = {"manual","close","short","medium","far"};
		class GunParticles
		{
			class Effect
			{
				effectName = "MachineGun1";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		class manual: CannonCore
		{
			displayName = "$STR_A3_GATLING_20MM0";
			autoFire = 1;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\gatling_20mm\20mm_01_burst",3.9810717,1,1300,{2,35740}};
				soundBegin[] = {"begin1",1};
			};
			reloadTime = 0.04;
			dispersion = 0.0022;
			soundContinuous = 1;
			soundBurst = 0;
			showToPlayer = 1;
			burst = 5;
			aiRateOfFire = 0.25;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
			textureType = "fullAuto";
		};
		class close: manual
		{
			showToPlayer = 0;
			burst = 15;
			aiBurstTerminable = 1;
			aiRateOfFire = 0.25;
			aiRateOfFireDistance = 400;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.2;
		};
		class short: close
		{
			burst = 10;
			aiBurstTerminable = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 500;
			minRange = 300;
			minRangeProbab = 0.2;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.2;
		};
		class medium: close
		{
			burst = 7;
			aiBurstTerminable = 1;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 900;
			minRange = 400;
			minRangeProbab = 0.2;
			midRange = 700;
			midRangeProbab = 0.7;
			maxRange = 900;
			maxRangeProbab = 0.2;
		};
		class far: close
		{
			burst = 4;
			aiBurstTerminable = 1;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1500;
			minRange = 800;
			minRangeProbab = 0.2;
			midRange = 1000;
			midRangeProbab = 0.4;
			maxRange = 1500;
			maxRangeProbab = 0.01;
		};
	};
	class gatling_30mm_base: CannonCore
	{
		scope = 0;
		displayName = "$STR_A3_GATLING_30MM0";
		nameSound = "cannon";
		burst = 5;
		reloadTime = 0.02;
		autoFire = 1;
		magazines[] = {"250Rnd_30mm_HE_shells","250Rnd_30mm_HE_shells_Tracer_Red","250Rnd_30mm_HE_shells_Tracer_Green","250Rnd_30mm_APDS_shells","250Rnd_30mm_APDS_shells_Tracer_Red","250Rnd_30mm_APDS_shells_Tracer_Green","250Rnd_30mm_APDS_shells_Tracer_Yellow"};
		modes[] = {"LowROF","close","near","short","medium","far"};
		shotFromTurret = 1;
		cursor = "EmptyCursor";
		cursorAim = "mg";
		canLock = 0;
		ballisticsComputer = "2 + 4 + 8";
		class GunParticles
		{
			class Effect
			{
				effectName = "MachineGun2";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		class LowROF: Mode_FullAuto
		{
			displayName = "$STR_A3_GATLING_30MM_LOWROF0";
			reloadTime = 0.08;
			burst = 5;
			sounds[] = {"StandardSound"};
			aiRateOfFire = 0.25;
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\gatling_30mm\30mm_02_burst",5.6234136,1,1500,{2,45447}};
				soundBegin[] = {"begin1",1};
			};
			soundContinuous = 1;
			flash = "gunfire";
			flashSize = 0.1;
			recoil = "Empty";
			aiDispersionCoefX = 6;
			aiDispersionCoefY = 6;
			ffMagnitude = 0.5;
			ffFrequency = 11;
			ffCount = 6;
			minRange = 1;
			minRangeProbab = 0.06;
			midRange = 2;
			midRangeProbab = 0.06;
			maxRange = 3;
			maxRangeProbab = 0.004;
			dispersion = 0.0005;
			showToPlayer = 1;
		};
		class close: LowROF
		{
			showToPlayer = 0;
			burst = 15;
			aiBurstTerminable = 1;
			aiRateOfFire = 0.25;
			aiRateOfFireDistance = 400;
			minRange = 1;
			minRangeProbab = 0.35;
			midRange = 200;
			midRangeProbab = 0.88;
			maxRange = 400;
			maxRangeProbab = 0.3;
		};
		class near: close
		{
			showToPlayer = 0;
			burst = 5;
			aiBurstTerminable = 1;
			aiRateOfFire = 0.25;
			aiRateOfFireDistance = 400;
			minRange = 1;
			minRangeProbab = 0.35;
			midRange = 150;
			midRangeProbab = 0.88;
			maxRange = 300;
			maxRangeProbab = 0.3;
		};
		class short: close
		{
			burst = 13;
			aiBurstTerminable = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.3;
			midRange = 400;
			midRangeProbab = 0.88;
			maxRange = 600;
			maxRangeProbab = 0.3;
		};
		class medium: close
		{
			burst = 9;
			aiBurstTerminable = 1;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 900;
			minRange = 400;
			minRangeProbab = 0.3;
			midRange = 700;
			midRangeProbab = 0.78;
			maxRange = 900;
			maxRangeProbab = 0.2;
		};
		class far: close
		{
			burst = 5;
			aiBurstTerminable = 1;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1500;
			minRange = 800;
			minRangeProbab = 0.2;
			midRange = 1000;
			midRangeProbab = 0.6;
			maxRange = 1500;
			maxRangeProbab = 0.1;
		};
	};
	class gatling_30mm: gatling_30mm_base
	{
		scope = 1;
		muzzles[] = {"HE","AP"};
		class HE: gatling_30mm_base
		{
			magazines[] = {"250Rnd_30mm_HE_shells","250Rnd_30mm_HE_shells_Tracer_Red","250Rnd_30mm_HE_shells_Tracer_Green"};
		};
		class AP: gatling_30mm_base
		{
			magazines[] = {"250Rnd_30mm_APDS_shells","250Rnd_30mm_APDS_shells_Tracer_Red","250Rnd_30mm_APDS_shells_Tracer_Green","250Rnd_30mm_APDS_shells_Tracer_Yellow"};
		};
	};
	class missiles_ASRAAM: MissileLauncher
	{
		displayName = "$STR_A3_missiles_ASRAAM0";
		minRange = 300;
		minRangeProbab = 0.025;
		midRange = 2500;
		midRangeProbab = 0.09;
		maxRange = 9000;
		maxRangeProbab = 0.01;
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_2",1.1220185,1.3,1000};
			soundBegin[] = {"begin1",1};
		};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",1.0,1.5,700};
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.56234133,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.56234133,2.5};
		reloadTime = 0.1;
		magazineReloadTime = 0.1;
		magazines[] = {"2Rnd_AAA_missiles","2Rnd_AAA_missiles_MI02","2Rnd_AAA_missiles_MI06","4Rnd_AAA_missiles","4Rnd_AAA_missiles_MI02","PylonRack_1Rnd_AAA_missiles","PylonMissile_1Rnd_AAA_missiles"};
		holdsterAnimValue = 1;
		weaponLockDelay = 3.0;
		weaponLockSystem = 2;
		cmImmunity = 0.6;
		textureType = "semi";
		showAimCursorInternal = 0;
	};
	class missiles_SCALPEL: RocketPods
	{
		autoFire = 0;
		displayName = "$STR_A3_missiles_SCALPEL0";
		magazines[] = {"2Rnd_LG_scalpel","8Rnd_LG_scalpel","6Rnd_LG_scalpel","PylonRack_1Rnd_LG_scalpel","PylonMissile_1Rnd_LG_scalpel","PylonRack_3Rnd_LG_scalpel","PylonRack_4Rnd_LG_scalpel"};
		aiRateOfFire = 5.0;
		aiRateOfFireDistance = 500;
		nameSound = "MissileLauncher";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_1",1.1220185,1.3,1000};
			soundBegin[] = {"begin1",1};
		};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",1.0,1.1,700};
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.56234133,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.56234133,2.5};
		cursor = "EmptyCursor";
		cursorAim = "missile";
		showAimCursorInternal = 0;
		weaponLockDelay = 3.0;
		weaponLockSystem = 2;
		cmImmunity = 0.4;
		textureType = "semi";
		minRange = 400;
		minRangeProbab = 0.2;
		midRange = 1000;
		midRangeProbab = 0.96;
		maxRange = 6000;
		maxRangeProbab = 0.92;
	};
	class missiles_titan: MissileLauncher
	{
		displayName = "$STR_A3_missiles_titan0";
		reloadTime = 1;
		magazineReloadTime = 6;
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\reload_Missile_Launcher",0.8912509,1,10};
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Titan",1.4125376,1,1100};
			soundBegin[] = {"begin1",1};
		};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\rocket_fly",1.0,1.1,700};
		lockingTargetSound[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locking_Titan",0.56234133,1};
		lockedTargetSound[] = {"A3\Sounds_F\arsenal\weapons_static\Missile_Launcher\Locked_Titan",0.56234133,2.5};
		magazines[] = {"2Rnd_GAT_missiles","5Rnd_GAT_missiles","4Rnd_GAA_missiles","4Rnd_Titan_long_missiles"};
		minRange = 50;
		minRangeProbab = 0.1;
		midRange = 1000;
		midRangeProbab = 0.85;
		maxRange = 4500;
		maxRangeProbab = 0.9;
		aiRateOfFire = 8.0;
		aiRateOfFireDistance = 4000;
		weaponLockDelay = 3.0;
		weaponLockSystem = 2;
		cmImmunity = 0.5;
		textureType = "semi";
	};
	class rockets_Skyfire: RocketPods
	{
		displayName = "$STR_A3_rockets_Skyfire0";
		magazines[] = {"14Rnd_80mm_rockets","38Rnd_80mm_rockets","PylonRack_19Rnd_Rocket_Skyfire"};
		ballisticsComputer = 8;
		modes[] = {"Far_AI","Medium_AI","Close_AI","Burst"};
		canLock = 0;
		weaponLockDelay = 0.0;
		class Far_AI: RocketPods
		{
			weaponLockDelay = 0.0;
			showToPlayer = 0;
			minRange = 1500;
			minRangeProbab = 0.31;
			midRange = 2500;
			midRangeProbab = 0.7;
			maxRange = 3200;
			maxRangeProbab = 0.1;
			displayName = "$STR_A3_missiles_dar0";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_2",1.1220185,1,1100};
				soundBegin[] = {"begin1",1};
			};
			soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",1.0,1.1,700};
			burst = 1;
			burstRangeMax = 2;
			reloadTime = 2.0;
			autoFire = 0;
			aiRateOfFire = 5.0;
			aiRateOfFireDistance = 500;
		};
		class Medium_AI: Far_AI
		{
			minRange = 800;
			minRangeProbab = 0.21;
			midRange = 1500;
			midRangeProbab = 0.9;
			maxRange = 2000;
			maxRangeProbab = 0.8;
			reloadTime = 0.7;
			burst = 2;
			burstRangeMax = 4;
		};
		class Close_AI: Far_AI
		{
			minRange = 300;
			minRangeProbab = 0.21;
			midRange = 800;
			midRangeProbab = 0.85;
			maxRange = 1500;
			maxRangeProbab = 0.9;
			reloadTime = 0.7;
			burst = 2;
			burstRangeMax = 6;
		};
		class Burst: RocketPods
		{
			displayName = "$STR_A3_rockets_Skyfire_Burst0";
			burst = 1;
			reloadTime = 0.08;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_2",1.1220185,1,1100};
				soundBegin[] = {"begin1",1};
			};
			soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",1.0,1.9,700};
			autoFire = 1;
			soundContinuous = 0;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
			textureType = "fullAuto";
			aiRateOfFire = 5.0;
			aiRateOfFireDistance = 500;
		};
	};
	class LMG_Minigun2: LMG_Minigun
	{
		class GunParticles
		{
			class effect1
			{
				positionName = "machinegun2_eject_pos";
				directionName = "machinegun2_eject_dir";
				effectName = "MachineGunCartridge1";
			};
			class effect2
			{
				positionName = "machinegun2_end";
				directionName = "machinegun2_beg";
				effectName = "MachineGun1";
			};
		};
	};
	class LMG_Minigun_Transport: LMG_Minigun
	{
		class GunParticles
		{
			class effect1
			{
				positionName = "machinegun_eject_pos";
				directionName = "machinegun_eject_dir";
				effectName = "MachineGunCartridgeShort1";
			};
			class effect2
			{
				positionName = "machinegun_end";
				directionName = "machinegun_beg";
				effectName = "MachineGun1";
			};
		};
	};
	class LMG_Minigun_Transport2: LMG_Minigun_Transport
	{
		class GunParticles
		{
			class effect1
			{
				positionName = "machinegun2_eject_pos";
				directionName = "machinegun2_eject_dir";
				effectName = "MachineGunCartridgeShort1";
			};
			class effect2
			{
				positionName = "machinegun2_end";
				directionName = "machinegun2_beg";
				effectName = "MachineGun1";
			};
		};
	};
	class SEARCHLIGHT: MGun
	{
		scope = 1;
		displayName = "$STR_A3_cfgWeapons_SEARCHLIGHT0";
		cursorAim = "EmptyCursor";
		cursor = "EmptyCursor";
	};
	class cannon_120mm: CannonCore
	{
		scope = 1;
		displayName = "$STR_A3_cannon_120mm0";
		cursor = "EmptyCursor";
		cursorAim = "cannon";
		nameSound = "cannon";
		reloadSound[] = {"A3\sounds_f\vehicles\armor\noises\reload_tank_cannon_2",3.1622777,1,50};
		magazines[] = {"32Rnd_120mm_APFSDS_shells","32Rnd_120mm_APFSDS_shells_Tracer_Red","32Rnd_120mm_APFSDS_shells_Tracer_Green","32Rnd_120mm_APFSDS_shells_Tracer_Yellow","30Rnd_120mm_APFSDS_shells","30Rnd_120mm_APFSDS_shells_Tracer_Red","30Rnd_120mm_APFSDS_shells_Tracer_Green","30Rnd_120mm_APFSDS_shells_Tracer_Yellow","30Rnd_120mm_HE_shells","30Rnd_120mm_HE_shells_Tracer_Red","30Rnd_120mm_HE_shells_Tracer_Green","30Rnd_120mm_HE_shells_Tracer_Yellow","16Rnd_120mm_HE_shells","16Rnd_120mm_HE_shells_Tracer_Red","16Rnd_120mm_HE_shells_Tracer_Green","16Rnd_120mm_HE_shells_Tracer_Yellow"};
		minRange = 5;
		minRangeProbab = 0.7;
		midRange = 1200;
		midRangeProbab = 0.7;
		maxRange = 2500;
		maxRangeProbab = 0.1;
		reloadTime = 6;
		magazineReloadTime = 6;
		autoReload = 1;
		ballisticsComputer = "2 + 16";
		FCSMaxLeadSpeed = 27.778;
		FCSZeroingDelay = 1;
		canLock = 0;
		autoFire = 0;
		modes[] = {"player","close","short","medium","far"};
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "CannonFired";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		class player: Mode_SemiAuto
		{
			aiRateOfFire = 6;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\slammer_120mm_distant",3.1622777,1,1500};
				soundBegin[] = {"begin1",1};
			};
			soundContinuous = 0;
			reloadTime = 6;
			magazineReloadTime = 6;
			autoReload = 1;
			autoFire = 0;
			dispersion = 0.00025;
		};
		class close: player
		{
			showToPlayer = 0;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.35;
			midRange = 500;
			midRangeProbab = 0.78;
			maxRange = 1000;
			maxRangeProbab = 0.04;
			aiDispersionCoefX = 6;
			aiDispersionCoefY = 6;
		};
		class short: close
		{
			aiRateOfFire = 10;
			aiRateOfFireDistance = 300;
			minRange = 500;
			minRangeProbab = 0.05;
			midRange = 1000;
			midRangeProbab = 0.58;
			maxRange = 1500;
			maxRangeProbab = 0.04;
		};
		class medium: short
		{
			aiRateOfFire = 15;
			aiRateOfFireDistance = 600;
			minRange = 1000;
			minRangeProbab = 0.05;
			midRange = 1500;
			midRangeProbab = 0.58;
			maxRange = 2000;
			maxRangeProbab = 0.04;
		};
		class far: medium
		{
			aiRateOfFire = 20;
			aiRateOfFireDistance = 1000;
			minRange = 1500;
			minRangeProbab = 0.05;
			midRange = 2500;
			midRangeProbab = 0.4;
			maxRange = 3000;
			maxRangeProbab = 0.01;
		};
	};
	class cannon_125mm: CannonCore
	{
		scope = 1;
		displayName = "$STR_A3_cannon_125mm0";
		cursor = "EmptyCursor";
		cursorAim = "cannon";
		nameSound = "cannon";
		reloadSound[] = {"A3\sounds_f\vehicles\armor\noises\reload_tank_cannon_2",2.2387211,1,50};
		magazines[] = {"24Rnd_125mm_APFSDS","24Rnd_125mm_APFSDS_T_Red","24Rnd_125mm_APFSDS_T_Green","24Rnd_125mm_APFSDS_T_Yellow","12Rnd_125mm_HE","12Rnd_125mm_HE_T_Red","12Rnd_125mm_HE_T_Green","12Rnd_125mm_HE_T_Yellow","12Rnd_125mm_HEAT","12Rnd_125mm_HEAT_T_Red","12Rnd_125mm_HEAT_T_Green","12Rnd_125mm_HEAT_T_Yellow"};
		minRange = 5;
		minRangeProbab = 0.7;
		midRange = 1200;
		midRangeProbab = 0.7;
		maxRange = 2500;
		maxRangeProbab = 0.1;
		reloadTime = 6;
		magazineReloadTime = 6;
		autoReload = 1;
		ballisticsComputer = "2 + 16";
		FCSMaxLeadSpeed = 27.778;
		FCSZeroingDelay = 1;
		canLock = 0;
		autoFire = 0;
		modes[] = {"player","close","short","medium","far"};
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "CannonFired";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		class player: Mode_SemiAuto
		{
			aiRateOfFire = 6;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_125mm\varsuk_125mm_distant",3.1622777,1,1500};
				soundBegin[] = {"begin1",1};
			};
			soundContinuous = 0;
			reloadTime = 6;
			magazineReloadTime = 6;
			autoReload = 1;
			autoFire = 0;
			dispersion = 0.00021;
		};
		class close: player
		{
			showToPlayer = 0;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.35;
			midRange = 500;
			midRangeProbab = 0.78;
			maxRange = 1000;
			maxRangeProbab = 0.04;
			aiDispersionCoefX = 6;
			aiDispersionCoefY = 6;
		};
		class short: close
		{
			aiRateOfFire = 10;
			aiRateOfFireDistance = 300;
			minRange = 500;
			minRangeProbab = 0.05;
			midRange = 1000;
			midRangeProbab = 0.58;
			maxRange = 1500;
			maxRangeProbab = 0.04;
		};
		class medium: short
		{
			aiRateOfFire = 15;
			aiRateOfFireDistance = 600;
			minRange = 1000;
			minRangeProbab = 0.05;
			midRange = 1500;
			midRangeProbab = 0.58;
			maxRange = 2000;
			maxRangeProbab = 0.04;
		};
		class far: medium
		{
			aiRateOfFire = 20;
			aiRateOfFireDistance = 1000;
			minRange = 1500;
			minRangeProbab = 0.05;
			midRange = 2500;
			midRangeProbab = 0.4;
			maxRange = 3000;
			maxRangeProbab = 0.01;
		};
	};
	class cannon_105mm: CannonCore
	{
		scope = 1;
		displayName = "$STR_A3_cannon_105mm0";
		cursor = "EmptyCursor";
		cursorAim = "cannon";
		nameSound = "cannon";
		reloadSound[] = {"A3\sounds_f\vehicles\armor\noises\reload_tank_cannon_2",3.1622777,1,50};
		magazines[] = {"40Rnd_105mm_APFSDS","40Rnd_105mm_APFSDS_T_Red","40Rnd_105mm_APFSDS_T_Green","40Rnd_105mm_APFSDS_T_Yellow","20Rnd_105mm_HEAT_MP","20Rnd_105mm_HEAT_MP_T_Red","20Rnd_105mm_HEAT_MP_T_Green","20Rnd_105mm_HEAT_MP_T_Yellow"};
		minRange = 5;
		minRangeProbab = 0.7;
		midRange = 1200;
		midRangeProbab = 0.7;
		maxRange = 2500;
		maxRangeProbab = 0.1;
		reloadTime = 5;
		magazineReloadTime = 5;
		autoReload = 1;
		ballisticsComputer = "2 + 16";
		FCSMaxLeadSpeed = 27.778;
		FCSZeroingDelay = 1;
		canLock = 0;
		autoFire = 0;
		modes[] = {"player","close","short","medium","far"};
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "CannonFired";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
		class player: Mode_SemiAuto
		{
			aiRateOfFire = 5;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_105mm\slammer_105mm_distant",3.1622777,1,1500};
				soundBegin[] = {"begin1",1};
			};
			soundContinuous = 0;
			reloadTime = 5;
			magazineReloadTime = 5;
			autoReload = 1;
			autoFire = 0;
			dispersion = 0.00015;
		};
		class close: player
		{
			showToPlayer = 0;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.35;
			midRange = 500;
			midRangeProbab = 0.78;
			maxRange = 1000;
			maxRangeProbab = 0.04;
			aiDispersionCoefX = 6;
			aiDispersionCoefY = 6;
		};
		class short: close
		{
			aiRateOfFire = 8;
			aiRateOfFireDistance = 300;
			minRange = 500;
			minRangeProbab = 0.05;
			midRange = 1000;
			midRangeProbab = 0.58;
			maxRange = 1500;
			maxRangeProbab = 0.04;
		};
		class medium: short
		{
			aiRateOfFire = 12;
			aiRateOfFireDistance = 600;
			minRange = 1000;
			minRangeProbab = 0.05;
			midRange = 1500;
			midRangeProbab = 0.58;
			maxRange = 2000;
			maxRangeProbab = 0.04;
		};
		class far: medium
		{
			aiRateOfFire = 16;
			aiRateOfFireDistance = 1000;
			minRange = 1500;
			minRangeProbab = 0.05;
			midRange = 2500;
			midRangeProbab = 0.4;
			maxRange = 3000;
			maxRangeProbab = 0.01;
		};
	};
	class gatling_25mm: CannonCore
	{
		scope = 1;
		displayName = "$STR_A3_gatling_25mm0";
		nameSound = "cannon";
		cursor = "EmptyCursor";
		cursorAim = "mg";
		magazines[] = {"1000Rnd_25mm_shells","300Rnd_25mm_shells"};
		canLock = 0;
		modes[] = {"manual","close","short","medium","far"};
		class manual: CannonCore
		{
			displayName = "$STR_A3_gatling_25mm_manual0";
			autoFire = 1;
			aiRateOfFire = 0.25;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\30mm\30mm_st_02",1.9952624,1,1500};
				soundBegin[] = {"begin1",1};
			};
			reloadTime = 0.01;
			dispersion = 0.0025;
			soundContinuous = 0;
			showToPlayer = 1;
			burst = 1;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
			textureType = "fullAuto";
		};
		class close: manual
		{
			showToPlayer = 0;
			burst = 15;
			aiBurstTerminable = 1;
			aiRateOfFire = 0.25;
			aiRateOfFireDistance = 400;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.58;
			maxRange = 400;
			maxRangeProbab = 0.2;
		};
		class short: close
		{
			burst = 10;
			aiBurstTerminable = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 500;
			minRange = 300;
			minRangeProbab = 0.2;
			midRange = 400;
			midRangeProbab = 0.58;
			maxRange = 500;
			maxRangeProbab = 0.2;
		};
		class medium: close
		{
			burst = 7;
			aiBurstTerminable = 1;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 9000;
			minRange = 400;
			minRangeProbab = 0.2;
			midRange = 700;
			midRangeProbab = 0.58;
			maxRange = 900;
			maxRangeProbab = 0.2;
		};
		class far: close
		{
			burst = 4;
			aiBurstTerminable = 1;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1500;
			minRange = 800;
			minRangeProbab = 0.2;
			midRange = 1000;
			midRangeProbab = 0.4;
			maxRange = 1500;
			maxRangeProbab = 0.01;
		};
	};
	class autocannon_35mm: CannonCore
	{
		scope = 1;
		displayName = "$STR_A3_autocannon_35mm0";
		nameSound = "cannon";
		cursor = "EmptyCursor";
		cursorAim = "mg";
		magazines[] = {"680Rnd_35mm_AA_shells","680Rnd_35mm_AA_shells_Tracer_Red","680Rnd_35mm_AA_shells_Tracer_Green","680Rnd_35mm_AA_shells_Tracer_Yellow"};
		modes[] = {"manual","close","short","medium","far"};
		canLock = 0;
		ballisticsComputer = "2 + 4";
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "MachineGun1";
				positionName = "Usti hlavne 1";
				directionName = "Konec hlavne 1";
			};
			class SecondEffect
			{
				effectName = "MachineGun1";
				positionName = "Usti hlavne 2";
				directionName = "Konec hlavne 2";
			};
		};
		class manual: CannonCore
		{
			displayName = "$STR_A3_autocannon_35mm_manual0";
			autoFire = 1;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\autocannon_35mm\autocannon_35mm_01",1.7782794,1,2000};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\autocannon_35mm\autocannon_35mm_02",1.7782794,1,2000};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\autocannon_35mm\autocannon_35mm_03",1.7782794,1,2000};
				soundBegin[] = {"begin1",33,"begin2",33,"begin3",33};
			};
			reloadTime = 0.055;
			dispersion = 0.0025;
			soundContinuous = 0;
			showToPlayer = 1;
			burst = 2;
			soundBurst = 1;
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
			textureType = "fullAuto";
		};
		class close: manual
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 12;
			burstRangeMax = 28;
			aiBurstTerminable = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDispersion = 0.5;
			aiRateOfFireDistance = 200;
			minRange = 1;
			minRangeProbab = 0.1;
			midRange = 100;
			midRangeProbab = 0.4;
			maxRange = 400;
			maxRangeProbab = 0.6;
		};
		class short: close
		{
			burst = 18;
			burstRangeMax = 42;
			aiBurstTerminable = 1;
			aiRateOfFire = 1.0;
			aiRateOfFireDistance = 500;
			minRange = 200;
			minRangeProbab = 0.3;
			midRange = 500;
			midRangeProbab = 0.85;
			maxRange = 750;
			maxRangeProbab = 0.9;
		};
		class medium: short
		{
			aiRateOfFireDispersion = 1.5;
			minRange = 600;
			minRangeProbab = 0.6;
			midRange = 750;
			midRangeProbab = 0.9;
			maxRange = 1250;
			maxRangeProbab = 0.7;
		};
		class far: short
		{
			aiRateOfFire = 1.5;
			aiRateOfFireDispersion = 3;
			minRange = 1000;
			minRangeProbab = 0.4;
			midRange = 1250;
			midRangeProbab = 0.7;
			maxRange = 2500;
			maxRangeProbab = 0.1;
		};
	};
	class mortar_155mm_AMOS: CannonCore
	{
		scope = 1;
		displayName = "$STR_A3_mortar_120mm_AMOS0";
		nameSound = "cannon";
		cursor = "mortar";
		cursorAim = "EmptyCursor";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\sochor_155mm_distant",2.5118864,1,1500};
			soundBegin[] = {"begin1",1};
		};
		reloadSound[] = {"A3\Sounds_F\vehicles\armor\noises\reload_tank_cannon_2",31.622778,1,15};
		minRange = 10;
		minRangeProbab = 0.7;
		midRange = 1800;
		midRangeProbab = 0.7;
		maxRange = 3000;
		maxRangeProbab = 0.1;
		reloadTime = 6;
		magazineReloadTime = 7;
		autoReload = 1;
		canLock = 0;
		magazines[] = {"32Rnd_155mm_Mo_shells","6Rnd_155mm_Mo_smoke","2Rnd_155mm_Mo_guided","2Rnd_155mm_Mo_LG","6Rnd_155mm_Mo_mine","2Rnd_155mm_Mo_Cluster","6Rnd_155mm_Mo_AT_mine"};
		modes[] = {"Single1","Single2","Single3","Single4","Single5","Burst1","Burst2","Burst3","Burst4","Burst5"};
		class GunParticles
		{
			class Effect1
			{
				effectName = "ArtilleryFired1";
				positionName = "Usti hlavne3";
				directionName = "Konec hlavne3";
			};
			class Effect2
			{
				effectName = "ArtilleryFiredL";
				positionName = "Usti hlavne";
				directionName = "Usti hlavne b";
			};
			class Effect3
			{
				effectName = "ArtilleryFiredR";
				positionName = "Usti hlavne";
				directionName = "Usti hlavne b";
			};
		};
		class Single1: Mode_SemiAuto
		{
			displayName = "$STR_A3_mortar_120mm_AMOS_Single10";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\sochor_155mm_distant",2.5118864,1,1500};
				soundBegin[] = {"begin1",1};
			};
			reloadSound[] = {"A3\sounds_f\dummysound",1.0,1,20};
			reloadTime = 8;
			minRange = 0;
			midRange = 0;
			maxRange = 0;
			artilleryDispersion = 3.2;
			artilleryCharge = 0.19;
		};
		class Single2: Single1
		{
			displayName = "$STR_A3_mortar_120mm_AMOS_Single20";
			artilleryCharge = 0.3;
		};
		class Single3: Single1
		{
			displayName = "$STR_A3_mortar_120mm_AMOS_Single30";
			artilleryCharge = 0.48;
		};
		class Single4: Single1
		{
			displayName = "$STR_A3_mortar_120mm_AMOS_Single40";
			artilleryCharge = 0.8;
		};
		class Single5: Single1
		{
			displayName = "$STR_A3_mortar_120mm_AMOS_Single50";
			artilleryCharge = 1;
		};
		class Burst1: Mode_Burst
		{
			showToPlayer = 0;
			displayName = "$STR_A3_mortar_120mm_AMOS_Burst10";
			burst = 6;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\sochor_155mm_distant",2.5118864,1,1500};
				soundBegin[] = {"begin1",1};
			};
			reloadSound[] = {"A3\sounds_f\dummysound",1.0,1,20};
			soundBurst = 0;
			reloadTime = 6;
			minRange = 800;
			minRangeProbab = 0.5;
			midRange = 1500;
			midRangeProbab = 0.7;
			maxRange = 2000;
			maxRangeProbab = 0.5;
			artilleryDispersion = 5.3;
			artilleryCharge = 0.19;
		};
		class Burst2: Burst1
		{
			showToPlayer = 0;
			displayName = "$STR_A3_mortar_120mm_AMOS_Burst20";
			minRange = 2000;
			minRangeProbab = 0.4;
			midRange = 3000;
			midRangeProbab = 0.6;
			maxRange = 5200;
			maxRangeProbab = 0.4;
			artilleryCharge = 0.3;
		};
		class Burst3: Burst1
		{
			showToPlayer = 0;
			displayName = "$STR_A3_mortar_120mm_AMOS_Burst30";
			minRange = 5200;
			minRangeProbab = 0.3;
			midRange = 8000;
			midRangeProbab = 0.4;
			maxRange = 13300;
			maxRangeProbab = 0.3;
			artilleryCharge = 0.48;
		};
		class Burst4: Burst1
		{
			showToPlayer = 0;
			displayName = "$STR_A3_mortar_120mm_AMOS_Burst40";
			minRange = 14600;
			minRangeProbab = 0.2;
			midRange = 25000;
			midRangeProbab = 0.3;
			maxRange = 37000;
			maxRangeProbab = 0.2;
			artilleryCharge = 0.8;
		};
		class Burst5: Burst1
		{
			showToPlayer = 0;
			displayName = "$STR_A3_mortar_120mm_AMOS_Burst50";
			minRange = 25000;
			minRangeProbab = 0.1;
			midRange = 40000;
			midRangeProbab = 0.2;
			maxRange = 58000;
			maxRangeProbab = 0.1;
			artilleryCharge = 1;
		};
	};
	class missiles_Zephyr: MissileLauncher
	{
		displayName = "$STR_A3_missiles_Zephyr0";
		minRange = 50;
		minRangeProbab = 0.6;
		midRange = 2000;
		midRangeProbab = 0.9;
		maxRange = 4000;
		maxRangeProbab = 0.1;
		reloadTime = 1;
		sounds[] = {"StandardSound"};
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.56234133,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.56234133,2.5};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\weapons\Rockets\titan_1",2.5118864,1,1100};
			soundBegin[] = {"begin1",1};
		};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",0.56234133,1.1,700};
		magazines[] = {"4Rnd_GAA_missiles","PylonRack_1Rnd_GAA_missiles","PylonMissile_1Rnd_GAA_missiles"};
		aiRateOfFire = 5.0;
		aiRateOfFireDistance = 4000;
		weaponLockDelay = 1.5;
		weaponLockSystem = 8;
		cmImmunity = 0.7;
		textureType = "semi";
		showAimCursorInternal = 0;
	};
	class missiles_titan_static: missiles_titan
	{
		magazines[] = {"1Rnd_GAT_missiles","1Rnd_GAA_missiles"};
	};
	class GBU12BombLauncher: RocketPods
	{
		displayName = "$STR_DN_GBU12";
		magazines[] = {"2Rnd_GBU12_LGB","2Rnd_GBU12_LGB_MI10"};
		aiRateOfFire = 15.0;
		aiRateOfFireDistance = 1000;
		nameSound = "";
		cursorAim = "bomb";
		showAimCursorInternal = 0;
		textureType = "fullAuto";
		minRange = 300;
		minRangeProbab = 0.4;
		midRange = 1000;
		midRangeProbab = 0.95;
		maxRange = 7000;
		maxRangeProbab = 0.9;
		weaponLockDelay = 0.1;
		weaponLockSystem = 4;
		cmImmunity = 0.3;
	};
	class GBU12BombLauncher_Plane_Fighter_03_F: GBU12BombLauncher
	{
		ballisticsComputer = 8;
	};
	class Mk82BombLauncher: RocketPods
	{
		displayName = "$STR_DN_MK82LAUNCHER";
		nameSound = "";
		magazines[] = {"2Rnd_Mk82","2Rnd_Mk82_MI08","PylonMissile_1Rnd_Mk82_F"};
		aiRateOfFire = 5.0;
		aiRateOfFireDistance = 500;
		cursorAim = "bomb";
		showAimCursorInternal = 0;
		textureType = "fullAuto";
		salvo = 1;
	};
	class rockets_230mm_GAT: RocketPods
	{
		class gunClouds{};
		displayName = "$STR_A3_CFGMAGAZINES_12RND_230MM_ROCKETS0";
		magazines[] = {"12Rnd_230mm_rockets"};
		sounds[] = {"StandardSound"};
		cursorAim = "EmptyCursor";
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\weapons\Rockets\Titan_2",1.7782794,1,1500};
			soundBegin[] = {"begin1",1};
		};
		modes[] = {"Close","Medium","Far","Full"};
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "MLRSFired";
				positionName = "Konec hlavne";
				directionName = "Usti hlavne";
			};
		};
		class Close: RocketPods
		{
			displayName = "$STR_A3_rockets_230mm_GAT_Close0";
			minRange = 800;
			minRangeProbab = 0.15;
			midRange = 2500;
			midRangeProbab = 0.65;
			maxRange = 4600;
			maxRangeProbab = 0.05;
			reloadTime = 0.8;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\Rockets\Titan_2",1.7782794,1,1500};
				soundBegin[] = {"begin1",1};
			};
			burst = 1;
			autoFire = 0;
			artilleryDispersion = 0.5;
			artilleryCharge = 0.25;
			soundBurst = 0;
			aiRateOfFire = 0.8;
			aiRateOfFireDistance = 2500;
		};
		class Medium: Close
		{
			displayName = "$STR_A3_rockets_230mm_GAT_Medium0";
			minRange = 3100;
			minRangeProbab = 0.15;
			midRange = 12000;
			midRangeProbab = 0.55;
			maxRange = 18400;
			maxRangeProbab = 0.05;
			artilleryDispersion = 0.5;
			artilleryCharge = 0.5;
			aiRateOfFire = 1.8;
			aiRateOfFireDistance = 12000;
		};
		class Far: Close
		{
			displayName = "$STR_A3_rockets_230mm_GAT_Far0";
			minRange = 7100;
			minRangeProbab = 0.15;
			midRange = 25000;
			midRangeProbab = 0.45;
			maxRange = 40000;
			maxRangeProbab = 0.05;
			artilleryDispersion = 0.5;
			artilleryCharge = 0.75;
			aiRateOfFire = 4.0;
			aiRateOfFireDistance = 25000;
		};
		class Full: Close
		{
			displayName = "$STR_A3_rockets_230mm_GAT_Full0";
			minRange = 12800;
			minRangeProbab = 0.15;
			midRange = 45000;
			midRangeProbab = 0.35;
			maxRange = 80000;
			maxRangeProbab = 0.05;
			artilleryDispersion = 0.5;
			artilleryCharge = 1.0;
			aiRateOfFire = 8.0;
			aiRateOfFireDistance = 45000;
		};
	};
	class LMG_coax: LMG_RCWS
	{
		displayName = "$STR_A3_cfgweapons_coaxial_mg0";
		ballisticsComputer = "2 + 16";
		FCSMaxLeadSpeed = 27.778;
		FCSZeroingDelay = 1;
		maxZeroing = 1500;
		class GunParticles
		{
			class effect1
			{
				positionName = "usti hlavne3";
				directionName = "konec hlavne3";
				effectName = "MachineGunCloud";
			};
		};
		class manual: MGun
		{
			displayName = "$STR_A3_LMG_RCWS0";
			reloadTime = 0.075;
			dispersion = 0.00093;
			aiRateOfFire = 1;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				closure1[] = {"A3\sounds_f\weapons\closure\sfx7",0.56234133,1,40};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx8",0.56234133,1,40};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_762mm\LMG_762mm_01",1.0,1,2100};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_762mm\LMG_762mm_02",1.0,1,2100};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_762mm\LMG_762mm_03",1.0,1,2100};
				soundBegin[] = {"begin1",0.34,"begin2",0.33,"begin3",0.33};
			};
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			burst = 12;
			aiBurstTerminable = 1;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.1;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 10;
			aiBurstTerminable = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.1;
		};
		class medium: close
		{
			burst = 9;
			aiBurstTerminable = 1;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			burst = 5;
			aiBurstTerminable = 1;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 750;
			midRangeProbab = 0.4;
			maxRange = 1000;
			maxRangeProbab = 0.01;
		};
		magazines[] = {"200Rnd_762x51_Belt","1000Rnd_762x51_Belt","2000Rnd_762x51_Belt","200Rnd_762x51_Belt_Red","200Rnd_762x51_Belt_Green","200Rnd_762x51_Belt_Yellow","1000Rnd_762x51_Belt_Red","1000Rnd_762x51_Belt_Green","1000Rnd_762x51_Belt_Yellow","2000Rnd_762x51_Belt_Red","2000Rnd_762x51_Belt_Green","2000Rnd_762x51_Belt_Yellow","200Rnd_762x51_Belt_T_Red","200Rnd_762x51_Belt_T_Green","200Rnd_762x51_Belt_T_Yellow","1000Rnd_762x51_Belt_T_Red","1000Rnd_762x51_Belt_T_Green","1000Rnd_762x51_Belt_T_Yellow","2000Rnd_762x51_Belt_T_Red","2000Rnd_762x51_Belt_T_Green","2000Rnd_762x51_Belt_T_Yellow"};
	};
	class autocannon_30mm: autocannon_30mm_CTWS
	{
		displayName = "$STR_A3_cfgweapons_cannon_30mm";
		class HE: HE
		{
			class player: player
			{
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_01",1.9952624,1,1500};
					begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_02",1.9952624,1,1500};
					begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_03",1.9952624,1,1500};
					soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				};
			};
			class close: close
			{
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_01",1.9952624,1,1500};
					begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_02",1.9952624,1,1500};
					begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_03",1.9952624,1,1500};
					soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				};
			};
			class short: short
			{
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_01",1.9952624,1,1500};
					begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_02",1.9952624,1,1500};
					begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_03",1.9952624,1,1500};
					soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				};
			};
			class medium: medium
			{
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_01",1.9952624,1,1500};
					begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_02",1.9952624,1,1500};
					begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_03",1.9952624,1,1500};
					soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				};
			};
			class far: far
			{
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_01",1.9952624,1,1500};
					begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_02",1.9952624,1,1500};
					begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_03",1.9952624,1,1500};
					soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				};
			};
		};
		class AP: AP
		{
			class player: player
			{
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_01",1.9952624,1,1500};
					begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_02",1.9952624,1,1500};
					begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_03",1.9952624,1,1500};
					soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				};
			};
			class close: close
			{
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_01",1.9952624,1,1500};
					begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_02",1.9952624,1,1500};
					begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_03",1.9952624,1,1500};
					soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				};
			};
			class short: short
			{
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_01",1.9952624,1,1500};
					begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_02",1.9952624,1,1500};
					begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_03",1.9952624,1,1500};
					soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				};
			};
			class medium: medium
			{
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_01",1.9952624,1,1500};
					begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_02",1.9952624,1,1500};
					begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_03",1.9952624,1,1500};
					soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				};
			};
			class far: far
			{
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_01",1.9952624,1,1500};
					begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_02",1.9952624,1,1500};
					begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_body_03",1.9952624,1,1500};
					soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				};
			};
		};
	};
	class cannon_120mm_long: cannon_120mm
	{
		magazines[] = {"28Rnd_120mm_APFSDS_shells","28Rnd_120mm_APFSDS_shells_Tracer_Red","28Rnd_120mm_APFSDS_shells_Tracer_Green","28Rnd_120mm_APFSDS_shells_Tracer_Yellow","14Rnd_120mm_HE_shells","14Rnd_120mm_HE_shells_Tracer_Red","14Rnd_120mm_HE_shells_Tracer_Green","14Rnd_120mm_HE_shells_Tracer_Yellow"};
		class player: player
		{
			dispersion = 0.0002;
		};
		class close: close
		{
			dispersion = 0.0002;
		};
		class short: short
		{
			dispersion = 0.0002;
		};
		class medium: medium
		{
			dispersion = 0.0002;
		};
		class far: far
		{
			dispersion = 0.0002;
		};
	};
	class Twin_Cannon_20mm: gatling_20mm
	{
		displayName = "$STR_A3_twin_cannon_20mm";
		showAimCursorInternal = 0;
		canLock = 0;
		ballisticsComputer = "4 + 8";
		class manual: manual
		{
			displayName = "$STR_A3_twin_cannon_20mm";
		};
	};
	class Gatling_30mm_Plane_CAS_01_F: CannonCore
	{
		scope = 1;
		displayName = "$STR_A3_Gatling_30mm_Plane_CAS_01_F0";
		magazines[] = {"1000Rnd_Gatling_30mm_Plane_CAS_01_F"};
		holdsterAnimValue = 1;
		ballisticsComputer = 8;
		canLock = 0;
		cursor = "EmptyCursor";
		cursorAim = "mg";
		showAimCursorInternal = 0;
		modes[] = {"LowROF","close","near","short","medium","far"};
		nameSound = "cannon";
		shotFromTurret = 0;
		muzzlePos = "Gatling_muzzleflash";
		muzzleEnd = "Gatling_barrels_end";
		selectionFireAnim = "Gatling_muzzleflash";
		autoFire = 0;
		burst = 20;
		reloadTime = 0.03;
		class GunParticles
		{
			class Effect
			{
				effectName = "MachineGun3";
				positionName = "Gatling_barrels_end";
				directionName = "Gatling_barrels_start";
			};
		};
		class LowROF: Mode_FullAuto
		{
			displayName = "$STR_A3_Gatling_30mm_Plane_CAS_01_F0";
			reloadTime = 0.03;
			aiRateOfFire = 0.25;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\gatling_30mm\30mm_01_burst",5.6234136,1,1500,{25704,32159}};
				soundBegin[] = {"begin1",1};
			};
			soundContinuous = 1;
			autoFire = 1;
			flash = "gunfire";
			flashSize = 0.1;
			recoil = "Empty";
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 10;
			ffMagnitude = 0.5;
			ffFrequency = 11;
			ffCount = 6;
			minRange = 1;
			minRangeProbab = 0.06;
			midRange = 2;
			midRangeProbab = 0.06;
			maxRange = 3;
			maxRangeProbab = 0.004;
			dispersion = 0.005;
			burst = 20;
			showToPlayer = 1;
		};
		class close: LowROF
		{
			showToPlayer = 0;
			burst = 25;
			aiBurstTerminable = 1;
			aiRateOfFire = 0.25;
			aiRateOfFireDistance = 400;
			minRange = 1;
			minRangeProbab = 0.35;
			midRange = 200;
			midRangeProbab = 0.88;
			maxRange = 400;
			maxRangeProbab = 0.3;
		};
		class near: close
		{
			showToPlayer = 0;
			burst = 20;
			aiBurstTerminable = 1;
			aiRateOfFire = 0.25;
			aiRateOfFireDistance = 400;
			minRange = 1;
			minRangeProbab = 0.35;
			midRange = 150;
			midRangeProbab = 0.88;
			maxRange = 300;
			maxRangeProbab = 0.3;
		};
		class short: close
		{
			burst = 15;
			aiBurstTerminable = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.3;
			midRange = 400;
			midRangeProbab = 0.88;
			maxRange = 600;
			maxRangeProbab = 0.3;
		};
		class medium: close
		{
			burst = 10;
			aiBurstTerminable = 1;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 900;
			minRange = 400;
			minRangeProbab = 0.3;
			midRange = 700;
			midRangeProbab = 0.78;
			maxRange = 900;
			maxRangeProbab = 0.2;
		};
		class far: close
		{
			burst = 5;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1500;
			minRange = 800;
			minRangeProbab = 0.2;
			midRange = 1000;
			midRangeProbab = 0.6;
			maxRange = 1500;
			maxRangeProbab = 0.1;
		};
	};
	class Missile_AA_04_Plane_CAS_01_F: RocketPods
	{
		displayName = "$STR_A3_Missile_AA_04_Plane_CAS_01_F0";
		magazines[] = {"2Rnd_Missile_AA_04_F","PylonRack_1Rnd_Missile_AA_04_F","PylonMissile_1Rnd_Missile_AA_04_F"};
		holdsterAnimValue = 2;
		aiRateOfFire = 5.0;
		aiRateOfFireDistance = 500;
		autoFire = 0;
		cursor = "EmptyCursor";
		cursorAim = "missile";
		showAimCursorInternal = 0;
		nameSound = "MissileLauncher";
		textureType = "fullAuto";
		weaponLockDelay = 3.0;
		weaponLockSystem = 2;
		cmImmunity = 0.5;
		lockingTargetSound[] = {"A3\Sounds_F\weapons\Rockets\locked_1",0.56234133,1};
		lockedTargetSound[] = {"A3\Sounds_F\weapons\Rockets\locked_3",0.56234133,2.5};
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F_EPC\Weapons\missile_epc_3",1.0,1,2000};
			soundBegin[] = {"begin1",1};
		};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",1.7782794,1,1500};
		minRange = 300;
		minRangeProbab = 0.25;
		midRange = 2500;
		midRangeProbab = 0.9;
		maxRange = 9000;
		maxRangeProbab = 0.01;
	};
	class Missile_AGM_02_Plane_CAS_01_F: MissileLauncher
	{
		displayName = "$STR_A3_Missile_AGM_02_Plane_CAS_01_F0";
		magazines[] = {"6Rnd_Missile_AGM_02_F","PylonRack_1Rnd_Missile_AGM_02_F","PylonRack_3Rnd_Missile_AGM_02_F"};
		holdsterAnimValue = 3;
		reloadTime = 0.1;
		magazineReloadTime = 0.1;
		showAimCursorInternal = 0;
		textureType = "semi";
		weaponLockDelay = 3.0;
		weaponLockSystem = 2;
		cmImmunity = 0.4;
		lockingTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_1",0.56234133,1};
		lockedTargetSound[] = {"\A3\Sounds_F\weapons\Rockets\locked_3",0.56234133,2.5};
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F_EPC\Weapons\missile_epc_1",1.7782794,1,3500};
			soundBegin[] = {"begin1",1};
		};
		soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_2",1.9952624,1,1700};
		minRange = 300;
		minRangeProbab = 0.025;
		midRange = 2500;
		midRangeProbab = 0.9;
		maxRange = 9000;
		maxRangeProbab = 0.01;
	};
	class Rocket_04_HE_Plane_CAS_01_F: RocketPods
	{
		displayName = "$STR_A3_Rocket_04_FL_Plane_CAS_01_F0";
		magazines[] = {"7Rnd_Rocket_04_HE_F","PylonRack_7Rnd_Rocket_04_HE_F"};
		ballisticsComputer = 8;
		holdsterAnimValue = 4;
		canLock = 0;
		showAimCursorInternal = 0;
		modes[] = {"Far_AI","Medium_AI","Close_AI","Burst"};
		weaponLockDelay = 0.0;
		class Far_AI: RocketPods
		{
			canLock = 0;
			weaponLockDelay = 0.0;
			showToPlayer = 0;
			minRange = 800;
			minRangeProbab = 0.31;
			midRange = 2500;
			midRangeProbab = 0.71;
			maxRange = 3200;
			maxRangeProbab = 0.1;
			displayName = "$STR_A3_missiles_dar0";
			lockingTargetSound[] = {"A3\Sounds_F\weapons\Rockets\locked_1",0.56234133,1};
			lockedTargetSound[] = {"A3\Sounds_F\weapons\Rockets\locked_3",0.56234133,2.5};
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F_EPC\Weapons\missile_epc_2",1.9952624,1,3500};
				soundBegin[] = {"begin1",1};
			};
			soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",1.9952624,1,1700};
			burst = 1;
			reloadTime = 2.0;
			autoFire = 0;
			aiRateOfFire = 5.0;
			aiRateOfFireDistance = 500;
			salvo = 2;
		};
		class Medium_AI: Far_AI
		{
			burst = 2;
			reloadTime = 0.7;
			minRange = 300;
			minRangeProbab = 0.21;
			midRange = 1500;
			midRangeProbab = 0.81;
			maxRange = 2000;
			maxRangeProbab = 0.31;
		};
		class Close_AI: Far_AI
		{
			burst = 2;
			reloadTime = 0.7;
			minRange = 300;
			minRangeProbab = 0.21;
			midRange = 800;
			midRangeProbab = 0.91;
			maxRange = 1500;
			maxRangeProbab = 0.31;
		};
		class Burst: RocketPods
		{
			displayName = "$STR_A3_Rocket_04_FL_Plane_CAS_01_F0";
			burst = 1;
			reloadTime = 0.2;
			minRange = 300;
			minRangeProbab = 0.25;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 1300;
			maxRangeProbab = 0.1;
			aiRateOfFire = 5.0;
			aiRateOfFireDistance = 500;
			autoFire = 0;
			soundContinuous = 0;
			lockingTargetSound[] = {"A3\Sounds_F\weapons\Rockets\locked_1",0.56234133,1};
			lockedTargetSound[] = {"A3\Sounds_F\weapons\Rockets\locked_3",0.56234133,1.5};
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_1",1.0,1,2000};
				soundBegin[] = {"begin1",1};
			};
			soundFly[] = {"A3\Sounds_F\weapons\Rockets\rocket_fly_1",1.5848932,1.2,1700};
			textureType = "fullAuto";
			salvo = 2;
		};
	};
	class Rocket_04_AP_Plane_CAS_01_F: Rocket_04_HE_Plane_CAS_01_F
	{
		displayName = "$STR_A3_Rocket_04_FL_Plane_CAS_01_F0";
		magazines[] = {"7Rnd_Rocket_04_AP_F","PylonRack_7Rnd_Rocket_04_AP_F"};
		holdsterAnimValue = 5;
	};
	class Bomb_04_Plane_CAS_01_F: RocketPods
	{
		displayName = "$STR_A3_CFGMAGAZINES_GBU120";
		magazines[] = {"4Rnd_Bomb_04_F","PylonMissile_1Rnd_Bomb_04_F"};
		ballisticsComputer = 8;
		holdsterAnimValue = 6;
		aiRateOfFire = 5.0;
		aiRateOfFireDistance = 500;
		cursorAim = "bomb";
		showAimCursorInternal = 0;
		nameSound = "";
		textureType = "fullAuto";
		weaponLockDelay = 0.1;
		weaponLockSystem = 4;
		cmImmunity = 0.3;
		salvo = 1;
		minRange = 300;
		minRangeProbab = 0.4;
		midRange = 1000;
		midRangeProbab = 0.95;
		maxRange = 7000;
		maxRangeProbab = 0.9;
	};
	class Cannon_30mm_Plane_CAS_02_F: CannonCore
	{
		scope = 1;
		displayName = "$STR_A3_CFGWEAPONS_CANNON_30MM";
		magazines[] = {"500Rnd_Cannon_30mm_Plane_CAS_02_F"};
		holdsterAnimValue = 1;
		ballisticsComputer = 8;
		canLock = 0;
		cursor = "EmptyCursor";
		cursorAim = "mg";
		showAimCursorInternal = 0;
		modes[] = {"LowROF","close","near","short","medium","far"};
		nameSound = "cannon";
		shotFromTurret = 0;
		muzzlePos = "Cannon_muzzleflash";
		muzzleEnd = "Cannon_barrel_end";
		selectionFireAnim = "Cannon_muzzleflash";
		autoFire = 1;
		burst = 10;
		reloadTime = 0.04;
		class GunParticles
		{
			class Effect
			{
				effectName = "MachineGun2";
				positionName = "Cannon_barrel_start";
				directionName = "Cannon_barrel_end";
			};
		};
		class LowROF: Mode_FullAuto
		{
			displayName = "$STR_A3_CFGWEAPONS_CANNON_30MM";
			reloadTime = 0.04;
			aiRateOfFire = 0.25;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F_epc\weapons\cas_02_cannon",1.7782794,1,3800};
				soundBegin[] = {"begin1",1};
			};
			soundContinuous = 0;
			flash = "gunfire";
			flashSize = 0.1;
			recoil = "Empty";
			aiDispersionCoefX = 8;
			aiDispersionCoefY = 8;
			ffMagnitude = 0.5;
			ffFrequency = 11;
			ffCount = 6;
			minRange = 1;
			minRangeProbab = 0.06;
			midRange = 2;
			midRangeProbab = 0.06;
			maxRange = 3;
			maxRangeProbab = 0.004;
			dispersion = 0.006;
			burst = 10;
			showToPlayer = 1;
		};
		class close: LowROF
		{
			showToPlayer = 0;
			burst = 15;
			aiBurstTerminable = 1;
			aiRateOfFire = 0.25;
			aiRateOfFireDistance = 400;
			minRange = 1;
			minRangeProbab = 0.35;
			midRange = 150;
			midRangeProbab = 0.88;
			maxRange = 300;
			maxRangeProbab = 0.3;
		};
		class near: close
		{
			showToPlayer = 0;
			burst = 13;
			aiBurstTerminable = 1;
			aiRateOfFire = 0.25;
			aiRateOfFireDistance = 400;
			minRange = 1;
			minRangeProbab = 0.35;
			midRange = 250;
			midRangeProbab = 0.88;
			maxRange = 400;
			maxRangeProbab = 0.3;
		};
		class short: close
		{
			burst = 10;
			aiBurstTerminable = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.3;
			midRange = 400;
			midRangeProbab = 0.88;
			maxRange = 600;
			maxRangeProbab = 0.3;
		};
		class medium: close
		{
			burst = 7;
			aiBurstTerminable = 1;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 900;
			minRange = 400;
			minRangeProbab = 0.3;
			midRange = 700;
			midRangeProbab = 0.78;
			maxRange = 900;
			maxRangeProbab = 0.2;
		};
		class far: close
		{
			burst = 5;
			aiBurstTerminable = 1;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1500;
			minRange = 800;
			minRangeProbab = 0.2;
			midRange = 1000;
			midRangeProbab = 0.6;
			maxRange = 1500;
			maxRangeProbab = 0.1;
		};
	};
	class Missile_AA_03_Plane_CAS_02_F: Missile_AA_04_Plane_CAS_01_F
	{
		displayName = "$STR_A3_Missile_AA_03_F0";
		magazines[] = {"2Rnd_Missile_AA_03_F","PylonRack_1Rnd_Missile_AA_03_F","PylonMissile_1Rnd_Missile_AA_03_F"};
	};
	class Missile_AGM_01_Plane_CAS_02_F: Missile_AGM_02_Plane_CAS_01_F
	{
		displayName = "$STR_A3_Missile_AGM_01_F0";
		magazines[] = {"4Rnd_Missile_AGM_01_F","PylonRack_1Rnd_Missile_AGM_01_F"};
	};
	class Rocket_03_HE_Plane_CAS_02_F: Rocket_04_HE_Plane_CAS_01_F
	{
		displayName = "$STR_A3_Rocket_03_FL_F0";
		magazines[] = {"20Rnd_Rocket_03_HE_F","PylonRack_20Rnd_Rocket_03_HE_F"};
		class Burst: Burst
		{
			displayName = "$STR_A3_Rocket_03_FL_F0";
		};
	};
	class Rocket_03_AP_Plane_CAS_02_F: Rocket_04_AP_Plane_CAS_01_F
	{
		displayName = "$STR_A3_Rocket_03_FL_F0";
		magazines[] = {"20Rnd_Rocket_03_AP_F","PylonRack_20Rnd_Rocket_03_AP_F"};
		class Burst: Burst
		{
			displayName = "$STR_A3_Rocket_03_FL_F0";
		};
	};
	class Bomb_03_Plane_CAS_02_F: Bomb_04_Plane_CAS_01_F
	{
		displayName = "$STR_A3_Bomb_03_F0";
		magazines[] = {"2Rnd_Bomb_03_F","PylonMissile_1Rnd_Bomb_03_F"};
	};
	class HMG_127_MBT: HMG_127_APC
	{
		class GunParticles
		{
			class effect1
			{
				positionName = "commander_gun_muzzle_pos";
				directionName = "commander_gun_muzzle_end";
				effectName = "MachineGunCloud";
			};
		};
	};
	class Launcher: LauncherCore
	{
		cursorAim = "EmptyCursor";
		cursor = "rocket";
		textureType = "semi";
		autoAimEnabled = 0;
		opticsDisablePeripherialVision = 1;
		magazines[] = {};
		value = 10;
		nameSound = "atlauncher";
		magazineReloadTime = 12;
		reloadTime = 0;
		initSpeed = 30;
		canLock = 0;
		autoReload = 0;
		ffMagnitude = 0.1;
		ffFrequency = 1;
		ffCount = 1;
		recoil = "LAWSingle";
		aiRateOfFire = 10.0;
		aiRateOfFireDistance = 500;
		optics = 1;
		primary = 0;
		opticsZoomMin = 0.375;
		opticsZoomMax = 1.1;
		opticsZoomInit = 0.75;
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		maxZeroing = 1000;
		minRange = 20;
		minRangeProbab = 0.3;
		midRange = 150;
		midRangeProbab = 0.58;
		maxRange = 500;
		maxRangeProbab = 0.04;
	};
	class Launcher_Base_F: Launcher
	{
		htMin = 1;
		htMax = 460;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		UiPicture = "\A3\Weapons_F\Data\UI\icon_at_CA.paa";
		dexterity = 1.7;
		reloadAction = "ManActReloadAT";
		recoil = "recoil_default";
		sound[] = {"A3\Sounds_F\weapons\Launcher\rocket_launcher_5",1.0,1,800};
		drySound[] = {"A3\sounds_f\weapons\other\dry6",0.31622776,1,10};
		reloadMagazineSound[] = {"A3\sounds_f\weapons\rockets\titan_reload_final",0.56234133,1,20};
		soundFly[] = {"A3\sounds_f\weapons\rockets\rocket_fly_1",0.31622776,1.5,700};
		weaponPoolAvailable = 1;
		shotPos = "usti hlavne";
		shotEnd = "konec hlavne";
		class WeaponSlotsInfo
		{
			allowedSlots[] = {};
		};
	};
	class GrenadeCore;
	class GrenadeLauncher: Default
	{
		cursorAim = "gl";
		cursor = "EmptyCursor";
		value = 3;
		type = 0;
		displayName = "$STR_A3_cfgWeapons_GrenadeLauncher0";
		reloadTime = 3;
		reloadAction = "ReloadMagazine";
		magazineReloadTime = 1;
		magazines[] = {};
		initSpeed = 75;
		canLock = 0;
		autoReload = 0;
		autoAimEnabled = 0;
		ffMagnitude = 0.1;
		ffFrequency = 1;
		ffCount = 1;
		recoil = "M240Recoil";
		dispersion = 0.00725;
		aiDispersionCoefY = 6;
		maxLeadSpeed = 15;
		optics = 0;
		muzzlePos = "usti granatometu";
		muzzleEnd = "konec granatometu";
		cartridgePos = "";
		cartridgeVel = "";
		minRange = 30;
		minRangeProbab = 0.1;
		midRange = 200;
		midRangeProbab = 0.7;
		maxRange = 400;
		maxRangeProbab = 0.05;
		textureType = "semi";
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
	};
	class UGL_F: GrenadeLauncher
	{
		displayName = "$STR_A3_cfgweapons_eglm0";
		magazines[] = {"1Rnd_HE_Grenade_shell","UGL_FlareWhite_F","UGL_FlareGreen_F","UGL_FlareRed_F","UGL_FlareYellow_F","UGL_FlareCIR_F","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeYellow_Grenade_shell","1Rnd_SmokePurple_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell"};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Firemode_ugl",0.31622776,1,5};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Reload_UGL",0.56234133,1,10};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\UGL\Dry_ugl",0.56234133,1,10};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\UGL\Closure_UGL",1.0,1,10};
				soundClosure[] = {"closure1",1};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_01",0.70794576,1,200};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\UGL\UGL_02",0.70794576,1,200};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			recoil = "M240Recoil";
			recoilProne = "M240Recoil";
			minRange = 30;
			minRangeProbab = 0.1;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.05;
		};
		recoil = "recoil_default";
		magazineReloadTime = 0;
		reloadTime = 0.1;
		optics = 1;
		modelOptics = "-";
		cameraDir = "UGL look";
		memoryPointCamera = "UGL eye";
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		weaponInfoType = "RscWeaponZeroing";
	};
	class RifleCore: Default{};
	class Rifle: RifleCore
	{
		htMin = 1;
		htMax = 600;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		autoFire = 1;
		reloadAction = "ReloadMagazine";
		soundContinuous = 0;
		optics = 0;
		scope = 1;
		cursor = "arifle";
		cursoraim = "CursorAim";
		value = 4;
		displayName = "$STR_DN_RIFLE";
		nameSound = "rifle";
		reloadTime = 0.15;
		modelOptics = "-";
		sound[] = {};
		opticsFlare = 0;
		autoReload = 0;
		aiDispersionCoefX = 6;
		aiDispersionCoefY = 6;
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		maxLeadSpeed = 23;
		canLock = 0;
		flash = "gunfire";
		flashSize = 0.5;
		dispersion = 0.00029;
		recoil = "assaultRifleBase";
		recoilProne = "assaultRifleBase";
		ffMagnitude = 0.5;
		ffFrequency = 11;
		ffCount = 3;
		weaponPoolAvailable = 1;
		maxZeroing = 1000;
		class WeaponSlotsInfo
		{
			mass = 2;
			class MuzzleSlot: MuzzleSlot{};
			class CowsSlot: CowsSlot{};
			class PointerSlot: PointerSlot{};
			allowedSlots[] = {901};
		};
		zeroingSound[] = {"A3\Sounds_F\arsenal\sfx\shared\zeroing_knob_tick_metal",0.31622776,1,5};
	};
	class Rifle_Base_F: Rifle
	{
		scope = 0;
		discreteDistance[] = {100,200,300,400,500,600};
		discreteDistanceInitIndex = 1;
		weaponInfoType = "RscWeaponZeroing";
		recoil = "recoil_default";
		deployedPivot = "bipod";
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "RifleAssaultCloud";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
		};
	};
	class Rifle_Short_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[] = {701,901};
		};
	};
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			allowedSlots[] = {};
		};
	};
	class HandGunBase: Rifle
	{
		type = 2;
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
	};
	class PistolCore: Default{};
	class Pistol: PistolCore
	{
		htMin = 1;
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
	};
	class Pistol_Base_F: Pistol
	{
		bullet1[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_01",0.56234133,1,15};
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
	};
	class Throw: GrenadeLauncher
	{
		scope = 1;
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
	};
	class Put: Default
	{
		scope = 1;
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
	};
	class CarHorn: Default
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
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "ItemWatch";
		scope = 2;
		displayName = "$STR_A3_cfgWeapons_ItemWatch0";
		simulation = "ItemWatch";
		picture = "\A3\Weapons_F\Data\UI\gear_item_watch_ca.paa";
		model = "\a3\Weapons_F\Ammo\mag_watch.p3d";
		descriptionShort = "$STR_A3_cfgWeapons_ItemWatch1";
		descriptionUse = "$STR_A3_cfgWeapons_Default_ItemWatch0";
		class ItemInfo
		{
			mass = 2;
		};
	};
	class ItemCompass: ItemCore
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "ItemCompass";
		scope = 2;
		displayName = "$STR_A3_cfgWeapons_ItemCompass0";
		descriptionUse = "$STR_A3_cfgWeapons_Default_ItemCompass0";
		simulation = "ItemCompass";
		picture = "\A3\Weapons_F\Data\UI\gear_item_compass_ca.paa";
		model = "\a3\Weapons_F\Ammo\mag_compass.p3d";
		descriptionShort = "$STR_A3_cfgWeapons_ItemCompass1";
		class ItemInfo
		{
			mass = 2;
		};
	};
	class ItemGPS: ItemCore
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "ItemGPS";
		scope = 2;
		displayName = "$STR_A3_cfgWeapons_ItemGPS0";
		descriptionUse = "$STR_A3_cfgWeapons_Default_ItemGPS0";
		simulation = "ItemGPS";
		picture = "\A3\Weapons_F\Data\UI\gear_item_gps_CA.paa";
		model = "\a3\Weapons_F\Ammo\mag_gps.p3d";
		descriptionShort = "$STR_A3_cfgWeapons_ItemGPS1";
		class ItemInfo
		{
			mass = 8;
		};
	};
	class ItemRadio: ItemCore
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "ItemRadio";
		scope = 2;
		displayName = "$STR_A3_cfgWeapons_ItemRadio0";
		simulation = "ItemRadio";
		picture = "\A3\Weapons_F\Data\UI\gear_item_radio_ca.paa";
		model = "\a3\Weapons_F\Ammo\mag_radio.p3d";
		descriptionShort = "$STR_A3_cfgWeapons_ItemRadio1";
		class ItemInfo
		{
			mass = 8;
		};
	};
	class ItemMap: ItemCore
	{
		author = "$STR_A3_Bohemia_Interactive";
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
	};
	class DetectorCore;
	class MineDetector: DetectorCore
	{
		author = "$STR_A3_Bohemia_Interactive";
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
	};
	class Binocular: Default
	{
		author = "$STR_A3_Bohemia_Interactive";
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
		class WeaponSlotsInfo
		{
			mass = 10;
		};
	};
	class Rangefinder: Binocular
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "Rangefinder";
		scope = 2;
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
	};
	class NVGoggles: Binocular
	{
		author = "$STR_A3_Bohemia_Interactive";
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
	};
	class NVGoggles_OPFOR: NVGoggles
	{
		author = "$STR_A3_Bohemia_Interactive";
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
	};
	class NVGoggles_INDEP: NVGoggles
	{
		author = "$STR_A3_Bohemia_Interactive";
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
	};
	class Integrated_NVG_F: NVGoggles
	{
		scope = 1;
		visionMode[] = {"Normal","NVG"};
		modelOptics = "";
	};
	class Integrated_NVG_TI_0_F: NVGoggles
	{
		scope = 1;
		visionMode[] = {"Normal","NVG","TI"};
		thermalMode[] = {0};
		modelOptics = "";
	};
	class Integrated_NVG_TI_1_F: NVGoggles
	{
		scope = 1;
		visionMode[] = {"Normal","NVG","TI"};
		thermalMode[] = {1};
		modelOptics = "";
	};
	class Laserdesignator: Binocular
	{
		author = "$STR_A3_Bohemia_Interactive";
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
};
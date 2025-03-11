#include "pch.h"
#include "Mod.h"
#include "GunRoboTitles.h"
#include "BossTitles.h"

#define ReplaceEventFile(a, b) helperFunctions.ReplaceFile("resource\\gd_PC\\event\\" a ".prs", "resource\\gd_PC\\event\\" b ".prs");
#define ReplaceMessageFile(a, b) helperFunctions.ReplaceFile("resource\\gd_PC\\Message\\" a ".prs", "resource\\gd_PC\\Message\\" b ".prs");
#define ReplaceMessageKFile(a, b) helperFunctions.ReplaceFile("resource\\gd_PC\\MessageK\\" a ".prs", "resource\\gd_PC\\Message\\" b ".prs");
#define ReplaceMusic(a, b) helperFunctions.ReplaceFile("resource\\gd_PC\\ADX\\" a ".adx", "resource\\gd_PC\\ADX\\" b ".adx");

enum Doblaje { Neutro, Mexicano, Chileno, Argentino };

static bool MusicaDub = true;
static int Dub = Neutro;

DataArray(NJS_TEXANIM, TechPoints, 0x173B440, 11);

NJS_TEXANIM TechPointsSpanish[] = {
   { 85, 19, 0, 9, 166, 4, 252, 23, 16, 0 }, //2000
   { 86, 19, 0, 9, 4, 4, 90, 23, 16, 0 }, //Good
   { 102, 20, 0, 10, 4, 54, 106, 74, 16, 0 }, //Great
   { 134, 20, 0, 10, 4, 29, 138, 49, 16, 0 }, //Nice
   { 155, 21, 0, 11, 4, 78, 159, 99, 16, 0 }, //Jammin'
   { 144, 20, 0, 10, 4, 105, 118, 125, 16, 0 }, //Cool
   { 131, 20, 0, 10, 4, 130, 135, 150, 16, 0 }, //Radical
   { 108, 19, 0, 9, 4, 156, 112, 175, 16, 0 }, //Tight
   { 205, 20, 0, 10, 4, 181, 209, 201, 16, 0 }, //Awesome
   { 153, 22, 0, 11, 4, 206, 157, 226, 16, 0 }, //Extreme
   { 154, 20, 0, 10, 4, 231, 158, 251, 16, 0 } //Perfect
};

void ReplaceTechPoints()
{
	for (int i = 0; i < 11; i++)
	{
		TechPoints[i] = TechPointsSpanish[i];
	}
}

extern "C"
{
	__declspec(dllexport) void Init(const char* path, const HelperFunctions& helperFunctions)
	{
		const IniFile* config = new IniFile(std::string(path) + "\\config.ini");

		std::string Dub_String = "Neutro";
		Dub_String = config->getString("Opciones", "Localizacion", "Neutro");
		MusicaDub = config->getBool("Opciones", "MusicaDub", true);

		if (Dub_String == "Neutro") Dub = Neutro;
		if (Dub_String == "Mexicano") Dub = Mexicano;
		if (Dub_String == "Chileno") Dub = Chileno;
		if (Dub_String == "Argentino") Dub = Argentino;

		if (MusicaDub == true)
		{
			ReplaceMusic("BOSS_07", "BOSS_07e");
			ReplaceMusic("btl_opng", "btl_opnge");
			ReplaceMusic("E210_SN1", "E210_SN1e");
		}

		if (Dub == Argentino)
		{
			ReplaceEventFile("evmesH3", "evmesH3arg");
			ReplaceEventFile("evmesD3", "evmesD3arg");
			ReplaceEventFile("evmesL3", "evmesL3arg");
			ReplaceMessageFile("mhsyss", "mhsyssarg");
			ReplaceMessageKFile("mhsyss", "mhsyssarg");
			ReplaceMessageFile("mh0066s", "mh0066sarg");
			ReplaceMessageKFile("mh0066s", "mh0066sarg");
			ReplaceMessageFile("mh0034s", "mh0034sarg");
			ReplaceMessageKFile("mh0034s", "mh0034sarg");
			ReplaceMessageFile("mh0035s", "mh0035sarg");
			ReplaceMessageKFile("mh0035s", "mh0035sarg");
			ReplaceMessageFile("mh0036s", "mh0036sarg");
			ReplaceMessageKFile("mh0036s", "mh0036sarg");
			ReplaceMessageFile("mh0037s", "mh0037sarg");
			ReplaceMessageKFile("mh0037s", "mh0037sarg");
			ReplaceMessageFile("mh0038s", "mh0038sarg");
			ReplaceMessageKFile("mh0038s", "mh0038sarg");
			ReplaceAdvertiseArgentino();
		}
		else if (Dub == Chileno)
		{
			ReplaceEventFile("evmesH3", "evmesH3chi");
			ReplaceEventFile("evmesD3", "evmesD3chi");
			ReplaceEventFile("evmesL3", "evmesL3chi");
			ReplaceMessageFile("mhsyss", "mhsysschi");
			ReplaceMessageKFile("mhsyss", "mhsysschi");
			ReplaceMessageFile("mh0066s", "mh0066schi");
			ReplaceMessageKFile("mh0066s", "mh0066schi");
			ReplaceMessageFile("mh0034s", "mh0034schi");
			ReplaceMessageKFile("mh0034s", "mh0034schi");
			ReplaceMessageFile("mh0035s", "mh0035schi");
			ReplaceMessageKFile("mh0035s", "mh0035schi");
			ReplaceMessageFile("mh0036s", "mh0036schi");
			ReplaceMessageKFile("mh0036s", "mh0036schi");
			ReplaceMessageFile("mh0037s", "mh0037schi");
			ReplaceMessageKFile("mh0037s", "mh0037schi");
			ReplaceMessageFile("mh0038s", "mh0038schi");
			ReplaceMessageKFile("mh0038s", "mh0038schi");
			ReplaceAdvertiseChileno();
		}
		else if (Dub == Mexicano)
		{
            ReplaceEventFile("evmesH3", "evmesH3mex");
			ReplaceEventFile("evmesD3", "evmesD3mex");
			ReplaceEventFile("evmesL3", "evmesL3mex");
			ReplaceMessageFile("mh0066s", "mh0066smex");
			ReplaceMessageKFile("mh0066s", "mh0066smex");
			ReplaceMessageFile("mh0035s", "mh0035smex");
			ReplaceMessageKFile("mh0035s", "mh0035smex");
			ReplaceAdvertiseMexicano();
		}
		else
		{
			ReplaceAdvertiseNeutro();
		}
	
		ReplaceMainCredits();

		SetNewGunRoboTitles();
		InitOtherBossTitles();
		ReplaceTechPoints();

		//Interfaz
		helperFunctions.ReplaceTexture("batadvPlayer", "2P_chara_en02", helperFunctions.GetReplaceablePath("resource\\gd_PC\\Texturas\\2P_chara_en02.png"), 9000703, 256, 256);
		helperFunctions.ReplaceTexture("bossAttack", "bossat_window", helperFunctions.GetReplaceablePath("resource\\gd_PC\\Texturas\\bossat_window.png"), 9001510, 512, 512);
		helperFunctions.ReplaceTexture("console", "h_teckpoint_all", helperFunctions.GetReplaceablePath("resource\\gd_PC\\Texturas\\h_teckpoint_all.png"), 100000000, 512, 512);
		helperFunctions.ReplaceTexture("console_dc", "h_teckpoint_all", helperFunctions.GetReplaceablePath("resource\\gd_PC\\Texturas\\h_teckpoint_all.png"), 100000000, 512, 512);
		helperFunctions.ReplaceTexture("console_gc", "h_teckpoint_all", helperFunctions.GetReplaceablePath("resource\\gd_PC\\Texturas\\h_teckpoint_all.png"), 100000000, 512, 512);
		helperFunctions.ReplaceTexture("course", "matome01", helperFunctions.GetReplaceablePath("resource\\gd_PC\\Texturas\\matome01.png"), 10000000, 256, 256);
		helperFunctions.ReplaceTexture("coursdc", "matome01", helperFunctions.GetReplaceablePath("resource\\gd_PC\\Texturas\\matome01.png"), 10000000, 256, 256);
		helperFunctions.ReplaceTexture("coursgc", "matome01", helperFunctions.GetReplaceablePath("resource\\gd_PC\\Texturas\\matome01.png"), 10000000, 256, 256);
		helperFunctions.ReplaceTexture("fileSelect", "soundtest_songname", helperFunctions.GetReplaceablePath("resource\\gd_PC\\Texturas\\soundtest_songname.png"), 8000011, 1024, 1024);
		helperFunctions.ReplaceTexture("fileSelect_e", "soundtest_songname", helperFunctions.GetReplaceablePath("resource\\gd_PC\\Texturas\\soundtest_songname.png"), 8000011, 1024, 1024);
		helperFunctions.ReplaceTexture("kartRace", "kartrace_waku0", helperFunctions.GetReplaceablePath("resource\\gd_PC\\Texturas\\kartrace_waku0.png"), 9000816, 128, 128);
		helperFunctions.ReplaceTexture("objtex_common", "sikake_10_128", helperFunctions.GetReplaceablePath("resource\\gd_PC\\Texturas\\sikake_10_128.png"), 4009, 128, 128);
		helperFunctions.ReplaceTexture("objtex_commondc", "sikake_10_128", helperFunctions.GetReplaceablePath("resource\\gd_PC\\Texturas\\sikake_10_128.png"), 4009, 128, 128);
		helperFunctions.ReplaceTexture("objtex_commongc", "sikake_10_128", helperFunctions.GetReplaceablePath("resource\\gd_PC\\Texturas\\sikake_10_128.png"), 4009, 128, 128);
		helperFunctions.ReplaceTexture("result", "h_result_all", helperFunctions.GetReplaceablePath("resource\\gd_PC\\Texturas\\Resultados.png"), 11000010, 256, 256);
		helperFunctions.ReplaceTexture("stageMap", "stg_info_spr", helperFunctions.GetReplaceablePath("resource\\gd_PC\\Texturas\\stg_info_spr.png"), 9000500, 256, 256);
		helperFunctions.ReplaceTexture("stageMap", "stg_infox_asc", helperFunctions.GetReplaceablePath("resource\\gd_PC\\Texturas\\stg_infox_asc.png"), 9000515, 256, 128);
		helperFunctions.ReplaceTexture("stageMap", "stg_info_asc", helperFunctions.GetReplaceablePath("resource\\gd_PC\\Texturas\\stg_info_asc.png"), 9000514, 256, 256);
		helperFunctions.ReplaceTexture("stageMap", "stg_stagename", helperFunctions.GetReplaceablePath("resource\\gd_PC\\Texturas\\stg_stagename.png"), 8000011, 1024, 1024);
		helperFunctions.ReplaceTexture("missiontex_eg", "mission_numall", helperFunctions.GetReplaceablePath("resource\\gd_PC\\Texturas\\mission_numall.png"), 87006007, 256, 256);
		helperFunctions.ReplaceTexture("missiontex_kn", "mission_numall", helperFunctions.GetReplaceablePath("resource\\gd_PC\\Texturas\\mission_numall.png"), 87006007, 256, 256);
		helperFunctions.ReplaceTexture("missiontex_ro", "mission_numall", helperFunctions.GetReplaceablePath("resource\\gd_PC\\Texturas\\mission_numall.png"), 87006007, 256, 256);
		helperFunctions.ReplaceTexture("missiontex_sh", "mission_numall", helperFunctions.GetReplaceablePath("resource\\gd_PC\\Texturas\\mission_numall.png"), 87006007, 256, 256);
		helperFunctions.ReplaceTexture("missiontex_so", "mission_numall", helperFunctions.GetReplaceablePath("resource\\gd_PC\\Texturas\\mission_numall.png"), 87006007, 256, 256);
		helperFunctions.ReplaceTexture("missiontex_ta", "mission_numall", helperFunctions.GetReplaceablePath("resource\\gd_PC\\Texturas\\mission_numall.png"), 87006007, 256, 256);
		//Texturas niveles
		helperFunctions.ReplaceTexture("course", "miu128_rh007", helperFunctions.GetReplaceablePath("resource\\gd_PC\\Texturas\\anillos.png"), 90019, 128, 128);
		helperFunctions.ReplaceTexture("coursdc", "miu128_rh007", helperFunctions.GetReplaceablePath("resource\\gd_PC\\Texturas\\anillos.png"), 90019, 128, 128);
		helperFunctions.ReplaceTexture("coursgc", "miu128_rh007", helperFunctions.GetReplaceablePath("resource\\gd_PC\\Texturas\\anillos.png"), 90019, 128, 128);
		helperFunctions.ReplaceTexture("course", "miu128_rh014", helperFunctions.GetReplaceablePath("resource\\gd_PC\\Texturas\\kaori.png"), 90020, 128, 128);
		helperFunctions.ReplaceTexture("coursdc", "miu128_rh014", helperFunctions.GetReplaceablePath("resource\\gd_PC\\Texturas\\kaori.png"), 90020, 128, 128);
		helperFunctions.ReplaceTexture("coursgc", "miu128_rh014", helperFunctions.GetReplaceablePath("resource\\gd_PC\\Texturas\\kaori.png"), 90020, 128, 128);
		helperFunctions.ReplaceTexture("objtex_stg14", "miu128_rh007", helperFunctions.GetReplaceablePath("resource\\gd_PC\\Texturas\\anillos.png"), 13507, 128, 128);
		helperFunctions.ReplaceTexture("objtex_stg14", "miu128_rh014", helperFunctions.GetReplaceablePath("resource\\gd_PC\\Texturas\\kaori.png"), 13514, 128, 128);
		helperFunctions.ReplaceTexture("objtex_stg52", "miu128_rh014", helperFunctions.GetReplaceablePath("resource\\gd_PC\\Texturas\\kaori.png"), 10501, 128, 128);
		helperFunctions.ReplaceTexture("landtx52", "miu128_rh014", helperFunctions.GetReplaceablePath("resource\\gd_PC\\Texturas\\kaori.png"), 10501, 128, 128);
	}

	__declspec(dllexport) ModInfo SA2ModInfo = { ModLoaderVer };
}
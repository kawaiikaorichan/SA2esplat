#include "pch.h"
#include "Mod.h"
#include "GunRoboTitles.h"
#include "BossTitles.h"

#define ReplaceEventFile(a, b) helperFunctions.ReplaceFile("resource\\gd_PC\\event\\" a ".prs", "resource\\gd_PC\\event\\" b ".prs");
#define ReplaceMessageFile(a, b) helperFunctions.ReplaceFile("resource\\gd_PC\\Message\\" a ".prs", "resource\\gd_PC\\Message\\" b ".prs");
#define ReplaceMessageKFile(a, b) helperFunctions.ReplaceFile("resource\\gd_PC\\MessageK\\" a ".prs", "resource\\gd_PC\\Message\\" b ".prs");
#define ReplaceMusic(a, b) helperFunctions.ReplaceFile("resource\\gd_PC\\ADX\\" a ".adx", "resource\\gd_PC\\ADX\\" b ".adx");
#define ReplaceVoices(a, b) helperFunctions.ReplaceFile("resource\\gd_PC\\event_adx_e\\" a ".ahx", "resource\\gd_PC\\event_adx_e\\" b ".ahx");

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
		Dub_String = config->getString("Opciones", "IncludeDir0", "Neutro");
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
			//Voces
			//Tails
			ReplaceVoices("0053", "0053a");
			ReplaceVoices("0059", "0059a");
			ReplaceVoices("0063", "0063a");
			ReplaceVoices("0104", "0104a");
			ReplaceVoices("0202", "0202a");
			ReplaceVoices("0207", "0207a");
			ReplaceVoices("0425", "0425a");
			ReplaceVoices("0917", "0917a");
			ReplaceVoices("0941", "0941a");
			ReplaceVoices("0977", "0977a");
			ReplaceVoices("1001", "1001a");
			ReplaceVoices("1014", "1014a");
			ReplaceVoices("1026", "1026a");
			ReplaceVoices("1038", "1038a");
			ReplaceVoices("1050", "1050a");
			ReplaceVoices("1062", "1062a");
			ReplaceVoices("1154", "1154a");
			ReplaceVoices("1165", "1165a");
			ReplaceVoices("1657", "1657a");
			ReplaceVoices("1667", "1667a");
			ReplaceVoices("1707", "1707a");
			ReplaceVoices("1715", "1715a");
			ReplaceVoices("1729", "1729a");
			ReplaceVoices("1761", "1761a");
			ReplaceVoices("1792", "1792a");
			ReplaceVoices("1892", "1892a");
			ReplaceVoices("1893", "1893a");
			ReplaceVoices("1931", "1931a");
			ReplaceVoices("1990", "1990a");
			ReplaceVoices("2270", "2270a");
			ReplaceVoices("2273", "2273a");
			ReplaceVoices("2274", "2274a");
			ReplaceVoices("2437", "2437a");
			ReplaceVoices("2515", "2515a");
			ReplaceVoices("2517", "2517a");
			ReplaceVoices("2581", "2581a");
			ReplaceVoices("2586", "2586a");
			ReplaceVoices("2608", "2608a");
			ReplaceVoices("2642", "2642a");
			//Tikal
			ReplaceVoices("2720", "2720a");
			ReplaceVoices("2723", "2723a");
			ReplaceVoices("2725", "2725a");
			ReplaceVoices("2726", "2726a");
			//Soldado de G.U.N. 1
			ReplaceVoices("0000", "0000c");
			ReplaceVoices("0005", "0005a");
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
			//Voces
			//Tails
			ReplaceVoices("0053", "0053c");
			ReplaceVoices("0059", "0059c");
			ReplaceVoices("0063", "0063c");
			ReplaceVoices("0104", "0104c");
			ReplaceVoices("0189", "0189c");
			ReplaceVoices("0202", "0202c");
			ReplaceVoices("0207", "0207c");
			ReplaceVoices("0425", "0425c");
			ReplaceVoices("1667", "1667c");
			ReplaceVoices("1761", "1761c");
			ReplaceVoices("1792", "1792c");
			ReplaceVoices("1892", "1892c");
			ReplaceVoices("1893", "1893c");
			ReplaceVoices("1931", "1931c");
			ReplaceVoices("1990", "1990c");
			ReplaceVoices("2261", "2261c");
			ReplaceVoices("2264", "2264c");
			ReplaceVoices("2270", "2270c");
			ReplaceVoices("2271", "2271c");
			ReplaceVoices("2274", "2274c");
			ReplaceVoices("2437", "2437c");
			ReplaceVoices("2515", "2515c");
			ReplaceVoices("2517", "2517c");
			ReplaceVoices("2581", "2581c");
			ReplaceVoices("2586", "2586c");
			ReplaceVoices("2608", "2608c");
			ReplaceVoices("2642", "2642c");
			//Tikal
			ReplaceVoices("2720", "2720c");
			ReplaceVoices("2723", "2723c");
			ReplaceVoices("2725", "2725c");
			ReplaceVoices("2726", "2726c");
			//Soldado de G.U.N. 1
			ReplaceVoices("0000", "0000c");
			ReplaceVoices("0005", "0005c");
			ReplaceVoices("0029", "0029c");
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
			//Voces
			//Tails
			ReplaceVoices("0053", "0053m");
			ReplaceVoices("0056", "0056m");
			ReplaceVoices("0059", "0059m");
			ReplaceVoices("0063", "0063m");
			ReplaceVoices("0104", "0104m");
			ReplaceVoices("0189", "0189m");
			ReplaceVoices("0425", "0425m");
			ReplaceVoices("0705", "0705m");
			ReplaceVoices("1761", "1761a");
			ReplaceVoices("1990", "1990m");
			ReplaceVoices("2264", "2264m");
			ReplaceVoices("2270", "2270m");
			ReplaceVoices("2430", "2430m");
			ReplaceVoices("2431", "2431m");
			ReplaceVoices("2437", "2437m");
			ReplaceVoices("2580", "2580m");
			ReplaceVoices("2606", "2606m");
			ReplaceVoices("2642", "2642m");
			//Soldado de G.U.N. 1
			ReplaceVoices("0004", "0004m");
			ReplaceVoices("0005", "0005m");
			ReplaceVoices("0029", "0029m");
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
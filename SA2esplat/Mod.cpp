#include "pch.h"
#include "Mod.h"
#include "GunRoboTitles.h"
#include "BossTitles.h"

#define ReplaceEventFile(a, b) helperFunctions.ReplaceFile("resource\\gd_PC\\event\\" a ".prs", "resource\\gd_PC\\event\\" b ".prs");
#define ReplaceMessageFile(a, b) helperFunctions.ReplaceFile("resource\\gd_PC\\Message\\" a ".prs", "resource\\gd_PC\\Message\\" b ".prs");
#define ReplaceMessageKFile(a, b) helperFunctions.ReplaceFile("resource\\gd_PC\\MessageK\\" a ".prs", "resource\\gd_PC\\Message\\" b ".prs");

enum Doblaje { Neutro, Mexicano, Chileno, Argentino };

static bool MusicaDub = true;
static int Dub = Neutro;

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

		helperFunctions.ReplaceTexture("objtex_stg14", "miu128_rh007", helperFunctions.GetReplaceablePath("resource\\gd_PC\\Texturas\\anillos.png"), 13507, 128, 128);
		helperFunctions.ReplaceTexture("objtex_stg14", "miu128_rh014", helperFunctions.GetReplaceablePath("resource\\gd_PC\\Texturas\\kaori.png"), 13514, 128, 128);
		helperFunctions.ReplaceTexture("objtex_stg52", "miu128_rh014", helperFunctions.GetReplaceablePath("resource\\gd_PC\\Texturas\\kaori.png"), 10501, 128, 128);
		helperFunctions.ReplaceTexture("landtx52", "miu128_rh014", helperFunctions.GetReplaceablePath("resource\\gd_PC\\Texturas\\kaori.png"), 10501, 128, 128);
	}

	__declspec(dllexport) ModInfo SA2ModInfo = { ModLoaderVer };
}
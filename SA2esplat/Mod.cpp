#include "pch.h"
#include "Mod.h"
#include "GunRoboTitles.h"

#define ReplaceEventFile(a, b) helperFunctions.ReplaceFile("resource\\gd_PC\\event\\" a ".prs", "resource\\gd_PC\\event\\" b ".prs");

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
			ReplaceAdvertiseArgentino();
		}
		else if (Dub == Chileno)
		{
			ReplaceEventFile("evmesH3", "evmesH3chi");
			ReplaceEventFile("evmesD3", "evmesD3chi");
			ReplaceEventFile("evmesL3", "evmesL3chi");
			ReplaceAdvertiseChileno();
		}
		else if (Dub == Mexicano)
		{
            ReplaceEventFile("evmesH3", "evmesH3mex");
			ReplaceEventFile("evmesD3", "evmesD3mex");
			ReplaceEventFile("evmesL3", "evmesL3mex");
			ReplaceAdvertiseMexicano();
		}
		else
		{
			ReplaceAdvertiseNeutro();
		}
	
		ReplaceMainCredits();

		SetNewGunRoboTitles();
	}

	__declspec(dllexport) ModInfo SA2ModInfo = { ModLoaderVer };
}
#include "pch.h"
#include "Mod.h"
#include "GunRoboTitles.h"

HMODULE DCconversion = GetModuleHandle(L"DCMods_Main");

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
			ReplaceAdvertiseArgentino();
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
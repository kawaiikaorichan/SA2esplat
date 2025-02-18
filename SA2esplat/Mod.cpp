#include "pch.h"
#include "Mod.h"
#include "GunRoboTitles.h"

extern "C"
{
	__declspec(dllexport) void Init(const char* path, const HelperFunctions& helperFunctions)
	{
		ReplaceAdvertise();
		ReplaceMainCredits();

		SetNewGunRoboTitles();
	}

	__declspec(dllexport) ModInfo SA2ModInfo = { ModLoaderVer };
}
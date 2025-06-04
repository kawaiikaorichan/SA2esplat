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
			ReplaceMusic("t1_sonic", "t1_sonice");
			ReplaceMusic("T9_SONIC", "T9_SONICe");
			ReplaceMusic("T9_EGGMA", "T9_EGGMAe");
			ReplaceMusic("e019_sng", "e019_snge");
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
			//Sonic
			ReplaceVoices("0007", "0007a");
			ReplaceVoices("0010", "0010a");
			ReplaceVoices("0011", "0011a");
			ReplaceVoices("0012", "0012a");
			ReplaceVoices("0019", "0019a");
			ReplaceVoices("0020", "0020a");
			ReplaceVoices("0021", "0021a");
			ReplaceVoices("0030", "0030a");
			ReplaceVoices("0031", "0031a");
			ReplaceVoices("0067", "0067a");
			ReplaceVoices("0074", "0074a");
			ReplaceVoices("0083", "0083a");
			ReplaceVoices("0085", "0085a");
			ReplaceVoices("0087", "0087a");
			ReplaceVoices("0088", "0088a");
			ReplaceVoices("0095", "0095a");
			ReplaceVoices("0098", "0098a");
			ReplaceVoices("0103", "0103a");
			ReplaceVoices("0115", "0115a");
			ReplaceVoices("0133", "0133a");
			ReplaceVoices("0143", "0143a");
			ReplaceVoices("0151", "0151a");
			ReplaceVoices("0155", "0155a");
			ReplaceVoices("0159", "0159a");
			ReplaceVoices("0168", "0168a");
			ReplaceVoices("0196", "0196a");
			ReplaceVoices("0237", "0237a");
			ReplaceVoices("0244", "0244a");
			ReplaceVoices("0261", "0261a");
			ReplaceVoices("0264", "0264a");
			ReplaceVoices("0363", "0363a");
			ReplaceVoices("0370", "0370a");
			ReplaceVoices("0371", "0371a");
			ReplaceVoices("0372", "0372a");
			ReplaceVoices("0381", "0381a");
			ReplaceVoices("0383", "0383a");
			ReplaceVoices("0438", "0438a");
			ReplaceVoices("0440", "0440a");
			ReplaceVoices("0442", "0442a");
			ReplaceVoices("0484", "0484a");
			ReplaceVoices("0538", "0538a");
			ReplaceVoices("0545", "0545a");
			ReplaceVoices("0589", "0589a");
			ReplaceVoices("0611", "0611a");
			ReplaceVoices("0613", "0613a");
			ReplaceVoices("0614", "0614a");
			ReplaceVoices("0916", "0916a");
			ReplaceVoices("0940", "0940a");
			ReplaceVoices("0952", "0952a");
			ReplaceVoices("1000", "1000a");
			ReplaceVoices("1013", "1013a");
			ReplaceVoices("1025", "1025a");
			ReplaceVoices("1037", "1037a");
			ReplaceVoices("1049", "1049a");
			ReplaceVoices("1120", "1120a");
			ReplaceVoices("1131", "1131a");
			ReplaceVoices("1153", "1153a");
			ReplaceVoices("1164", "1164a");
			ReplaceVoices("1175", "1175a");
			ReplaceVoices("1527", "1527a");
			ReplaceVoices("1531", "1531a");
			ReplaceVoices("1565", "1565a");
			ReplaceVoices("1579", "1579a");
			ReplaceVoices("1583", "1583a");
			ReplaceVoices("1587", "1587a");
			ReplaceVoices("1597", "1597a");
			ReplaceVoices("1603", "1603a");
			ReplaceVoices("1605", "1605a");
			ReplaceVoices("1607", "1607a");
			ReplaceVoices("1608", "1608a");
			ReplaceVoices("1610", "1610a");
			ReplaceVoices("1612", "1612a");
			ReplaceVoices("1810", "1810a");
			ReplaceVoices("1811", "1811a");
			ReplaceVoices("1901", "1901a");
			ReplaceVoices("1997", "1997a");
			ReplaceVoices("1998", "1998a");
			ReplaceVoices("2131", "2131a");
			ReplaceVoices("2133", "2133a");
			ReplaceVoices("2138", "2138a");
			ReplaceVoices("2140", "2140a");
			ReplaceVoices("2144", "2144a");
			ReplaceVoices("2146", "2146a");
			ReplaceVoices("2151", "2151a");
			ReplaceVoices("2152", "2152a");
			ReplaceVoices("2155", "2155a");
			ReplaceVoices("2156", "2156a");
			ReplaceVoices("2161", "2161a");
			ReplaceVoices("2236", "2236a");
			ReplaceVoices("2239", "2239a");
			ReplaceVoices("2240", "2240a");
			ReplaceVoices("2243", "2243a");
			ReplaceVoices("2250", "2250a");
			ReplaceVoices("2251", "2251a");
			ReplaceVoices("2414", "2414a");
			ReplaceVoices("2415", "2415a");
			ReplaceVoices("2417", "2417a");
			ReplaceVoices("2418", "2418a");
			ReplaceVoices("2419", "2419a");
			ReplaceVoices("2420", "2420a");
			ReplaceVoices("2440", "2440a");
			ReplaceVoices("2441", "2441a");
			ReplaceVoices("2445", "2445a");
			ReplaceVoices("2448", "2448a");
			ReplaceVoices("2449", "2449a");
			ReplaceVoices("2603", "2603a");
			ReplaceVoices("2628", "2628a");
			ReplaceVoices("2635", "2635a");
			ReplaceVoices("2638", "2638a");
			ReplaceVoices("2649", "2649a");
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
			//Knuckles
			ReplaceVoices("0035", "0035a");
			ReplaceVoices("0039", "0039a");
			ReplaceVoices("0041", "0041a");
			ReplaceVoices("0051", "0051a");
			ReplaceVoices("0089", "0089a");
			ReplaceVoices("0114", "0114a");
			ReplaceVoices("0122", "0122a");
			ReplaceVoices("0123", "0123a");
			ReplaceVoices("0149", "0149a");
			ReplaceVoices("0158", "0158a");
			ReplaceVoices("0163", "0163a");
			ReplaceVoices("0212", "0212a");
			ReplaceVoices("0215", "0215a");
			ReplaceVoices("0218", "0218a");
			ReplaceVoices("0221", "0221a");
			ReplaceVoices("0223", "0223a");
			ReplaceVoices("0227", "0227a");
			ReplaceVoices("0230", "0230a");
			ReplaceVoices("0265", "0265m");
			ReplaceVoices("0329", "0329a");
			ReplaceVoices("0333", "0333a");
			ReplaceVoices("0335", "0335a");
			ReplaceVoices("0479", "0479a");
			ReplaceVoices("0503", "0503a");
			ReplaceVoices("0506", "0506a");
			ReplaceVoices("0509", "0509a");
			ReplaceVoices("0512", "0512a");
			ReplaceVoices("0514", "0514a");
			ReplaceVoices("0518", "0518a");
			ReplaceVoices("0521", "0521a");
			ReplaceVoices("0590", "0590a");
			ReplaceVoices("0609", "0609a");
			ReplaceVoices("0633", "0633a");
			ReplaceVoices("0910", "0910a");
			ReplaceVoices("0922", "0922a");
			ReplaceVoices("0934", "0934a");
			ReplaceVoices("0946", "0946a");
			ReplaceVoices("0958", "0958a");
			ReplaceVoices("0982", "0982a");
			ReplaceVoices("1006", "1006a");
			ReplaceVoices("1019", "1019a");
			ReplaceVoices("1043", "1043a");
			ReplaceVoices("1055", "1055a");
			ReplaceVoices("1114", "1114a");
			ReplaceVoices("1125", "1125a");
			ReplaceVoices("1147", "1147a");
			ReplaceVoices("1158", "1158a");
			ReplaceVoices("1242", "1242a");
			ReplaceVoices("1244", "1244a");
			ReplaceVoices("1246", "1246a");
			ReplaceVoices("1248", "1248a");
			ReplaceVoices("1250", "1250a");
			ReplaceVoices("1254", "1254a");
			ReplaceVoices("1274", "1274a");
			ReplaceVoices("1286", "1286a");
			ReplaceVoices("1296", "1296a");
			ReplaceVoices("1300", "1300a");
			ReplaceVoices("1310", "1310a");
			ReplaceVoices("1318", "1318a");
			ReplaceVoices("1338", "1338a");
			ReplaceVoices("1344", "1344a");
			ReplaceVoices("1346", "1346a");
			ReplaceVoices("1783", "1783a");
			ReplaceVoices("1822", "1822a");
			ReplaceVoices("1823", "1823c");
			ReplaceVoices("1981", "1981a");
			ReplaceVoices("1983", "1983a");
			ReplaceVoices("2011", "2011a");
			ReplaceVoices("2012", "2012a");
			ReplaceVoices("2107", "2107a");
			ReplaceVoices("2110", "2110a");
			ReplaceVoices("2111", "2111a");
			ReplaceVoices("2112", "2112a");
			ReplaceVoices("2113", "2113a");
			ReplaceVoices("2114", "2114a");
			ReplaceVoices("2117", "2117a");
			ReplaceVoices("2141", "2141a");
			ReplaceVoices("2168", "2168a");
			ReplaceVoices("2421", "2421a");
			ReplaceVoices("2426", "2426a");
			ReplaceVoices("2450", "2450a");
			ReplaceVoices("2452", "2452a");
			ReplaceVoices("2453", "2453a");
			ReplaceVoices("2559", "2559a");
			ReplaceVoices("2563", "2563a");
			ReplaceVoices("2590", "2590a");
			ReplaceVoices("2593", "2593a");
			ReplaceVoices("2594", "2594a");
			ReplaceVoices("2595", "2595a");
			ReplaceVoices("2598", "2598a");
			ReplaceVoices("2609", "2609a");
			ReplaceVoices("2630", "2630a");
			ReplaceVoices("2632", "2632a");
			ReplaceVoices("2633", "2633a");
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
			//Sonic
			ReplaceVoices("0007", "0007c");
			ReplaceVoices("0010", "0010c");
			ReplaceVoices("0011", "0011c");
			ReplaceVoices("0012", "0012c");
			ReplaceVoices("0020", "0020c");
			ReplaceVoices("0021", "0021c");
			ReplaceVoices("0030", "0030c");
			ReplaceVoices("0031", "0031c");
			ReplaceVoices("0067", "0067c");
			ReplaceVoices("0074", "0074c");
			ReplaceVoices("0085", "0085c");
			ReplaceVoices("0087", "0087c");
			ReplaceVoices("0088", "0088c");
			ReplaceVoices("0095", "0095c");
			ReplaceVoices("0103", "0103c");
			ReplaceVoices("0115", "0115c");
			ReplaceVoices("0117", "0117c");
			ReplaceVoices("0133", "0133c");
			ReplaceVoices("0137", "0137c");
			ReplaceVoices("0139", "0139c");
			ReplaceVoices("0143", "0143c");
			ReplaceVoices("0151", "0151c");
			ReplaceVoices("0155", "0155c");
			ReplaceVoices("0159", "0159c");
			ReplaceVoices("0168", "0168c");
			ReplaceVoices("0187", "0187c");
			ReplaceVoices("0188", "0188c");
			ReplaceVoices("0196", "0196c");
			ReplaceVoices("0237", "0237c");
			ReplaceVoices("0244", "0244c");
			ReplaceVoices("0261", "0261c");
			ReplaceVoices("0264", "0264c");
			ReplaceVoices("0265", "0265c");
			ReplaceVoices("0363", "0363c");
			ReplaceVoices("0371", "0371c");
			ReplaceVoices("0372", "0372c");
			ReplaceVoices("0381", "0381c");
			ReplaceVoices("0383", "0383c");
			ReplaceVoices("0440", "0440c");
			ReplaceVoices("0442", "0442c");
			ReplaceVoices("0484", "0484c");
			ReplaceVoices("0538", "0538c");
			ReplaceVoices("0545", "0545c");
			ReplaceVoices("0613", "0613c");
			ReplaceVoices("0614", "0614c");
			ReplaceVoices("1527", "1527c");
			ReplaceVoices("1531", "1531c");
			ReplaceVoices("1565", "1565c");
			ReplaceVoices("1583", "1583c");
			ReplaceVoices("1587", "1587a");
			ReplaceVoices("1595", "1595c");
			ReplaceVoices("1597", "1597c");
			ReplaceVoices("1607", "1607c");
			ReplaceVoices("1810", "1810c");
			ReplaceVoices("1901", "1901a");
			ReplaceVoices("1997", "1997a");
			ReplaceVoices("1927", "1927c");
			ReplaceVoices("1998", "1998c");
			ReplaceVoices("2131", "2131c");
			ReplaceVoices("2140", "2140c");
			ReplaceVoices("2144", "2144c");
			ReplaceVoices("2146", "2146c");
			ReplaceVoices("2151", "2151c");
			ReplaceVoices("2152", "2152c");
			ReplaceVoices("2155", "2155c");
			ReplaceVoices("2236", "2236c");
			ReplaceVoices("2239", "2239c");
			ReplaceVoices("2240", "2240c");
			ReplaceVoices("2243", "2243c");
			ReplaceVoices("2250", "2250c");
			ReplaceVoices("2252", "2252c");
			ReplaceVoices("2286", "2286c");
			ReplaceVoices("2414", "2414c");
			ReplaceVoices("2415", "2415c");
			ReplaceVoices("2417", "2417c");
			ReplaceVoices("2418", "2418c");
			ReplaceVoices("2420", "2420c");
			ReplaceVoices("2440", "2440c");
			ReplaceVoices("2441", "2441c");
			ReplaceVoices("2445", "2445c");
			ReplaceVoices("2448", "2448c");
			ReplaceVoices("2449", "2449c");
			ReplaceVoices("2603", "2603c");
			ReplaceVoices("2628", "2628c");
			ReplaceVoices("2635", "2635c");
			ReplaceVoices("2638", "2638c");
			ReplaceVoices("2649", "2649c");
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
			//Knuckles
			ReplaceVoices("0035", "0035c");
			ReplaceVoices("0039", "0039c");
			ReplaceVoices("0050", "0050c");
			ReplaceVoices("0089", "0089c");
			ReplaceVoices("0114", "0114c");
			ReplaceVoices("0122", "0122c");
			ReplaceVoices("0123", "0123c");
			ReplaceVoices("0149", "0149c");
			ReplaceVoices("0163", "0163c");
			ReplaceVoices("0212", "0212c");
			ReplaceVoices("0215", "0215c");
			ReplaceVoices("0218", "0218c");
			ReplaceVoices("0221", "0221c");
			ReplaceVoices("0223", "0223c");
			ReplaceVoices("0227", "0227c");
			ReplaceVoices("0228", "0228c");
			ReplaceVoices("0230", "0230c");
			ReplaceVoices("0263", "0263c");
			ReplaceVoices("0329", "0329c");
			ReplaceVoices("0333", "0333c");
			ReplaceVoices("0344", "0344c");
			ReplaceVoices("0479", "0479c");
			ReplaceVoices("0503", "0503c");
			ReplaceVoices("0506", "0506c");
			ReplaceVoices("0509", "0509c");
			ReplaceVoices("0512", "0512c");
			ReplaceVoices("0514", "0514c");
			ReplaceVoices("0518", "0518c");
			ReplaceVoices("0519", "0519c");
			ReplaceVoices("0521", "0521c");
			ReplaceVoices("0588", "0588c");
			ReplaceVoices("0590", "0590c");
			ReplaceVoices("0606", "0606c");
			ReplaceVoices("0633", "0633c");
			ReplaceVoices("0715", "0715c");
			ReplaceVoices("1242", "1242c");
			ReplaceVoices("1250", "1250c");
			ReplaceVoices("1274", "1274c");
			ReplaceVoices("1286", "1286a");
			ReplaceVoices("1296", "1296a");
			ReplaceVoices("1300", "1300a");
			ReplaceVoices("1310", "1310a");
			ReplaceVoices("1326", "1326c");
			ReplaceVoices("1330", "1330c");
			ReplaceVoices("1338", "1338c");
			ReplaceVoices("1340", "1340c");
			ReplaceVoices("1342", "1342c");
			ReplaceVoices("1344", "1344c");
			ReplaceVoices("1346", "1346a");
			ReplaceVoices("1822", "1822a");
			ReplaceVoices("1823", "1823c");
			ReplaceVoices("1844", "1844c");
			ReplaceVoices("1981", "1981c");
			ReplaceVoices("1983", "1983c");
			ReplaceVoices("2011", "2011a");
			ReplaceVoices("2012", "2012c");
			ReplaceVoices("2107", "2107c");
			ReplaceVoices("2111", "2111a");
			ReplaceVoices("2113", "2113c");
			ReplaceVoices("2117", "2117c");
			ReplaceVoices("2141", "2141a");
			ReplaceVoices("2168", "2168c");
			ReplaceVoices("2283", "2283c");
			ReplaceVoices("2426", "2426c");
			ReplaceVoices("2452", "2452c");
			ReplaceVoices("2453", "2453a");
			ReplaceVoices("2563", "2563a");
			ReplaceVoices("2593", "2593c");
			ReplaceVoices("2594", "2594a");
			ReplaceVoices("2598", "2598c");
			ReplaceVoices("2631", "2631c");
			ReplaceVoices("2632", "2632c");
			ReplaceVoices("2633", "2633a");
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
			//Sonic
			ReplaceVoices("0007", "0007m");
			ReplaceVoices("0010", "0010m");
			ReplaceVoices("0011", "0011m");
			ReplaceVoices("0012", "0012m");
			ReplaceVoices("0020", "0020m");
			ReplaceVoices("0021", "0021m");
			ReplaceVoices("0067", "0067m");
			ReplaceVoices("0074", "0074m");
			ReplaceVoices("0085", "0085m");
			ReplaceVoices("0087", "0087a");
			ReplaceVoices("0095", "0095m");
			ReplaceVoices("0103", "0103m");
			ReplaceVoices("0115", "0115m");
			ReplaceVoices("0133", "0133m");
			ReplaceVoices("0137", "0137m");
			ReplaceVoices("0139", "0139m");
			ReplaceVoices("0151", "0151m");
			ReplaceVoices("0155", "0155m");
			ReplaceVoices("0159", "0159m");
			ReplaceVoices("0168", "0168m");
			ReplaceVoices("0187", "0187m");
			ReplaceVoices("0203", "0203m");
			ReplaceVoices("0237", "0237m");
			ReplaceVoices("0261", "0261m");
			ReplaceVoices("0265", "0265m");
			ReplaceVoices("0363", "0363m");
			ReplaceVoices("0371", "0371m");
			ReplaceVoices("0372", "0372m");
			ReplaceVoices("0440", "0440m");
			ReplaceVoices("0442", "0442a");
			ReplaceVoices("0484", "0484m");
			ReplaceVoices("0538", "0538m");
			ReplaceVoices("0613", "0613m");
			ReplaceVoices("0614", "0614m");
			ReplaceVoices("0636", "0636m");
			ReplaceVoices("0718", "0718m");
			ReplaceVoices("1531", "1531m");
			ReplaceVoices("1607", "1607m");
			ReplaceVoices("1751", "1751m");
			ReplaceVoices("1785", "1785m");
			ReplaceVoices("1810", "1810m");
			ReplaceVoices("2140", "2140m");
			ReplaceVoices("2151", "2151c");
			ReplaceVoices("2236", "2236m");
			ReplaceVoices("2412", "2412m");
			ReplaceVoices("2413", "2413m");
			ReplaceVoices("2414", "2414m");
			ReplaceVoices("2415", "2415m");
			ReplaceVoices("2417", "2417m");
			ReplaceVoices("2418", "2418m");
			ReplaceVoices("2420", "2420m");
			ReplaceVoices("2448", "2448m");
			ReplaceVoices("2628", "2628m");
			ReplaceVoices("2644", "2644m");
			ReplaceVoices("2646", "2646m");
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
			//Knuckles
			ReplaceVoices("0035", "0035m");
			ReplaceVoices("0039", "0039m");
			ReplaceVoices("0050", "0050m");
			ReplaceVoices("0089", "0089m");
			ReplaceVoices("0114", "0114m");
			ReplaceVoices("0122", "0122m");
			ReplaceVoices("0123", "0123m");
			ReplaceVoices("0158", "0158m");
			ReplaceVoices("0163", "0163m");
			ReplaceVoices("0212", "0212m");
			ReplaceVoices("0215", "0215m");
			ReplaceVoices("0223", "0223m");
			ReplaceVoices("0230", "0230m");
			ReplaceVoices("0329", "0329m");
			ReplaceVoices("0333", "0333m");
			ReplaceVoices("0344", "0344m");
			ReplaceVoices("0479", "0479m");
			ReplaceVoices("0503", "0503m");
			ReplaceVoices("0506", "0506m");
			ReplaceVoices("0514", "0514m");
			ReplaceVoices("0521", "0521m");
			ReplaceVoices("0588", "0588m");
			ReplaceVoices("0606", "0606m");
			ReplaceVoices("0609", "0609m");
			ReplaceVoices("0633", "0633m");
			ReplaceVoices("1244", "1244m");
			ReplaceVoices("1274", "1274m");
			ReplaceVoices("1338", "1338m");
			ReplaceVoices("1823", "1823m");
			ReplaceVoices("1844", "1844m");
			ReplaceVoices("2012", "2012m");
			ReplaceVoices("2110", "2110m");
			ReplaceVoices("2283", "2283c");
			ReplaceVoices("2425", "2425m");
			ReplaceVoices("2426", "2426m");
			ReplaceVoices("2562", "2562m");
			ReplaceVoices("2593", "2593m");
			ReplaceVoices("2596", "2596m");
			ReplaceVoices("2598", "2598m");
			ReplaceVoices("2610", "2610m");
			ReplaceVoices("2632", "2632m");
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
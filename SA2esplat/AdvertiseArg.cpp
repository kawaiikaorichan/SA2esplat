#include "pch.h"
#include "Mod.h"

// C�digo realizado por Irregular Zero. �Much�simas gracias!

DataArray(const char**, AdvertiseGamepad, 0xC70590, 6);
DataArray(const char**, AdvertiseKeyboard, 0xC705A8, 6);

const char* AdvertiseSpanishArgentino[]
{
	// Main menu
	
	"\tModo para 1 jugador.",
	"\tModo para 2 jugadores.",
	"\tMir� la tabla de clasificaciones.",
	"\tMir� los Logros.",
	"\tObten� ayuda o ajust� las opciones.",
	"\tDescarg� contenido disponible.",
	"\tSaldr�s del juego.",

	// Help & options

	"\tMir� los contenidos extra del juego.",
	"\tVideo de bonificaci�n.",
	"\tMir� una descripci�n de c�mo jugar.",
	"\tMir� c�mo est�n mapeados los controles.",
	"\tConfigur� las opciones del juego.",
	"\tMir� los cr�ditos.",

	// Single player

	"\tJug� la historia.",
	"\tEleg� una escena de la historia.",
	"\tJug� los niveles que has superado.",

	// Some 2P mode stuff
	
	"\tHay 3 tipos de juegos.",
	"\tEste es el juego de carreras de Kart.",
	"\tEn carreras Chao hay hasta (8) Chao.",

	// Extras

	"\tMostrar o actualizar la clasificaci�n.",
	"\tOmochao explicar� el juego.",
	"\tMostrar la lista de los emblemas.",
	"\tJugar eventos descargados.",

	// Memory card select (console leftover)
	
	"\tEleg� una tarjeta de memoria.",
	"\tNo hay bloques de memoria libres.",

	// File select

	"\tEleg� una partida.",
	"\tCre� un archivo nuevo.",
	"\tCarg� una partida.",
	"\t�Quer�s borrar esta partida?",
	"\tNo hay bloques de memoria libres.",

	// Options
	
	"\tEscuch� la m�sica.",
	"\tEleg� Est�reo / Mono.",
	"\tConfigur� la funci�n de vibraci�n.",
	"\tEleg� el idioma de las voces.",
	"\tGuard� o carga datos de juego.",
	"\tCambi� el tema de la pantalla del men�.",
	"\tCambi� la configuraci�n PAL TV.",
	"\tCambi� el sonido a est�reo.",
	"\tCambi� el sonido a mono.",
	"\tActiv� la funci�n de vibraci�n.",
	"\tDesactiv� la funci�n de vibraci�n.",
	"\tVoces en espa�ol (pr�ximamente todas).",
	"\tVoces en japon�s.",
	"\tSubt�tulos en ingl�s.",
	"\tSubt�tulos en japon�s.",
	"\tSubt�tulos en alem�n.",
	"\tSubt�tulos en franc�s.",
	"\tSubt�tulos en espa�ol.",

	// Sound test general

	"\tEleg� una categor�a de m�sica.",
	"\tEleg� una canci�n o m�sica.",

	// Menu themes
	
	"\tDeb�s cargar el archivo del tema.",
	"\tEleg� un tema.",
	"\tCargando el archivo de tema.",
	"\tNo se pudo cargar el archivo.",
	"\tNo hay un archivo de tema.",
	"\tDescarg� el archivo de la p�gina web.",

	// TV settings

	"\tPrueba de compatibilidad de TV 60Hz.",
	"\tUna imagen de Sonic aparecer� en 5 segundos.",
	"\tSi la ves bien, es compatible con 60Hz.",
	"\tVisualizaci�n con 50Hz.",
	"\tLa imagen se ve en todas las TV PAL",
	"\tVisualizaci�n con 60Hz.",
	"\tSe necesita una TV compatible 60Hz.",

	// Separate string for Italian language
	
	"\tSubt�tulos en italiano.",

	// Progress percentage (unused)
	
	"NUEVO",
	"10%SUPERADO",
	"20%SUPERADO",
	"30%SUPERADO",
	"40%SUPERADO",
	"50%SUPERADO",
	"60%SUPERADO",
	"70%SUPERADO",
	"80%SUPERADO",
	"90%SUPERADO",

	// Story select

	"\tEleg� una historia.",
	"\tEmpez� en cualquier escena.",

	// Stage select

	"\tEleg� un nivel.",
	"\tEleg� una misi�n.",

	// Character select
		
	"\tEleg� un personaje.",

	// Boss attack

	"\tPele� contra los jefes de cada historia.",

	// Dreamcast 2P mode

	"\tEleg� un grupo con el panel de control.",
	"\tEleg� el tipo de juego.",
	"\tTipo de juego elegido al azar.",
	"\tEleg� un nivel de batalla.",
	"\tEleg� un nivel de batalla.",

	// Kart racing

	"\tEleg� un conductor.",
	"\tEleg� un circuito.",
	"\tJug� en el circuito descargado.",
	"\tComprobando tarjeta de memoria.",
	"\tEleg� un circuito descargado.",
	"\tNo se encontr� ning�n archivo de circuito.",
	"\tComprobando tarjeta de memoria.",
	"\tNo se encontr� ning�n archivo descargado.",
	"\tEleg� un evento descargado.",
	"\t�Quer�s jugar a este evento?",
	"\tEste nivel todav�a no est� disponible.",

	// Sound test

	"\tTema principal de Sonic Adventure 2.",
	"\tTema de Sonic.",
	"\tTema de Tails.",
	"\tTema de Knuckles.",
	"\tTema de Shadow.",
	"\tTema de Eggman.",
	"\tTema de Rouge.",
	"\tTema de Amy.",
	"\tM�sica para las peleas contra jefes.",

	"\tM�sica de Escape Citadino.",
	"\tM�sica de Ca��n Salvaje.",
	"\tM�sica de V�a Prisi�n.",
	"\tM�sica de Puerto Met�lico.",
	"\tM�sica de Bosque Verde.",
	"\tM�sica de Colina Calabaza.",
	"\tM�sica de Misi�n Callejera.",
	"\tM�sica de Mina Acu�tica.",
	"\tM�sica de la Carrera de Karts.",
	"\tM�sica de Base Oculta.",
	"\tM�sica de Cueva Piramidal.",
	"\tM�sica de C�mara Mortuoria.",
	"\tM�sica de Motor Eterno.",
	"\tM�sica de Rancho Mete�rico.",
	"\tM�sica de Trampa Locuaz.",
	"\tM�sica de Carrera Final.",
	"\tM�sica de Portal F�rreo.",
	"\tM�sica de Laguna Seca.",
	"\tM�sica de Oc�ano Arenoso.",
	"\tM�sica de Carretera Radical.",
	"\tM�sica de Egg Quarters.",
	"\tM�sica de Colonia Perdida.",
	"\tM�sica de Lecho Armero.",
	"\tM�sica de Sala Segura.",
	"\tM�sica de Jungla Blanca.",
	"\tM�sica de Rieles Celestes.",
	"\tM�sica de Espacio Loco.",
	"\tM�sica de Muro C�smico.",
	"\tM�sica de Caza Final.",
	"\tM�sica de N�cleo del Ca��n.",

	"\tM�sica del Jard�n Chao.",
	"\tM�sica del Kinder Chao.",
	"\tM�sica del Vest�bulo Chao.",
	"\tM�sica de la ceremonia de premios.",
	"\tM�sica de la carrera nivel principiante.",
	"\tM�sica de la carrera de desaf�o.",
	"\tM�sica de la entrada.",
	"\tM�sica de la carrera Joya.",
	"\tM�sica de la danza de apareamiento.",
	"\tM�sica de la Consola Chao.",
	"\tM�sica de la entrega de premios.",
	"\tM�sica del jard�n Sombr�o.",
	"\tM�sica del jard�n Her�ico.",
	"\tM�sica de la carrera Sombr�a.",
	"\tM�sica de la carrera Her�ica.",
	"\tM�sica de festival del jard�n Sombr�o.",
	"\tM�sica de festival del jard�n Her�ico.",
	"\tM�sica del Jard�n Chao.",

	"\tM�sica de evento.",
	"\tJingle del nivel completado.",
	"\tJingle de velocidad extra.",
	"\tJingle de invulnerabilidad.",
	"\tJingle de ahogamiento.",
	"\tJingle de vida extra.",
	"\tJingle de la pantalla Continuar.",

	"\tM�sica del t�tulo.",
	"\tM�sica del men�.",
	"\tM�sica del tutorial.",

	"\tM�sica de Colina Verde.",

	// Unlock stuff messages

	"\tAhora pod�s elegir escenas\nde la historia Her�ica.",
	"\tEleg� peleas contra los\njefes de la historia Her�ica.",
	"\tAhora pod�s elegir escenas\nde la historia Sombr�a.",
	"\tEleg� peleas contra los\njefes de la historia Sombr�a.",
	"\tTodas las peleas contra los\njefes est�n disponibles.",
	"\tMinijuego: Ya est�n disponibles\nlas carreras de karts con 3 circuitos.",
	"\tMinijuego: Ya est�n disponibles\nlas carreras de karts para 2 jugadores.",
	"\t�Completaste las misiones de\nSonic! Elige otra skin de Sonic\nen el modo para 2 jugadores.",
	"\t�Completaste las misiones de\nTails! Selecciona otra skin de Tails\nen el modo para 2 jugadores.",
	"\t�Completaste las misiones de\nKnuckles! Selecciona otro skin de Knuckles\nen el modo para 2 jugadores.",
	"\t�Completaste las misiones de\nShadow! Selecciona otra skin de Shadow\nen el modo para 2 jugadores.",
	"\t�Completaste las misiones de\nEggman! Selecciona otra skin de Eggman\nen el modo para 2 jugadores.",
	"\t�Completaste las misiones de\nRouge! Selecciona otra skin para Rouge\nen el modo para 2 jugadores.",
	"\tCompletaste todas las misiones\nde Sonic con Rango \"A\".",
	"\tEleg� un personaje nuevo\nen el modo Versus de Sonic para 2J.",
	"\tCompletaste todas las misiones\nde Tails con Rango \"A\".",
	"\tEleg� un personaje nuevo\nen el modo Versus de Tails para 2J.",
	"\tCompletaste todas las misiones\nde Knuckles con Rango \"A\".",
	"\tEleg� un personaje nuevo\nen el modo Versus de Knuckles para 2J.",
	"\tCompletaste todas las misiones\nde Shadow con Rango \"A\".",
	"\tEleg� un personaje nuevo\nen el modo Versus de Shadow para 2J.",
	"\tCompletaste todas las misiones\nde Eggman con Rango \"A\".",
	"\tEleg� un personaje nuevo\nen el modo Versus de Eggman para 2J.",
	"\tCompletaste todas las misiones\nde Rouge con Rango \"A\".",
	"\tEleg� un personaje nuevo\nen el modo Versus de Rouge para 2 jugadores.",
	"\t�Felicidades!\n�Reuniste todos los emblemas!\nDesbloqueaste un nuevo nivel.",

	// Hero story scene select

	"El principio",
	"Aparece Knuckles",
	"Rescatando\na Sonic",
	"Huida de\nIsla Prisi�n",
	"Cara a cara\ncon Shadow",
	"Monta�a Fantasma",
	"Dominio Mundial",
	"Mina Acu�tica",
	"�D�nde est�\nEggman?",
	"Base oculta\nde Eggman",
	"Despegue del\ntransbordador",
	"La Colonia Espacial\n\"ARK\"",
	"�ltimas piezas de la\nEsmeralda Maestra",
	"Sonic tiene\nproblemas",
	"La �ltima\noportunidad",

	// Dark story scene select

	"El principio",
	"Aparece Rouge",
	"�La base oculta\notra vez!",
	"El pasado\nde Shadow",
	"Infiltrate en \nla base oculta",
	"Reuni�n Sombr�a",
	"Obtener las Esmeraldas\nCaos",
	"Pelea contra\nSonic",
	"El Imperio\nEggman",
	"La �ltima\nEsmeralda Caos",
	"Emboscada en\nla base oculta",
	"Pelea contra\nKnuckles",
	"Plan de Eggman",
	"El misterio\nde Shadow",
	"La �ltima\nbatalla",

	// Last story scene select

	"El principio",
	"La �ltima misi�n",
	"La batalla\nsuprema",
	"La �ltima\nesperanza",

	// World ranking and network connection stuff (unused)

	"Presion� el bot�n de elecci�n de acci�n (Y) para\nactualizar los datos.",
	"Clasificaci�n mundial por tiempo",
	"Clasificaci�n mundial por puntos",
	"Clasificaci�n mundial de Emblemas",
	"Clasificaci�n Total",
	"Clasificaci�n mundial por niveles",
	"Clasificaci�n mundial por niveles",
	"Crea tus comentarios",
	"\tDeb�s registrarte en la red para\nver las clasificaciones mundiales.",
	"\tUs� el buscador m�s reciente \npara registrarte en la red.",
	"\tConectando a la red.",
	"\tMientras est�s conectado a la red,\nse te aplicar�n las tasas telef�nicas\ncorrespondientes a una llamada \nmetropolitana.\nConsulta el manual para \nobtener m�s informaci�n.",
	"\t�Quer�s conectarte?",
	"\t<S�><No>",
	"\tConectando.",
	"\tMientras est�s conectado a la red,\nse te aplicar�n las tasas telef�nicas.\n�Quer�s conectarte?\n",
	"\t<S�><No>",
	"\tMarcando \201\226\201\226\201\226\201|\201\226\201\226\201\226\201|\201\226\201#Numeraci�n en curso...",
	"\t<Cancelar>",
	"\tIntroduc� el nombre del servidor y \nla contrase�a.",
	"Nombre<++>",
	"Contrase�a<++>",
	"\tNo se ha encontrado el m�dem.",
	"\tComprueba la conexi�n del m�dem.",
	"\tLa l�nea est� ocupada.",
	"\tMarcando el siguiente n�mero.",
	"\tLa l�nea est� ocupada.",
	"\tVuelve a intentarlo m�s tarde.",
	"\tLa l�nea est� ocupada.",
	"\tComprueba configuraci�n del m�dem",
	"\tNo ha sido posible marcar.",
	"\tComprueba el cable del tel�fono\no la configuraci�n del m�dem.",
	"\tNo se ha podido conectar. \nLa l�nea est� ocupada. Comprueba \nla configuraci�n del m�dem.",
	"\tImposible conectar con el servidor.\nLa autentificaci�n ha fallado.",
	"\tComprueba el nombre y contrase�a.",
	"\tDesconexi�n autom�tica.",
	"\tSe te cobrar�n las tarifas telef�nicas\nmientras est�s conectado.\n�Quer�s conectarte?",
	"\tConectado a la Red Sonic.",
	"\tEl servidor est� ocupado.",
	"\tVuelve a intentarlo m�s tarde.",
	"\tActualizando la base de datos.\nPuede tardar unos minutos.",
	"<Cancelar>",
	"\t�Cancelar la conexi�n de datos?",
	"<S�><No>",
	"\t�Seguro que quieres desconectarte?",
	"<S�><No>",
	"\tSubiste hasta el puesto <++> \nen la clasificaci�n total.",
	"\tBajaste hasta el puesto <++> \nen la clasificaci�n total.",
	"\tSubiste hasta el puesto <++> \nen <++> por puntos.",
	"\tSubiste hasta el puesto <++> \nen <++> por tiempo.",
	"\tSubiste hasta el puesto <++>\nen la clasificaci�n de emblemas.",
	"\tBajaste hasta el puesto <++>\nen <++> por puntos.",
	"\tBajaste hasta el puesto <++>\nen <++> por tiempo.",
	"\tBajaste hasta el puesto <++>\nen la puntuaci�n de emblemas.",
	"<++>",
	"\t�Quer�s usar este correo \nelectr�nico para la confirmaci�n?\n(Pod�s configurar el correo para \nrecibir informaci�n m�s adelante.)",
	"<S�><No>",
	"\tNo hay correo configurado.",
	"\tUs� el buscador m�s reciente para\ncambiar la configuraci�n del correo.",
	"�Sos <++>?",
	"\tIntroduc� tu contrase�a.",
	"\t<Aceptar><Cancelar><La olvid�>",
	"\tContrase�a incorrecta.\nIntroduce la contrase�a otra vez.",
	"<Aceptar><Cancelar><Olvid� con.>",
	"\t�Quer�s recibir tu contrase�a\na trav�s del correo electr�nico?",
	"<S�><No>",
	"\tSe te envi� un correo. M�ralo.",
	"\tBienvenido a la Red Sonic.",
	"\tIntroduc� tu nombre de usuario.",
	"\tEl nombre de usuario no debe \nser superior a 12 caracteres.",
	"<Aceptar> <Cancelar>",
	"<++>",
	"\tEste nombre de usuario ya existe.",
	"\tIntroduc� una contrase�a para \nutilizar este nombre de usuario.",
	"<Aceptar><Cancelar><La olvid�>",
	"\tDespu�s, introduc� la contrase�a.",
	"\tLa contrase�a deben tener m�nimo \n5 caracteres y m�ximo 12.",
	"<Aceptar><Regresar>",
	"\tCrear cuenta de correo electr�nico.",
	"\tSi olvidaste la contrase�a, te la\npodemos mandar por correo.",
	"<Aceptar><Cancelar>",
	"\t�Quer�s compartir tu direcci�n de\ncorreo con otros usuarios?\nSi no quer�s, selecciona \"No\".",
	"<S�><No>",
	"\tEleg� el pa�s y la regi�n \ndonde vives.",
	"Pa�s: <++>",
	"Regi�n: <++>",
	"<Aceptar><Cancelar>",
	"\tLa Red Sonic es una zona p�blica\ndonde se intercambia informaci�n\ncon otros usuarios del mundo.\nComportate de manera civilizada.\nLos usuarios pueden recibir avisos y\nse les puede exigir que no usen \neste servicio, si las actividades\nvan contra las reglas de la Red Sonic.",
	"",
	"",
	"Registro completado.",
	"\tMostrar la clasificaci�n\ndesde los primeros puestos.",
	"\tLista de clasificaciones.",
	"\tBuscar clasificaci�n por usuario.",
	"\tclasificaci�n por pa�s o regi�n.",
	"\tIntroduc� clasificaci�n.",
	"<++>",
	"\tIntroduc� el par�metro de b�squeda.",
	"<++>",
	"\tIntroduc� el pa�s que quer�s ver.",
	"Pa�s<++>",
	"Regi�n<++>",
	"<Aceptar> <Cancelar>",
	"\tPod�s ver la informaci�n del usuario.",
	"\tPresion� el bot�n de ataque (B) para volver\na la pantalla de la lista.",

	// Hero story recaps

	// City Escape
	"�Soy Sonic! �Sonic, el erizo!",
	"Unos tipos medio raros\naparecieron de repente y me invitaron\na dar un pase�to a�reo...",
	"�Eh? �Pero qu�...? ��Esposas?!\n�A ver, un momentito! �Dicen que\nsoy un pr�fugo de una instalaci�n militar?",
	"Al principio me lo tom�\nen joda, pero ya me cansaron.",
	"�No quiero saber nada\nde un lugar as�!",

	// Big Foot
	"�Soy Sonic! �Sonic, el erizo!",
	"Mir� si esos tipos son cabezaduras.\n��Pero qu� se piensan que soy?!",
	"De tanto que me persiguieron\nse les hizo de noche, y ahora\nes cuando traen a un robot grandote.",
	"Imagino que me quieren\natrapar como sea.",
	"�Ja! Quiero verlos intentarlo.\n�Esta chatarra no durar� ni tres minutos!",

	// Wild Canyon
	"Soy Knuckles, el equidna.\nDecime Knuckles.",
	"Ten�an que robar precisamente\nla Esmeralda Maestra de Isla �ngel.",
	"La ladrona fue esta murci�lago\nodiosa y coqueta.",
	"Justo cuando estaba por\natraparla, �Eggman se apareci� e\nintent� robar la Esmeralda Maestra!",
	"Como �ltimo recurso, logr�\ndestrozar la Esmeralda Maestra para\nevitar problemas, pero sus pedazos\nse esparcieron por doquier.",
	"Esa murci�lago tambi�n se puso\na buscarlos. �Los tengo que encontrar\nya y restaurar la Esmeralda!",

	// Eggman 1
	"Me llamo Miles Prower,\npero todos me llaman Tails.",
	"Estaba viendo mi tele satelital\ncuando vi las malas noticias.",
	"�Mi �dolo, Sonic, fue arrestado\npor hacer algo malo!",
	"�No puede ser verdad!\nMe sub� al nuevo Tornado y me dirig�\na Isla Prisi�n, donde Sonic est�.",
	"�Sin embargo, ah� estaba mi\narchienemigo, Eggman!\n�Y est� atacando a mi amiga, Amy!\n�Esto es malo!",
	"�Muy bien! �Siendo as�, voy a\nmostrarle el poder de mi nuevo Tornado!",
	"�Tornado, cambio de forma!",

	// Prison Lane
	"Mi nombre es Miles Prower,\npero todos me llaman Tails.",
	"Rescat� a Amy de Eggman.\nElla dice que �l no est�\nplaneando nada bueno.",
	"�Me preocupa lo que\ntrama Eggman, pero primero\ntengo que salvar a Sonic!",
	"�Qu�? �Todav�a quer�s venir, Amy?\nBueno, dale. Pero no molestes.",

	// Metal Harbor
	"�Soy Sonic! �Sonic, el erizo!",
	"�Dios, Amy, �por qu� ten�as\nque seguirme hasta ac�?!",
	"Bah, me tengo que encargar de �l.\nParece que Shadow,\nel erizo que se parece a m�,\ntambi�n est� en la isla.",
	"Ahora que s� eso, me voy.\n�Los tomo dormidos a los\nmilitares y chau!",
	"Ah... �entonces ahora\ns� soy un pr�fugo?",

	// Shadow 1
	"�Soy Sonic! �Sonic, el erizo!",
	"Sal� de la base\nmilitar en una pieza.\n�Y lo que me encuentro!",
	"�Shadow, esta vez sos m�o!",

	// Green Forest
	"�Soy Sonic! �Sonic, el erizo!",
	"Estaba a punto de\najustar cuentas con Shadow,\npero eso ya no importa.\nEggman dice que va a volar\nla isla en cinco minutos.",
	"Eggman dice que va a volar\nla isla en cinco minutos.", // this one is unused for some reason (so you can move it to the previous line with some line breaks)
	"�Agh, primero hay que\nsalir de esta isla!\n�Tengo que avisar a Amy y a Tails!",

	// Pumpkin Hill
	"Soy Knuckles, el equidna.\nDecime Knuckles.",
	"Sintiendo una tenue presencia\nde la Esmeralda Maestra,\ntermin� en unas monta�as lejanas.",
	"El ambiente se ve turbina,\npero no puedo tener miedo.",
	"�Tengo que conseguir r�pido las\npiezas de la Esmeralda Maestra!",

	// Mission Street
	"Mi nombre es Miles Prower,\npero todos me llaman Tails.",
	"Eggman hizo una declaraci�n\nde conquista del mundo.",
	"Planea dominarnos con una\narma terrible que destruy�\nmedia Luna. �No voy\na dejar que eso pase!",
	"Parece que Eggman\nest� usando las Esmeraldas Caos\npara alimentar esa arma.",
	"�As� que tambi�n vamos a usar\nuna Esmeralda Caos para saber\nd�nde est�n Eggman y compa��a!",
	"Primero debemos hallar\nun lugar seguro.",

	// Aquatic Mine
	"Soy Knuckles, el equidna.\nDecime Knuckles.",
	"Segu� la se�al de la\nEsmeralda Maestra a las monta�as.",
	"Parece que esta era\nuna mina carbon�fera.\nAhora est� parcialmente inundada.",
	"Va a costarme encontrar\nlas piezas, pero no puedo\nquejarme todo el tiempo.",
	"�Tengo que conseguir r�pido las\npiezas de la Esmeralda Maestra!",

	// Route 101
	"Mi nombre es Miles Prower,\npero todos me llaman Tails.",
	"Intent� ubicar a Eggman usando\nlas lecturas de las Esmeraldas Caos.",
	"Resulta que Eggman y\ncompa��a est�n en el espacio.",
	"�Siendo as�, voy a hacer\nlo que sea para saber\nd�nde est� Eggman!",
	"No te preocupes, Amy.\n�No lo parece, pero s�\nconducir bastante bien!",
	"�S� que voy a\nencontrar al presidente!",

	// Hidden Base
	"Me llamo Miles Prower,\npero todos me llaman Tails.",
	"Nos subimos a la limusina del\npresidente y ubicamos a Eggman.",
	"�l y sus amigos est�n en\nuna colonia espacial llamada ARK.",
	"�Nuestro pr�ximo destino\nes una base secreta de Eggman\nen una pir�mide en el desierto!",
	"�Muy bien! �Primero voy\nyo a encontrar la entrada!",

	// Pyramid Cave
	"�Soy Sonic! �Sonic, el erizo!",
	"Nos colamos en la pir�mide a\nbuscar en la base secreta de Eggman.",
	"Tiene que haber una forma\nde llegar al espacio.\nNo perdamos m�s tiempo. �En marcha!",

	// Death Chamber
	"Soy Knuckles, el equidna.\nDecime Knuckles.",
	"La base secreta de Eggman est�\nen lo profundo de la pir�mide.",
	"Parece que necesitamos unas\nllaves para abrir esta puerta.",
	"�Qu�? �Tengo que encontrar la\nllave? �Me tienen que estar\njodiendo! Pero lo hago \nor la Esmeralda Maestra.",
	"�Les voy a mostrar por qu� soy\nel mejor cazatesoros del mundo!",

	// King Boom Boo
	"Soy Knuckles, el equidna.\nDecime Knuckles.",
	"Encontrar las llaves\nfue pan comido. Ahora podemos\nentrar a la base secreta.",
	"�Mmm? �Y esta presencia?\n��U-Un fantasma?!\n�Ser� el guardi�n de la pir�mide?",
	"No creo que se pueda razonar\ncon el tipo este. Perd�n, pero me\nvas a dejar pasar, as�\nte tenga que obligar!",

	// Egg Golem (hero)
	"�Soy Sonic! �Sonic, el erizo!",
	"Gracias a Knuckles,\npor fin pudimos abrir la puerta\nde la base secreta.",
	"�Lo que nos encontramos\nfue al mismo Eggman,\ncon un robot gigante!",
	"�Se nos adelant� y nos embosc�!",
	"�Mir� si me vas a parar\ncon ese mont�n de basura!",

	// Eternal Engine
	"Me llamo Miles Prower,\npero todos me llaman Tails.",
	"Tras robar un transbordador\nespacial de la base de Eggman,\npor fin llegamos a la\nColonia Espacial ARK.",
	"Se me ocurri� una idea\npara volar esa arma usando\nuna esmeralda bomba falsa.",
	"Espero que Sonic\nlo haya entendido.",
	"�Ups, tambi�n tengo\nque ir a destruir el\ngenerador de la colonia!",

	// Meteor Herd
	"Soy Knuckles, el equidna.\nDecime Knuckles.",
	"�Todas las piezas de la\nEsmeralda Maestra que hab�a reunido\nse salieron del transbordador!",
	"Proteger la Esmeralda Maestra\nno es una tarea f�cil.",
	"�Tengo que encontrarlas\nde nuevo antes de que\nse puedan volver a dispersar!",

	// Rouge
	"Soy Knuckles, el equidna.\nDecime Knuckles.",
	"Reun� la mitad de las piezas,\n�y en ese momento la murci�lago\nse me apareci�!",
	"�Ella debe tener la otra mitad!\n�Se acab� la joda!\n�No me voy a contener,\nni porque sea mujer!",
	"�Voy a conseguir\nel resto de la Esmeralda\nMaestra de vuelta!",

	// Crazy Gadget
	"�Soy Sonic! �Sonic, el erizo!",
	"Nuestro plan iba bien,\npero se fue de sab�tico.",
	"Parece que Amy fue secuestrada\npor Eggman. Si la quiero rescatar,\ntengo que entregar la esmeralda.",
	"No queda mucho tiempo antes de que\nEggman dispare esa arma de nuevo.",
	"�Tails, Amy, aguanten!",

	// Eggman 2
	"Me llamo Miles Prower,\npero todos me llaman Tails.",
	"Sonic cay� en la astuta trampa\nde Eggman y fue lanzado al espacio.",
	"�No es cierto...! �Sonic no\npudo haber muerto de esa forma!",
	"�No te vas a salir con\nla tuya, Eggman! �Tampoco te\npens�s que voy a huir!\n�Vas a caer!",

	// Final Rush
	"�Soy Sonic! �Sonic, el erizo!",
	"En el �ltimo momento,\nlogr� usar el Control Caos\ny escap� de la trampa de Eggman.",
	"�Quedan pocos minutos antes\nde que esa arma dispare!",
	"�Agh! �En ese caso,\nvoy a lanzar esta esmeralda bomba\na la boca del ca��n antes de eso!",

	// Shadow 2
	"�Soy Sonic! �Sonic, el erizo!",
	"Tengo el tiempo contado\ny �l apareci� frente a m�.\nParece que ahora s� lleg� la hora\nde ajustar cuentas con Shadow.",
	"�Dale, Shadow,\nmostrame el poder de la\forma de vida suprema!",

	// Dark story recaps

	// Iron Gate
	"�Soy un genio cient�fico sin igual\nen el mundo, el Dr. Eggman!",
	"Encontr� por casualidad el diario\nde mi abuelo. Ah� describe la existencia de\nuna aterradora arma ultrasecreta llamada \"Shadow\".",
	"Adem�s, ha estado sellada en\nuna instalaci�n militar por 50 a�os.",
	"�Jum! �M�quina parada, m�quina oxidada!",
	"Entonces es la �ltima obra de mi abuelo,\nel profesor Gerald, el m�s\ngrande cient�fico de la historia.",
	"�Y voy a obtenerla!",

	// Hot Shot
	"Me llamo Shadow, el erizo.\nLa �nica forma de vida suprema.",
	"Estuve en un profundo\nsue�o por 50 a�os...",
	"Al despertar, frente a m� estaba\nel Dr. Eggman, nieto de mi creador,\nel profesor Gerald.",
	"Doctor, como agradecimiento por\ndespertarme, cumplir� su deseo.",
	"Primero, contemple mi poder.\nConvertir� esa basura militar\nen chatarra en diez segundos...",

	// Dry Lagoon
	"Me llamo Rouge, la murci�lago,\nm�s conocida en mi c�rculo\ncomo Rouge, la cazatesoros.",
	"Me encantan las joyas. Todo iba\nbien hasta que encontr� mi\ngran presa, la Esmeralda Maestra.",
	"Pero ese equidna hinchapelotas\nme persegu�a. �Hombres!\n�Odio cuando se ponen posesivos!",
	"Y entonces, el Dr. Eggman,\nel bigote ese, se col� y la\nEsmeralda Maestra qued� destrozada.",
	"�Ay, Dios! �Mir� lo que hiciste!",
	"Ahora tengo que reunir\nlas piezas de la Esmeralda Maestra\nlo antes posible.",

	// Sand Ocean
	"�Soy un genio cient�fico sin igual\nen el mundo, el Dr. Eggman!",
	"Todo bien hasta el momento en que\nliber� a Shadow de la base militar.",
	"Ahora �l quiere que lleve\nlas Esmeraldas Caos a la\nColonia Espacial ARK.",
	"No entiendo bien la situaci�n.\nCreo que deber�a volver a la\nbase y echar una nueva ojeada.",

	// Radical Highway
	"Me llamo Shadow, el erizo.\nLa �nica forma de vida suprema.",
	"Rob� la Esmeralda Caos\ndel banco de esta naci�n.",
	"Sepan o no de m�, los militares\ny la polic�a me persiguen sin descanso.\nQu� sinsentido.",
	"No tengo tiempo para ocuparme de nimiedades.\nEs hora de salir de esta ciudad.",

	// Egg Quarters
	"Me llamo Rouge, la murci�lago,\nm�s conocida en mi c�rculo\ncomo Rouge, la cazatesoros.",
	"Miren, cuando el viejo ese de\nEggman apareci�, instal� un\ntransmisor en su m�quina.",
	"El motivo a�n es secreto. Jiji...",
	"Y as�, lo segu� y llegu� al\ninterior de la pir�mide,\npero hay un callej�n sin salida.",
	"Parece que tengo que buscar\nlas llaves para pasar al otro\nlado de esta puerta.",

	// Lost Colony
	"�Soy un genio cient�fico sin igual\nen el mundo, el Dr. Eggman!",
	"Siguiendo lo dicho por Shadow,\nllegu� a la Colonia Espacial ARK.",
	"�Qu� hay exactamente en la sala\nde control central de esta colonia?\nTengo que llegar all� y averiguarlo.",

	// Weapons Bed
	"�Soy un genio cient�fico sin igual\nen el mundo, el Dr. Eggman!",
	"Con Rouge, la murci�lago, como\ncompa�era, volvimos a Isla Prisi�n.",
	"Vinimos para robar las Esmeraldas\nCaos de la b�veda militar.",
	"�Primero, yo tomo la delantera\ny enquilombo a los militares!\n�Que empiece la operaci�n!",

	// Tails 1
	"�Soy un genio cient�fico sin igual\nen el mundo, el Dr. Eggman!",
	"Justo cuando nos dirig�amos a las\ninstalaciones militares para robar\nlas Esmeraldas Caos, �nos encontramos\ncon una resistencia impensable!",
	"�Shadow, Rouge!\n�D�jenme esto a m� y ap�rense!",
	"Ahora, �c�mo deber�a cocinar\na este zorrito?",

	// Security Hall
	"Me llamo Rouge, la murci�lago,\nm�s conocida en mi c�rculo\ncomo Rouge, la cazatesoros.",
	"Bueno, vine a la b�veda militar,\ntal y como lo plane� el Doctor.",
	"Tengo que encontrar las tres\nEsmeraldas Caos que est�n ac�,\naunque para m� es una boludez.",

	// Flying Dog
	"Me llamo Rouge, la murci�lago,\nm�s conocida en mi c�rculo\ncomo Rouge, la cazatesoros.",
	"�Qu� horror...!\n��C�mo pude liarla as�?!",
	"Cuando junt� las tres\nEsmeraldas Caos, me puse a\nboludear un poco en la b�veda.",
	"El sistema de seguridad se\nactiv�, �encerr�ndome dentro!",
	"Estoy atrapada ah� con un caza\npesado apareci�ndose y un l�mite\nde tiempoen el detonador que\nShadow puso. �Odio esto!",
	"�Bueno, primero tengo\nque arreglar esto!",

	// White Jungle
	"Me llamo Shadow, el erizo.\nLa �nica forma de vida suprema.",
	"Parece que esa chica murci�lago fall�.",
	"No me importa lo que le pase\na una murci�lago, pero si tiene\nlas Esmeraldas Caos, es otra historia.",
	"Ahora tengo que darme prisa.\nNo falta mucho para la explosi�n...",

	// Sonic 1
	"Me llamo Shadow, el erizo.\nLa �nica forma de vida suprema.",
	"Mientras me dirig�a a\nrescatar a Rouge, ese erizo\napareci� frente a m�.",
	"No conoce su lugar...\n�Tu poder no se me compara!",

	// Route 280
	"Me llamo Rouge, la murci�lago,\nm�s conocida en mi c�rculo\ncomo Rouge, la cazatesoros.",
	"Usando las Esmeraldas Caos que robamos\nde la base militar, finalmente declaramos\nnuestra conquista del mundo entero.",
	"Pero el Ca��n Eclipse,\nque es lo m�s importante,\ntarda demasiado en cargarse.",
	"Decidimos buscar la �ltima\nEsmeralda Caos.\n�Tenemos que encontrar\nr�pidamente al equipo del zorrito!",

	// Sky Rail
	"Me llamo Shadow, el erizo.\nLa �nica forma de vida suprema.",
	"Tras recibir una llamada de Rouge,\nsal� en persecuci�n del avi�n que\ntransporta la �ltima Esmeralda Caos.",
	"Una cadena monta�osa y t�trica\me rodea... Pero no voy\na dejar que escapen.",

	// Egg Golem (dark)
	"�Soy un genio cient�fico sin igual\nen el mundo, el Dr. Eggman!",
	"Iba a emboscar a Sonic cuando\napareciera en mi base secreta y hacerlo\npedazos con mi preciado robot, pero...",
	"�Qu� chatarra inservible!\n��C�mo se te ocurre pechearla tanto,\ny encima te volv�s loco\ny te pon�s en contra m�a?!",
	"Ah... �fuera de mi camino!\n�El equipo de Sonic est�\na punto de irse!",

	// Mad Space
	"Me llamo Rouge, la murci�lago,\nm�s conocida en mi c�rculo\ncomo Rouge, la cazatesoros.",
	"Pero supongo que eso\nno es todo lo que hago.",
	"No hac�a mucho tiempo desde\nque llegu� y me puse a la\nobra de mi labor secreta cuando\nlos tipos estos llegaron.",
	"Eso quiere decir que llegaron\nlas piezas de la Esmeralda Maestra.\n�Es mi chance!",
	"Ya consegu� la data sobre el\nProyecto Shadow, as� que termino\nde llevarme esa gema y\nme despido de este sucucho.",

	// Knuckles
	"Me llamo Rouge, la murci�lago,\nm�s conocida en mi c�rculo\ncomo Rouge, la cazatesoros.",
	"�Dios, este equidna termo\nno sabe cu�ndo cortarla!",
	"�Me vas a entregar\nla Esmeralda Maestra,\nte guste o no!",

	// Cosmic Wall
	"�Soy un genio cient�fico sin igual\nen el mundo, el Dr. Eggman!",
	"Finalmente el grupo de Sonic\nse infiltr� en la colonia.",
	"��Y hay dos firmas de\nEsmeraldas Caos?!\n��Qu� carajos pasa ac�?!",
	"Deben estar tramando algo despreciable.",
	"Si la cosa es as�,\n�no me puedo quedar sentado!\n�Voy a volver a la colonia\ny terminar con esto!",

	// Tails 2
	"�Soy un genio cient�fico sin igual\nen el mundo, el Dr. Eggman!",
	"�Mujajaja! �Al fin lo logr�!\n�Convert� a ese erizo\ninfumable en polvo espacial!",
	"�Y? �Qu� vas a hacer, Tails?\n�Si insist�s con desafiarme,\nno voy a mostrar piedad!",

	// Final Chase
	"Me llamo Shadow, el erizo.\nLa �nica forma de vida suprema.",
	"Por fin, las siete Esmeraldas Caos\nest�n ac�. Estoy muy cerca\ndel momento de que\nmi deseo se cumpla.",
	"Pero incluso a estas alturas,\nalguien parece dirigirse a la\nboca del Ca��n Eclipse.\nQu� p�rdida de tiempo...",
	"Pero en este plan no hay lugar\npara errores. Hay que eliminar\ntodas las incertidumbres.",

	// Sonic 2
	"Me llamo Shadow, el erizo.\nLa �nica forma de vida suprema.",
	"Para mi sorpresa, era ese erizo azul\nel que se dirig�a al Ca��n Eclipse.",
	"Pens� que la c�psula lo hab�a\nconvertido en polvo espacial,\npero parece que no fue as�.",
	"Ahora estoy convencido.\n�Este erizo es peligroso!",
	"Como quieras, lo terminamos ac�.\n�Vas a ser testigo del poder\nde la forma de vida suprema!",

	// Last story recaps

	// Cannon's Core
	"Me llamo Amy Rose.\n�Una chica encantadora y en�rgica!",
	"�Algo terrible pas�! Un hombre\nllamado Profesor Gerald cre�\nun programa hace mucho tiempo.",
	"�Se activ� y esta colonia\nest� a punto de estrellarse\ncontra la superficie!",
	"Parece que Eggman fue enga�ado\npor Shadow despu�s de todo.",
	"Si es as�, le dir�a que\neso le pasa por salame,\npero ser�a muy desubicado ahora.",
	"Al final, todos decidieron\ntrabajar juntos e ir a lo m�s\nprofundo de la colonia\npara parar a las\nEsmeraldas Caos desenfrenadas.",
	"�No queda mucho tiempo!\n��xitos!",

	// The Biolizard
	"Me llamo Shadow, el erizo.\nLa �nica forma de vida suprema.",
	"Gracias a ella, pude recordar\nel verdadero deseo de Mar�a.",
	"Ahora que despert� de verdad,\nveo al prototipo de la\nforma de vida suprema.",
	"�Sonic, fren� las Esmeraldas\nCaos mientras yo lo atraigo!",

	// The Finalhazard
	"�Soy Sonic! �Sonic, el erizo!",
	"�Las Esmeraldas Caos\nya no est�n enloquecidas,\npero la colonia sigue cayendo!",
	"�Ese prototipo se hizo uno con\nla colonia y va a golpear\nla superficie con todos nosotros!",
	"Al final la colonia entr� en\nla atm�sfera con el prototipo.\n�Hay que vencerlo ya!",
	"Ahora es el momento de demostrar\nel poder de S�per Sonic, �la fuerza\nsuprema que re�ne los deseos de todos!",

	// 2P battle modes

	"\tEleg� un juego de batalla.",
	"\tBatalla aleatoria.",
	"\tBatalla de carrera de acci�n.",
	"\tBatalla de caza de tesoros.",
	"\tBatalla de disparos.",
	"\tKarate Chao.",
	"\tCarrera Chao.",
	"\tCarrera de Karts.",
	"\tEleg� un personaje para la batalla.",

	// 2P battle character descriptions

	"SONIC",
	"Erizo supers�nico.",
	"M�s veloz con 20 Anillos,",
	"ataca con 40 Anillos",
	"y para el tiempo con 60.",

	"SHADOW",
	"La forma de vida suprema",
	"que cre� el Pr. Gerald.",
	"Misma velocidad y",
	"ataques que Sonic.",

	"AMY",
	"Chica en�rgica y alegre",
	"enamorada de Sonic.",
	"No es muy r�pida, pero",
	"ataca con menos Anillos.",

	"METAL SONIC",
	"Robot parecido a Sonic que",
	"debut� en \"Sonic CD\".",
	"Buena aceleraci�n, pero",
	"sin ataques especiales.",

	"KNUCKLES",
	"Equidna que protege la",
	"Esmeralda Maestra.",
	"Usa un ataque especial",
	"por cada 20 Anillos.",

	"ROUGE",
	"Una cazadora de tesoros",
	"especializada en joyas.",
	"Utiliza el mismo ataque",
	"especial que Knuckles.",

	"TIKAL",
	"Ni�a de la tribu Knuckles,",
	"de Sonic Adventure.",
	"R�pida, pero no es buena",
	"peleando ni buscando.",

	"CAOS CERO",
	"Guardi�n de las Esm.",
	"Caos en Sonic Adventure.",
	"Es lento, pero pega",
	"duro y lejos",

	"TAILS",
	"Un zorro con dos colas.",
	"Pelea con el \"Cicl�n\".",
	"Usa un ataque especial",
	"cada 20 Anillos.",

	"EGGMAN",
	"Genio cient�fico malvado",
	"que detesta a Sonic.",
	"Usa el mismo ataque que",
	"Tails con 20 Anillos.",

	"UCB CHAO",
	"Esta m�quina creada por",
	"Tails ayuda a un Chao.",
	"Es d�bil, pero es el",
	"personaje m�s r�pido.",

	"UCB CHAO SOMBR�O",
	"Un Chao sombr�o en",
	"una m�quina de Eggman.",
	"Es fuerte, pero es el",
	"personaje m�s lento.",

	"SUPER SONIC",
	"Sonic potenciado por",
	"las 7 Esmeraldas Caos.",
	"Es muy r�pido, pero si",
	"no tiene Anillos, muere.",

	"SUPER SHADOW",
	"Es muy r�pido, pero si",
	"las 7 Esmeraldas Caos.",
	"Muy r�pido pero",
	"no tiene Anillos, muere.",

	// 2P battle stage select

	"\tEleg� un nivel para la batalla.",
	"\tContenido descargable necesario para desbloquear el nivel.",
	"\tElegir nivel del nivel 1 aleatoriamente.",
	"\tElegir nivel del nivel 2 aleatoriamente.",
	"\tElegir nivel del nivel 3 aleatoriamente.",
	"\tElegir nivel del nivel 4 aleatoriamente.",
	"\tCambiar la configuraci�n de la batalla.",
	"\tVolver a elegir fase.",
	"\tDesventaja autom�tica ACTIVAR / DESACTIVAR.",
	"\tCambiar configuraci�n de la desventaja autom�tica.",
	"\tEstablecer l�mite de tiempo ACTIVAR / DESACTIVAR.",
	"\tCambiar n�mero de batallas.",

	// Emblem results

	"\tNivel de Sonic.",
	"\tNivel de Tails.",
	"\tNivel de Knuckles.",
	"\tNivel de Shadow.",
	"\tNivel de Eggman.",
	"\tNivel de Rouge.",
	"\tMisiones cumplidas de Sonic.",
	"\tMisiones cumplidas de Tails.",
	"\tMisiones cumplidas de Knuckles.",
	"\tMisiones cumplidas de Shadow.",
	"\tMisiones cumplidas de Eggman.",
	"\tMisiones cumplidas de Rouge.",
	"\tMostrar progreso del modo de historia.",
	"\t�ltimo nivel.",
	"\tCarrera Chao.",
	"\tMinijuego de Karts.",
	"\tMinijuego de pelea contra jefes.",
	"\tMisiones cumplidas del �ltimo nivel",
	"\tJuego de carreras de Chao.",
	"\tJuego de pelea de Chao.",

	// Sound test with Battle DLC

	"\tM�sica de Karate Chao.",
	"\tM�sica de selecci�n de modo de Karate Chao.",
	"\tM�sica de Gran campe�n de Karate Chao.",
	"\tM�sica de los resultados de Karate Chao.",
	"\tM�sica del interior de la cueva.",
	"\tM�sica del Men� de batalla.",
	"\tM�sica de Carrera C�ntrica.",
	"\tM�sica de Carrera en Rieles.",
	"\tM�sica de B�squeda en la Piscina.",
	"\tM�sica de B�squeda Planetaria.",
	"\tM�sica de Carrera por la Cubierta.",
	"\tM�sica de Carrera Piramidal.",
	"\tM�sica de Partida de Chao.",

	// 2P battle score reset
	
	"\tPuedes borrar los resultados del modo de 2 jugadores.",
	"\tSe borrar�n los resultados del modo de 2 jugadores. �Borrar?",
	"\tResultados de batalla borrados.",

	// SA2B TV settings

	"\tCambiar a salida progresiva.",
	"\tConfigurar salida progresiva.",
	"\tConfigurar salida VHS.",

	// SA2B unlock stuff messages

	"\tCompletaste las misiones\nde Sonic, �as� que ahora\npuede usar un nuevo kart!",
	"\tCompletaste las misiones\nde Tails, �as� que ahora\npuede usar un nuevo kart!",
	"\tCompletaste las misiones\nde Knuckles, �as� que ahora\npuede usar un nuevo kart!",
	"\tCompletaste las misiones\nde Shadows, �as� que ahora\npuede usar un nuevo kart!",
	"\tCompletaste las misiones\nde Eggman, �as� que ahora\npuede usar un nuevo kart!",
	"\tCompletaste las misiones\nde Rouge, �as� que ahora\npuede usar un nuevo kart!",
	"\tCompletaste todas las\nmisiones de Sonic con Rango \"A\"",
	"\tUn nuevo traje para Sonic\nse puede usar en el\nmodo para 2 jugadores",
	"\tCompletaste todas las\nmisiones de Tails\ncon Rango \"A\"",
	"\tUn nuevo traje para Tails\nse puede usar en el\nmodo para 2 jugadores",
	"\tMisiones Knuckles\ncon Rango \"A\"",
	"\tUn nuevo traje para Knuckles\nse puede usar en el\nmodo para 2 jugadores",
	"\tCompletaste todas las\nmisiones de Shadow\ncon Rango \"A\"",
	"\tUn nuevo traje para Shadow\nse puede usar en el\nmodo para 2 jugadores",
	"\tCompletaste todas las\nmisiones de Eggman\ncon Rango \"A\"",
	"\tUn nuevo traje para Eggman\nse puede usar en el\nmodo para 2 jugadores",
	"\tCompletaste todas las\nmisiones de Rouge\ncon Rango \"A\"",
	"\tUn nuevo traje para Rouge\nse puede usar en el\nmodo para 2 jugadores",
	"\t�Felicidades!\nTienes todos los emblemas.\nSe desbloque� un nivel secreto.",
	"\t�Felicidades! Completaste Colina Verde\ncon Rango A. Ahora dispones de los m�s\nfuertes personajes para el modo\nde 2 jugadores de Sonic y Shadow.",
	"��Se desbloquearon nuevos\nniveles de batalla en el\nmodo de 2 jugadores (Nivel 4)",

	// Other memory card stuff

	"\tEsta tarjeta de memoria es incompatible.",
	"\tHay que formatear la tarjeta de memoria.",
	"\tFormatear tarjeta en pantalla de tarjeta.",
	"\t�Formatear?",
	"\tEsta tarjeta de memoria est� defectuosa.",
	"\tN�mero m�ximo de archivos superado.",
	"\tDemasiados archivos. Chao sin guardar.",
	"\tEste archivo est� da�ado. �Quer�s formatear?",

	// 2P battle main screen
	
	"\tEl J2 tiene que presionar � para confirmar.",
	"\tJ1 y J2 tienen que presionar � para continuar.",
	"\tJ1 y J2 tienen que presionar � para continuar.",
	"\tJ1 y J2 tienen que presionar � para continuar.",

	// DLC
	
	"\tDesbloquear juego completo.",
	"\tContenido descargable necesario\npara desbloquear la selecci�n de tema.",
};


void ReplaceAdvertiseArgentino()
{
	AdvertiseGamepad[Language_Spanish] = AdvertiseKeyboard[Language_Spanish] = AdvertiseSpanishArgentino; // easy way, setting both gamepad and keyboard versions to be the same (they only have differences in, like, 5 lines or something)
}
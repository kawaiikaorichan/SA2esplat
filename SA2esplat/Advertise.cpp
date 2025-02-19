#include "pch.h"
#include "Mod.h"

// Código realizado por Irregular Zero. ¡Muchísimas gracias!

DataArray(const char**, AdvertiseGamepad, 0xC70590, 6);
DataArray(const char**, AdvertiseKeyboard, 0xC705A8, 6);

const char* AdvertiseSpanishNeutro[]
{
	// Main menu
	
	"\tModo para 1 jugador.",
	"\tModo para 2 jugadores.",
	"\tVe la tabla de clasificaciones.",
	"\tVe los Logros.",
	"\tObtén ayuda o ajusta las opciones.",
	"\tDescarga contenido disponible.",
	"\tSaldrás del juego.",

	// Help & options

	"\tVer los contenidos extra del juego.",
	"\tVideo de bonificación.",
	"\tVe una descripción de cómo jugar.",
	"\tVe cómo están mapeados los controles.",
	"\tConfigura las opciones del juego.",
	"\tMira los créditos.",

	// Single player

	"\tJuega la historia.",
	"\tElige una escena de la historia.",
	"\tJuega los niveles que ya pasaste.",

	// Some 2P mode stuff
	
	"\tHay 3 tipos de juegos.",
	"\tEste es el juego de carreras de Kart.",
	"\tEn carreras Chao hay hasta (8) Chao.",

	// Extras

	"\tMostrar o actualizar la clasificación.",
	"\tOmochao explicará el juego.",
	"\tMostrar la lista de los emblemas.",
	"\tJugar eventos descargados.",

	// Memory card select (console leftover)
	
	"\tElige una tarjeta de memoria.",
	"\tNo hay bloques de memoria libres.",

	// File select

	"\tElige una partida.",
	"\tCrea un archivo nuevo.",
	"\tCarga una partida.",
	"\t¿Quieres borrar esta partida?",
	"\tNo hay bloques de memoria libres.",

	// Options
	
	"\tEscucha la música.",
	"\tElige Estéreo / Mono.",
	"\tConfigura la función de vibración.",
	"\tElige el idioma de las voces.",
	"\tGuarda o carga datos de juego.",
	"\tCambia el tema de la pantalla del menú.",
	"\tCambia la configuración PAL TV.",
	"\tCambia el sonido a estéreo.",
	"\tCambia el sonido a mono.",
	"\tActiva la función de vibración.",
	"\tDesactiva la función de vibración.",
	"\tVoces en español (próximamente todas).",
	"\tVoces en japonés.",
	"\tSubtítulos en inglés.",
	"\tSubtítulos en japonés.",
	"\tSubtítulos en alemán.",
	"\tSubtítulos en francés.",
	"\tSubtítulos en español.",

	// Sound test general

	"\tElige una categoría de música.",
	"\tElige una canción o música.",

	// Menu themes
	
	"\tDebes cargar el archivo del tema.",
	"\tElige un tema.",
	"\tCargando el archivo de tema.",
	"\tNo se pudo cargar el archivo.",
	"\tNo hay un archivo de tema.",
	"\tDescarga el archivo de la página web.",

	// TV settings

	"\tPrueba de compatibilidad de TV 60Hz.",
	"\tUna imagen de Sonic aparecerá en 5 segundos.",
	"\tSi la ves bien, es compatible con 60Hz.",
	"\tVisualización con 50Hz.",
	"\tLa imagen se ve en todas las TV PAL",
	"\tVisualización con 60Hz.",
	"\tSe necesita una TV compatible 60Hz.",

	// Separate string for Italian language
	
	"\tSubtítulos en italiano.",

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

	"\tElige una historia.",
	"\tEmpieza en cualquier escena.",

	// Stage select

	"\tElige un nivel.",
	"\tElige una misión.",

	// Character select
		
	"\tElige un personaje.",

	// Boss attack

	"\tPelea contra los jefes de cada historia.",

	// Dreamcast 2P mode

	"\tElige un grupo con el panel de control.",
	"\tElige el tipo de juego.",
	"\tTipo de juego elegido al azar.",
	"\tElige un nivel de batalla.",
	"\tElige un nivel de batalla.",

	// Kart racing

	"\tElige un conductor.",
	"\tElige un circuito.",
	"\tJuega en el circuito descargado.",
	"\tComprobando tarjeta de memoria.",
	"\tElige un circuito descargado.",
	"\tNo se encontró ningún archivo de circuito.",
	"\tComprobando tarjeta de memoria.",
	"\tNo se encontró ningún archivo descargado.",
	"\tElige un evento descargado.",
	"\t¿Quieres jugar a este evento?",
	"\tEste nivel todavía no está disponible.",

	// Sound test

	"\tTema principal de Sonic Adventure 2.",
	"\tTema de Sonic.",
	"\tTema de Tails.",
	"\tTema de Knuckles.",
	"\tTema de Shadow.",
	"\tTema de Eggman.",
	"\tTema de Rouge.",
	"\tTema de Amy.",
	"\tMúsica para las peleas contra jefes.",

	"\tMúsica de Escape Citadino.",
	"\tMúsica de Cañón Salvaje.",
	"\tMúsica de Vía Prisión.",
	"\tMúsica de Puerto Metálico.",
	"\tMúsica de Bosque Verde.",
	"\tMúsica de Colina Calabaza.",
	"\tMúsica de Misión Callejera.",
	"\tMúsica de Mina Acuática.",
	"\tMúsica de la Carrera de Karts.",
	"\tMúsica de Base Oculta.",
	"\tMúsica de Cueva Piramidal.",
	"\tMúsica de Cámara Mortuoria.",
	"\tMúsica de Motor Eterno.",
	"\tMúsica de Rancho Meteórico.",
	"\tMúsica de Trampa Locuaz.",
	"\tMúsica de Carrera Final.",
	"\tMúsica de Portal Férreo.",
	"\tMúsica de Laguna Seca.",
	"\tMúsica de Océano Arenoso.",
	"\tMúsica de Carretera Radical.",
	"\tMúsica de Egg Quarters.",
	"\tMúsica de Colonia Perdida.",
	"\tMúsica de Lecho Armero.",
	"\tMúsica de Sala Segura.",
	"\tMúsica de Jungla Blanca.",
	"\tMúsica de Rieles Celestes.",
	"\tMúsica de Espacio Loco.",
	"\tMúsica de Muro Cósmico.",
	"\tMúsica de Caza Final.",
	"\tMúsica de Núcleo del Cañón.",

	"\tMúsica del Jardín Chao.",
	"\tMúsica del Kinder Chao.",
	"\tMúsica del Vestíbulo Chao.",
	"\tMúsica de la ceremonia de premios.",
	"\tMúsica de la carrera nivel principiante.",
	"\tMúsica de la carrera de desafío.",
	"\tMúsica de la entrada.",
	"\tMúsica de la carrera Joya.",
	"\tMúsica de la danza de apareamiento.",
	"\tMúsica de fuga.",
	"\tMúsica de la entrega de premios.",
	"\tMúsica del jardín Sombrío.",
	"\tMúsica del jardín Heróico.",
	"\tMúsica de la carrera Sombría.",
	"\tMúsica de la carrera Heróica.",
	"\tMúsica de festival del jardín Sombrío.",
	"\tMúsica de festival del jardín Heróico.",
	"\tMúsica del Jardín Chao.",

	"\tMúsica de evento.",
	"\tJingle del nivel completado.",
	"\tJingle de velocidad extra.",
	"\tJingle de invulnerabilidad.",
	"\tJingle de ahogamiento.",
	"\tJingle de vida extra.",
	"\tJingle de la pantalla Continuar.",

	"\tMúsica del título.",
	"\tMúsica del menú.",
	"\tMúsica del tutorial.",

	"\tMúsica de Colina Verde.",

	// Unlock stuff messages

	"\tAhora puedes elegir escenas\nde la historia Heróica.",
	"\tElige peleas contra los\njefes de la historia Heróica.",
	"\tAhora puedes elegir escenas\nde la historia Sombría.",
	"\tElige peleas contra los\njefes de la historia Sombría.",
	"\tTodas las peleas contra los\njefes están disponibles.",
	"\tMinijuego: Ya están disponibles\nlas carreras de karts con 3 circuitos.",
	"\tMinijuego: Ya están disponibles\nlas carreras de karts para 2 jugadores.",
	"\t¡Completaste las misiones de\nSonic! Elige otra skin de Sonic\nen el modo para 2 jugadores.",
	"\t¡Completaste las misiones de\nTails! Selecciona otra skin de Tails\nen el modo para 2 jugadores.",
	"\t¡Completaste las misiones de\nKnuckles! Selecciona otro skin de Knuckles\nen el modo para 2 jugadores.",
	"\t¡Completaste las misiones de\nShadow! Selecciona otra skin de Shadow\nen el modo para 2 jugadores.",
	"\t¡Completaste las misiones de\nEggman! Selecciona otra skin de Eggman\nen el modo para 2 jugadores.",
	"\t¡Completaste las misiones de\nRouge! Selecciona otra skin para Rouge\nen el modo para 2 jugadores.",
	"\tCompletaste todas las misiones\nde Sonic con Rango \"A\".",
	"\tElige un personaje nuevo\nen el modo Versus de Sonic para 2J.",
	"\tCompletaste todas las misiones\nde Tails con Rango \"A\".",
	"\tElige un personaje nuevo\nen el modo Versus de Tails para 2J.",
	"\tCompletaste todas las misiones\nde Knuckles con Rango \"A\".",
	"\tElige un personaje nuevo\nen el modo Versus de Knuckles para 2J.",
	"\tCompletaste todas las misiones\nde Shadow con Rango \"A\".",
	"\tElige un personaje nuevo\nen el modo Versus de Shadow para 2J.",
	"\tCompletaste todas las misiones\nde Eggman con Rango \"A\".",
	"\tElige un personaje nuevo\nen el modo Versus de Eggman para 2J.",
	"\tCompletaste todas las misiones\nde Rouge con Rango \"A\".",
	"\tElige un personaje nuevo\nen el modo Versus de Rouge para 2 jugadores.",
	"\t¡Felicidades!\n¡Reuniste todos los emblemas!\nDesbloqueaste un nuevo nivel.",

	// Hero story scene select

	"El principio",
	"Aparece Knuckles",
	"Rescatando\na Sonic",
	"Huida de\nIsla Prisión",
	"Cara a cara\ncon Shadow",
	"Montaña Fantasma",
	"Dominio Mundial",
	"Mina Acuática",
	"¿Dónde está\nEggman?",
	"Base oculta\nde Eggman",
	"Despegue del\ntransbordador",
	"La Colonia Espacial\n\"ARK\"",
	"Últimas piezas de la\nEsmeralda Maestra",
	"Sonic tiene\nproblemas",
	"La última\noportunidad",

	// Dark story scene select

	"El principio",
	"Aparece Rouge",
	"¡La base oculta\notra vez!",
	"El pasado\nde Shadow",
	"Infíltrate en \nla base oculta",
	"Reunión Sombría",
	"Obtener las Esmeraldas\nCaos",
	"Pelea contra\nSonic",
	"El Imperio\nEggman",
	"La última\nEsmeralda Caos",
	"Emboscada en\nla base oculta",
	"Pelea contra\nKnuckles",
	"Plan de Eggman",
	"El misterio\nde Shadow",
	"La última\nbatalla",

	// Last story scene select

	"El principio",
	"La última misión",
	"La batalla\nsuprema",
	"La última\nesperanza",

	// World ranking and network connection stuff (unused)

	"Presiona el botón de elección de acción (Y) para\nactualizar los datos.",
	"Clasificación mundial por tiempo",
	"Clasificación mundial por puntos",
	"Clasificación mundial de Emblemas",
	"Clasificación Total",
	"Clasificación mundial por niveles",
	"Clasificación mundial por niveles",
	"Crea tus comentarios",
	"\tDebes registrarte en la red para\nver las clasificaciones mundiales.",
	"\tUsa el buscador más reciente \npara registrarte en la red.",
	"\tConectando a la red.",
	"\tMientras estés conectado a la red,\nse te aplicarán las tasas telefónicas\ncorrespondientes a una llamada \nmetropolitana.\nConsulta el manual para \nobtener más información.",
	"\t¿Quieres conectarte?",
	"\t<Sí><No>",
	"\tConectando.",
	"\tMientras estés conectado a la red,\nse te aplicarán las tasas telefónicas.\n¿Quieres conectarte?\n",
	"\t<Sí><No>",
	"\tMarcando \201\226\201\226\201\226\201|\201\226\201\226\201\226\201|\201\226\201#Numeración en curso...",
	"\t<Cancelar>",
	"\tIntroduce el nombre del servidor y \nla contraseña.",
	"Nombre<++>",
	"Contraseña<++>",
	"\tNo se ha encontrado el módem.",
	"\tComprueba la conexión del módem.",
	"\tLa línea está ocupada.",
	"\tMarcando el siguiente número.",
	"\tLa línea está ocupada.",
	"\tVuelve a intentarlo más tarde.",
	"\tLa línea está ocupada.",
	"\tComprueba configuración del módem",
	"\tNo ha sido posible marcar.",
	"\tComprueba el cable del teléfono\no la configuración del módem.",
	"\tNo se ha podido conectar. \nLa línea está ocupada. Comprueba \nla configuración del módem.",
	"\tImposible conectar con el servidor.\nLa autentificación ha fallado.",
	"\tComprueba el nombre y contraseña.",
	"\tDesconexión automática.",
	"\tSe te cobrarán las tarifas telefónicas\nmientras estés conectado.\n¿Quieres conectarte?",
	"\tConectado a la Red Sonic.",
	"\tEl servidor está ocupado.",
	"\tVuelve a intentarlo más tarde.",
	"\tActualizando la base de datos.\nPuede tardar unos minutos.",
	"<Cancelar>",
	"\t¿Cancelar la conexión de datos?",
	"<Sí><No>",
	"\t¿Seguro que quieres desconectarte?",
	"<Sí><No>",
	"\tSubiste hasta el puesto <++> \nen la clasificación total.",
	"\tBajaste hasta el puesto <++> \nen la clasificación total.",
	"\tSubiste hasta el puesto <++> \nen <++> por puntos.",
	"\tSubiste hasta el puesto <++> \nen <++> por tiempo.",
	"\tSubiste hasta el puesto <++>\nen la clasificación de emblemas.",
	"\tBajaste hasta el puesto <++>\nen <++> por puntos.",
	"\tBajaste hasta el puesto <++>\nen <++> por tiempo.",
	"\tBajaste hasta el puesto <++>\nen la puntuación de emblemas.",
	"<++>",
	"\t¿Quieres usar este correo \nelectrónico para la confirmación?\n(Puedes configurar el correo para \nrecibir información más adelante.)",
	"<Sí><No>",
	"\tNo hay correo configurado.",
	"\tUsa el buscador más reciente para\ncambiar la configuración del correo.",
	"¿Eres <++>?",
	"\tIntroduce tu contraseña.",
	"\t<Aceptar><Cancelar><La olvidé>",
	"\tContraseña incorrecta.\nIntroduce la contraseña otra vez.",
	"<Aceptar><Cancelar><Olvidé con.>",
	"\t¿Quieres recibir tu contraseña\na través del correo electrónico?",
	"<Sí><No>",
	"\tSe te envió un correo. Míralo.",
	"\tBienvenido a la Red Sonic.",
	"\tIntroduce tu nombre de usuario.",
	"\tEl nombre de usuario no debe \nser superior a 12 caracteres.",
	"<Aceptar> <Cancelar>",
	"<++>",
	"\tEste nombre de usuario ya existe.",
	"\tIntroduce una contraseña para \nutilizar este nombre de usuario.",
	"<Aceptar><Cancelar><La olvidé>",
	"\tDespués, introduce la contraseña.",
	"\tLa contraseña deben tener mínimo \n5 caracteres y máximo 12.",
	"<Aceptar><Regresar>",
	"\tCrear cuenta de correo electrónico.",
	"\tSi olvidaste la contraseña, te la\npodemos mandar por correo.",
	"<Aceptar><Cancelar>",
	"\t¿Quieres compartir tu dirección de\ncorreo con otros usuarios?\nSi no quieres, selecciona \"No\".",
	"<Sí><No>",
	"\tElige el país y la región \ndonde vives.",
	"País: <++>",
	"Región: <++>",
	"<Aceptar><Cancelar>",
	"\tLa Red Sonic es una zona pública\ndonde se intercambia información\ncon otros usuarios del mundo.\nCompórtate de manera civilizada.\nLos usuarios pueden recibir avisos y\nse les puede exigir que no usen \neste servicio, si las actividades\nvan contra las reglas de la Red Sonic.",
	"",
	"",
	"Registro completado.",
	"\tMostrar la clasificación\ndesde los primeros puestos.",
	"\tLista de clasificaciones.",
	"\tBuscar clasificación por usuario.",
	"\tclasificación por país o región.",
	"\tIntroduce clasificación.",
	"<++>",
	"\tIntroduce el parámetro de búsqueda.",
	"<++>",
	"\tIntroduce el país que quieres ver.",
	"País<++>",
	"Región<++>",
	"<Aceptar> <Cancelar>",
	"\tPuedes ver la información del usuario.",
	"\tPresiona el botón de ataque (B) para volver\na la pantalla de la lista.",

	// Hero story recaps

	// City Escape
	"¡Soy Sonic! ¡Sonic, el erizo!",
	"Unos tipos medio raros\naparecieron de repente y me invitaron\na dar un paseíto aéreo...",
	"¿Eh? ¿Pero qué...? ¡¿Esposas?!\n¡A ver, un momentito! ¿Dicen que\nsoy un prófugo de una instalación militar?",
	"Al principio me dio risa,\npero ya me colmaron la paciencia.",
	"¡Me largo de este lugar\ntan aburrido!",

	// Big Foot
	"¡Soy Sonic! ¡Sonic, el erizo!",
	"Vaya, esos tipos son muy tercos.\n¡¿Pero quién creen que soy?!",
	"De tanto perseguirme ya les\nanocheció, y ahora hasta\nllamaron a un enorme robot.",
	"Supongo que quieren atraparme\na cualquier costo.",
	"¡Ja! Quiero verlos intentarlo.\n¡Esta chatarra no durará ni tres minutos!",

	// Wild Canyon
	"Soy Knuckles, el equidna.\nLlámame Knuckles.",
	"Tenían que robar precisamente\nla Esmeralda Maestra de Isla Ángel.",
	"La ladrona fue esta murciélago\nodiosa y coqueta.",
	"Justo cuando estaba por\natraparla, ¡Eggman se apareció e\nintentó robar la Esmeralda Maestra!",
	"Como último recurso, logré\ndestrozar la Esmeralda Maestra para\nevitar problemas, pero sus pedazos\nse esparcieron por doquier.",
	"Esa murciélago también fue a\nbuscar las piezas. ¡Debo\nencontrarlas rápido y restaurarla!",

	// Eggman 1
	"Me llamo Miles Prower,\npero todos me llaman Tails.",
	"Estaba viendo mi tele satelital\ncuando vi las malas noticias.",
	"¡Mi ídolo, Sonic, fue arrestado\npor hacer algo malo!",
	"¡No puede ser verdad!\nMe subí al nuevo Tornado y me dirigí\na Isla Prisión, donde Sonic está.",
	"¡Sin embargo, ahí estaba mi\narchienemigo, Eggman!\n¡Y está atacando a mi amiga, Amy!\n¡Esto es malo!",
	"¡Muy bien! ¡Siendo así, voy a\nmostrarle el poder de mi nuevo Tornado!",
	"¡Tornado, cambio de forma!",

	// Prison Lane
	"Mi nombre es Miles Prower,\npero todos me llaman Tails.",
	"Rescaté a Amy de Eggman.\nElla dice que él no está\nplaneando nada bueno.",
	"¡Me preocupa lo que\ntrama Eggman, pero primero\ntengo que salvar a Sonic!",
	"¿Qué? ¿Aún quieres venir\nconmigo, Amy? Bueno, está bien,\npero no vayas a estorbar.",

	// Metal Harbor
	"¡Soy Sonic! ¡Sonic, el erizo!",
	"¡Dios, Amy, ¿por qué tenías\nque seguirme hasta acá?!",
	"Da igual, debo encargarme de él.\nParece que Shadow,\nel erizo que separece a mí,\ntambién vino a esta isla.",
	"Ahora que lo sé, me voy.\n¡A tomar desprevenidos a\nlos militares para fugarme!",
	"Ah... ¿entonces ahora\nsí soy un prófugo?",

	// Shadow 1
	"¡Soy Sonic! ¡Sonic, el erizo!",
	"Salí de la base\nmilitar en una pieza.\n¡Y lo que me encuentro!",
	"¡Shadow, esta vez no escaparás!",

	// Green Forest
	"¡Soy Sonic! ¡Sonic, el erizo!",
	"Estaba a punto de\najustar cuentas con Shadow,\npero eso ya no importa.",
	"Eggman dice que esta isla\nvolará en cinco minutos.", // this one is unused for some reason (so you can move it to the previous line with some line breaks)
	"¡Agh, primero hay que\nsalir de esta isla!\n¡Debo avisarles a Amy y Tails!",

	// Pumpkin Hill
	"Soy Knuckles, el equidna.\nLlámame Knuckles.",
	"Sintiendo una tenue presencia\nde la Esmeralda Maestra,\nterminé en unas montañas lejanas.",
	"El ambiente se siente tenebroso,\npero no debo tener miedo.",
	"¡Debo reunir rápido las piezas\nde la Esmeralda Maestra!",

	// Mission Street
	"Mi nombre es Miles Prower,\npero todos me llaman Tails.",
	"Eggman hizo una declaración\nde conquista del mundo.",
	"Planea dominarnos con una\nterrible arma que destruyó\nla mitad de la Luna.\n¡No dejaré que eso pase!",
	"Parece que Eggman\nestá usando las Esmeraldas Caos\npara alimentar esa arma.",
	"¡Bien, usaremos también\nuna Esmeralda Caos para saber\ndónde están Eggman y su equipo!",
	"Primero debemos hallar\nun lugar seguro.",

	// Aquatic Mine
	"Soy Knuckles, el equidna.\nLlámame Knuckles.",
	"Seguí la señal de la\nEsmeralda Maestra a las montañas.",
	"Parece que esta era\nuna mina carbonífera.\nAhora está parcialmente inundada.",
	"Va a costarme encontrar\nlas piezas, pero no puedo\nquejarme todo el tiempo.",
	"¡Debo reunir rápido las piezas\nde la Esmeralda Maestra!",

	// Route 101
	"Mi nombre es Miles Prower,\npero todos me llaman Tails.",
	"Intenté ubicar a Eggman usando\nlas lecturas de las Esmeraldas Caos.",
	"Resulta que Eggman y\ncompañía están en el espacio.",
	"¡Siendo así, voy a hacer\nlo que sea para saber\ndónde está Eggman!",
	"No te preocupes, Amy.\n¡No lo parece, pero sé\nconducir bastante bien!",
	"¡Sé que encontraré al presidente!",

	// Hidden Base
	"Me llamo Miles Prower,\npero todos me llaman Tails.",
	"Nos subimos a la limusina del\npresidente y ubicamos a Eggman.",
	"Él y sus amigos están en\nuna colonia espacial llamada ARK.",
	"¡Nuestro próximo destino\nes una base secreta de Eggman\nen una pirámide en el desierto!",
	"¡Muy bien! ¡Iré primero\ny encontraré la entrada!",

	// Pyramid Cave
	"¡Soy Sonic! ¡Sonic, el erizo!",
	"Nos colamos en la pirámide a\nbuscar en la base secreta de Eggman.",
	"Tiene que haber una forma\nde llegar al espacio.\nNo perdamos más tiempo. ¡En marcha!",

	// Death Chamber
	"Soy Knuckles, el equidna.\nLlámame Knuckles.",
	"La base secreta de Eggman está\nen lo profundo de la pirámide.",
	"Parece que necesitamos unas\nllaves para abrir esta puerta.",
	"¿Qué? ¿Debo buscar la llave?\n¡Eso será una joda! Pero esto\nes por la Esmeralda Maestra.",
	"¡Te enseñaré por qué soy\nel mejor buscador de tesoros!",

	// King Boom Boo
	"Soy Knuckles, el equidna.\nLlámame Knuckles.",
	"Encontrar las llaves\nfue pan comido. Ahora podemos\nentrar a la base secreta.",
	"¿Mmm? ¿Y esta presencia?\n¡¿U-Un fantasma?!\n¿Será el guardián de la pirámide?",
	"No creo que se pueda\nrazonar con este tipo.\nLo siento, pero me dejarás pasar,\nasí deba obligarte!",

	// Egg Golem (hero)
	"¡Soy Sonic! ¡Sonic, el erizo!",
	"Gracias a Knuckles,\npor fin pudimos abrir la puerta\nde la base secreta.",
	"¡Lo que nos encontramos\nfue al mismo Eggman,\ncon un robot gigante!",
	"¡Se nos adelantó y nos emboscó!",
	"¡No me detendrás con\nesa pila de basura!",

	// Eternal Engine
	"Me llamo Miles Prower,\npero todos me llaman Tails.",
	"Tras robar un transbordador\nespacial de la base de Eggman,\npor fin llegamos a la\nColonia Espacial ARK.",
	"Se me ocurrió una idea\npara volar esa arma usando\nuna esmeralda bomba falsa.",
	"Espero que Sonic\nlo haya entendido.",
	"¡Ups, también debo ir a destruir\nel generador de la colonia!",

	// Meteor Herd
	"Soy Knuckles, el equidna.\nLlámame Knuckles.",
	"¡Todas las piezas de la\nEsmeralda Maestra que había reunido\nse salieron del transbordador!",
	"Proteger la Esmeralda Maestra\nno es una tarea fácil.",
	"¡Tengo que encontrarlas\nde nuevo antes de que\nse puedan volver a dispersar!",

	// Rouge
	"Soy Knuckles, el equidna.\nLlámame Knuckles.",
	"Reuní la mitad de las piezas,\n¡y en ese momento la murciélago\nse me apareció!",
	"¡Ella debe tener la otra mitad!\n¡Basta de charla!\n¡No me contendré,\nni porque sea mujer!",
	"¡Tendré el resto de la\nEsmeralda Maestra de regreso!",

	// Crazy Gadget
	"¡Soy Sonic! ¡Sonic, el erizo!",
	"Nuestro plan iba bien, pero\nse acaba de ir al caño.",
	"Parece que Amy fue secuestrada\npor Eggman. Si la quiero rescatar,\ntengo que entregar la esmeralda.",
	"No queda mucho tiempo antes de que\nEggman dispare esa arma de nuevo.",
	"¡Tails, Amy, espérenme!",

	// Eggman 2
	"Me llamo Miles Prower,\npero todos me llaman Tails.",
	"Sonic cayó en la astuta trampa\nde Eggman y fue lanzado al espacio.",
	"¡No es cierto...! ¡Sonic no\npudo haber muerto de esa forma!",
	"¡No te saldrás con la tuya, Eggman!\n¡Ni creas que huiré! ¡Vas a caer!",

	// Final Rush
	"¡Soy Sonic! ¡Sonic, el erizo!",
	"En el último momento,\nlogré usar el Control Caos\ny escapé de la trampa de Eggman.",
	"¡Quedan pocos minutos antes\nde que esa arma dispare!",
	"¡Agh! ¡En ese caso,\nvoy a lanzar esta esmeralda bomba\na la boca del cañón antes de eso!",

	// Shadow 2
	"¡Soy Sonic! ¡Sonic, el erizo!",
	"Tengo el tiempo contado\ny él apareció frente a mí.\nParece que ahora sí llegó la hora\nde ajustar cuentas con Shadow.",
	"¡Shadow, muéstrame el poder\nde la forma de vida suprema!",

	// Dark story recaps

	// Iron Gate
	"¡Soy un genio científico sin igual\nen el mundo, el Dr. Eggman!",
	"Encontré por casualidad el diario\nde mi abuelo. Ahí describe la existencia de\nuna aterradora arma ultrasecreta llamada \"Shadow\".",
	"Además, ha estado sellada en\nuna instalación militar por 50 años.",
	"¡Jum! ¡Máquina parada, máquina oxidada!",
	"Entonces es la última obra de mi abuelo,\nel profesor Gerald, el más\ngrande científico de la historia.",
	"¡Y voy a obtenerla!",

	// Hot Shot
	"Me llamo Shadow, el erizo.\nLa única forma de vida suprema.",
	"Estuve en un profundo\nsueño por 50 años...",
	"Al despertar, frente a mí estaba\nel Dr. Eggman, nieto de mi creador,\nel profesor Gerald.",
	"Doctor, como agradecimiento por\ndespertarme, cumpliré su deseo.",
	"Primero, contemple mi poder.\nConvertiré esa basura militar\nen chatarra en diez segundos...",

	// Dry Lagoon
	"Me llamo Rouge, la murciélago,\nmás conocida en mi círculo\ncomo Rouge, la cazatesoros.",
	"Me encantan las joyas. Todo iba\nbien hasta que encontré mi\ngran presa, la Esmeralda Maestra.",
	"Pero estaba ese molesto\nequidna persiguiéndome.\n¡Odio a los hombres posesivos!",
	"Y entonces, el Dr. Eggman,\nese viejo bigotudo, se interpuso\ny la Esmeralda Maestra fue destrozada.",
	"¡Ay, Dios! ¡Mira lo que hiciste!",
	"Ahora tengo que reunir\nlas piezas de la Esmeralda Maestra\nlo antes posible.",

	// Sand Ocean
	"¡Soy un genio científico sin igual\nen el mundo, el Dr. Eggman!",
	"Todo bien hasta el momento en que\nliberé a Shadow de la base militar.",
	"Ahora él quiere que lleve\nlas Esmeraldas Caos a la\nColonia Espacial ARK.",
	"No sé qué esté pasando.\nCreo que debería volver a la base\ny comprobar las cosas de nuevo.",

	// Radical Highway
	"Me llamo Shadow, el erizo.\nLa única forma de vida suprema.",
	"Robé la Esmeralda Caos\ndel banco de esta nación.",
	"Sepan o no de mí, los militares\ny la policía me persiguen sin descanso.\nQué sinsentido.",
	"No tengo tiempo para ocuparme de nimiedades.\nEs hora de salir de esta ciudad.",

	// Egg Quarters
	"Me llamo Rouge, la murciélago,\nmás conocida en mi círculo\ncomo Rouge, la cazatesoros.",
	"Verán, cuando ese viejo\nEggman apareció, instalé un\ntransmisor en su máquina.",
	"El motivo aún es secreto. Jiji...",
	"Y así, lo seguí y llegué al\ninterior de la pirámide,\npero hay un callejón sin salida.",
	"Parece que tengo que buscar\nlas llaves para pasar al otro\nlado de esta puerta.",

	// Lost Colony
	"¡Soy un genio científico sin igual\nen el mundo, el Dr. Eggman!",
	"Siguiendo lo dicho por Shadow,\nllegué a la Colonia Espacial ARK.",
	"¿Qué hay exactamente en la sala\nde control central de esta colonia?\nTengo que llegar allí y averiguarlo.",

	// Weapons Bed
	"¡Soy un genio científico sin igual\nen el mundo, el Dr. Eggman!",
	"Con Rouge, la murciélago, como\ncompañera, volvimos a Isla Prisión.",
	"Vinimos para robar las Esmeraldas\nCaos de la bóveda militar.",
	"¡Primero, tomaré la delantera\ny alborotaré a los militares!\n¡Que comience la operación!",

	// Tails 1
	"¡Soy un genio científico sin igual\nen el mundo, el Dr. Eggman!",
	"Justo cuando nos dirigíamos a las\ninstalaciones militares para robar\nlas Esmeraldas Caos, ¡nos encontramos\ncon una resistencia impensable!",
	"¡Shadow, Rouge!\n¡Déjenme esto a mí y apúrense!",
	"Ahora, ¿cómo debería cocinar\na este zorrito?",

	// Security Hall
	"Me llamo Rouge, la murciélago,\nmás conocida en mi círculo\ncomo Rouge, la cazatesoros.",
	"Bueno, vine a la bóveda militar,\ntal y como lo planeó el Doctor.",
	"Debo encontrar las tres\nEsmeraldas Caos que busco aquí,\naunque será pan comido para mí.",

	// Flying Dog
	"Me llamo Rouge, la murciélago,\nmás conocida en mi círculo\ncomo Rouge, la cazatesoros.",
	"¡Qué horror...! ¡¿Cómo\npude meter la pata así?!",
	"Cuando terminé de recoger\nlas tres Esmeraldas Caos, me puse\na bobear un poco en la bóveda.",
	"El sistema de seguridad se\nactivó, ¡encerrándome dentro!",
	"Estoy atrapada ahí con un caza\npesado apareciéndose y un límite\nde tiempoen el detonador que\nShadow puso. ¡Odio esto!",
	"¡Bueno, primero debo\nencargarme de esto!",

	// White Jungle
	"Me llamo Shadow, el erizo.\nLa única forma de vida suprema.",
	"Parece que esa chica murciélago falló.",
	"No me importa lo que le pase\na una murciélago, pero si tiene\nlas Esmeraldas Caos, es otra historia.",
	"Ahora tengo que darme prisa.\nNo falta mucho para la explosión...",

	// Sonic 1
	"Me llamo Shadow, el erizo.\nLa única forma de vida suprema.",
	"Mientras me dirigía a\nrescatar a Rouge, ese erizo\napareció frente a mí.",
	"No conoce su lugar...\n¡Tu poder no se me compara!",

	// Route 280
	"Me llamo Rouge, la murciélago,\nmás conocida en mi círculo\ncomo Rouge, la cazatesoros.",
	"Usando las Esmeraldas Caos que robamos\nde la base militar, finalmente declaramos\nnuestra conquista del mundo entero.",
	"Pero el Cañón Eclipse,\nque es lo más importante,\ntarda demasiado en cargarse.",
	"Decidimos buscar la última\nEsmeralda Caos.\n¡Tenemos que encontrar\nrápidamente al equipo del zorrito!",

	// Sky Rail
	"Me llamo Shadow, el erizo.\nLa única forma de vida suprema.",
	"Tras recibir una llamada de Rouge,\nsalí en persecución del avión que\ntransporta la última Esmeralda Caos.",
	"Una espeluznante cadena montañosa\nse extiende ante mí...\nPero no los dejaré escapar.",

	// Egg Golem (dark)
	"¡Soy un genio científico sin igual\nen el mundo, el Dr. Eggman!",
	"Iba a emboscar a Sonic cuando\napareciera en mi base secreta y hacerlo\npedazos con mi preciado robot, pero...",
	"¡Inútil pedazo de basura!\n¡¿Cómo te atreves a ser derrotado\ntan fácilmente, para volverte loco\ny ponerte en mi contra?!",
	"Ah... ¡fuera de mi camino!\n¡El equipo de Sonic está\na punto de irse!",

	// Mad Space
	"Me llamo Rouge, la murciélago,\nmás conocida en mi círculo\ncomo Rouge, la cazatesoros.",
	"Pero supongo que eso\nno es todo lo que hago.",
	"No tenía mucho de haber llegado\ny empezar a trabajar en mi labor\nsecreta cuando estos tipos llegaron.",
	"Eso significa que llegaron las\npiezas de la Esmeralda Maestra.\n¡Es mi oportunidad!",
	"Ya tengo la información sobre el\nProyecto Shadow, así que tomaré\nla Esmeralda Maestra y le\ndiré adiós a este lugar.",

	// Knuckles
	"Me llamo Rouge, la murciélago,\nmás conocida en mi círculo\ncomo Rouge, la cazatesoros.",
	"¡Carajo, este terco equidna\nno sabe cuándo rendirse!",
	"¡Me entregarás la Esmeralda\nMaestra por la fuerza!",

	// Cosmic Wall
	"¡Soy un genio científico sin igual\nen el mundo, el Dr. Eggman!",
	"Por fin, el grupo de Sonic\nha irrumpido en la colonia.",
	"¡¿Y hay dos firmas de\nEsmeraldas Caos?!\n¡¿Qué demonios está pasando?!",
	"Deben estar tramando algo despreciable.",
	"Si ese es el caso, ¡no puedo\nsentarme a esperar! ¡Volveré\na la colonia y acabaré con esto!",

	// Tails 2
	"¡Soy un genio científico sin igual\nen el mundo, el Dr. Eggman!",
	"¡Mujajaja! ¡Por fin lo logré!\n¡Convertí a ese detestable\nerizo en polvo espacial!",
	"¿Y? ¿Qué harás ahora, Tails?\n¡Si insistes en desafiarme,\nno te mostraré piedad!",

	// Final Chase
	"Me llamo Shadow, el erizo.\nLa única forma de vida suprema.",
	"Por fin, las siete Esmeraldas Caos\nestán aquí. Estoy muy cerca\ndel momento en que\nmi deseo se cumplirá.",
	"Pero incluso a estas alturas,\nalguien parece dirigirse a la\nboca del Cañón Eclipse.\nQué pérdida de tiempo...",
	"Pero en este plan no hay lugar\npara errores. Hay que eliminar\ntodas las incertidumbres.",

	// Sonic 2
	"Me llamo Shadow, el erizo.\nLa única forma de vida suprema.",
	"Para mi sorpresa, era ese erizo azul\nel que se dirigía al Cañón Eclipse.",
	"Pensé que la cápsula lo había\nconvertido en polvo espacial,\npero parece que no fue así.",
	"Ahora estoy convencido.\n¡Este erizo es peligroso!",
	"Como desees, concluyamos esto aquí.\n¡Atestigua el poder de la\nforma de vida suprema!",

	// Last story recaps

	// Cannon's Core
	"Me llamo Amy Rose.\n¡Una chica encantadora y enérgica!",
	"¡Algo terrible pasó! Un hombre\nllamado Profesor Gerald creó\nun programa hace mucho tiempo.",
	"¡Se activó y esta colonia\nestá a punto de estrellarse\ncontra la superficie!",
	"Parece que Eggman fue engañado\npor Shadow después de todo.",
	"Le diría que es un tonto\nde ser así, pero supongo que\nahora no es buen momento, ¿no?",
	"Al final, todos decidieron trabajar\njuntos e ir a lo más profundo\nde la colonia para detener a\nlas Esmeraldas Caos desbocadas.",
	"¡No queda mucho tiempo!\n¡Den lo mejor!",

	// The Biolizard
	"Me llamo Shadow, el erizo.\nLa única forma de vida suprema.",
	"Gracias a ella, pude recordar\nel verdadero deseo de María.",
	"Ahora que desperté de verdad,\nveo al prototipo de la\nforma de vida suprema.",
	"¡Sonic, detén las Esmeraldas\nCaos mientras lo atraigo!",

	// The Finalhazard
	"¡Soy Sonic! ¡Sonic, el erizo!",
	"¡Las Esmeraldas Caos\nya no están enloquecidas,\npero la colonia sigue cayendo!",
	"¡Ese prototipo se hizo uno con\nla colonia y va a golpear\nla superficie con todos nosotros!",
	"Finalmente, la colonia entró\nen la atmósfera con el prototipo.\n¡Debemos vencerlo rápidamente!",
	"Ahora es el momento de demostrar\nel poder de Súper Sonic, ¡la fuerza\nsuprema que reúne los deseos de todos!",

	// 2P battle modes

	"\tElige un juego de batalla.",
	"\tBatalla aleatoria.",
	"\tBatalla de carrera de acción.",
	"\tBatalla de caza de tesoros.",
	"\tBatalla de disparos.",
	"\tKarate Chao.",
	"\tCarrera Chao.",
	"\tCarrera de Karts.",
	"\tElige un personaje para la batalla.",

	// 2P battle character descriptions

	"SONIC",
	"Erizo supersónico.",
	"Más veloz con 20 Anillos,",
	"ataca con 40 Anillos",
	"y para el tiempo con 60.",

	"SHADOW",
	"La forma de vida suprema",
	"que creó el Pr. Gerald.",
	"Misma velocidad y",
	"ataques que Sonic.",

	"AMY",
	"Chica enérgica y alegre",
	"enamorada de Sonic.",
	"No es muy rápida, pero",
	"ataca con menos Anillos.",

	"METAL SONIC",
	"Robot parecido a Sonic que",
	"debutó en \"Sonic CD\".",
	"Buena aceleración, pero",
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
	"Niña de la tribu Knuckles,",
	"de Sonic Adventure.",
	"Rápida, pero no es buena",
	"peleando ni buscando.",

	"CAOS CERO",
	"Guardián de las Esm.",
	"Caos en Sonic Adventure.",
	"Es lento, pero pega",
	"duro y lejos",

	"TAILS",
	"Un zorro con dos colas.",
	"Pelea con el \"Ciclón\".",
	"Usa un ataque especial",
	"cada 20 Anillos.",

	"EGGMAN",
	"Genio científico malvado",
	"que detesta a Sonic.",
	"Usa el mismo ataque que",
	"Tails con 20 Anillos.",

	"UCP CHAO",
	"Esta máquina creada por",
	"Tails ayuda a un Chao.",
	"Es débil, pero es el",
	"personaje más rápido.",

	"UCP CHAO SOMBRÍO",
	"Un Chao sombrío en",
	"una máquina de Eggman.",
	"Es fuerte, pero es el",
	"personaje más lento.",

	"SUPER SONIC",
	"Sonic potenciado por",
	"las 7 Esmeraldas Caos.",
	"Es muy rápido, pero si",
	"no tiene Anillos, muere.",

	"SUPER SHADOW",
	"Es muy rápido, pero si",
	"las 7 Esmeraldas Caos.",
	"Muy rápido pero",
	"no tiene Anillos, muere.",

	// 2P battle stage select

	"\tElige un nivel para la batalla.",
	"\tContenido descargable necesario para desbloquear el nivel.",
	"\tElegir nivel del nivel 1 aleatoriamente.",
	"\tElegir nivel del nivel 2 aleatoriamente.",
	"\tElegir nivel del nivel 3 aleatoriamente.",
	"\tElegir nivel del nivel 4 aleatoriamente.",
	"\tCambiar la configuración de la batalla.",
	"\tVolver a elegir fase.",
	"\tDesventaja automática ACTIVAR / DESACTIVAR.",
	"\tCambiar configuración de la desventaja automática.",
	"\tEstablecer límite de tiempo ACTIVAR / DESACTIVAR.",
	"\tCambiar número de batallas.",

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
	"\tÚltimo nivel.",
	"\tCarrera Chao.",
	"\tMinijuego de Karts.",
	"\tMinijuego de pelea contra jefes.",
	"\tMisiones cumplidas del último nivel",
	"\tJuego de carreras de Chao.",
	"\tJuego de pelea de Chao.",

	// Sound test with Battle DLC

	"\tMúsica de Karate Chao.",
	"\tMúsica de selección de modo de Karate Chao.",
	"\tMúsica de Gran campeón de Karate Chao.",
	"\tMúsica de los resultados de Karate Chao.",
	"\tMúsica del interior de la cueva.",
	"\tMúsica del Menú de batalla.",
	"\tMúsica de Carrera Céntrica.",
	"\tMúsica de Carrera en Rieles.",
	"\tMúsica de Búsqueda en la Piscina.",
	"\tMúsica de Búsqueda Planetaria.",
	"\tMúsica de Carrera por la Cubierta.",
	"\tMúsica de Carrera Piramidal.",
	"\tMúsica de Partida de Chao.",

	// 2P battle score reset
	
	"\tPuedes borrar los resultados del Modo Versus.",
	"\tSe borrarán los resultados del Modo Versus. ¿Borrar?",
	"\tResultados de batalla borrados.",

	// SA2B TV settings

	"\tCambiar a salida progresiva.",
	"\tConfigurar salida progresiva.",
	"\tConfigurar salida VHS.",

	// SA2B unlock stuff messages

	"\tCompletaste las misiones\nde Sonic, ¡así que ahora\npuede usar un nuevo kart!",
	"\tCompletaste las misiones\nde Tails, ¡así que ahora\npuede usar un nuevo kart!",
	"\tCompletaste las misiones\nde Knuckles, ¡así que ahora\npuede usar un nuevo kart!",
	"\tCompletaste las misiones\nde Shadows, ¡así que ahora\npuede usar un nuevo kart!",
	"\tCompletaste las misiones\nde Eggman, ¡así que ahora\npuede usar un nuevo kart!",
	"\tCompletaste las misiones\nde Rouge, ¡así que ahora\npuede usar un nuevo kart!",
	"\tMisiones de Sonic con Rango \"A\"",
	"\tUn nuevo traje para Sonic\nse puede usar en el\nmodo para 2 jugadores",
	"\tMisiones de Tails\ncon Rango \"A\"",
	"\tUn nuevo traje para Tails\nse puede usar en el\nmodo para 2 jugadores",
	"\tMisiones Knuckles\ncon Rango \"A\"",
	"\tUn nuevo traje para Knuckles\nse puede usar en el\nmodo para 2 jugadores",
	"\tMisiones de Shadow\ncon Rango \"A\"",
	"\tUn nuevo traje para Shadow\nse puede usar en el\nmodo para 2 jugadores",
	"\tMisiones de Eggman\ncon Rango \"A\"",
	"\tUn nuevo traje para Eggman\nse puede usar en el\nmodo para 2 jugadores",
	"\tMisiones de Rouge\ncon Rango \"A\"",
	"\tUn nuevo traje para Rouge\nse puede usar en el\nmodo para 2 jugadores",
	"\t¡Felicidades!\nTienes todos los emblemas.\nSe desbloqueó un nivel secreto.",
	"\t¡Felicidades! Completaste Colina Verde\ncon Rango A. Ahora dispones de los más\nfuertes personajes para el modo\nde 2 jugadores de Sonic y Shadow.",
	"¡¡Se desbloquearon nuevos\nniveles de batalla en el\nmodo de 2 jugadores (Nivel 4)",

	// Other memory card stuff

	"\tEsta tarjeta de memoria es incompatible.",
	"\tHay que formatear la tarjeta de memoria.",
	"\tFormatear tarjeta en pantalla de tarjeta.",
	"\t¿Formatear?",
	"\tEsta tarjeta de memoria está defectuosa.",
	"\tNúmero máximo de archivos superado.",
	"\tDemasiados archivos. Chao sin guardar.",
	"\tEste archivo está dañado. ¿Quieres formatear?",

	// 2P battle main screen
	
	"\tEl J2 debe presionar START para confirmar.",
	"\tJ1 y J2 deben presionar el botón de salto (A) para continuar.",
	"\tJ1 y J2 deben presionar ¶ para continuar.",
	"\tJ1 y J2 deben presionar ± para continuar.",

	// DLC
	
	"\tDesbloquear juego completo.",
	"\tContenido descargable necesario\npara desbloquear la selección de tema.",
};


void ReplaceAdvertiseNeutro()
{
	AdvertiseGamepad[Language_Spanish] = AdvertiseKeyboard[Language_Spanish] = AdvertiseSpanishNeutro; // easy way, setting both gamepad and keyboard versions to be the same (they only have differences in, like, 5 lines or something)
}
#include "Parole.h"

using namespace std;

string getParola(std::string parola)

{
	const string parole[] = {	"cosa", "anno", "uomo", "giorno", "volta", "casa", "parte", "vita", "tempo", "donna", "mano", "occhio", "ora", "signore",
					"paese", "momento", "modo", "mondo", "parola", "padre", "punto", "lavoro", "stato", "caso", "guerra", "strada", "figlio",
					"notte", "voce", "nome", "sera", "acqua", "amico", "fatto", "gente", "amore", "storia", "aria", "forza", "testa", "ragione",
					"mare", "mese", "capo", "luce", "sole", "famiglia", "piede", "persona", "via", "signora", "governo", "senso", "opera",
					"prodotto", "festa", "gioco", "prova", "campagna", "fiore", "sala", "misura", "posizione", "natura", "ufficio","specie",
					"successo", "zona", "fuoco", "soldato", "vista", "risultato", "importanza", "dubbio", "ricerca", "dio", "figura", "piazza",
					"questione", "nemico", "pena", "motivo", "esperienza", "ricordo", "albero", "politica", "processo", "vino", "porta", "sud",
					"sogno", "cane", "isola", "movimento", "mente", "occasione", "prezzo", "causa", "periodo", "sviluppo", "sorella", "effetto",
					"giardino", "volto", "base", "carattere", "coscienza", "guardia","memoria", "terreno", "animale", "direzione", "eccellenza",
					"malattia", "scienza", "funzione", "conseguenza", "parete", "dente", "distanza", "gusto", "impressione", "istituto", "quadro",
					"attenzione", "autore", "passione", "commissione", "dito", "inizio", "programma", "spettacolo", "titolo", "comunicazione",
					"fenomeno", "maggio", "stampa", "denaro","destino", "dovere", "ferro","punta", "regno","epoca", "luna", "provincia", "voglia",
					"differenza", "controllo", "grazia", "passato", "spazio", "stella", "corsa", "erba", "massa", "origine", "polizia", "soluzione",
					"chilometro", "madre", "paura", "cuore", "idea", "fondo", "esempio", "ordine", "posto", "campo", "faccia", "moglie", "ragazzo",
					"bisogno", "cielo", "letto", "fronte", "conto", "corpo", "numero", "ministro", "problema", "chiesa", "braccio", "bambino",
					"pensiero", "pace", "morte", "fine", "forma", "resto", "popolo", "studio", "legge", "libro", "figlia", "resto", "luogo",
					"condizione", "professore", "marito", "segno", "diritto", "lettera", "ragazza", "scuola", "camera", "gruppo", "lira",
					"discorso", "centro", "secolo", "mezzo", "tipo", "colpa", "rispetto", "scena", "don", "oggetto", "mamma", "presenza",
					"teatro", "principio", "termine", "lingua", "pezzo", "capello", "regione", "monte", "treno", "inverno", "nazione", "pagina",
					"scopo", "compagno", "potere", "musica", "dottore", "sentimento", "nave", "pietra", "produzione", "speranza", "dolore", "carne",
					"generale", "proposito", "elemento", "stazione", "materia", "scala", "maniera", "arma", "gamba", "patria", "albergo", "gioia",
					"argomento", "sguardo", "relazione", "classe", "battaglia", "viso", "gesto", "mattino", "opinione", "ponte", "sorriso", "frase",
					"limite", "ritorno", "bosco", "esame", "lato", "operazione", "pranzo", "costa", "prato", "repubblica", "valle", "nord", "fatica",
					"odore", "articolo", "costruzione", "rivoluzione", "zia", "confronto", "potenza", "sforzo", "sicurezza", "ufficiale", "crisi",
					"cucina", "gatto", "territorio", "attimo", "contatto", "errore", "fretta", "intenzione", "cultura", "giudizio", "spesa", "aiuto",
					"ambiente", "animo", "bestia", "cortile", "pelle", "proposta", "riva", "segretario", "abito", "chiave", "corrente", "operaio",
					"corso","finestra", "arte", "sistema", "piano", "bocca", "anima", "palazzo", "passo", "giornata", "servizio", "rapporto",
					"milione", "stanza", "valore", "colpo", "sangue", "interesse", "spalla", "silenzio", "signorina", "ombra", "azione", "vento",
					"mattina", "colore", "presidente", "consiglio", "principe", "viaggio", "genere", "giornale", "spirito", "cavallo", "muro",
					"situazione", "linea", "giro", "automobile", "atto", "aspetto", "fortuna", "oro", "partito", "macchina", "carta", "minuto",
					"tratto", "settimana", "notizia", "fratello", "industria", "piacere", "maestro", "personaggio", "pomeriggio", "fianco", "bambina",
					"bellezza", "domanda", "pianta", "pubblico", "sede", "affare", "bene", "fiume", "lotta", "mercato", "angolo", "compagnia",
					"espressione", "labbro", "villa", "desiderio", "serie", "visita", "coraggio", "direttore", "esercito", "grado", "padrone",
					"risposta", "tavola", "immagine", "montagna", "energia", "fede", "pane", "seguito", "estate", "film", "frutto", "onore", "pericolo",
					"scrittore", "collina", "zio", "difesa", "metro", "collo", "cura", "disposizione", "Domenica", "giovanotto", "poeta", "stagione",
					"peso", "tono", "croce", "decisione", "poesia", "fiducia", "filo", "folla", "roba", "conoscenza", "favore", "popolazione",
					"strumento", "uso", "vestito", "commercio", "fabbrica", "giugno", "giustizia", "avvocato", "messa", "orecchio", "sonno", "congresso",
					"porto", "calcio", "fantasia", "matrimonio", "medico", "ospedale", "pianura", "tavolo", "fame", "latte", "merito", "attore",
					"ricchezza", "sacrificio", "atteggiamento", "concetto", "mestiere", "attesa", "bagno", "foglia", "istante", "lago"};
	
	parola = parole[rand() % (sizeof(parole) / sizeof(*parole))];		/* Dimensione array */
	return parola;
}

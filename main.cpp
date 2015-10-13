#include <cstdlib>
#include <ctime>
#include "Gioco.h"
#include "Parole.h"
using namespace std;

int main(){
	
	srand((unsigned)time(0));
	
	#ifdef _WIN32			/* Se siamo su Windows (_WIN32 include _WIN64) */
		system("mode 100");
		system("color a");
	#endif
	
	cout << "PannImpiccato";
	string input, parola, spazi;
	bool gioca = true;
	unsigned int vite, i;
	signed int count = -1;
	char scelta, lettera;
	Gioco gioco;
	
	while (gioca == true)
	
	{
		vite = 10;
		parola = getParola(parola);
		
		for (i = 0; i < parola.length(); i++)
			spazi += '_';
		
		while (vite != 0)
		
		{
			cin.sync();
			cout << "\n\nInserisci una lettera (1) o indovina la parola! (2)\t\t(vite: " << vite << ") ";
			scelta = cin.get();
			
			while (scelta != '1' && scelta != '2')
			
			{
				cerr << "\nInserisci 1 o 2: ";
				cin.sync();
				scelta = cin.get();
			}
			
			if (scelta == '1')
			
			{
				cout << "\n\nInserisci una lettera: ";
				cin.sync();
				lettera = cin.get();
				count = -1;
				
				for (i = 0; i < parola.length(); i++)
				
				{
					
					if (lettera == parola[i])
					
					{
						if (count == -1)
							count++;
							
						count++;
					}
					
				}
				
				if (count != -1)				/* Elefante - lettera f: ___f____ */
				
				{
					if (count >= 2)
						cout << "\nEsatto! La lettera e' presente " << count << " volte nella parola.\n\n";
						
					else
						cout << "\nEsatto! La lettera e' presente una volta nella parola.\n\n";
						
					
					for (i = 0; i < spazi.length(); i++)
					
					{
						if(parola[i] == lettera)
							spazi.replace(i, 1, 1, lettera);
					}
					
					cout << "\n\n" << spazi;
				}
				
				else
					vite = gioco.sbagliato(vite);
					
				if (spazi.find('_') == string::npos)
				
				{
					cout << "\n\nComplimenti!";		/* Quando dico "si" dice che vinco quando perdo...? */
					gioco.giocareAncora(&vite, &gioca);
				}
				
			}
			
			else if (scelta == '2')
			
			{
				cout << "\n\nTenta una parola, e inserisci la fortuna! ";
				cin.sync();
				getline(cin, input);
				
				if (input == parola)
			
				{
					cout << "\n\nEsatto!";
					gioco.giocareAncora(&vite, &gioca);
				}
				
				else
				
				{
					vite = gioco.sbagliato(vite);
					
					if (vite == 0)
						gioco.giocareAncora(&vite, &gioca);
				}
					
			}
			
		}
		
	}
	
	cout << "\n\nPremi invio per uscire: ";
	cin.sync();
	cin.get();
	return EXIT_SUCCESS;
}

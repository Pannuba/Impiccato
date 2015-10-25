#include <cstdlib>
#include <ctime>
#include <conio.h>
#include "Gioco.h"
#include "Parole.h"
using namespace std;

int main(){
	
	srand((unsigned)time(0));
	
	#ifdef _WIN32			/* Se siamo su Windows (_WIN32 include _WIN64) */
		system("color a");
	#endif
	
	cout << "PannImpiccato";
	string input, parola, spazi, letteremesse = "";
	bool gioca = true;
	unsigned int vite = 10, i;
	signed int count = -1;
	char scelta, lettera;
	Gioco gioco;
	
	while (gioca == true)
	
	{
		parola = getParola(parola);
		
		for (i = 0; i < parola.length(); i++)
			spazi += '*';
		
		while (vite != 0)
		
		{
			cout << "\n\nInserisci una lettera (1) o indovina la parola! (2)\t\t(vite: " << vite << ") ";
			scelta = _getch();
			
			while (scelta != '1' && scelta != '2')
			
			{
				cerr << "\n\nInserisci 1 o 2: ";
				scelta = _getch();
			}
			
			if (scelta == '1')
			
			{
				cout << "\n\nInserisci una lettera: ";
				lettera = _getch();
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
				
				if (count != -1)
				
				{
					system("cls");
					
					if (count >= 2)
						cout << "Esatto! La lettera e' presente " << count << " volte nella parola.\n\n";	/* Aggiungere metodo "Giusto"? */
						
					else
						cout << "Esatto! La lettera e' presente una volta nella parola.\n\n";
						
					
					for (i = 0; i < spazi.length(); i++)
					
					{
						if(parola[i] == lettera)
							spazi.replace(i, 1, 1, lettera);
					}
					
					cout << "\n\n" << spazi;
				}
				
				else
					vite = gioco.sbagliato(vite);
				
				letteremesse += lettera;
				
				cout << "\tLettere inserite: ";
				
				for (i = 0; i < letteremesse.length(); i++)
				
				{
					if (i == letteremesse.length() - 1)
						cout << letteremesse[i];
					
					else
						cout << letteremesse[i] << ", ";
				}
					
				if (vite == 0 || spazi.find('*') == string::npos)
					gioco.giocareAncora(&vite, &gioca);
			}
			
			else if (scelta == '2')
			
			{
				cout << "\n\nTenta una parola, e inserisci la fortuna! ";
				getline(cin, input);
				
				if (input == parola)
					gioco.giocareAncora(&vite, &gioca);
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

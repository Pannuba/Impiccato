#include "Gioco.h"
using namespace std;

unsigned int Gioco::sbagliato(unsigned int vite)

{
	cout << "\nSbagliato! Hai perso una vita :D\n\n";
	vite--;
		
	switch (vite)
	
	{
		case 9:
			Omino::frame();
			break;
			
		case 8:
			Omino::frame1();
			break;
			
		case 7:
			Omino::frame2();
			break;
			
		case 6:
			Omino::frame3();
			break;
			
		case 5:
			Omino::frame4();
			break;
			
		case 4:
			Omino::frame5();
			break;
			
		case 3:
			Omino::frame6();
			break;
			
		case 2:
			Omino::frame7();
			break;
				
		case 1:
			Omino::frame8();
			break;
			
		case 0:
			Omino::frame9();
			cout << "\n\nHai perso!\t\tvite: 0\n";
			break;
	}
	
	return vite;
}

void Gioco::giocareAncora(unsigned int *vite, bool *gioca)

{
	cout << "\n\nVuoi giocare ancora? ";
	cin >> giocare;
	
	if (giocare == "no" || giocare == "No")
	
	{
		*vite = 0;		/* *vite, *gioca perchè se non metto '*' cambio il valore al puntatore, non alla variabile */
		*gioca = false;
	}
	
}

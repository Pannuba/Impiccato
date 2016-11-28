#ifndef GIOCO_H
#define GIOCO_H

#include "Omino.h"

class Gioco : protected Omino

{
	public:
		unsigned int sbagliato(unsigned int vite);
		void giocareAncora(unsigned int *vite, bool *gioca, std::string *parola);
		
	private:
		std::string giocare;
};

#endif

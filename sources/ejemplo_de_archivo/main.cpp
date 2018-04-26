/*
 * main.cpp
 *
 *  Created on: 25 abr. 2018
 *      Author: daniel
 */

#include "MenuService.h"
#include "PersonaService.h"
#include <iostream>

using namespace std;

int main() {
	int opc;

	do {
		MenuService* ms = NULL;
		switch (opc = (ms = new MenuService())->select()) {
		case 1: {
			PersonaService* ps = NULL;
			(ps = new PersonaService())->alta();
			cout << "\n\t\t";
			delete ps;
			break;
		}
		case 2: {
			PersonaService* ps = NULL;
			(ps = new PersonaService())->baja();
			cout << "\n\t\t";
			delete ps;			break;
		}
		case 3: {
			PersonaService* ps = NULL;
			(ps = new PersonaService())->consulta();
			cout << "\n\t\t";
			delete ps;
			break;
		}
		case 4: {
			PersonaService* ps = NULL;
			(ps = new PersonaService())->busca();
			cout << "\n\t\t";
			delete ps;			break;
		}
		case 5: {
			PersonaService* ps = NULL;
			(ps = new PersonaService())->modifica();
			cout << "\n\t\t";
			delete ps;
			break;
		}
		case 6: {
			cout << "\n\n\tHa elegido salir...\n\n\t\t";
			break;
		}
		}
		delete ms;
	} while (opc != 6);

	cout << "Proceso FINALIZADO" << endl;

	return 0;
}


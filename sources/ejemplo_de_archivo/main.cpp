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
		MenuService* ms;
		switch (opc = (ms = new MenuService())->select()) {
		case 1: {
			PersonaService* ps;
			(ps = new PersonaService())->alta();
			cout << "\n\t\t";
			delete ps;
			break;
		}
		case 2: {
			//bajas();
			cout << "\n\t\t";
			break;
		}
		case 3: {
			PersonaService* ps;
			(ps = new PersonaService())->consulta();
			cout << "\n\t\t";
			delete ps;
			break;
		}
		case 4: {
			//buscar();
			cout << "\n\t\t";
			break;
		}
		case 5: {
			//modificar();
			cout << "\n\t\t";

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


/*
 * MenuService.cpp
 *
 *  Created on: 25 abr. 2018
 *      Author: daniel
 */

#include "MenuService.h"
#include <iostream>
using namespace std;

int MenuService::select() {
	int opc;

	do {
		cout << "\n\tManejo de archivos en c++\n\n";
		cout << "\n\t1.-Altas";
		cout << "\n\t2.-Bajas";
		cout << "\n\t3.-Consultas";
		cout << "\n\t4.-Buscar un registro";
		cout << "\n\t5.-Modificaciones";
		cout << "\n\t6.-Salir";
		cout << "\n\n\tElige una opcion:  ";
		cin >> opc;

	} while (opc < 1 || opc > 6);

	return opc;
}

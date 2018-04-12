/*
 * PersonaService.cpp
 *
 *  Created on: 12 abr. 2018
 *      Author: dquinteros
 */

#include "PersonaService.h"

bool PersonaService::validate(Persona* p) {
	if (p->getDni() > 999999)
		return true;
	return false;
}

void PersonaService::input(Persona* p) {
	cout << "Ingrese dni: ";
	int dni;
	cin >> dni;

	p->setDni(dni);

	cout << "Ingrese nombre: ";
	string nombre;
	cin >> nombre;

	p->setNombre(nombre);
}

void PersonaService::show(Persona* p) {
	p->show();
}

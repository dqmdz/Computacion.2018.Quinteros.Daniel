/*
 * main.cpp
 *
 *  Created on: 12 abr. 2018
 *      Author: dquinteros
 */

#include "Persona.h"
#include "PersonaService.h"

int main() {
	Persona* p = new Persona();

	PersonaService* ps = new PersonaService();

	ps->input(p);

	cout << (ps->validate(p) ? "Valido" : "No valido") << endl;

	ps->show(p);

	delete p;
	delete ps;

	return 0;
}



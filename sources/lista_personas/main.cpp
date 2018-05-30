/*
 * main.cpp
 *
 *  Created on: 3 may. 2018
 *      Author: dquinteros
 */

#include "Link.h"
#include "Persona.h"
#include <iostream>

using namespace std;

int main() {
	Link l;

	l.add(new Persona("Pepe", "Honguito"));
	l.show();
	cout << endl;

	l.add(new Persona("Juan", "Diaz"));
	l.show();
	cout << endl;

	l.add(new Persona("Alberto", "Olmedo"));
	l.show();
	cout << endl;

	l.add(new Persona("Luis", "Sandrini"));
	l.show();
	cout << endl;

	l.add(new Persona("Mirtha", "Legrand"));
	l.show();
	cout << endl;

	cout << "Removiendo 'Pepe': " << (l.remove(new Persona("Pepe", "Honguito")) == true ? "true" : "false") << endl;
	l.show();
	cout << endl;

	cout << "Removiendo 'Susana': " << (l.remove(new Persona("Susana", "Gimenez")) == true ? "true" : "false") << endl;
	l.show();
	cout << endl;

	cout << "Removiendo 'Juan': " << (l.remove(new Persona("Juan", "Diaz")) == true ? "true" : "false") << endl;
	l.show();
	cout << endl;

	return 0;
}



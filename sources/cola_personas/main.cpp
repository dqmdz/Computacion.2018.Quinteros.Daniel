/*
 * main.cpp
 *
 *  Created on: 3 may. 2018
 *      Author: dquinteros
 */

#include "Queue.h"
#include <iostream>

using namespace std;

int main() {
	Queue p;

	cout << "Test retrieve " << p.retrieve() << endl << endl;

	p.store(new Persona("Pepe", "Honguito"));
	p.show();
	cout << endl;

	p.store(new Persona("Pepa", "Diaz"));
	p.show();
	cout << endl;

	p.store(new Persona("Juan", "Roque"));
	p.show();
	cout << endl;

	Persona* s = NULL;
	if ((s = p.retrieve()) != NULL)
		cout << "Retrieve: " << s->toString() << endl;
	if ((s = p.retrieve()) != NULL)
		cout << "Retrieve: " << s->toString() << endl;
	if ((s = p.retrieve()) != NULL)
		cout << "Retrieve: " << s->toString() << endl;
	if ((s = p.retrieve()) != NULL)
		cout << "Retrieve: " << s->toString() << endl;

	return 0;
}



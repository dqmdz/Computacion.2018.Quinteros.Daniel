/*
 * main.cpp
 *
 *  Created on: 3 may. 2018
 *      Author: dquinteros
 */

#include "Stack.h"
#include <iostream>

using namespace std;

int main() {
	Stack p;

	cout << "Test pop " << p.pop() << endl << endl;

	p.push(new Persona("Pepe", "Honguito"));
	p.show();
	cout << endl;

	p.push(new Persona("Pepa", "Diaz"));
	p.show();
	cout << endl;

	p.push(new Persona("Juan", "Roque"));
	p.show();
	cout << endl;

	Persona* s = NULL;
	if ((s = p.pop()) != NULL)
		cout << "Pop: " << s->toString() << endl;
	if ((s = p.pop()) != NULL)
		cout << "Pop: " << s->toString() << endl;
	if ((s = p.pop()) != NULL)
		cout << "Pop: " << s->toString() << endl;
	if ((s = p.pop()) != NULL)
		cout << "Pop: " << s->toString() << endl;

	return 0;
}



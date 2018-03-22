/*
 * main.cpp
 *
 *  Created on: 22 mar. 2018
 *      Author: dquinteros
 */

#include "Fecha.h"
#include <iostream>
#include "Persona.h"

using namespace std;

int main() {
	Fecha f1;

	cout << f1.getDia() << " / " << f1.getMes() << " / " << f1.getAnho()  << endl;

	Fecha f2(22, 3, 2018);

	cout << f2.getDia() << " / " << f2.getMes() << " / " << f2.getAnho()  << endl;

	if (f1 < f2)
		cout << "f1 es menor que f2" << endl;

	f2 += 10000;
	cout << f2.getDia() << " / " << f2.getMes() << " / " << f2.getAnho()  << endl;

	Persona p(22222222, f2);

	cout << p.getDni() << " - " << p.getNacimiento().getDia() << "/" << p.getNacimiento().getMes() << endl;

	Persona q[2];
	q[0] = p;

	cout << "Arreglo"  << endl;
	for (int var = 0; var < 2; ++var) {
		cout << q[var].getDni() << " - " << q[var].getNacimiento().getDia() << "/" << q[var].getNacimiento().getMes() << endl;
	}

	return 0;
}



/*
 * main.cpp
 *
 *  Created on: 3 may. 2018
 *      Author: dquinteros
 */

#include <iostream>
#include "LinkDouble.h"

using namespace std;

int main() {
	LinkDouble l;

	l.add(7);
	l.show(true);
	cout << endl;

	l.add(2);
	l.show(false);
	cout << endl;

	l.add(10);
	l.show(true);
	cout << endl;

	l.add(9);
	l.show(false);
	cout << endl;

	l.add(3);
	l.show(true);
	cout << endl;

	cout << "Removiendo 2: " << (l.remove(2) == true ? "true" : "false") << endl;
	l.show(false);
	cout << endl;

	cout << "Removiendo 11: " << (l.remove(11) == true ? "true" : "false") << endl;
	l.show(true);
	cout << endl;

	cout << "Removiendo 7: " << (l.remove(7) == true ? "true" : "false") << endl;
	l.show(false);
	cout << endl;

	return 0;
}



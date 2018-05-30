/*
 * main.cpp
 *
 *  Created on: 3 may. 2018
 *      Author: dquinteros
 */

#include "Link.h"
#include <iostream>

using namespace std;

int main() {
	Link l;

	l.add(7);
	l.show();
	cout << endl;

	l.add(2);
	l.show();
	cout << endl;

	l.add(10);
	l.show();
	cout << endl;

	l.add(9);
	l.show();
	cout << endl;

	l.add(3);
	l.show();
	cout << endl;

	cout << "Removiendo 2: " << (l.remove(2) == true ? "true" : "false") << endl;
	l.show();
	cout << endl;

	cout << "Removiendo 11: " << (l.remove(11) == true ? "true" : "false") << endl;
	l.show();
	cout << endl;

	cout << "Removiendo 7: " << (l.remove(7) == true ? "true" : "false") << endl;
	l.show();
	cout << endl;

	return 0;
}



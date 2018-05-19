/*
 * main.cpp
 *
 *  Created on: 10 may. 2018
 *      Author: dquinteros
 */

#include "Queue.h"

#include <iostream>

using namespace std;

int main() {
	Queue q;

	q.show();

	q.store(2);
	q.show();
	q.store(5);
	q.show();
	q.store(1);
	q.show();

	cout << "Valor recuperado: " << q.retrieve() << endl;
	cout << "Valor recuperado: " << q.retrieve() << endl;
	cout << "Valor recuperado: " << q.retrieve() << endl;
	cout << "Valor recuperado: " << q.retrieve() << endl;

	return 0;
}



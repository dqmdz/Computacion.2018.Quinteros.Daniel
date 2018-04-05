/*
 * main.cpp
 *
 *  Created on: 5 abr. 2018
 *      Author: dquinteros
 */
#include "Tool.h"
#include <iostream>

using namespace std;

int main() {
	int arr[5] = {5, 4, 3, 2, 1};
	Tool t;

	t.orderArrayByReferenceByArrayMethod(arr, 5);

	for (int var = 0; var < 5; ++var) {
		cout << arr[var] << " ";
	}
	cout << endl;

	int arr2[5] = {5, 4, 3, 2, 1};

	t.orderArrayByReferenceByMemoryMethod(arr2, 5);

	for (int var = 0; var < 5; ++var) {
		cout << arr2[var] << " ";
	}
	cout << endl;

	return 0;
}



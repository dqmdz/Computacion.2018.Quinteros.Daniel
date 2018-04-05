/*
 * Matrix.cpp
 *
 *  Created on: 5 abr. 2018
 *      Author: dquinteros
 */

#include "Matrix.h"
#include <iostream>

using namespace std;

int Matrix::getColumns() const {
	return columns;
}

void Matrix::setColumns(int columns) {
	this->columns = columns;
}

int Matrix::getRows() const {
	return rows;
}

void Matrix::setRows(int rows) {
	this->rows = rows;
}

int* Matrix::getValues() const {
	return values;
}

void Matrix::setValues(int* values) {
	this->values = values;
}

void Matrix::inputByMemoryMethod() {
	cout << "Ingrese filas: ";
	cin >> rows;
	cout << "Ingrese columnas: ";
	cin >> columns;

	values = new int(rows*columns);
	int x;
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < columns; ++j) {
			cout << "Ingrese el valor[" << i + 1 << "][" << j + 1 << "]: ";

			cin >> x;
			*(values + (i * columns + j)) = x;
		}
	}
}

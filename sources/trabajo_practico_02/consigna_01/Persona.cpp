/*
 * Persona.cpp
 *
 *  Created on: 22 mar. 2018
 *      Author: dquinteros
 */

#include "Persona.h"
#include <iostream>

using namespace std;

long Persona::getDni() {
	return dni;
}

void Persona::setDni(long dni) {
	this->dni = dni;
}

Fecha Persona::getNacimiento()  {
	return nacimiento;
}

Persona::Persona(long dni, Fecha nacimiento) {
	this->dni = dni;
	this->nacimiento = nacimiento;
}

void Persona::setNacimiento(Fecha nacimiento) {
	this->nacimiento = nacimiento;
}

Persona::Persona() {
	// TODO Auto-generated constructor stub
	dni = 0;
}

void Persona::input() {
	cout << "Ingrese documento: ";
	cin >> dni;
	cout << "Ingrese fecha de nacimiento: ";
	nacimiento.input();
}

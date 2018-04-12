/*
 * Persona.cpp
 *
 *  Created on: 12 abr. 2018
 *      Author: dquinteros
 */

#include "Persona.h"

int Persona::getDni() const {
	return dni;
}

void Persona::setDni(int dni) {
	this->dni = dni;
}

const string& Persona::getNombre() const {
	return nombre;
}

void Persona::setNombre(const string& nombre) {
	this->nombre = nombre;
}

Persona::Persona() {
	// TODO Auto-generated constructor stub
	dni = 222;
	nombre = "pepe";

}

Persona::Persona(int dni, string nombre) {
	this->dni = dni;
	this->nombre = nombre;
}

void Persona::show() {
	cout << "dni:" << dni << " - nombre: " << nombre;
}

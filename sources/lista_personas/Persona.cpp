/*
 * Persona.cpp
 *
 *  Created on: 3 may. 2018
 *      Author: dquinteros
 */

#include "Persona.h"

string Persona::getApellido() {
	return apellido;
}

void Persona::setApellido(string apellido) {
	this->apellido = apellido;
}

string Persona::getNombre() {
	return nombre;
}

Persona::Persona(string nombre, string apellido) {
	this->nombre = nombre;
	this->apellido = apellido;
}

void Persona::setNombre(string nombre) {
	this->nombre = nombre;
}

Persona::Persona() {
	// TODO Auto-generated constructor stub
	nombre = "";
	apellido = "";
}

string Persona::toString() {
	return this->nombre + " " + this->apellido;
}

bool Persona::operator >(Persona p) {
	return this->nombre > p.nombre;
}

bool Persona::operator <=(Persona p) {
	return this->nombre <= p.nombre;
}

bool Persona::operator ==(Persona p) {
	return this->nombre == p.nombre;
}

bool Persona::operator !=(Persona p) {
	return this->nombre != p.nombre;
}

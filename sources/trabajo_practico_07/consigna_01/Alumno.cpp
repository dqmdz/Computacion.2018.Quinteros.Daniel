/*
 * Alumno.cpp
 *
 *  Created on: 18 may. 2018
 *      Author: daniel
 */

#include "Alumno.h"
#include <sstream>

const string& Alumno::getApellido() const {
	return apellido;
}

void Alumno::setApellido(const string& apellido) {
	this->apellido = apellido;
}

int Alumno::getLegajo() const {
	return legajo;
}

void Alumno::setLegajo(int legajo) {
	this->legajo = legajo;
}

const string& Alumno::getNombre() const {
	return nombre;
}

void Alumno::setNombre(const string& nombre) {
	this->nombre = nombre;
}

Alumno::Alumno() {
	nombre = "";
	apellido = "";
	legajo = 0;
}

Alumno::Alumno(string nombre, string apellido, int legajo) {
	this->nombre = nombre;
	this->apellido = apellido;
	this->legajo = legajo;
}

string Alumno::toString() {
	stringstream ss;

	ss << "Nombre: " << nombre << " - Apellido: " << apellido << " - Legajo: " << legajo;

	return ss.str();
}

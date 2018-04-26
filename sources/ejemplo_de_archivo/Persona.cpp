/*
 * Persona.cpp
 *
 *  Created on: 25 abr. 2018
 *      Author: daniel
 */

#include "Persona.h"
#include <cstring>
#include <iostream>

using namespace std;

int Persona::getClave() {
	return clave;
}

void Persona::setClave(int clave) {
	this->clave = clave;
}

string Persona::getEdad() {
	return edad;
}

void Persona::setEdad(string edad) {
	this->edad = edad;
}

char* Persona::getGrupo() {
	return grupo;
}

string Persona::getNombre() {
	return nombre;
}

void Persona::setNombre(string nombre) {
	this->nombre = nombre;
}

string Persona::getSemestre() {
	return semestre;
}

void Persona::setSemestre(string semestre) {
	this->semestre = semestre;
}

bool Persona::isEliminar() {
	return eliminar;
}

void Persona::setEliminar(bool eliminar) {
	this->eliminar = eliminar;
}

Persona::Persona() {
	// TODO Auto-generated constructor stub
	clave = 0;
	nombre = "";
	semestre = "";
	*grupo = 0;
	edad = "";

	eliminar = false;
}

Persona::Persona(int clave, string nombre, string semestre, char* grupo, string edad) {
	this->clave = clave;
	this->nombre = nombre;
	this->semestre = semestre;
	strncpy(this->grupo, grupo, 10);
	this->edad = edad;

	eliminar = false;
}

void Persona::input() {
	cout << "\n";
	cout << "\tIngresa la clave del alumno:    ";
	cin >> clave;
	cout << "\tIngresa el nombre del alumno:   ";
	cin >> nombre;
	cout << "\tIngresa el semestre del alumno: ";
	cin >> semestre;
	cout << "\tIngresa el grupo del alumno:    ";
	cin >> grupo;
	cout << "\tIngresa la edad del alumno:     ";
	cin >> edad;
}

void Persona::show() {
	cout << "\n";
	cout << "\tClave:    " << clave << endl;
	cout << "\tNombre:   " << nombre << endl;
	cout << "\tSemestre: " << semestre << endl;
	cout << "\tGrupo:    " << grupo << endl;
	cout << "\tEdad:     " << edad << endl;
	cout << "\t________________________________\n";
}

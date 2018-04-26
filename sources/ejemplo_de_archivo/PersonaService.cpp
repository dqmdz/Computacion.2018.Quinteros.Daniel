/*
 * PersonaService.cpp
 *
 *  Created on: 25 abr. 2018
 *      Author: daniel
 */

#include "PersonaService.h"
#include <fstream>
#include <iostream>

using namespace std;

PersonaService::PersonaService() {
	lastIndex = 0;
}

void PersonaService::loadFile() {
	ifstream file;

	int clave;
	string nombre;
	string semestre;
	char grupo[10];
	string edad;

	this->clean();

	file.open("alumnos.txt", ios::in);
	if (file.is_open()) {
		file >> clave;
		while (!file.eof()) {
			file >> nombre >> semestre >> grupo >> edad;
			this->personas[lastIndex++] = new Persona(clave, nombre, semestre, grupo, edad);
			file >> clave;
		}
	}
	file.close();
}

void PersonaService::saveFile() {
	ofstream file;

	file.open("alumnos.txt", ios::out);

	if (file.is_open()) {
		for (int i = 0; i < lastIndex; ++i) {
			file << personas[i]->getClave() << " " << personas[i]->getNombre() << " " << personas[i]->getSemestre() << " " << personas[i]->getGrupo() << " " << personas[i]->getEdad() << endl;
		}
	}
	file.close();
}

void PersonaService::clean() {
	for (int i = 0; i < 1024; i++) {
		delete personas[i];
		personas[i] = NULL;
	}
	lastIndex = 0;
}

void PersonaService::inputPersona(Persona* p) {
	p->input();
}

void PersonaService::alta() {
	this->loadFile();
	Persona* p = NULL;
	this->inputPersona(p = new Persona());
	// Verifica si ya existe
	for (int i = 0; i < lastIndex; ++i) {
		if (personas[i]->getClave() == p->getClave()) {
			cout << "\t\tYa existe la clave del alumno...\n";
			return;
		}
	}
	personas[lastIndex++] = p;
	this->saveFile();
}

void PersonaService::consulta() {
	this->loadFile();
	for (int i = 0; i < lastIndex; ++i) {
		personas[i]->show();
	}
}

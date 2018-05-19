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
			this->personas[lastIndex++] = new Persona(clave, nombre, semestre,
					grupo, edad);
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
			file << personas[i]->getClave() << " " << personas[i]->getNombre()
					<< " " << personas[i]->getSemestre() << " "
					<< personas[i]->getGrupo() << " " << personas[i]->getEdad()
					<< endl;
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
			delete p;
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

void PersonaService::modifica() {
	int index = this->busca();

	if (index == -1)
		return;

	Persona* p = new Persona();
	cout << "\n";
	cout << "\tIngresa los datos del alumno que deseas modificar: ";

	this->inputPersona(p);

	// Puntero auxiliar para no perder la referencia a los datos viejos
	Persona* auxiliar = personas[index];

	// Asigna los datos nuevos al arreglo
	personas[index] = p;

	// Desmarco la memoria de los datos viejos
	delete auxiliar;

	this->saveFile();
}

int PersonaService::findByClave(int clave) {
	for (int i = 0; i < lastIndex; ++i) {
		if (personas[i]->getClave() == clave)
			return i;
	}

	return -1;
}

int PersonaService::busca() {
	this->loadFile();

	int clave;

	cout << "\n";
	cout << "\tIngresa la clave a modificar: ";
	cin >> clave;

	// busca el indice en el arreglo de la clave ingresada
	int index = this->findByClave(clave);

	if (index == -1) {
		cout << "\n\tNo se encontro ningun registro con la clave: " << clave
				<< "\n\n\t\t\t";
		return index;
	}

	personas[index]->show();

	return index;
}

void PersonaService::baja() {
	int index = this->busca();

	if (index == -1)
		return;

	Persona* auxiliar = personas[index];

	for (int i = index; i < lastIndex; ++i) {
		personas[i] = personas[i + 1];
	}
	lastIndex--;

	delete auxiliar;

	this->saveFile();

}

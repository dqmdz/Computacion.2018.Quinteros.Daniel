/*
 * Examen.cpp
 *
 *  Created on: 18 may. 2018
 *      Author: daniel
 */

#include "Examen.h"
#include <sstream>

Examen::Examen() {
	// TODO Auto-generated constructor stub
	this->materia = "";
	this->fecha = "";
	this->nota = 0;
	this->libro = 0;
	this->folio = 0;
}

const string& Examen::getFecha() const {
	return fecha;
}

void Examen::setFecha(const string& fecha) {
	this->fecha = fecha;
}

int Examen::getFolio() const {
	return folio;
}

void Examen::setFolio(int folio) {
	this->folio = folio;
}

int Examen::getLibro() const {
	return libro;
}

void Examen::setLibro(int libro) {
	this->libro = libro;
}

const string& Examen::getMateria() const {
	return materia;
}

void Examen::setMateria(const string& materia) {
	this->materia = materia;
}

int Examen::getNota() const {
	return nota;
}

Examen::Examen(string materia, string fecha, int nota, int libro, int folio) {
	this->materia = materia;
	this->fecha = fecha;
	this->nota = nota;
	this->libro = libro;
	this->folio = folio;
}

void Examen::setNota(int nota) {
	this->nota = nota;
}

string Examen::toString() {
	stringstream ss;

	ss << "Materia: " << materia << " - Fecha: " << fecha << " - Nota: " << nota << " - Libro: " << libro << " - Folio: " << folio;

	return ss.str();
}

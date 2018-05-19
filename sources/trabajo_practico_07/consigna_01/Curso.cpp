/*
 * Curso.cpp
 *
 *  Created on: 18 may. 2018
 *      Author: daniel
 */

#include "Curso.h"

Curso::Curso() {
	alumnos = new Queue();
}

Queue* Curso::getAlumnos() {
	return alumnos;
}

void Curso::setAlumnos(Queue* alumnos) {
	this->alumnos = alumnos;
}

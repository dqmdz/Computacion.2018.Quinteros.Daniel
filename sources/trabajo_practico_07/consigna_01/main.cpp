/*
 * main.cpp
 *
 *  Created on: 18 may. 2018
 *      Author: daniel
 */

#include "FileService.h"
#include "Queue.h"

int main() {
	(new FileService())->generate();
	Curso* curso = new Curso();
	(new FileService())->read(curso);
	curso->getAlumnos()->show();
	return 0;
}


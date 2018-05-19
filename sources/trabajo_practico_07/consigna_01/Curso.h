/*
 * Curso.h
 *
 *  Created on: 18 may. 2018
 *      Author: daniel
 */

#ifndef CURSO_H_
#define CURSO_H_

#include "Queue.h"

class Curso {
public:
	Curso();
	Queue* getAlumnos();
	void setAlumnos(Queue*);

private:
	Queue* alumnos;
};

#endif /* CURSO_H_ */

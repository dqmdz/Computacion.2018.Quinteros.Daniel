/*
 * Comunidad.h
 *
 *  Created on: 22 mar. 2018
 *      Author: dquinteros
 */

#ifndef COMUNIDAD_H_
#define COMUNIDAD_H_
#include "Persona.h"

class Comunidad {
public:
	Persona* getPersonas();

private:
	Persona personas[10];
};

#endif /* COMUNIDAD_H_ */

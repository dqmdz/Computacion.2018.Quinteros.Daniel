/*
 * Persona.h
 *
 *  Created on: 22 mar. 2018
 *      Author: dquinteros
 */

#ifndef PERSONA_H_
#define PERSONA_H_
#include "Fecha.h"

class Persona {
private:
	long dni;
	Fecha nacimiento;
public:
	Persona();
	Persona(long, Fecha);
	long getDni() ;
	void setDni(long dni);
	Fecha getNacimiento() ;
	void setNacimiento(Fecha nacimiento);
	void input();
};

#endif /* PERSONA_H_ */

/*
 * Persona.h
 *
 *  Created on: 12 abr. 2018
 *      Author: dquinteros
 */

#ifndef PERSONA_H_
#define PERSONA_H_

#include <iostream>

using namespace std;

class Persona {
private:
	int dni;
	string nombre;
public:
	Persona();
	Persona(int, string);
	int getDni() const;
	void setDni(int dni);
	const string& getNombre() const;
	void setNombre(const string& nombre);
	void show();
};

#endif /* PERSONA_H_ */

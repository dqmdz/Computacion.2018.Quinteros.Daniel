/*
 * Persona.h
 *
 *  Created on: 3 may. 2018
 *      Author: dquinteros
 */

#ifndef PERSONA_H_
#define PERSONA_H_

#include <string>

using namespace std;

class Persona {
private:
	string apellido;
	string nombre;
public:
	Persona();
	Persona(string, string);
	string getApellido();
	void setApellido(string apellido);
	string getNombre();
	void setNombre(string nombre);
	string toString();
	bool operator>(Persona);
	bool operator<=(Persona);
	bool operator==(Persona);
	bool operator!=(Persona);
};

#endif /* PERSONA_H_ */

/*
 * Persona.h
 *
 *  Created on: 25 abr. 2018
 *      Author: daniel
 */

#ifndef PERSONA_H_
#define PERSONA_H_

#include <string>

using namespace std;

class Persona {
private:
	int clave;
	string nombre;
	string semestre;
	char grupo[10];
	string edad;

	bool eliminar;
public:
	Persona();
	Persona(int, string, string, char[], string);
	int getClave();
	void setClave(int clave);
	string getEdad();
	void setEdad(string edad);
	char* getGrupo();
	string getNombre();
	void setNombre(string nombre);
	string getSemestre();
	void setSemestre(string semestre);
	bool isEliminar();
	void setEliminar(bool);
	void input();
	void show();
};

#endif /* PERSONA_H_ */

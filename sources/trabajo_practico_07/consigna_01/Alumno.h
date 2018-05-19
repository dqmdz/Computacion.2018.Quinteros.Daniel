/*
 * Alumno.h
 *
 *  Created on: 18 may. 2018
 *      Author: daniel
 */

#ifndef ALUMNO_H_
#define ALUMNO_H_

#include <iostream>

using namespace std;

class Alumno {
public:
	Alumno();
	Alumno(string, string, int);
	const string& getApellido() const;
	void setApellido(const string& apellido);
	int getLegajo() const;
	void setLegajo(int legajo);
	const string& getNombre() const;
	void setNombre(const string& nombre);
	string toString();
private:
	string nombre;
	string apellido;
	int legajo;
};

#endif /* ALUMNO_H_ */

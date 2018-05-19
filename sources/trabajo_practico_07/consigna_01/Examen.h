/*
 * Examen.h
 *
 *  Created on: 18 may. 2018
 *      Author: daniel
 */

#ifndef EXAMEN_H_
#define EXAMEN_H_

#include <iostream>

using namespace std;

class Examen {
public:
	Examen();
	Examen(string, string, int, int, int);
	const string& getFecha() const;
	void setFecha(const string& fecha);
	int getFolio() const;
	void setFolio(int folio);
	int getLibro() const;
	void setLibro(int libro);
	const string& getMateria() const;
	void setMateria(const string& materia);
	int getNota() const;
	void setNota(int nota);
	string toString();
private:
	string materia;
	string fecha;
	int nota;
	int libro;
	int folio;
};

#endif /* EXAMEN_H_ */

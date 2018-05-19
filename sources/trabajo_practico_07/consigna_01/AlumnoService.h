/*
 * AlumnoService.h
 *
 *  Created on: 18 may. 2018
 *      Author: daniel
 */

#ifndef ALUMNOSERVICE_H_
#define ALUMNOSERVICE_H_

#include <fstream>
#include "Alumno.h"

using namespace std;

class AlumnoService {
public:
	void write(ofstream*, Alumno*);
};

#endif /* ALUMNOSERVICE_H_ */

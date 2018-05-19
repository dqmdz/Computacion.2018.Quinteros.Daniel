/*
 * ExamenService.h
 *
 *  Created on: 18 may. 2018
 *      Author: daniel
 */

#ifndef EXAMENSERVICE_H_
#define EXAMENSERVICE_H_

#include "Examen.h"
#include <fstream>

class ExamenService {
public:
	void write(ofstream*, Examen*);
};

#endif /* EXAMENSERVICE_H_ */

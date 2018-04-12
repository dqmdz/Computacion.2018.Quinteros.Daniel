/*
 * PersonaService.h
 *
 *  Created on: 12 abr. 2018
 *      Author: dquinteros
 */

#ifndef PERSONASERVICE_H_
#define PERSONASERVICE_H_

#include "Persona.h"

class PersonaService {
public:
	bool validate(Persona*);
	void input(Persona*);
	void show(Persona*);
};

#endif /* PERSONASERVICE_H_ */

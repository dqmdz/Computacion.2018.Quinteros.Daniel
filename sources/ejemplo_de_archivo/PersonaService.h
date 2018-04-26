/*
 * PersonaService.h
 *
 *  Created on: 25 abr. 2018
 *      Author: daniel
 */

#ifndef PERSONASERVICE_H_
#define PERSONASERVICE_H_

#include "Persona.h"

class PersonaService {
private:
	Persona* personas[1024];
	int lastIndex;
	void inputPersona(Persona*);
public:
	PersonaService();
	void loadFile();
	void saveFile();
	void clean();
	void alta();
	void consulta();
};

#endif /* PERSONASERVICE_H_ */

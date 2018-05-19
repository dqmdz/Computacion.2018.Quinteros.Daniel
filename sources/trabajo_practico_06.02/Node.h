/*
 * Node.h
 *
 *  Created on: 3 may. 2018
 *      Author: dquinteros
 */

#ifndef NODE_H_
#define NODE_H_

#include "Persona.h"

class Node {
private:
	Persona* value;
	Node* next;
public:
	Node();
	Node* getNext();
	void setNext(Node* next);
	Persona* getValue();
	void setValue(Persona* value);
};

#endif /* NODE_H_ */

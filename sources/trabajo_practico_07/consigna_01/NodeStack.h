/*
 * NodeStack.h
 *
 *  Created on: 3 may. 2018
 *      Author: dquinteros
 */

#ifndef NODESTACK_H_
#define NODESTACK_H_

#include "Examen.h"

class NodeStack {
private:
	Examen* value;
	NodeStack* next;
public:
	NodeStack();
	NodeStack* getNext();
	void setNext(NodeStack* next);
	Examen* getValue();
	void setValue(Examen* value);
};

#endif /* NODESTACK_H_ */

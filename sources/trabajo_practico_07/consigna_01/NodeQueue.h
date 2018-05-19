/*
 * Node.h
 *
 *  Created on: 3 may. 2018
 *      Author: dquinteros
 */

#ifndef NODEQUEUE_H_
#define NODEQUEUE_H_

#include "Alumno.h"
#include "Stack.h"

class NodeQueue {
private:
	Alumno* value;
	Stack* stack;
	NodeQueue* next;
public:
	NodeQueue();
	NodeQueue* getNext();
	void setNext(NodeQueue*);
	Alumno* getValue();
	void setValue(Alumno*);
	Stack* getStack();
	void setStack(Stack*);
};

#endif /* NODEQUEUE_H_ */

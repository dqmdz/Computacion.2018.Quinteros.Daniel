/*
 * Stack.h
 *
 *  Created on: 3 may. 2018
 *      Author: dquinteros
 */

#ifndef STACK_H_
#define STACK_H_

#include "NodeStack.h"

class Stack {
private:
	NodeStack* top;
public:
	Stack();
	NodeStack* getTop();
	void setTop(NodeStack* top);

	void push(Examen*);
	Examen* pop();

	void show();
};

#endif /* STACK_H_ */

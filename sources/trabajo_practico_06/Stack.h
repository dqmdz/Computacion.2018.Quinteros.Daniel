/*
 * Stack.h
 *
 *  Created on: 3 may. 2018
 *      Author: dquinteros
 */

#ifndef STACK_H_
#define STACK_H_

#include "Node.h"

class Stack {
private:
	Node* top;
public:
	Stack();
	Node* getTop();
	void setTop(Node* top);

	void push(int);
	int pop();

	void show();
};

#endif /* STACK_H_ */

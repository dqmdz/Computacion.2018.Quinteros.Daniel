/*
 * NodeQueue.cpp
 *
 *  Created on: 3 may. 2018
 *      Author: dquinteros
 */

#include "NodeQueue.h"
#include <iostream>

using namespace std;

NodeQueue* NodeQueue::getNext() {
	return next;
}

void NodeQueue::setNext(NodeQueue* next) {
	this->next = next;
}

Alumno* NodeQueue::getValue() {
	return value;
}

void NodeQueue::setValue(Alumno* value) {
	this->value = value;
}

NodeQueue::NodeQueue() {
	// TODO Auto-generated constructor stub
	value = NULL;
	stack = NULL;
	next = NULL;
}

Stack* NodeQueue::getStack() {
	return stack;
}

void NodeQueue::setStack(Stack* stack) {
	this->stack = stack;
}

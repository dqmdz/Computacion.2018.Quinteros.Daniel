/*
 * NodeStack.cpp
 *
 *  Created on: 3 may. 2018
 *      Author: dquinteros
 */

#include "NodeStack.h"
#include <iostream>

using namespace std;

NodeStack* NodeStack::getNext() {
	return next;
}

void NodeStack::setNext(NodeStack* next) {
	this->next = next;
}

Examen* NodeStack::getValue() {
	return value;
}

void NodeStack::setValue(Examen* value) {
	this->value = value;
}

NodeStack::NodeStack() {
	// TODO Auto-generated constructor stub
	value = 0;
	next = NULL;
}


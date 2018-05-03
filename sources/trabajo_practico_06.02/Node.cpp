/*
 * Node.cpp
 *
 *  Created on: 3 may. 2018
 *      Author: dquinteros
 */

#include "Node.h"
#include <iostream>

using namespace std;

Node* Node::getNext() {
	return next;
}

void Node::setNext(Node* next) {
	this->next = next;
}

Persona* Node::getValue() {
	return value;
}

void Node::setValue(Persona* value) {
	this->value = value;
}

Node::Node() {
	// TODO Auto-generated constructor stub
	value = 0;
	next = NULL;
}


/*
 * Stack.cpp
 *
 *  Created on: 3 may. 2018
 *      Author: dquinteros
 */

#include "Stack.h"
#include <iostream>

using namespace std;

NodeStack* Stack::getTop() {
	return top;
}

void Stack::setTop(NodeStack* top) {
	this->top = top;
}

Stack::Stack() {
	// TODO Auto-generated constructor stub
	top = NULL;
}

void Stack::push(Examen* value) {
	// Crear un nodo
	NodeStack* newNode = new NodeStack();
	// Llenar el nodo
	newNode->setValue(value);
	newNode->setNext(top);
	// Tope apunta al nuevo nodo
	top = newNode;
}

Examen* Stack::pop() {
	// Verifico si la pila tiene elementos
	if (top == NULL)
		return NULL;
	// Crear auxiliar al nodo a eliminar
	NodeStack* node_delete = top;
	// Crear variable para contener el valor que tenía el nodo
	Examen* value = node_delete->getValue();
	// Correr el puntero top al nodo siguiente
	top = top->getNext();
	// Eliminar el nodo que ya no se utiliza
	delete node_delete;
	// Devolver el valor
	return value;
}

void Stack::show() {
	NodeStack* xx = top;

	while (xx != NULL) {
		cout << "---> Direccion: " << xx << " - Valor: " << xx->getValue()->toString() << " - Next: " << xx->getNext() << endl;
		xx = xx->getNext();
	}
}

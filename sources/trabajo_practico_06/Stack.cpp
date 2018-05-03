/*
 * Stack.cpp
 *
 *  Created on: 3 may. 2018
 *      Author: dquinteros
 */

#include "Stack.h"
#include <iostream>

using namespace std;

Node* Stack::getTop() {
	return top;
}

void Stack::setTop(Node* top) {
	this->top = top;
}

Stack::Stack() {
	// TODO Auto-generated constructor stub
	top = NULL;
}

void Stack::push(int value) {
	// Crear un nodo
	Node* newNode = new Node();
	// Llenar el nodo
	newNode->setValue(value);
	newNode->setNext(top);
	// Tope apunta al nuevo nodo
	top = newNode;
}

int Stack::pop() {
	// Verifico si la pila tiene elementos
	if (top == NULL)
		return -255;
	// Crear auxiliar al nodo a eliminar
	Node* node_delete = top;
	// Crear variable para contener el valor que tenía el nodo
	int value = node_delete->getValue();
	// Correr el puntero top al nodo siguiente
	top = top->getNext();
	// Eliminar el nodo que ya no se utiliza
	delete node_delete;
	// Devolver el valor
	return value;
}

void Stack::show() {
	Node* xx = top;

	while (xx != NULL) {
		cout << "Direccion: " << xx << " - Valor: " << xx->getValue() << " - Next: " << xx->getNext() << endl;
		xx = xx->getNext();
	}
}

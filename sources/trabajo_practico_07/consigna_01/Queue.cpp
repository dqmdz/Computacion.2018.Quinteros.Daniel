/*
 * Queue.cpp
 *
 *  Created on: 10 may. 2018
 *      Author: dquinteros
 */

#include "Queue.h"

#include <iostream>

using namespace std;

NodeQueue* Queue::getEnd() {
	return end;
}

void Queue::setEnd(NodeQueue* end) {
	this->end = end;
}

NodeQueue* Queue::getStart() {
	return start;
}

void Queue::store(Alumno* value) {
	// Creo nodo nuevo
	NodeQueue* newNode = new NodeQueue();
	newNode->setValue(value);
	newNode->setStack(new Stack());
	// Hago que el puntero del último (end) apunte al nuevo
	if (end != NULL)
		end->setNext(newNode);
	// Hago que el último (end) apunte al nuevo
	end = newNode;
	// Si start es NULO entonces start tambien apunta el nuevo
	if (start == NULL)
		start = newNode;
}

Alumno* Queue::retrieve() {
	// Si la cola está vacía devuelvo -255
	if (start == NULL)
		return NULL;
	// Variables auxiliares para no perder la referencia
	NodeQueue* aux = start;
	Alumno* value = start->getValue();
	// Corro el start al nodo siguiente
	start = start->getNext();
	// Verifico si start es NULO
	if (start == NULL)
		end = NULL;
	// Elimino el nodo
	delete aux;
	// Devuelvo el valor recuperado
	return value;
}

void Queue::setStart(NodeQueue* start) {
	this->start = start;
}

Queue::Queue() {
	// TODO Auto-generated constructor stub
	this->start = this->end = NULL;
}

void Queue::show() {
	NodeQueue* xx = start;

	while (xx != NULL) {
		cout << "Direccion: " << xx << " - Valor: " << xx->getValue()->toString() << " - Next: " << xx->getNext() << endl;
		xx->getStack()->show();
		cout << endl;
		xx = xx->getNext();
	}
	cout << endl << endl;
}

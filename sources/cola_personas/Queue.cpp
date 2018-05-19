/*
 * Queue.cpp
 *
 *  Created on: 10 may. 2018
 *      Author: dquinteros
 */

#include "Queue.h"

#include <iostream>

using namespace std;

Node* Queue::getEnd() {
	return end;
}

void Queue::setEnd(Node* end) {
	this->end = end;
}

Node* Queue::getStart() {
	return start;
}

void Queue::store(Persona* value) {
	// Creo nodo nuevo
	Node* newNode = new Node();
	newNode->setValue(value);
	// Hago que el puntero del último (end) apunte al nuevo
	if (end != NULL)
		end->setNext(newNode);
	// Hago que el último (end) apunte al nuevo
	end = newNode;
	// Si start es NULO entonces start tambien apunta el nuevo
	if (start == NULL)
		start = newNode;
}

Persona* Queue::retrieve() {
	// Si la cola está vacía devuelvo -255
	if (start == NULL)
		return NULL;
	// Variables auxiliares para no perder la referencia
	Node* aux = start;
	Persona* value = start->getValue();
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

void Queue::setStart(Node* start) {
	this->start = start;
}

Queue::Queue() {
	// TODO Auto-generated constructor stub
	this->start = this->end = NULL;
}

void Queue::show() {
	Node* xx = start;

	while (xx != NULL) {
		cout << "Direccion: " << xx << " - Valor: " << xx->getValue()->toString() << " - Next: " << xx->getNext() << endl;
		xx = xx->getNext();
	}
	cout << endl << endl;
}

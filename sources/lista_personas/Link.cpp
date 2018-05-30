/*
 * Link.cpp
 *
 *  Created on: 30 may. 2018
 *      Author: daniel
 */

#include "Link.h"
#include <iostream>

using namespace std;

Node* Link::getStart() {
	return start;
}

void Link::add(Persona* value) {
	Node* newNode = new Node();
	newNode->setValue(value);

	// Si la lista está vacía
	if (start == NULL) {
		start = newNode;
		return;
	}

	// Si el elemento nuevo es menor al primero
	if (*(start->getValue()) > *value) {
		newNode->setNext(start);
		start = newNode;
		return;
	}

	// Busca posicion para el nuevo valor
	Node *previous, *search;
	search = previous = start;
	while (search != NULL && *(search->getValue()) <= *value) {
		previous = search;
		search = search->getNext();
	}

	// Si el while sale por NULL
	if (search == NULL) {
		previous->setNext(newNode);
		return;
	}

	// Si sale por mayor valor
	newNode->setNext(previous->getNext());
	previous->setNext(newNode);

}

bool Link::remove(Persona* value) {
	// Verifica si la lista está vacía
	if (start == NULL)
		return false;
	// Verifica si es el primero
	if (*(start->getValue()) == *value) {
		Node* xx = start;
		start = start->getNext();
		delete xx;
		return true;
	}
	// Busca posicion para del valor a eliminar
	Node *previous, *search;
	search = previous = start;
	while (search != NULL && *(search->getValue()) != *value) {
		previous = search;
		search = search->getNext();
	}

	// Si el while sale por NULL
	if (search == NULL) {
		return false;
	}
	// Si sale del while porque encontró el valor
	Node* xx = search;
	previous->setNext(search->getNext());
	delete xx;

	return true;
}

void Link::show() {
	Node* xx = start;

	while (xx != NULL) {
		cout << "Direccion: " << xx << " - Valor: " << xx->getValue()->toString() << " - Next: " << xx->getNext() << endl;
		xx = xx->getNext();
	}}

void Link::setStart(Node* start) {
	this->start = start;
}

Link::Link() {
	// TODO Auto-generated constructor stub
	start = NULL;
}


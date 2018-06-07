/*
 * Link.cpp
 *
 *  Created on: 30 may. 2018
 *      Author: daniel
 */

#include <iostream>
#include "LinkDouble.h"

using namespace std;

Node* LinkDouble::getStart() {
	return start;
}

void LinkDouble::add(int value) {
	Node* newNode = new Node();
	newNode->setValue(value);

	// Si la lista está vacía
	if (start == NULL) {
		start = newNode;
		end = newNode;
		return;
	}

	// Si el elemento nuevo es menor al primero
	if (start->getValue() >= value) {
		newNode->setNext(start);
		start->setPrev(newNode);
		start = newNode;
		return;
	}

	// Si el elemento nuevo es mayor al último
	if (end->getValue() <= value) {
		newNode->setPrev(end);
		end->setNext(newNode);
		end = newNode;
		return;
	}

	// Busca posicion para el nuevo valor
	Node *previous, *search;
	search = previous = start;
	while (search->getValue() < value) {
		previous = search;
		search = search->getNext();
	}

	// Si sale por mayor valor
	newNode->setNext(previous->getNext());
	newNode->setPrev(search->getPrev());
	previous->setNext(newNode);
	search->setPrev(newNode);
}

bool LinkDouble::remove(int value) {
	// Verifica si la lista está vacía
	if (start == NULL)
		return false;
	// Si es menor al primero o mayor al último devolver false
	if (value < start->getValue() || value > end->getValue())
		return false;
	// Verifica si es el primero
	if (start->getValue() == value) {
		Node* xx = start;
		start = start->getNext();
		if (start == NULL)
			end = NULL;
		else
			start->setPrev(NULL);
		delete xx;
		return true;
	}

	// Verifica si es el último
	if (end->getValue() == value) {
		Node* xx = end;
		end = end->getPrev();
		end->setNext(NULL);
		delete xx;
		return true;
	}

	// Busca posicion para del valor a eliminar
	Node *previous, *search;
	search = previous = start;
	while (search->getValue() < value) {
		previous = search;
		search = search->getNext();
	}

	// Si el while sale por valor mayor
	if (search->getValue() != value) {
		return false;
	}
	// Si sale del while porque encontró el valor
	Node* xx = search;
	search = search->getNext();
	previous->setNext(xx->getNext());
	search->setPrev(xx->getPrev());
	delete xx;

	return true;
}

void LinkDouble::show(bool direccion) {
	Node* xx;

	if (direccion == true)
		xx = start;
	else
		xx = end;

	while (xx != NULL) {
		cout << "Direccion: " << xx << " - Prev: " << xx->getPrev() << " - Valor: " << xx->getValue() << " - Next: " << xx->getNext() << endl;
		if (direccion == true)
			xx = xx->getNext();
		else
			xx = xx->getPrev();
	}
}

Node* LinkDouble::getEnd() {
	return end;
}

void LinkDouble::setEnd(Node* end) {
	this->end = end;
}

void LinkDouble::setStart(Node* start) {
	this->start = start;
}

LinkDouble::LinkDouble() {
	// TODO Auto-generated constructor stub
	start = NULL;
	end = NULL;
}


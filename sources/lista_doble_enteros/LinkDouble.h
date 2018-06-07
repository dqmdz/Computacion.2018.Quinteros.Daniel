/*
 * Link.h
 *
 *  Created on: 30 may. 2018
 *      Author: daniel
 */

#ifndef LINKDOUBLE_H_
#define LINKDOUBLE_H_

#include "Node.h"

class LinkDouble {
private:
	Node* start;
	Node* end;
public:
	LinkDouble();
	void add(int);
	bool remove(int);
	void show(bool);
	Node* getStart();
	void setStart(Node*);
	Node* getEnd();
	void setEnd(Node*);
};

#endif /* LINKDOUBLE_H_ */

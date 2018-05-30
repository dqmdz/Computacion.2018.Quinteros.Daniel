/*
 * Link.h
 *
 *  Created on: 30 may. 2018
 *      Author: daniel
 */

#ifndef LINK_H_
#define LINK_H_

#include "Node.h"

class Link {
private:
	Node* start;
public:
	Link();
	void add(int);
	bool remove(int);
	void show();
	Node* getStart();
	void setStart(Node*);
};

#endif /* LINK_H_ */

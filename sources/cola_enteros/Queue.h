/*
 * Queue.h
 *
 *  Created on: 10 may. 2018
 *      Author: dquinteros
 */

#ifndef QUEUE_H_
#define QUEUE_H_

#include "Node.h"

class Queue {
private:
	Node* start;
	Node* end;
public:
	Queue();
	void store(int);
	int retrieve();
	Node* getEnd();
	void setEnd(Node*);
	Node* getStart();
	void setStart(Node*);

	void show();
};

#endif /* QUEUE_H_ */

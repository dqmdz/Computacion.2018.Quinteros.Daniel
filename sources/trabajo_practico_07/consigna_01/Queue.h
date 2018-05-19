/*
 * Queue.h
 *
 *  Created on: 10 may. 2018
 *      Author: dquinteros
 */

#ifndef QUEUE_H_
#define QUEUE_H_

#include "NodeQueue.h"

class Queue {
private:
	NodeQueue* start;
	NodeQueue* end;
public:
	Queue();
	void store(Alumno*);
	Alumno* retrieve();
	NodeQueue* getEnd();
	void setEnd(NodeQueue*);
	NodeQueue* getStart();
	void setStart(NodeQueue*);

	void show();
};

#endif /* QUEUE_H_ */

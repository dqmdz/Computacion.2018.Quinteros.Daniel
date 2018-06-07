/*
 * Node.h
 *
 *  Created on: 3 may. 2018
 *      Author: dquinteros
 */

#ifndef NODE_H_
#define NODE_H_

class Node {
private:
	int value;
	Node* prev;
	Node* next;
public:
	Node();
	Node* getNext();
	void setNext(Node* next);
	int getValue();
	void setValue(int value);
	Node* getPrev();
	void setPrev(Node* prev);
};

#endif /* NODE_H_ */

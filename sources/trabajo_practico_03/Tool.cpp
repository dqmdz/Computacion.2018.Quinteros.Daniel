/*
 * Tool.cpp
 *
 *  Created on: 5 abr. 2018
 *      Author: dquinteros
 */

#include "Tool.h"

void Tool::orderArrayByReferenceByArrayMethod(int* arr, int size) {
	int x;
	for (int i = 0; i < size - 1; ++i) {
		for (int j = i + 1; j < size; ++j) {
			if (arr[i] > arr[j]) {
				x = arr[i];
				arr[i]=arr[j];
				arr[j]=x;
			}
		}
	}
}

void Tool::orderArrayByReferenceByMemoryMethod(int* arr, int size) {
	int x;
	for (int i = 0; i < size - 1; ++i) {
		for (int j = i + 1; j < size; ++j) {
			if (*(arr+i) > *(arr+j)) {
				x = *(arr+i);
				*(arr+i)=*(arr+j);
				*(arr+j)=x;
			}
		}
	}
}

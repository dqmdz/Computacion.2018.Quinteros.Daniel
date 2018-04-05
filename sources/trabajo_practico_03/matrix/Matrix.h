/*
 * Matrix.h
 *
 *  Created on: 5 abr. 2018
 *      Author: dquinteros
 */

#ifndef MATRIX_H_
#define MATRIX_H_

class Matrix {
private:
	int rows;
	int columns;
	int *values;
public:
	int getColumns() const;
	void setColumns(int columns);
	int getRows() const;
	void setRows(int rows);
	int* getValues() const;
	void setValues(int* values);
	void inputByMemoryMethod();
};

#endif /* MATRIX_H_ */

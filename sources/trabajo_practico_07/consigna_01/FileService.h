/*
 * FileService.h
 *
 *  Created on: 18 may. 2018
 *      Author: daniel
 */

#ifndef FILESERVICE_H_
#define FILESERVICE_H_

#include <iostream>
#include "Curso.h"

using namespace std;

class FileService {
public:
	FileService();
	const string& getFilename() const;
	void setFilename(const string& filename);
	void generate();
	void read(Curso*);
private:
	string filename;
};

#endif /* FILESERVICE_H_ */

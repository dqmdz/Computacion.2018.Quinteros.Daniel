/*
 * FileService.cpp
 *
 *  Created on: 18 may. 2018
 *      Author: daniel
 */

#include "FileService.h"
#include "AlumnoService.h"
#include "ExamenService.h"
#include <fstream>

using namespace std;

const string& FileService::getFilename() const {
	return filename;
}

FileService::FileService() {
	filename = "alumnos.txt";
}

void FileService::setFilename(const string& filename) {
	this->filename = filename;
}

void FileService::generate() {
	ofstream file;

	file.open(filename, ios::out);
	(new AlumnoService())->write(&file, new Alumno("Jose", "Perez", 10));
	(new ExamenService())->write(&file, new Examen("Computacion", "18/05/2018", 10, 1, 35));
	(new ExamenService())->write(&file, new Examen("Informatica", "18/05/2017", 7, 10, 135));
	(new AlumnoService())->write(&file, new Alumno("Pepa", "Diaz", 105));
	(new ExamenService())->write(&file, new Examen("Computacion", "18/05/2018", 5, 1, 35));
	file.close();
}

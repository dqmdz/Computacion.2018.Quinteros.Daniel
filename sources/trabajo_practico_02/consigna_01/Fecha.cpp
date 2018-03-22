/*
 * Fecha.cpp
 *
 *  Created on: 22 mar. 2018
 *      Author: dquinteros
 */

#include "Fecha.h"
#include <iostream>
using namespace std;

int Fecha::getAnho() const {
	return anho;
}

void Fecha::setAnho(int anho) {
	this->anho = anho;
}

int Fecha::getDia() const {
	return dia;
}

void Fecha::setDia(int dia) {
	this->dia = dia;
}

int Fecha::getMes() const {
	return mes;
}

void Fecha::setMes(int mes) {
	this->mes = mes;
}

Fecha::Fecha() {
	// TODO Auto-generated constructor stub
	dia = 1;
	mes = 1;
	anho = 1980;
}

Fecha::Fecha(int dia, int mes, int anho) {
	this->dia = dia;
	this->mes = mes;
	this->anho = anho;
}

bool Fecha::operator<(Fecha fecha) {
	if (anho < fecha.anho)
		return true;
	if (anho > fecha.anho)
		return false;
	if (mes < fecha.mes)
		return true;
	if (mes > fecha.mes)
		return false;
	if (dia < fecha.dia)
		return true;
	return false;
}

Fecha Fecha::operator +=(int dias) {
	int diasmes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	dia += dias;

	while (dia > diasmes[mes - 1]) {
		if (mes == 2) {
			if (dia > 28) {
				mes++;
				dia-=28;
			}
		}
		if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
			if (dia > 31) {
				mes++;
				dia -= 31;
			}
		}
		if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
			if (dia > 30) {
				mes++;
				dia -= 30;
			}
		}
		if (mes > 12) {
			mes -= 12;
			anho++;
		}
	}
	return *this;
}

void Fecha::input() {
	cout << "  Ingrese dia: ";
	cin >> dia;
	cout << "  Ingrese mes: ";
	cin >> mes;
	cout << "  Ingrese año: ";
	cin >> anho;
}

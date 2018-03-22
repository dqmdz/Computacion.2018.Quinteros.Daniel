/*
 * Fecha.h
 *
 *  Created on: 22 mar. 2018
 *      Author: dquinteros
 */

#ifndef FECHA_H_
#define FECHA_H_

class Fecha {
private:
	int dia;
	int mes;
	int anho;
public:
	Fecha();
	Fecha(int, int, int);
	int getAnho() const;
	void setAnho(int );
	int getDia() const;
	void setDia(int );
	int getMes() const;
	void setMes(int );
	bool operator<(Fecha);
	Fecha operator+=(int);
	void input();
};

#endif /* FECHA_H_ */

#pragma once
#ifndef PILA_H
#define PILA_H
#include "NodoCarta.h"


class Pila {
public:
	int longitud = 0;
	Pila();
	Pila(const Pila& orig);
	virtual ~Pila();
	int longPila();
	bool esVacia();
	bool push(NodoCarta *x);
	NodoCarta* pop();
	void recorrer();
private:
	
	NodoCarta *primero;
	NodoCarta *ultimo;
};

#endif /* PILA_H */

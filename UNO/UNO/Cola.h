#pragma once
#ifndef COLA_H
#define COLA_H
#include "NodoCarta.h"

class Cola {
public:
	Cola();
	Cola(const Cola& orig);
	virtual ~Cola();
	int longCola();
	bool esVacia();
	bool insertar(NodoCarta x);
	NodoCarta atender();
	void recorrer();

private:
	int longitud;
	NodoCarta *primero;
	NodoCarta *ultimo;

};

#endif /* Cola_H */
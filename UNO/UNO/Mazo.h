#pragma once
#include "Pila.h"
#include "Carta.h"
class Mazo
{
private:
	Pila* cartasPila = new Pila();
public:
	Mazo(Pila *p);
	Mazo();
	~Mazo();
	Carta * sacarCarta();
	void ponerCarta(Carta *x);
};


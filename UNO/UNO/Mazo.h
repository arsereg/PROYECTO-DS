#pragma once
#include "Pila.h"
#include "Carta.h"
class Mazo
{
private:
	Pila* cartasPila;
public:
	Mazo(Pila *p);
	~Mazo();
	Carta sacarCarta();
	void ponerCarta(Carta *x);
};


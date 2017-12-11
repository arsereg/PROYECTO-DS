#pragma once
#include "Carta.h"
class Numero :
	public Carta
{
public:
	Numero(int pnumero, Carta::Color pcolor);
	int getNumero();
private:
	int numero;
	void setNumero(int e);
};


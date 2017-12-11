#pragma once
#include "Cola.h"
#include "Carta.h"
//#include "Mazo.h"

class Cementerio
{
private:
	Cola* cementerioCartas;
public:
	Cementerio();
	~Cementerio();
	void ponerCarta(Carta);
	//Mazo darVuelta();
};
#pragma once
#include "Carta.h"
class Especial :
	public Carta
{
public:
	enum tipoCarta {tomaDos, tomaCuatro, salta, giro, comodin};
	Especial(tipoCarta ptipo, Carta::Color pcolor);
	~Especial();
	enum tipoCarta efecto;

};


#include "stdafx.h"
#include "Especial.h"



Especial::Especial(tipoCarta ptipo, Carta::Color pcolor)
	:Carta::Carta(pcolor, Carta::especial)
{
	efecto = ptipo;
}

Especial::~Especial()
{
}

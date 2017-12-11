#include "stdafx.h"
#include "Carta.h"


Carta::Carta(Color pcolor, type ptipo)
{
	setColor(pcolor);
	setTipo(ptipo);
}

Carta::~Carta()
{
}

string Carta::getColor()
{
	switch (colorCarta) {
	case rojo: return "rojo"; break;
	case verde: return "verde"; break;
	case azul: return "azul"; break;
	case amarillo: return "amarillo"; break;
	case negro: return "negro"; break;
	default: return "error";
	}
}

string Carta::getTipo()
{
	switch (tipoCarta) {
	case numero: return "numero"; break;
	case especial: return "especial"; break;
	default: return "error";
	}
}



void Carta::setColor(Color pcolor)
{
	colorCarta = pcolor;
}

void Carta::setTipo(type ptipo)
{
	tipoCarta = ptipo;
}

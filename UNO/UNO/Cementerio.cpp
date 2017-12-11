#include "stdafx.h"
#include "Cementerio.h"


Cementerio::Cementerio() {
	this->cementerioCartas = new Cola<Carta>;
}


Cementerio::~Cementerio() {
}

void Cementerio::ponerCarta(Carta cartanueva) {
	this->cementerioCartas->insertarElem(cartanueva);
}


/*
Mazo Cementerio::darVuelta() {
	Mazo *mazoretorna = new Mazo;
	for (int i = 0; i < this->cementerioCartas->longCola(); i++) {
		mazoretorna->ponerCarta(this->cementerioCartas->atender());
	}
	return *mazoretorna;
}*/
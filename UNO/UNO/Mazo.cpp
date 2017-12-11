#include "stdafx.h"
#include "Mazo.h"


Mazo::Mazo(Pila *p) {
	this->cartasPila = p;
}


Mazo::~Mazo() {
}

Carta * Mazo::sacarCarta() {
	NodoCarta *temp = this->cartasPila->pop();
	return temp->info;
}

void Mazo::ponerCarta(Carta *x) {
	NodoCarta *temp = new NodoCarta(x);
	this->cartasPila->push(temp);
}

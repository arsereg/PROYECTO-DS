#include "stdafx.h"
#include "Mazo.h"
#include "ListaCarta.h"
#include "Numero.h"
#include "Especial.h"

Mazo::Mazo(Pila *p) {
	this->cartasPila = p;
}

Mazo::Mazo() {
	ListaCarta * rojas = new ListaCarta();
	ListaCarta * verdes = new ListaCarta();
	ListaCarta * amarillas = new ListaCarta();
	ListaCarta * azules = new ListaCarta();
	ListaCarta * unaLista = NULL;
	for (int i = 0; i < 4; i++) {
		Carta::Color unColor;
		switch (i) {
		case 0: unColor = Carta::rojo;
			unaLista = rojas;
			break;
		case 1: unColor = Carta::verde;
			unaLista = verdes;
			break;
		case 2: unColor = Carta::amarillo;
			unaLista = amarillas;
			break;
		case 3: unColor = Carta::azul;
			unaLista = azules;
			break;
		default: cout << "error" << endl;
		}
		for (int j = 0; j < 2; j++) {
			for (int k = 1; k < 10; k++) {
				Numero * unNumero = new Numero(k, unColor);
				unaLista->addRandom(unNumero);
			}
		}
		Numero * unNumero = new Numero(0, unColor);
		unaLista->addRandom(unNumero);
		Especial * unEspecial = new Especial(Especial::tomaDos, unColor);
		for (int k = 0; k < 2; k++) {
			unaLista->addRandom(unEspecial);
		}

		unEspecial = new Especial(Especial::giro, unColor);
		for (int k = 0; k < 2; k++) {
			unaLista->addRandom(unEspecial);
		}

		unEspecial = new Especial(Especial::salta, unColor);
		for (int k = 0; k < 2; k++) {
			unaLista->addRandom(unEspecial);
		}
	}
	ListaCarta * listaEspeciales = new ListaCarta();
	Especial * unEspecial = new Especial(Especial::tomaCuatro, Carta::negro);
	for (int i = 0; i < 4; i++) {
		listaEspeciales->addRandom(unEspecial);
	}
	
	unEspecial = new Especial(Especial::comodin, Carta::negro);
	
	for (int i = 0; i < 4; i++) {
		listaEspeciales->addRandom(unEspecial);
	}
	Pila * laPila = new Pila();
	for (int i = 0; i < rojas->getLongitud(); i++) {
		laPila->push(rojas->get(i));
	}
	for (int i = 0; i < verdes->getLongitud(); i++) {
		laPila->push(rojas->get(i));
	}
	for (int i = 0; i < azules->getLongitud(); i++) {
		laPila->push(rojas->get(i));
	}
	for (int i = 0; i < amarillas->getLongitud(); i++) {
		laPila->push(rojas->get(i));
	}
	for (int i = 0; i < listaEspeciales->getLongitud(); i++) {
		laPila->push(listaEspeciales->get(i));
	}
	cartasPila = laPila;
	
}

Mazo::~Mazo() {

}

Carta * Mazo::sacarCarta() {
	NodoCarta *temp = cartasPila->pop();
	return temp->info;
}

void Mazo::ponerCarta(Carta *x) {
	NodoCarta *temp = new NodoCarta(x);
	this->cartasPila->push(temp);
}

#include "stdafx.h"
#include "Pila.h"
#include "Numero.h"

Pila::Pila() {
	this->primero = NULL;
	this->ultimo = NULL;
	this->longitud = 0;
}

Pila::Pila(const Pila& orig) {
}

Pila::~Pila() {
}

int Pila::longPila() {
	return this->longitud;
}

bool Pila::esVacia() {
	bool value = false;
	if (this->longitud == 0) {
		value = true;
	}
	return value;
}


bool Pila::push(NodoCarta *e) {
	NodoCarta *nuevo = new NodoCarta(*e);
	if (nuevo == nullptr) {
		return false;
	}
	else {
		if (this->esVacia()) {
			this->primero = nuevo;
			this->ultimo = nuevo;
			this->primero->sig = this->ultimo;
		}
		else {
			this->ultimo->sig = nuevo;
			this->ultimo = nuevo;
		}
		this->longitud++;
		return true;
	}
}


NodoCarta* Pila::pop() {
	cout << longPila();
	/*NodoCarta *val = this->ultimo;
	int index = 0;
	NodoCarta *auxRecorrido = this->primero;
	NodoCarta *aux = this->primero;
	NodoCarta *prev = aux;
	while (aux->sig != NULL) {
		prev = aux;
		aux = aux->sig;
	}
	this->ultimo = prev;
	this->ultimo->sig = nullptr;
	this->longitud--;
	return val;*/

	Carta * unaCarta = new Numero(1, Carta::rojo);
	NodoCarta * test = new NodoCarta(unaCarta);
	return test;
}

void Pila::recorrer() {
	NodoCarta *auxRecorrido = this->primero;
	int index = 0;
	while (index <= this->longitud && auxRecorrido != nullptr) {
		//std::cout << auxRecorrido->info;
		std::cout << "->";
		auxRecorrido = auxRecorrido->sig;
		index++;
	}
	std::cout << "Final";
}

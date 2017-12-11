#include "stdafx.h"
#include <iostream>
#include "Cola.h"


Cola::Cola() {
	this->primero = nullptr;
	this->ultimo = nullptr;
	this->longitud = 0;
}

Cola::Cola(const Cola& orig) {
}

Cola::~Cola() {
}

int Cola::longCola() {
	return this->longitud;
}

bool Cola::esVacia() {
	bool value = false;
	if (this->longitud == 0) {
		value = true;
	}
	return value;
}

bool Cola::insertar(NodoCarta e) {
	NodoCarta *nuevo = new NodoCarta(e);
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

NodoCarta Cola::atender() {
	NodoCarta val = this->primero->info;
	this->primero = this->primero->sig;
	return val;
}

void Cola::recorrer() {
	NodoCarta *auxRecorrido = this->primero;
	int index = 0;
	while (index <= this->longitud && auxRecorrido != nullptr) {
		//std::cout << auxRecorrido->info->getColor();
		std::cout << "->";
		auxRecorrido = auxRecorrido->sig;
		index++;
	}
	std::cout << "Final";
}
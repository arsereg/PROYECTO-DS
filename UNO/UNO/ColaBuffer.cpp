#include "stdafx.h"
#include "ColaBuffer.h"


ColaBuffer::ColaBuffer()
{
	longitud = 0;
	tope = NULL;
}


ColaBuffer::~ColaBuffer()
{

}

void ColaBuffer::pushElem(Carta* pCarta) {
	NodoBuffer * aux = new NodoBuffer(pCarta);
	if (getTope() == NULL) {
		setTope(aux);
	}
	else {
		aux->setSig(getTope());
		setTope(aux);
	}
	setLongitud(getLongitud() + 1);
}

NodoBuffer* ColaBuffer::popElem(void) {
	NodoBuffer * result = NULL;
	NodoBuffer * aux = tope;
	if (esVacio()) {
		std::cout << "Esta vacio" << std::endl;
	}
	else {
		longitud--;
		result = getLast();
		std::cout << result << std::endl;
		int nombre;
		cin >> nombre;
		for (int i = 0; i < longitud; i++) {
			aux = aux->getSig();
		}
		aux->setSig(NULL);
	}
	return result;
}



int ColaBuffer::getLongitud(void) {
	return longitud;
}

void ColaBuffer::setLongitud(int l) {
	longitud = l;
}

bool ColaBuffer::esVacio(void) {
	if (getLongitud() == 0) {
		return true;
	}
	else {
		return false;
	}
}

void ColaBuffer::vaciar(void) {
	NodoBuffer * aux;
	if (!(this->esVacio())) {
		for (aux = tope; aux != NULL; aux = tope) {
			tope = tope->getSig();
			delete aux;
			longitud--;
		}
		std::cout << "Lista vaciada." << std::endl;
	}
	else {
		std::cout << "Lista sin elementos..." << std::endl;
	}
}

NodoBuffer* ColaBuffer::getTope(void) {
	return tope;
}

void ColaBuffer::setTope(NodoBuffer* x) {
	tope = x;
}

NodoBuffer * ColaBuffer::getLast() {
	NodoBuffer* result = tope;
	while (result->getSig() != NULL) {
		result = result->getSig();
	}
	return result;

}
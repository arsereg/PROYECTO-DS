#include "stdafx.h"
#include "ListaCarta.h"
#include <iostream>
#include "NodoCarta.h"

ListaCarta::ListaCarta() {
	longitud = 0;
	tope = NULL;
}

int ListaCarta::getLongitud(void) {
	return longitud;
}

void ListaCarta::add(Carta * e)
{
	NodoCarta * nuevo = new NodoCarta(e);
	if (tope == NULL) {
		tope = nuevo;
	}
	else {
		getLast()->setSig(nuevo);
	}
	longitud++;

}

NodoCarta * ListaCarta::getTope(void)
{
	return tope;
}

void ListaCarta::setLongitud(int l) {
	longitud = l;
}
void ListaCarta::setTope(NodoCarta * x)
{
	tope = x;
}

NodoCarta * ListaCarta::getLast() {
	NodoCarta * result = tope;
	while (result->getSig() != NULL) {
		result = result->getSig();
	}
	return result;
}

ListaCarta::~ListaCarta(void) {
	NodoCarta * aux;
	for (aux = tope; aux != NULL; aux = tope) {
		tope = tope->getSig();
		delete aux;
		longitud--;
	}
	std::cout << "Lista destruida." << std::endl;

}
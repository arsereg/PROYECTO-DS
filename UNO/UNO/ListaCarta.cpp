#include "stdafx.h"
#include "ListaCarta.h"
#include "NodoCarta.h"
#include <random>
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

void ListaCarta::addRandom(Carta * e)
{
	NodoCarta * nuevo = new NodoCarta(e);
	if (tope == NULL) {
		tope = nuevo;
	}
	else {
		std::random_device seeder;
		std::mt19937 engine(seeder());
		std::uniform_int_distribution<int> dist(0, (longitud));
		int random = dist(engine);
		NodoCarta * posicion = tope;
		for (int i = 0; i < random -1; i++) {
			posicion->getSig();
		}
		nuevo->setSig(posicion->getSig());
		posicion->setSig(nuevo);
	}
	longitud++;
}

NodoCarta * ListaCarta::get(int i)
{
	NodoCarta * result = tope;
	for (int k = 0; k < i; k++) {
		result = result->getSig();
	}
	return result;
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
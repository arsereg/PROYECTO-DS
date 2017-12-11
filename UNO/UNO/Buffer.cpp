#include "stdafx.h"
#include "Buffer.h"



Buffer::Buffer()
{
	myqueue = new ColaBuffer();
	cartasComer = 0;
	player = 0;
	color = "";
}

Buffer::~Buffer()
{

}
ColaBuffer* Buffer::getColaBuffer(void) {
	return myqueue;
}
void Buffer::setColaBuffer(ColaBuffer* c) {
	myqueue = c;
}

void Buffer::setPlayer(int pPlayer) {
	player = pPlayer;
}

int Buffer::getPlayer(void) {
	return player;
}

void Buffer::setCartasComer(int pCartasComer) {
	cartasComer = pCartasComer;
}

int Buffer::getCartasComer() {
	return cartasComer;
}

void Buffer::setColor(string pColor) {
	color = pColor;
}

string Buffer::getColor(string Color) {
	return color;
}

int Buffer::calcularCartas() {
	string tipo = "";
	while (getColaBuffer()->esVacio() != NULL) {
		tipo = getColaBuffer()->popElem()->getCarta()->getTipo();
		if ("tomeDos" == tipo) {
			cartasComer = getCartasComer() + 2;
		}
		else if ("tomaCuatro" == tipo) {
			cartasComer = getCartasComer() + 4;
		}
	}
	return getCartasComer();
}

void Buffer::guardarCarta(Carta * pCarta)
{
	getColaBuffer()->pushElem(pCarta);
	setColor(pCarta->getColor());
	if (pCarta->getTipo() != "salta" || pCarta->getTipo() != "giro") {
		siguienteTurno();
	}
}


void Buffer::siguienteTurno() {
	switch (getPlayer())
	{
	case 1:
		setPlayer(2);
		break;
	case 2:
		setPlayer(1);
		break;
	default:
		break;
	}
}
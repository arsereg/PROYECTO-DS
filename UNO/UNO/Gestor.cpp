#include "stdafx.h"
#include "Gestor.h"


Gestor::Gestor()
{
	mazo = new Mazo();
}


Gestor::~Gestor()
{

}

void Gestor::setPlayers(string p1, string p2)
{
	player1->setName(p1);
	player2->setName(p2);

}

void Gestor::incp1()
{
	player1->ganar();
}

void Gestor::incp2()
{
	player2->ganar();
}

void Gestor::restart()
{
	player1->restart();
	player2->restart();
}

void Gestor::comenzarJuego()
{
	for (int i = 0; i < 7; i++) {
		player1->robarCarta(mazo);
	}
	for (int i = 0; i < 7; i++) {
		player2->robarCarta(mazo);
	}
}

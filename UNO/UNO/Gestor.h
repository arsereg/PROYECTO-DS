#include "stdafx.h"
#include "Player.h"
#ifndef GESTOR_H
#define GESTOR_H
#pragma once
class Gestor
{
public:
	Gestor();
	~Gestor();
	void setPlayers(string p1, string p2);
	void incp1();
	void incp2();
	void restart();
	void jugar(Player * e);
	void comenzarJuego();
private:
	Player * player1 = new Player();
	Player * player2 = new Player();
	Mazo * mazo;
};
#endif;



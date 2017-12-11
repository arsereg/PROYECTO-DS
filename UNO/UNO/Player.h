#pragma once
#include "ListaCarta.h"
#include "Mazo.h"
class Player
{
public:
	Player();
	~Player();
	void ganar();
	void setName(string pname);
	string getName();
	ListaCarta * getMano();
	void robarCarta(Mazo*);
	void restart();
private:
	string name;
	ListaCarta * mano = new ListaCarta();
	int puntos = 0;
};


#include "stdafx.h"
#include "Player.h"

#include "Numero.h"
#include "nodoCarta.h"

Player::Player()
{
}


Player::~Player()
{
}

void Player::ganar()
{
	puntos++;
}

void Player::setName(string pname)
{
	name = pname;
}

string Player::getName()
{
	return name;
}

ListaCarta * Player::getMano()
{
	return mano;
}

void Player::robarCarta(Mazo * e)
{
	mano->add(e->sacarCarta());

}

void Player::restart()
{
	puntos = 0;
}

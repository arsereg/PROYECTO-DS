#pragma once
#include "ColaBuffer.h"
#include "Carta.h"
#include "Especial.h"
#include <iostream>
#include <string>

#ifndef BUFFER_H
#define BUFFER_H
using std::string;
using namespace std;

class Buffer
{
public:
	Buffer();
	~Buffer();

	ColaBuffer* getColaBuffer(void);
	void setColaBuffer(ColaBuffer* c);

	void setPlayer(int pPlayer);
	int getPlayer(void);

	void setCartasComer(int pCartarComer);
	int getCartasComer(void);

	void setColor(string pColor);
	string getColor(string Color);

	int calcularCartas(void);
	void guardarCarta(Carta* pCarta);
	void siguienteTurno();



private:
	ColaBuffer* myqueue;
	int player;
	int cartasComer;
	string color;
};

#endif // !BUFFER_H
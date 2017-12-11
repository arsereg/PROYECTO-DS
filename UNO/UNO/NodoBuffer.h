#pragma once
#ifndef NODOENT_H
#define NODOENT_H
#include "Carta.h"
#include <iostream>

using namespace std;

class NodoBuffer
{
public:
	NodoBuffer();
	NodoBuffer(Carta* pCarta);
	~NodoBuffer();

	void setCarta(Carta* x);
	Carta* getCarta(void);

	void setSig(NodoBuffer* x);
	NodoBuffer* getSig(void);

private:
	Carta* carta;
	NodoBuffer* sig;
};
#endif  NODOENT_H
#pragma once
#ifndef COLABUFFER_H
#include "NodoBuffer.h"
#include <iostream>

using namespace std;

class ColaBuffer
{
public:
	ColaBuffer();
	~ColaBuffer();
	void pushElem(Carta* pCarta);
	NodoBuffer* popElem(void);
	int getLongitud(void);
	void setLongitud(int l);
	bool esVacio(void);
	void vaciar(void);
	void setTope(NodoBuffer* x);
	NodoBuffer* getTope(void);
	NodoBuffer* getLast(void);


private:
	int longitud;
	NodoBuffer* tope;

};

#endif // !BUFFER_H
#include "stdafx.h"
#include "NodoBuffer.h"



NodoBuffer::NodoBuffer()
{

}


NodoBuffer::~NodoBuffer()
{

}

NodoBuffer::NodoBuffer(Carta* pCarta) {
	carta = pCarta;
	sig = NULL;

}

void NodoBuffer::setCarta(Carta* pCarta) {
	carta = pCarta;
}

Carta* NodoBuffer::getCarta(void) {
	return carta;
}
void NodoBuffer::setSig(NodoBuffer* x) {
	sig = x;
}

NodoBuffer * NodoBuffer::getSig(void) {
	return sig;
}
#ifndef NODO_H
#define NODO_H
#include "Carta.h"

class NodoCarta {
public:
	Carta info;
	NodoCarta *sig;

	NodoCarta(const Carta& d) : info(d), sig() {}
	NodoCarta(const NodoCarta& copyNode) : info(copyNode.info), sig() {}
	NodoCarta::~NodoCarta() {}
};

#endif /* NODO_H */
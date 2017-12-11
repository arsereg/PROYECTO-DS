#ifndef NODO_H
#define NODO_H
#include "Carta.h"

class NodoCarta {
public:
	Carta * info;
	
	NodoCarta *sig;

	NodoCarta(Carta* d) : info(d), sig() {}
	NodoCarta(const NodoCarta& copyNode) : info(copyNode.info), sig() {}
	NodoCarta::~NodoCarta() {}
	NodoCarta * getSig();
	void setSig(NodoCarta * e);
};

#endif /* NODO_H */
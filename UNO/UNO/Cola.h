#pragma once
#ifndef COLA_H
#define COLA_H
#include "Nodo.h"

template <class T>
class Cola {
public:
	Cola();
	Cola(const Cola& orig);
	virtual ~Cola();
	int longCola();
	bool esVacia();
	bool insertarElem(T x);
	bool estaEnCola(T x);
	bool eliminarValor(T x);
	bool eliminarPosicion(int i);
	T atender();
	T ultimoCola();
	int posElemento(T x);
	void recorrer();

private:
	int longitud;
	Nodo<T> *primero;
	Nodo<T> *ultimo;

};

#endif /* Cola_H */
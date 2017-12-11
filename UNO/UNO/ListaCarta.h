#pragma once
#ifndef ListaCarta_H
#include <iostream>
#include "NodoCarta.h"
#include "Carta.h"
class ListaCarta
{
public:
	ListaCarta();
	int getLongitud(void);   //analizadora
	void add(Carta * e);          //analizadora
	void addRandom(Carta * e);
	NodoCarta * get(int i);
	NodoCarta* getTope(void);   //Modificadora
	void setLongitud(int l);  // Modificadora
	void setTope(NodoCarta *);  //Modificadora
	~ListaCarta();
	NodoCarta * getLast();
	NodoCarta* tope; // puntero al tope de la pila
	int longitud;  //longitud de la pila
private:


};



;
#endif /* PILAENT_H */
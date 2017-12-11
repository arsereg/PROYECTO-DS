#pragma once
#include <iostream>
using std::string;
class Carta
{
public:
	enum Color {rojo, verde, azul, amarillo, negro};
	enum type {numero, especial};
	Carta(Color e, type b);
	~Carta();
	string getColor();
	string getTipo();
protected:
	
	type tipoCarta;
	Color colorCarta;
	void setColor(Color);
	void setTipo(type e);
};


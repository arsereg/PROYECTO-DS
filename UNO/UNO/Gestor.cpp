#include "stdafx.h"
#include "Gestor.h"


Gestor::Gestor()
{
	mazo = new Mazo();
}


Gestor::~Gestor()
{

}

void Gestor::setPlayers(string p1, string p2)
{
	player1->setName(p1);
	player2->setName(p2);

}

void Gestor::incp1()
{
	player1->ganar();
}

void Gestor::incp2()
{
	player2->ganar();
}

void Gestor::restart()
{
	player1->restart();
	player2->restart();
}

void Gestor::jugar(Player * e) {
	//system("cls");
	int i = 0;
	ListaCarta * mano = player1->getMano();
	while(i < mano->getLongitud()) {
		cout << i << ". " << mano->get(i)->info << endl;
		i++;
	}
	cout << i << ". Robar carta" << endl;
	cout << "Elija una accion para jugar: ";
	int accion;
	cin >> accion;

}

void Gestor::comenzarJuego()
{
	for (int i = 0; i < 7; i++) {
		player1->robarCarta(mazo);
	}
	for (int i = 0; i < 7; i++) {
		player2->robarCarta(mazo);
	}

	int turno = 1;
	bool finalizado = false;
	while (!finalizado) {
		if (turno == 1) {
			jugar(player1);
			turno = 2;
		}
		else {
			jugar(player2);
			turno = 1;
		}
	}

}

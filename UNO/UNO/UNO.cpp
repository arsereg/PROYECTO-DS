// UNO.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Gestor.h"
#include "UNO.h"

Gestor * gestor;

void comenzarJuego() {
	string name1, name2;
	cout << "Como se llama el jugador 1?" << endl;
	cin >> name1;
	cout << "Como se llama el jugador 1?" << endl;
	cin >> name2;
	gestor->comenzarJuego();
}

void mostrarMenu() {
	cout << "Elija una opcion:" << endl;
	cout << "1. Comenzar un juego" << endl;
	cout << "2. Reiniciar puntuacion" << endl;
	cout << "0- Salir" << endl;
}

void iniciar() {
	int opcion = -1;
	do {
		mostrarMenu();
		cin >> opcion;
		switch (opcion) {
		case 1: comenzarJuego();
			break;
		}
	} while (opcion != 0);
}

int main()
{
	gestor = new Gestor();
	iniciar();
}




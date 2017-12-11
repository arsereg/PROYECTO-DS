#include "Cola.h"
#include "stdafx.h"

#include <iostream>


template <class T>
Cola<T>::Cola() {
	this->primero = nullptr;
	this->ultimo = nullptr;
	this->longitud = 0;
}

template <class T>
Cola<T>::Cola(const Cola& orig) {
}

template <class T>
Cola<T>::~Cola() {
}

template <class T>
int Cola<T>::longCola() {
	return this->longitud;
}

template <class T>
bool Cola<T>::esVacia() {
	bool value = false;
	if (this->longitud == 0) {
		value = true;
	}
	return value;
}


template <class T>
bool Cola<T>::insertarElem(T e) {
	Nodo<T> *nuevo = new Nodo<T>(e);
	if (nuevo == nullptr) {
		return false;
	}
	else {
		if (this->esVacia()) {
			this->primero = nuevo;
			this->ultimo = nuevo;
			this->primero->sig = this->ultimo;
		}
		else {
			this->ultimo->sig = nuevo;
			this->ultimo = nuevo;
		}
		this->longitud++;
		return true;
	}
}

template <class T>
bool Cola<T>::estaEnCola(T e) {
	Nodo<T> *aux;
	int pos;
	bool value = false;
	for (aux = this->primero, pos = 1; aux != NULL; aux = aux->sig, pos++) {
		if (aux->info == e) {
			value = true;
		}
	}
	return value;
}

template <class T>
bool Cola<T>::eliminarValor(T e) {
	bool value = false;
	Nodo<T> *aux = this->primero;
	Nodo<T> *prev = aux;
	while (aux->sig != NULL) {
		if (aux->info == e) {
			prev->sig = aux->sig;
			delete aux;
			return value;
		}
		prev = aux;
		aux = aux->sig;
	}
	return value;
}

template <class T>
bool Cola<T>::eliminarPosicion(int i) {
	int pos = 1;
	bool value = false;
	Nodo<T> *aux = this->primero;
	Nodo<T> *prev = aux;
	while (aux->sig != NULL) {
		if (i == 1) {
			this->primero = aux->sig;
			delete aux;
			return value;
		}
		else if (pos == i) {
			prev->sig = aux->sig;
			delete aux;
			return value;
		}
		prev = aux;
		aux = aux->sig;
		pos++;
	}
	return value;
}

template <class T>
T Cola<T>::atender() {
	T val = this->primero->info;
	this->primero = this->primero->sig;
	return val;
}

template <class T>
T Cola<T>::ultimoCola() {
	if (this->esVacia()) {
		return 0;
	}
	else {
		Nodo<T> *aux = this->primero;
		while (aux->sig != NULL) {
			aux = aux->sig;
		}
		return aux->info;
	}
}

template <class T>
int Cola<T>::posElemento(T e) {
	Nodo<T> *aux;
	int pos;
	for (aux = this->primero, pos = 1; aux != NULL; aux = aux->sig, pos++) {
		if (aux->info == e) {
			return pos;
		}
	}
	if (aux == 0) {
		pos = -1;
	}
	return pos;
}


template <class T>
void Cola<T>::recorrer() {
	Nodo<T> *auxRecorrido = this->primero;
	int index = 0;
	while (index <= this->longitud && auxRecorrido != nullptr) {
		std::cout << auxRecorrido->info;
		std::cout << "->";
		auxRecorrido = auxRecorrido->sig;
		index++;
	}
	std::cout << "Final";
}
#ifndef NODO_H
#define NODO_H

template <class T>
class Nodo {
public:
	T info;
	Nodo<T> *sig;

	Nodo<T>(const T& d) : info(d), sig() {}
	Nodo<T>(const Nodo<T>& copyNode) : info(copyNode.info), sig() {}
	Nodo<T>::~Nodo() {}
};

#endif /* NODO_H */
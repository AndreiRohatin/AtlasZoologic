#include "AtlasZoologic.h"

//Constructor
template <class T>
AtlasZoologic<T>::AtlasZoologic() {
	data = new T[extend_size];
	curr_index = 0;
	curr_index = extend_size;
}

//Destructor
template <class T>
AtlasZoologic<T>::~AtlasZoologic() {
	delete[] data;
}

//Operator
template <class T>
T& AtlasZoologic<T>::operator[](int index) {
	if (index >= size)
		throw std::out_of_range("indexul este mai mare decat lungimea AtlasZoologicei");
	else
		return data[index];
}

template <class T>
void AtlasZoologic<T>::operator+=(T data) {
	push(data);
}

//Methods

template <class T>
void AtlasZoologic<T>::push(T element) {
	if (curr_index == size)
		extend();
	this->data[curr_index++] = element;
}

template <class T>
void AtlasZoologic<T>::extend() {
	T* n_data = new T[size + extend_size];
	for (int i = 0; i < size; ++i)
		n_data[i] = data[i];
	delete[] data;
	data = n_data;
	size += extend_size;
}

template <class T>
static unsigned int AtlasZoologic<T>::GetSize() {
	return curr_index;
}


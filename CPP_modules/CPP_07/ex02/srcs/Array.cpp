#include "Array.hpp"

template <typename T>
Array<T>::Array() : elements(NULL), n(0) {}

template <typename T>
Array<T>::Array(unsigned int size) : elements(new T[size]()), n(size) {}

template <typename T>
Array<T>::Array(const Array& other) : elements(new T[other.n]()), n(other.n) {
    for (unsigned int i = 0; i < n; ++i) {
        elements[i] = other.elements[i];
    }
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other) {
    if (this != &other) {
        delete[] elements;
        n = other.n;
        elements = new T[n]();
        for (unsigned int i = 0; i < n; ++i) {
            elements[i] = other.elements[i];
        }
    }
    return *this;
}

template <typename T>
Array<T>::~Array() {
    delete[] elements;
}

template <typename T>
T& Array<T>::operator[](unsigned int index) {
    if (index >= n) {
        throw std::out_of_range("Index out of bounds");
    }
    return elements[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const {
    if (index >= n) {
        throw std::out_of_range("Index out of bounds");
    }
    return elements[index];
}

template <typename T>
unsigned int Array<T>::size() const {
    return n;
}

template class Array<int>;
template class Array<float>;
template class Array<double>;
template class Array<char>;
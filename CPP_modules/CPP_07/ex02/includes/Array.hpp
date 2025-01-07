#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <stdexcept>

template <typename T>
class Array {
private:
    T* elements;
    unsigned int n;

public:
    Array();

    Array(unsigned int size);

    Array(const Array& other);

    Array& operator=(const Array& other);

    ~Array();

    T& operator[](unsigned int index);
    const T& operator[](unsigned int index) const;

    unsigned int size() const;
};

#endif
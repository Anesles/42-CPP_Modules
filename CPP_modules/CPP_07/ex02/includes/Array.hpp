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
    // Default constructor
    Array();

    // Constructor with size
    Array(unsigned int size);

    // Copy constructor
    Array(const Array& other);

    // Assignment operator
    Array& operator=(const Array& other);

    // Destructor
    ~Array();

    // Subscript operator
    T& operator[](unsigned int index);
    const T& operator[](unsigned int index) const;

    // Size function
    unsigned int size() const;
};

#endif
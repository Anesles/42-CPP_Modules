#include <iostream>
#include "iter.hpp"

void printInt(int& x) {
    std::cout << x << " ";
}

void incrementInt(int& x) {
    ++x;
}

void printFloat(float& x) {
    std::cout << x << " ";
}

void multiplyFloat(float& x) {
    x *= 2;
}

int main() {
    // Test with integers
    int intArr[] = {1, 2, 3, 4, 5};
    int intLength = sizeof(intArr) / sizeof(intArr[0]);

    std::cout << "Original int array: ";
    iter(intArr, intLength, printInt);
    std::cout << std::endl;

    iter(intArr, intLength, incrementInt);

    std::cout << "Incremented int array: ";
    iter(intArr, intLength, printInt);
    std::cout << std::endl;

    // Test with floats
    float floatArr[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};
    int floatLength = sizeof(floatArr) / sizeof(floatArr[0]);

    std::cout << "Original float array: ";
    iter(floatArr, floatLength, printFloat);
    std::cout << std::endl;

    iter(floatArr, floatLength, multiplyFloat);

    std::cout << "Multiplied float array: ";
    iter(floatArr, floatLength, printFloat);
    std::cout << std::endl;

    return 0;
}
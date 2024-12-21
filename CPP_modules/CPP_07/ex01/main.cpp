#include <iostream>
#include "iter.hpp"

void printInt(int& x) {
    std::cout << x << " ";
}

void incrementInt(int& x) {
    ++x;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: ";
    iter(arr, length, printInt);
    std::cout << std::endl;

    iter(arr, length, incrementInt);

    std::cout << "Incremented array: ";
    iter(arr, length, printInt);
    std::cout << std::endl;

    return 0;
}
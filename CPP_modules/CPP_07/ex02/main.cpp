#include <iostream>
#include "Array.hpp"

int main() {
    try {
        // Default constructor
        Array<int> arr1;
        std::cout << "arr1 size: " << arr1.size() << std::endl;

        // Constructor with size
        Array<int> arr2(5);
        std::cout << "arr2 size: " << arr2.size() << std::endl;

        // Access elements
        for (unsigned int i = 0; i < arr2.size(); ++i) {
            arr2[i] = i * 2;
        }

        for (unsigned int i = 0; i < arr2.size(); ++i) {
            std::cout << "arr2[" << i << "] = " << arr2[i] << std::endl;
        }

        // Copy constructor
        Array<int> arr3(arr2);
        std::cout << "arr3 size: " << arr3.size() << std::endl;

        for (unsigned int i = 0; i < arr3.size(); ++i) {
            std::cout << "arr3[" << i << "] = " << arr3[i] << std::endl;
        }

        // Assignment operator
        Array<int> arr4;
        arr4 = arr2;
        std::cout << "arr4 size: " << arr4.size() << std::endl;

        for (unsigned int i = 0; i < arr4.size(); ++i) {
            std::cout << "arr4[" << i << "] = " << arr4[i] << std::endl;
        }

        // Modify original array and check if copy is unaffected
        arr2[0] = 42;
        std::cout << "arr2[0] after modification: " << arr2[0] << std::endl;
        std::cout << "arr3[0] should be unaffected: " << arr3[0] << std::endl;

        // Test out of bounds
        try {
            std::cout << arr2[10] << std::endl; // This should throw an exception
        } catch (const std::exception& e) {
            std::cerr << "Exception caught: " << e.what() << std::endl;
        }

        // Test with different data types
        Array<float> arr5(3);
        arr5[0] = 1.1f;
        arr5[1] = 2.2f;
        arr5[2] = 3.3f;
        std::cout << "arr5 size: " << arr5.size() << std::endl;
        for (unsigned int i = 0; i < arr5.size(); ++i) {
            std::cout << "arr5[" << i << "] = " << arr5[i] << std::endl;
        }

    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
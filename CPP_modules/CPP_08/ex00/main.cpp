#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main() {
    std::vector<int> vec;
    for (int i = 0; i < 10; ++i) {
        vec.push_back(i);
    }

    try {
        std::vector<int>::iterator it = easyfind(vec, 5);
        std::cout << "Found: " << *it << std::endl;
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        std::vector<int>::iterator it = easyfind(vec, 20);
        std::cout << "Found: " << *it << std::endl;
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    // Additional tests
    std::vector<int> emptyVec;
    try {
        std::vector<int>::iterator it = easyfind(emptyVec, 1);
        std::cout << "Found: " << *it << std::endl;
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    std::vector<int> singleElementVec;
	singleElementVec.push_back(42);
    try {
        std::vector<int>::iterator it = easyfind(singleElementVec, 42);
        std::cout << "Found: " << *it << std::endl;
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        std::vector<int>::iterator it = easyfind(singleElementVec, 0);
        std::cout << "Found: " << *it << std::endl;
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
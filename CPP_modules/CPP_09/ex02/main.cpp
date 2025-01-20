#include "PmergeMe.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <cstdlib>
#include <limits.h>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Error: No input provided" << std::endl;
        return 1;
    }

    std::vector<int> vec;
    std::list<int> lst;

    for (int i = 1; i < argc; ++i) {
        char* end;
        long num = std::strtol(argv[i], &end, 10);
        if (*end != '\0' || num < INT_MIN || num > INT_MAX) {
            std::cerr << "Error: Invalid input" << std::endl;
            return 1;
        }
        vec.push_back(static_cast<int>(num));
        lst.push_back(static_cast<int>(num));
    }

    PmergeMe pmergeMe;
    pmergeMe.printSequence("Before: ", vec);
    pmergeMe.sortAndMeasure(vec, lst);
    pmergeMe.printSequence("After: ", vec);

	/* {
        std::vector<int> vec1;
        vec1.push_back(5);
        vec1.push_back(2);
        vec1.push_back(9);
        vec1.push_back(1);
        vec1.push_back(5);
        vec1.push_back(6);

        std::list<int> lst1;
        lst1.push_back(5);
        lst1.push_back(2);
        lst1.push_back(9);
        lst1.push_back(1);
        lst1.push_back(5);
        lst1.push_back(6);

        std::vector<int> vec2;
        vec2.push_back(3);
        vec2.push_back(0);
        vec2.push_back(2);
        vec2.push_back(5);
        vec2.push_back(-1);
        vec2.push_back(4);
        vec2.push_back(1);

        std::list<int> lst2;
        lst2.push_back(3);
        lst2.push_back(0);
        lst2.push_back(2);
        lst2.push_back(5);
        lst2.push_back(-1);
        lst2.push_back(4);
        lst2.push_back(1);

        std::vector<int> vec3;
        vec3.push_back(10);
        vec3.push_back(9);
        vec3.push_back(8);
        vec3.push_back(7);
        vec3.push_back(6);
        vec3.push_back(5);
        vec3.push_back(4);
        vec3.push_back(3);
        vec3.push_back(2);
        vec3.push_back(1);

        std::list<int> lst3;
        lst3.push_back(10);
        lst3.push_back(9);
        lst3.push_back(8);
        lst3.push_back(7);
        lst3.push_back(6);
        lst3.push_back(5);
        lst3.push_back(4);
        lst3.push_back(3);
        lst3.push_back(2);
        lst3.push_back(1);

        PmergeMe pmergeMe;

        pmergeMe.printSequence("Before vec1: ", vec1);
        pmergeMe.sortAndMeasure(vec1, lst1);
        pmergeMe.printSequence("After vec1: ", vec1);

        pmergeMe.printSequence("Before vec2: ", vec2);
        pmergeMe.sortAndMeasure(vec2, lst2);
        pmergeMe.printSequence("After vec2: ", vec2);

        pmergeMe.printSequence("Before vec3: ", vec3);
        pmergeMe.sortAndMeasure(vec3, lst3);
        pmergeMe.printSequence("After vec3: ", vec3);
    } */

    return 0;
}
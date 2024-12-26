#include "PmergeMe.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <cstdlib>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Error: No input provided" << std::endl;
        return 1;
    }

    std::vector<int> vec;
    std::list<int> lst;

    for (int i = 1; i < argc; ++i) {
        int num = std::atoi(argv[i]);
        if (num <= 0) {
            std::cerr << "Error: Invalid input" << std::endl;
            return 1;
        }
        vec.push_back(num);
        lst.push_back(num);
    }

    PmergeMe pmergeMe;
    pmergeMe.printSequence("Before: ", vec);
    pmergeMe.sortAndMeasure(vec, lst);
    pmergeMe.printSequence("After: ", vec);

    return 0;
}
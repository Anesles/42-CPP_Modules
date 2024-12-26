#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <list>
#include <string>
#include <iostream>
#include <algorithm>
#include <ctime>

class PmergeMe {
public:
    PmergeMe();
    ~PmergeMe();

    void sortAndMeasure(std::vector<int>& vec, std::list<int>& lst);
    void printSequence(const std::string& message, const std::vector<int>& sequence);
    void printSequence(const std::string& message, const std::list<int>& sequence);

private:
    void mergeInsertSort(std::vector<int>& vec);
    void mergeInsertSort(std::list<int>& lst);
};

#endif
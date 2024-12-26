#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

void PmergeMe::sortAndMeasure(std::vector<int>& vec, std::list<int>& lst) {
    clock_t start, end;

    start = clock();
    mergeInsertSort(vec);
    end = clock();
    std::cout << "Time to process a range of " << vec.size() << " elements with std::vector: " 
              << static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000000 << " us" << std::endl;

    start = clock();
    mergeInsertSort(lst);
    end = clock();
    std::cout << "Time to process a range of " << lst.size() << " elements with std::list: " 
              << static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000000 << " us" << std::endl;
}

void PmergeMe::printSequence(const std::string& message, const std::vector<int>& sequence) {
    std::cout << message;
    for (std::vector<int>::const_iterator it = sequence.begin(); it != sequence.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

void PmergeMe::printSequence(const std::string& message, const std::list<int>& sequence) {
    std::cout << message;
    for (std::list<int>::const_iterator it = sequence.begin(); it != sequence.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

void PmergeMe::mergeInsertSort(std::vector<int>& vec) {
    if (vec.size() <= 1) return;

    std::vector<int> left(vec.begin(), vec.begin() + vec.size() / 2);
    std::vector<int> right(vec.begin() + vec.size() / 2, vec.end());

    mergeInsertSort(left);
    mergeInsertSort(right);

    std::merge(left.begin(), left.end(), right.begin(), right.end(), vec.begin());
}

void PmergeMe::mergeInsertSort(std::list<int>& lst) {
    if (lst.size() <= 1) return;

    std::list<int> left, right;
    std::list<int>::iterator it = lst.begin();
    std::advance(it, lst.size() / 2);

    left.splice(left.begin(), lst, lst.begin(), it);
    right.splice(right.begin(), lst, lst.begin(), lst.end());

    mergeInsertSort(left);
    mergeInsertSort(right);

    lst.merge(left);
    lst.merge(right);
}
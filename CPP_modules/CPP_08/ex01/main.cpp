#include <iostream>
#include <vector>
#include "Span.hpp"

int main() {
    // Test 1: Basic functionality
    std::cout << "Test 1: Basic functionality" << std::endl;
    Span sp1 = Span(5);
    sp1.addNumber(6);
    sp1.addNumber(3);
    sp1.addNumber(17);
    sp1.addNumber(9);
    sp1.addNumber(11);
    std::cout << "Numbers added to Span: 6, 3, 17, 9, 11" << std::endl;
    try {
        std::cout << "Shortest Span: " << sp1.shortestSpan() << std::endl;
    } catch (const Span::NoSpanFoundException &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    try {
        std::cout << "Longest Span: " << sp1.longestSpan() << std::endl;
    } catch (const Span::NoSpanFoundException &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    // Test 2: Adding more numbers than capacity
    std::cout << "\nTest 2: Adding more numbers than capacity" << std::endl;
    Span sp2 = Span(3);
    try {
        sp2.addNumber(1);
        sp2.addNumber(2);
        sp2.addNumber(3);
        sp2.addNumber(4); // This should throw an exception
    } catch (const Span::SpanFullException &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    // Test 3: Not enough numbers to find a span
    std::cout << "\nTest 3: Not enough numbers to find a span" << std::endl;
    Span sp3 = Span(5);
    try {
        sp3.addNumber(1);
        std::cout << "Shortest Span: " << sp3.shortestSpan() << std::endl;
    } catch (const Span::NoSpanFoundException &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    try {
        std::cout << "Longest Span: " << sp3.longestSpan() << std::endl;
    } catch (const Span::NoSpanFoundException &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    // Test 4: Adding a range of numbers
    std::cout << "\nTest 4: Adding a range of numbers" << std::endl;
    Span sp4 = Span(10);
    std::vector<int> numbers;
    numbers.push_back(5);
    numbers.push_back(10);
    numbers.push_back(15);
    numbers.push_back(20);
    numbers.push_back(25);
    try {
        sp4.addNumbers(numbers.begin(), numbers.end());
        std::cout << "Numbers added to Span: 5, 10, 15, 20, 25" << std::endl;
        std::cout << "Shortest Span: " << sp4.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp4.longestSpan() << std::endl;
    } catch (const Span::SpanFullException &e) {
        std::cout << "Error: " << e.what() << std::endl;
    } catch (const Span::NoSpanFoundException &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0;
}
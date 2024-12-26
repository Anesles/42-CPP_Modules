#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <stdexcept>
#include <limits>
#include <iterator>

class Span {
public:
    Span(unsigned int N);
    Span(const Span &other);
    Span &operator=(const Span &other);
    ~Span();

    void addNumber(int number);
    template <typename Iterator>
    void addNumbers(Iterator begin, Iterator end);
    int shortestSpan() const;
    int longestSpan() const;

    class SpanFullException {
    public:
        const char *what() const;
    };

    class NoSpanFoundException {
    public:
        const char *what() const;
    };

private:
    unsigned int _N;
    std::vector<int> _numbers;
};

#include "Span.tpp"

#endif
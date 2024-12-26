#include "Span.hpp"

Span::Span(unsigned int N) : _N(N) {}

Span::Span(const Span &other) : _N(other._N), _numbers(other._numbers) {}

Span &Span::operator=(const Span &other) {
    if (this != &other) {
        _N = other._N;
        _numbers = other._numbers;
    }
    return *this;
}

Span::~Span() {}

void Span::addNumber(int number) {
    if (_numbers.size() >= _N) {
        throw SpanFullException();
    }
    _numbers.push_back(number);
}

int Span::shortestSpan() const {
    if (_numbers.size() < 2) {
        throw NoSpanFoundException();
    }
    std::vector<int> sorted = _numbers;
    std::sort(sorted.begin(), sorted.end());
    int minSpan = std::numeric_limits<int>::max();
    for (size_t i = 1; i < sorted.size(); ++i) {
        minSpan = std::min(minSpan, sorted[i] - sorted[i - 1]);
    }
    return minSpan;
}

int Span::longestSpan() const {
    if (_numbers.size() < 2) {
        throw NoSpanFoundException();
    }
    int min = *std::min_element(_numbers.begin(), _numbers.end());
    int max = *std::max_element(_numbers.begin(), _numbers.end());
    return max - min;
}

const char *Span::SpanFullException::what() const {
    return "Span is full";
}

const char *Span::NoSpanFoundException::what() const {
    return "No span can be found";
}
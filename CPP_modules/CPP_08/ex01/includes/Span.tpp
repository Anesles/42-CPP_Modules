#ifndef SPAN_TPP
#define SPAN_TPP

#include "Span.hpp"

template <typename Iterator>
void Span::addNumbers(Iterator begin, Iterator end) {
    if (std::distance(begin, end) + _numbers.size() > _N) {
        throw SpanFullException();
    }
    _numbers.insert(_numbers.end(), begin, end);
}

#endif
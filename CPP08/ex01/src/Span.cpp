#include "Span.hpp"

Span::Span(unsigned int n) : maxSize(n) {}

Span::Span(const Span& other) : maxSize(other.maxSize), numbers(other.numbers) {}

Span& Span::operator=(const Span& other) {
    if (this != &other) {
        maxSize = other.maxSize;
        numbers = other.numbers;
    }
    return *this;
}

Span::~Span() {}

void Span::addNumber(int num) {
    if (numbers.size() >= maxSize) {
        throw std::runtime_error("Span is already full");
    }
    numbers.push_back(num);
}

int Span::shortestSpan() const {
    if (numbers.size() <= 1) {
        throw std::runtime_error("Not enough numbers to calculate span");
    }
    std::vector<int> sortedNumbers = numbers;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());
    int minSpan = 2147483647;
    for (size_t i = 1; i < sortedNumbers.size(); ++i) {
        int span = sortedNumbers[i] - sortedNumbers[i - 1];
        if (span < minSpan) {
            minSpan = span;
        }
    }
    return minSpan;
}

int Span::longestSpan() const {
    if (numbers.size() <= 1) {
        throw std::runtime_error("Not enough numbers to calculate span");
    }

    std::pair<std::vector<int>::const_iterator, std::vector<int>::const_iterator> minMax =
        std::minmax_element(numbers.begin(), numbers.end());

    return *(minMax.second) - *(minMax.first);
}

// int Span::longestSpan() const {
//     if (numbers.size() <= 1) {
//         throw std::runtime_error("Not enough numbers to calculate span");
//     }
//     auto minMax = std::minmax_element(numbers.begin(), numbers.end());
//     return *(minMax.second) - *(minMax.first);
// }

#include <iostream>
#include "Span.hpp"

int main() {
    Span span(5);

    try {
        span.addNumber(10);
        span.addNumber(3);
        span.addNumber(7);
        span.addNumber(1);
        span.addNumber(8);
        // Adding one more number will throw an exception
        // span.addNumber(6);
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    try {
        int shortest = span.shortestSpan();
        int longest = span.longestSpan();
        std::cout << "Shortest span: " << shortest << std::endl;
        std::cout << "Longest span: " << longest << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}

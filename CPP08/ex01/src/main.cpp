#include <iostream>
#include "Span.hpp"

int main() {
Span sp = Span(6);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
sp.addNumber(200000);
sp.addNumber(21);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
return 0;

    return 0;
}

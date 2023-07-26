#include <iostream>
#include "ScalarConverter.hpp"

int main() {
    std::string input;

    std::cout << "Enter a C++ literal: ";
    std::cin >> input;

    ScalarConverter::convert(input);

    return 0;
}
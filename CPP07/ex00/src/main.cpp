#include <iostream>
#include "whatever.hpp"

int main() {
    int x = 5, y = 10;
    double a = 3.14, b = 2.71;
    char c = 'A', d = 'Z';

    // Test swap function
    std::cout << "Before swapping: x = " << x << ", y = " << y << std::endl;
    swap(x, y);
    std::cout << "After swapping: x = " << x << ", y = " << y << std::endl;

    // Test min function
    std::cout << "min(a, b) = " << min(a, b) << std::endl;
    std::cout << "min(c, d) = " << min(c, d) << std::endl;

    // Test max function
    std::cout << "max(a, b) = " << max(a, b) << std::endl;
    std::cout << "max(c, d) = " << max(c, d) << std::endl;

    return 0;
}

#include "iter.hpp"

int main() {
    // Test with an integer array
    int intArray[] = {1, 2, 3, 4, 5};
    size_t intArrayLength = sizeof(intArray) / sizeof(int);
    std::cout << "Integer Array: ";
    iter(intArray, intArrayLength, printElement<int>);
    std::cout << std::endl;

    // Test with a double array
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    size_t doubleArrayLength = sizeof(doubleArray) / sizeof(double);
    std::cout << "Double Array: ";
    iter(doubleArray, doubleArrayLength, printElement<double>);
    std::cout << std::endl;

    // Test with a character array
    char charArray[] = {'H', 'e', 'l', 'l', 'o'};
    size_t charArrayLength = sizeof(charArray) / sizeof(char);
    std::cout << "Character Array: ";
    iter(charArray, charArrayLength, printElement<char>);
    std::cout << std::endl;

    return 0;
}
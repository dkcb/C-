#include <iostream>
#include "Array.hpp"

int main() {
    Array<int> intArray(5);
    for (size_t i = 0; i < intArray.size(); ++i) {
        intArray[i] = i + 1;
        std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
    }

    Array<double> doubleArray(3);
    for (size_t i = 0; i < doubleArray.size(); ++i) {
        doubleArray[i] = 0.1 * (i + 1);
        std::cout << "doubleArray[" << i << "] = " << doubleArray[i] << std::endl;
    }

    const Array<int> constIntArray(intArray);
    for (size_t i = 0; i < constIntArray.size(); ++i) {
        std::cout << "constIntArray[" << i << "] = " << constIntArray[i] << std::endl;
    }

    try {
        int value = constIntArray[10]; // This will throw an exception
    } catch (const std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}

// int main() {
//     // Test default constructor
//     Array<int> emptyArray;
//     std::cout << "Empty Array Size: " << emptyArray.size() << std::endl;

//     // Test constructor with size parameter
//     Array<double> doubleArray(5);
//     std::cout << "Double Array Size: " << doubleArray.size() << std::endl;
//     for (size_t i = 0; i < doubleArray.size(); ++i) {
//         doubleArray[i] = i * 1.5;
//         std::cout << "doubleArray[" << i << "] = " << doubleArray[i] << std::endl;
//     }

//     // Test copy constructor
//     Array<double> copiedArray(doubleArray);
//     std::cout << "Copied Array Size: " << copiedArray.size() << std::endl;

//     // Test assignment operator
//     Array<double> anotherArray;
//     anotherArray = copiedArray;
//     std::cout << "Another Array Size: " << anotherArray.size() << std::endl;

//     // Test subscript operator
//     try {
//         double element = copiedArray[7]; // This will throw an exception
//     } catch (const std::exception& e) {
//         std::cout << "Exception: " << e.what() << std::endl;
//     }

//     return 0;
// }
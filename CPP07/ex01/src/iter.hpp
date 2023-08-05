#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

// Function template: iter
template <typename T, typename Function>
void iter(T* arr, size_t length, Function func) {
    for (size_t i = 0; i < length; ++i) {
        func(arr[i]);
    }
}

template <typename T>
void printElement(const T& element) {
    std::cout << element << " ";
}

# endif
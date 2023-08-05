#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <limits>

template <typename T>

void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
    T min(const T& a, const T& b) {
    return (a < b) ? a : b;
}

// Function template: Returns the greatest of two values
template <typename T>
    T max(const T& a, const T& b) {
    return (a > b) ? a : b;
}

#endif
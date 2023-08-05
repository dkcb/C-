#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template <typename T> class Array {

public:
    // Constructors
    Array() : data(nullptr), length(0) {}
    explicit Array(size_t n) : data(new T[n]), length(n) {
        for (size_t i = 0; i < length; ++i) {
            data[i] = T();
        }
    }

    // Copy constructor
    Array(const Array& other) : data(new T[other.length]), length(other.length) {
        for (size_t i = 0; i < length; ++i) {
            data[i] = other.data[i];
        }
    }

    // Assignment operator
    Array& operator=(const Array& other) {
        if (this != &other) {
            delete[] data;
            data = new T[other.length];
            length = other.length;
            for (size_t i = 0; i < length; ++i) {
                data[i] = other.data[i];
            }
        }
        return *this;
    }

    // Destructor
    ~Array() {
        delete[] data;
    }

    // Subscript operator
    T& operator[](size_t index) {
        if (index >= length) {
            throw std::out_of_range("Index out of bounds");
        }
        return data[index];
    }

    const T& operator[](size_t index) const {
        if (index >= length) {
            throw std::out_of_range("Index out of bounds");
        }
        return data[index];
    }

    // Size function
    size_t size() const {
        return length;
    }
    
    private:
        T* data;
        size_t length;

};

#endif // ARRAY_HPP
#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <cstdint> // Include for uintptr_t type
#include "Data.hpp"

class Serializer {
public:
    // Serialize method: converts Data pointer to uintptr_t
    static uintptr_t serialize(Data* ptr);
    
    // Deserialize method: converts uintptr_t to Data pointer
    static Data* deserialize(uintptr_t raw);
};

#endif

#include "Serializer.hpp"

   uintptr_t Serializer::serialize(Data* ptr) {
        return reinterpret_cast<uintptr_t>(ptr);
    }

    // Deserialize method: converts uintptr_t to Data pointer
   Data* Serializer::deserialize(uintptr_t raw) {
        return reinterpret_cast<Data*>(raw);
   }
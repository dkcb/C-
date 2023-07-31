#include "Serializer.hpp"

int main() {
    // Create a Data object
    Data dataObj;
    dataObj.value1 = 42;
    dataObj.value2 = 3.14;
    dataObj.value3 = 'A';

    // Serialize the address of the Data object
    uintptr_t serializedData = Serializer::serialize(&dataObj);

    // Deserialize the uintptr_t value back to a pointer to Data
    Data* deserializedData = Serializer::deserialize(serializedData);

    // Check if the deserializedData points to the same address as dataObj
    if (deserializedData == &dataObj) {
        std::cout << "Serialization and Deserialization succeeded." << std::endl;
    } else {
        std::cout << "Serialization and Deserialization failed." << std::endl;
    }

    return 0;
}

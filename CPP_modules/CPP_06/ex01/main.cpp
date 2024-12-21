#include <iostream>
#include "Serializer.hpp"

void testSerialization(Data& data) {
    uintptr_t raw = Serializer::serialize(&data);
    Data* deserializedData = Serializer::deserialize(raw);

    if (deserializedData == &data) {
        std::cout << "Serialization and deserialization successful!" << std::endl;
        std::cout << "Original value: " << data.value << std::endl;
        std::cout << "Deserialized value: " << deserializedData->value << std::endl;
    } else {
        std::cout << "Serialization and deserialization failed!" << std::endl;
    }
}

void testSerializationFailure(Data& data) {
    uintptr_t raw = Serializer::serialize(&data);
    raw += 1; // Corrupt the serialized value
    Data* deserializedData = Serializer::deserialize(raw);

    if (deserializedData == &data) {
        std::cout << "Serialization and deserialization successful!" << std::endl;
        std::cout << "Original value: " << data.value << std::endl;
        std::cout << "Deserialized value: " << deserializedData->value << std::endl;
    } else {
        std::cout << "Serialization and deserialization failed!" << std::endl;
    }
}

int main() {
    Data data1;
    data1.value = 42;
    testSerialization(data1);

    Data data2;
    data2.value = 100;
    testSerialization(data2);

    Data data3;
    data3.value = -1;
    testSerialization(data3);

    Data data4;
    data4.value = 0;
    testSerialization(data4);

    // Test a failure case
    std::cout << "Testing serialization failure:" << std::endl;
    testSerializationFailure(data1);

    return 0;
}
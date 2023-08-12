#include "uuid_v4.h"
#include <random>

UUIDGenerator::UUIDGenerator() {}

std::string UUIDGenerator::generateUUID() {
    return
        randomHexString(8) + '-' +
        randomHexString(4) + "-4" +
        randomHexString(3) + "-y" +
        randomHexString(3) + '-' +
        randomHexString(12);
}

std::string UUIDGenerator::randomHexString(int length) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 15);

    const char* hex_chars = "0123456789abcdef";
    std::string result;

    for (int i = 0; i < length; ++i) {
        result += hex_chars[dis(gen)];
    }

    return result;
}
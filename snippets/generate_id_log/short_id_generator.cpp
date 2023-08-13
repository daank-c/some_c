#include "short_id_generator.h"
#include <random>

ShortIDGenerator::ShortIDGenerator() {}

std::string ShortIDGenerator::generateShortIdentifier() {
    return randomAlphanumericString(8);
}

std::string ShortIDGenerator::randomAlphanumericString(int length) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 61);

    const char* alphanumeric_chars = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string result;

    for (int i = 0; i < length; ++i) {
        result += alphanumeric_chars[dis(gen)];
    }

    return result;
}
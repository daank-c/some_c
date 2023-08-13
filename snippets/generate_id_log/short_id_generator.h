#ifndef SHORT_ID_GENERATOR_H
#define SHORT_ID_GENERATOR_H

#include <string>

class ShortIDGenerator {
public:
    ShortIDGenerator();
    std::string generateShortIdentifier();

private:
    std::string randomAlphanumericString(int length);
};

#endif // SHORT_ID_GENERATOR_H
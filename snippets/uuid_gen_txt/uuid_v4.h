#ifndef UUID_V4_H
#define UUID_V4_H

#include <string>

class UUIDGenerator {
public:
    UUIDGenerator();
    std::string generateUUID();

private:
    std::string randomHexString(int length);
};

#endif // UUID_V4_H
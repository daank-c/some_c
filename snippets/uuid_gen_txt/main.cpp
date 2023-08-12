#include <iostream>
#include <fstream>
#include "uuid_v4.h"

int main() {
    const int numUuids = 10;
    std::ofstream outputFile("uuids/generated.txt");

    if (!outputFile.is_open()) {
        std::cerr << "Error opening output file." << std::endl;
        return 1;
    }

    UUIDGenerator uuidGenerator;

    for (int i = 0; i < numUuids; ++i) {
        std::string uuid = uuidGenerator.generateUUID();
        outputFile << uuid << std::endl;
    }

    outputFile.close();

    return 0;
}

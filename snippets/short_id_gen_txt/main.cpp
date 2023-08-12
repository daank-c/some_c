#include <iostream>
#include <fstream>
#include "short_id_generator.h"

int main() {
    const int numIdentifiers = 10;
    std::ofstream outputFile("short_ids/generated.txt");

    if (!outputFile.is_open()) {
        std::cerr << "Error opening output file." << std::endl;
        return 1;
    }

    ShortIDGenerator idGenerator;

    for (int i = 0; i < numIdentifiers; ++i) {
        std::string identifier = idGenerator.generateShortIdentifier();
        outputFile << identifier << std::endl;
    }

    outputFile.close();

    return 0;
}
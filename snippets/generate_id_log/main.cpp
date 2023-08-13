#include <iostream>
#include <fstream>
#include "short_id_generator.h"

int main() {
    const int numIdentifiers = 1;
    ShortIDGenerator idGenerator;
    
    // Generate the short identifier
    std::string identifier = idGenerator.generateShortIdentifier();
    
    // Create the filename using the identifier
    std::string filename = "id_log/" + identifier + ".txt";

    std::ofstream outputFile(filename);

    if (!outputFile.is_open()) {
        std::cerr << "Error opening output file." << std::endl;
        return 1;
    }

    for (int i = 0; i < numIdentifiers; ++i) {
        // Write the stored identifier to the log file
        outputFile << identifier << std::endl;
    }

    outputFile.close();

    std::cout << "Generated identifiers saved to " << filename << std::endl;

    return 0;
}


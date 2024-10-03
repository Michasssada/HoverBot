#include "read_cfg.h"
#include <fstream>
#include <iostream>

bool ReadCfg::searchInFile(const std::string& filename, const std::string& keyword) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Could not open the file " << filename << std::endl;
        return false;  // Indicating file open error
    }

    std::string line;
    int lineNumber = 0;

    while (std::getline(file, line)) {
        lineNumber++;

        // Find the keyword in the line
        size_t keywordPos = line.find(keyword);
        if (keywordPos != std::string::npos) {
            // Look for " = " after the keyword
            size_t equalPos = line.find(" = ", keywordPos + keyword.length());
            if (equalPos != std::string::npos) {
                // Check if "0" or "1" follows " = "
                size_t valuePos = equalPos + 3;  // Move past " = "
                if (valuePos < line.length() && (line[valuePos] == '0' || line[valuePos] == '1')) {
                    file.close();
                    return line[valuePos] == '1';  // Return true for '1' and false for '0'
                }
            }
        }
    }

    file.close();
    return false;  // Keyword not found or incorrect format
}

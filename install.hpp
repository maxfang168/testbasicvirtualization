// install.hpp is called on the first boot by the following files:
// - bootloader.hpp
// - main.cpp

#ifndef INSTALL_HPP
#define INSTALL_HPP
#include <iostream>
#include <fstream>
#include <filesystem>
#include <sstream>
#include <vector>
#include <string>
bool _INSTALL_DOT_HPP_CREATE_FILES()
{
std::vector<std::string> result;
    std::ifstream file("data/installConfig.txt");
    if (!file.is_open())
    {
        file.close();
        return false;
    }
    std::string fileContent((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
    std::istringstream stream(fileContent);
std::string word;
while (stream >> word) {
    result.push_back(word);
}
    file.close();
        file.close();
    std::string _INSTALL_DOT_HPP_COMPUTER_NAME = result[1];
    std::string directory = _INSTALL_DOT_HPP_COMPUTER_NAME + "/storage/memory/";
    int numSectors = std::stoi(result[5]); // Define numSectors

    // Check if the directory exists, and create it if it doesn't
    if (!std::filesystem::exists(directory))
    {
        std::filesystem::create_directories(directory);
    }
    for (int i = 0; i < numSectors; i++)
    {
        std::ofstream outFile(directory + std::to_string(i) + ".txt");

        // Check if the file opened successfully
        if (outFile.is_open())
        {
            // Write to the file
            outFile << "";

            // Close the file after writing
            outFile.close();
        }
        else
        {
            return false; // Return false to indicate failure
        }
    }
    return true;
}
#endif

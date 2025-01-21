#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Create and open a text file
    std::ofstream outFile("example.txt");

    // Check if the file is open
    if (!outFile.is_open()) {
        std::cerr << "Failed to open file for writing." << std::endl;
        return 1;
    }

    // Write to the file
    outFile << "Hello, World!" << std::endl;
    outFile << "This is a test file." << std::endl;

    // Close the file
    outFile.close();

    // Open the file for reading
    std::ifstream inFile("example.txt");

    // Check if the file is open
    if (!inFile.is_open()) {
        std::cerr << "Failed to open file for reading." << std::endl;
        return 1;
    }

    // Read from the file
    std::string line;
    while (std::getline(inFile, line)) {
        std::cout << line << std::endl;
    }

    // Close the file
    inFile.close();

    // Append to the file
    std::ofstream appendFile("example.txt", std::ios_base::app);

    // Check if the file is open
    if (!appendFile.is_open()) {
        std::cerr << "Failed to open file for appending." << std::endl;
        return 1;
    }

    // Append to the file
    appendFile << "Appending a new line." << std::endl;

    // Close the file
    appendFile.close();

    // Open the file for reading again to see the appended content
    inFile.open("example.txt");

    // Check if the file is open
    if (!inFile.is_open()) {
        std::cerr << "Failed to open file for reading." << std::endl;
        return 1;
    }

    // Read from the file again
    while (std::getline(inFile, line)) {
        std::cout << line << std::endl;
    }

    // Close the file
    inFile.close();

    return 0;
}
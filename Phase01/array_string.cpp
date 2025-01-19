#include <iostream>
#include <string>

int main() {
    // Array of integers
    int intArray[5] = {1, 2, 3, 4, 5};
    std::cout << "Integer array: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    // Array of characters (C-style string)
    char charArray[] = "Hello, World!";
    std::cout << "Character array (C-style string): " << charArray << std::endl;

    // C++ string
    std::string cppString = "Hello, C++ World!";
    std::cout << "C++ string: " << cppString << std::endl;

    // Modifying elements in an array
    intArray[0] = 10;
    std::cout << "Modified integer array: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    // Modifying a C++ string
    cppString[7] = 'c';
    std::cout << "Modified C++ string: " << cppString << std::endl;

    return 0;
}
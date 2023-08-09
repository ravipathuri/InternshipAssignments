#include <iostream>
#include "DuplicateChar.h"



int main() {
    const int MAX_LENGTH = 100;
    char* input = new char[MAX_LENGTH];

    std::cout << "Enter a string: ";
    std::cin.getline(input, MAX_LENGTH);

    removeDuplicates(input);

    std::cout << "String with duplicates removed: " << input << std::endl;

    delete[] input;

    return 0;
};



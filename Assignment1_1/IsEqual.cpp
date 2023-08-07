#include <iostream>
#include <cctype>
#include "IsEqual.h"

bool areEqual(const char* str1, const char* str2, bool caseInsensitive)
{
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (caseInsensitive) { // Convert characters to lowercase before comparison
            char c1 = tolower(str1[i]);
            char c2 = tolower(str2[i]);
            if (c1 != c2)
                return false;
        }
        else {
            if (str1[i] != str2[i])
                return false;
        }
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0')// Check if both strings have reached the end
        return true;
    return false;
}

int displayResult(bool y)
{
    if (y) {
        std::cout << "Strings are equal." << std::endl;
        return 1;
    }
    else {
        std::cout << "Strings are not equal." << std::endl;
        return 2;
    }
    return 0;
}
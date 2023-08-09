#include "DuplicateChar.h"
#include <iostream>

void removeDuplicates(char* str) {
    if (str == nullptr) {
        return;
    }
    int length = 0;
    char* current = str;
    char* tail = str;

    while (*current) {
        int i = 0;
        while (i < length) {
            if (str[i] == *current) {
                break;
            }
            i++;
        }
        if (i == length) {
            str[length] = *current;
            length++;
            tail++;
        }
        current++;
    }
    *tail = '\0';  // Null-terminate the resulting string
};
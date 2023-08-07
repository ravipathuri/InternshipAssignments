#include <iostream>
#include<cctype>
#include "IsEqual.h"

int main() {
    const int MAX_LENGTH = 100;
    char str1[MAX_LENGTH];
    char str2[MAX_LENGTH];
    /*char str3[MAX_LENGTH];
    char str4[MAX_LENGTH];*/
    bool caseInsensitive = false;

    std::cout << "Enter the first string: ";
    std::cin.getline(str1, MAX_LENGTH);

    std::cout << "Enter the second string: ";
    std::cin.getline(str2, MAX_LENGTH);

    std::cout << "Perform case-insensitive comparison? (Y/N): ";
    char choice;
    std::cin >> choice;

    if (tolower(choice) == 'y') {
        caseInsensitive = true;
    }
    bool x = areEqual(str1, str2, caseInsensitive);
    displayResult(x);
    return 0;
}
  //Second Set of Inputs

   /* caseInsensitive = false;

    std::cout << "Enter the first string: ";
    std::cin.getline(str3, MAX_LENGTH);

    std::cout << std::endl << "Enter the second string: ";
    std::cin.getline(str4, MAX_LENGTH);

    std::cout << "Perform case-insensitive comparison? (Y/N): ";
    std::cin >> choice;

    if (tolower(choice) == 'y')
        caseInsensitive = true;
    displayResult(str1, str2, caseInsensitive);
    */
    /*if (areEqual(str1, str2, caseInsensitive))
        std::cout << "Strings are equal." << std::endl;
    else
        std::cout << "Strings are not equal." << std::endl;*/

   







//#include<iostream>
//
//
//bool areEqual(const char* str1, const char* str2, bool caseInsensitive) {
//    int i = 0;
//    while (str1[i] != '\0' && str2[i] != '\0') {
//        if (caseInsensitive) {
//            // Convert characters to lowercase before comparison
//            char c1 = tolower(str1[i]);
//            char c2 = tolower(str2[i]);
//            if (c1 != c2)
//                return false;
//        }
//        else {
//            if (str1[i] != str2[i])
//                return false;
//        }
//        i++;
//    }
//
//    // Check if both strings have reached the end
//    if (str1[i] == '\0' && str2[i] == '\0')
//        return true;
//
//    return false;
//}
//
//int main(int argc, char* argv[]) {
//    if (argc < 3) {
//        std::cout << "Usage: program_name string1 string2 [case_insensitive]" << std::endl;
//        return 1;
//    }
//
//    const char* str1 = argv[1];
//    const char* str2 = argv[2];
//    bool caseInsensitive = false;
//
//    if (argc >= 4 && std::string(argv[3]) == "case_insensitive")
//        caseInsensitive = true;
//
//    if (areEqual(str1, str2, caseInsensitive))
//        std::cout << "Strings are equal." << std::endl;
//    else
//        std::cout << "Strings are not equal." << std::endl;
//
//    return 0;
//}

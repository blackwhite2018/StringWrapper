#include <iostream>
#include "StringWrapper.h"

int main(int argc, char * argv[]) {
    setlocale(LC_ALL, "ru");

    StringWrapper str1;

    std::cout << "Enter: ";
    std::cin >> str1;
    std::cout << "str1: " << str1 << '\n';

    StringWrapper str2;
    
    std::cout << "Enter: ";
    std::cin >> str2;
    std::cout << "str2: " << str2 << '\n';

    str1 = str2;
    std::cout << "str1: " << str1 << '\n';

    return 0;
}
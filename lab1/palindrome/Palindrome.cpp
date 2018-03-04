//
// Created by maciejo on 04.03.18.
//

//#include "Palindrome.h"
#include <string>

bool is_palindrome(std::string str) {
    int dl_wyrazu = str.length();
    for (int i = 0; i < dl_wyrazu/2; i++) {
        if (str[i] != str[dl_wyrazu - i -1]) {
            return false;
        }
    }
    return true;
}
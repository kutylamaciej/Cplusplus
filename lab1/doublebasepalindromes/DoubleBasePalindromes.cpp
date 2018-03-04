//
// Created by maciejo on 04.03.18.
//

#include <cstdint>
#include <string>
#include "DoubleBasePalindromes.h"

bool is_palindrome(int str_int) {
    std::string str = std::to_string(str_int);
    int dl_wyrazu = str.length();
    for (int i = 0; i < dl_wyrazu/2; i++) {
        if (str[i] != str[dl_wyrazu - i -1]) {
            return false;
        }
    }
    return true;
}

bool is_binary_palindrome(int str_int) {
    std::string binary;
    int bin;
    int i = 0;
    while (str_int > 0) {

        bin = str_int % 2;

        binary[i] = bin;
        str_int /= 2;
        i++;
    }
    int dl_wyrazu = binary.length();
    for (int i = 0; i < dl_wyrazu/2; i++) {
        if (binary[i] != binary[dl_wyrazu - i -1]) {
            return false;
        }
    }
    return true;
}

uint64_t DoubleBasePalindromes(int max_vaule_exculsive){
    int suma = 0;
    for(int i = 0; i < max_vaule_exculsive; i++)
    {
        if(is_palindrome(i) && is_binary_palindrome(i))
        {
            suma =+ i;
        }
    }
    return suma;
}
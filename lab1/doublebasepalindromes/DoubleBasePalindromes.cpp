//
// Created by maciejo on 04.03.18.
//
#include <iostream>
#include <cstdint>
#include <string>
#include "DoubleBasePalindromes.h"

bool is_palindrome(int str_int) {
    std::string str = std::to_string(str_int);
    unsigned long dl_wyrazu = str.length();
    for (int i = 0; i < dl_wyrazu/2; i++) {
        if (str[i] != str[dl_wyrazu - i -1]) {
            return false;
        }
    }
    return true;
}

bool is_palindrome_for_string(std::string str) {
    int dl_wyrazu = str.length();
    for (int i = 0; i < dl_wyrazu/2; i++) {
        if (str[i] != str[dl_wyrazu - i -1]) {
            return false;
        }
    }
    return true;
}

bool is_binary_palindrome(int str_int) {
    int i=0;
    std::string tab;
    while(str_int)
    {
        tab[i++]=str_int%2;
        str_int/=2;
    }
    return is_palindrome_for_string(tab);
}

uint64_t DoubleBasePalindromes(int max_vaule_exculsive){
    uint64_t suma = 0;
    for(int i = 0; i < max_vaule_exculsive; i++)
    {
        if(is_palindrome(i) && is_binary_palindrome(i))
        {
            suma += i;
        }
    }
    return suma;
}
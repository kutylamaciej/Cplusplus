//
// Created by maciejo on 04.03.18.
//
#include <cstdint>
#include <string>
#include "DoubleBasePalindromes.h"

std::string  convertDecimalToBinaryString(int n)
{
    std::string binary="";
    std::string str_i;
    int remainder, i = 0;
    while (n!=0)
    {
        remainder = n%2;
        n /= 2;
        str_i = std::to_string(remainder);
        binary += str_i[0];
        i++;
    }
    return  binary;
}

bool is_palindrome_for_str(std::string str) {
    int dl_wyrazu = str.length();
    for (int i = 0; i < dl_wyrazu/2; i++) {
        if (str[i] != str[dl_wyrazu - i -1]) {
            return false;
        }
    }
    return true;
}

bool is_palindrome(int  number) {
    std::string str = std::to_string(number);
    return is_palindrome_for_str(str);
}

bool is_binary_palindrome(int number) {
    std::string  binary = convertDecimalToBinaryString(number);
    return is_palindrome_for_str(binary);
}

uint64_t DoubleBasePalindromes(int max_vaule_exculsive){
    uint64_t  suma = 0;
    for(int i = 0; i <= max_vaule_exculsive; i++)
    {
        if(is_palindrome(i) && is_binary_palindrome(i))
        {
            suma += i;
        }
    }
    return suma;
}
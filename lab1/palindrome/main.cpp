//
// Created by maciejo on 04.03.18.
//
#include <iostream>
#include "Palindrome.h"

int main() {
    int wybor_gracza;
    std::cin >> wybor_gracza;
    switch(wybor_gracza){
        case 0:
            return 0;
        case 1:
            std::string txt;
            scanf("%s", txt);
            is_palindrome(txt);
    }
    return 0;
}

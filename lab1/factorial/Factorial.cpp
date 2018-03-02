//
// Created by mwypych on 02.02.17.
//
#include "Factorial.h"

int factorial(int value) {
    if(value>=13 || value<=-13){
        return 0;
    }
    else if (value<0){
        int number = 1;
        for (int i = -1; i >= value; i--){
            number *=i ;
        }
        return number;
    }
    else{
        int number = 1;
        for(int i = 1; i <= value; i++){
            number *= i;
        }
        return number;
    }
}

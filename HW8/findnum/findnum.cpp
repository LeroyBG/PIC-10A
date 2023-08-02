/*
 PIC 10A Homework 7, findnum.cpp
 Author: Leroy Betterton Gage
 UID: 505794766
 Discussion Section: 5D
 Date: 12/4/2022
 */


#include "findnum.h"

int* find_num(int* arr, int size, int num){
    for(int i = 0; i < size; i++){ // iterates through array
        if ( *(arr + i) == num){ // if the element equals  num
            return (arr + i); // return that element's address
        }
    }
    return nullptr; //otherwise, return nullptr
    
}

/*
 PIC 10A Homework 4, factor.cpp
 Author: Leroy Betterton Gage
 UID: 505794766
 Discussion Section: 5D
 Date: 10/28/2022
 */


#include <iostream>
using namespace std;

void prime_factors(int num){
    int i = num/2; //ensures we don't create an infinite loop and reduces iterations, as any factor of a non-prime number is half that number or less
    while (i >= 2) { // loop repeats until the divisor, i, reaches 1
        int dividend = num / i;
        int remainder = num % i;
        if (remainder == 0) {
            cout<<dividend<<" "; // if the input divides by i evenly, the dividend is printed because this number has to be a prime factor of input
            prime_factors(i); // repeat this process for the divisor, and so on until you are left with only prime factors
            break; // the loop only needs to run until we reach the largest factor
        }
    --i;
    }
    if (i == 1){ //if the number has no prime factors less than half its own value, it itself is its only prime factor
        cout<<num<<endl;
    }
}

int main() {
    cout<<"Input a positive integer greater than 1: ";
    int input;
    cin>>input;
    cout<<"Prime factors: ";
    prime_factors(input); //user's input is passed to the function
    return 0;
}

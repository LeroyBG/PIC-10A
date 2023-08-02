/*
 PIC 10A Homework 2, leapyear.cpp
 Author: Leroy Betterton Gage
 UID: 505794766
 Discussion Section: 5D
 Date: 10/14/2022
 */

#include <iostream>
using namespace std;

int main() {
    int input_year; //input year = user input
    cout<<"Enter a year strictly after 1581 AD: "; // user prompted to enter a valid date
    cin>>input_year;
    cout<<"This is: ";
    if (input_year <= 1581){ // if that date is not greater that 1581, the user is told the input is INVALID
        cout<<"An invalid year."<<endl;
    }
    else if (input_year%400 == 0){ // if the date is divisible by 400, it's a leap year
        cout<<"A leap year.";
    }
    else if (input_year%100 == 0){ // if the date isn't divisible by 400 but is by 100, it isn't a leap year
        cout<<"Not a leap year.";
    }
    else if (input_year%4 == 0){ // if the date isn't divisible by 400, 100 or 100 but is by 4, it is a leap year
        cout<<"A leap year.";
    }
    else {
        cout<<"Not a leap year."; // numbers not divisible by 400, 100, and 4 aren't leap years
    }
    cout<<endl;
    return 0;
}

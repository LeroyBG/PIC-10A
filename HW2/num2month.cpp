/*
PIC 10A Homework 2, num2month.cpp
Author: Leroy Betterton Gage
UID: 505794766
Discussion Section: 5D
Date: 10/14/2022
*/

#include <iostream>
using namespace std;

int main() {
    int user_number, month_number; //Initializing variables. User_number = user input, month_number is used to index the string
    cout<<"Integer between 1 and 12: ";
    cin>>user_number; // the user's input is stored as the variable, "user_number"
    string months = "January  February March    April    May      June     July     August   SeptemberOctober  November December"; // creates a string with each Month's name, each spaced 9 characters apart
    month_number = (user_number - 1)*9; // "user_number" is converted into the month's corresponding location in the string
    cout<<"Month: "<<months.substr(month_number, 9)<<endl; // outputs month corresponding with number
    return 0;
}


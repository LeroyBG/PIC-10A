/*
 PIC 10A: Homework 1, printw.cpp
 Author: Leroy Betterton Gage
 UID: 505794766
 Discussion Section: 1A
 Date: 10/06/2022
*/

#include <iostream>
using namespace std;

int main(){
    cout<<"\"Hello \'W\'!\""<<endl // Backslashes/escape sequences allow for special characters
    <<"**************"<<endl //prints first line containing stars (*)
    <<" \\    /\\    /"<<endl// next 3 lines print the W
    <<"  \\  /  \\  /"<<endl
    <<"   \\/    \\/"<<endl
    <<"**************"<<endl; // prints last line containing stars
    return 0;
}

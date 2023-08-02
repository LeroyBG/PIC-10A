/*
 PIC 10A Homework 3, backwards.cpp
 Author: Leroy Betterton Gage
 UID: 505794766
 Discussion Section: 5D
 Date: 10/21/2022
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string user_word; //initializing variables
    cout<<"Enter a word: ";
    cin>>user_word;
    cout<<"Backwards: ";
    int length = user_word.length(); //creates and assigns a the value of the input's length to a variable
    for (int i = 0; i<length; i++){ //repeats until it has reached the string's length
        cout<<user_word[length-1-i]; //prints each individual letter of the string backwards (the -1 accounts for the fact that the index uses a base 0 system
    }
    cout<<endl;
    return 0;
}

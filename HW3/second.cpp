/*
 PIC 10A Homework 3, second.cpp
 Author: Leroy Betterton Gage
 UID: 505794766
 Discussion Section: 5D
 Date: 10/21/2022
 */

#include <iostream>
using namespace std;

int main() {
    double first_input, input, smallest, second; // initialize variables
    cout<<"Enter first integer: ";
    cin >> first_input;
    second = first_input;
    smallest = first_input; // user's first input assigned to second (second smallest number) and smallest (smallest number)
    cout <<"Enter integers (Q to quit): "; //user prompted to enter the rest of their string
    while (cin>>input){ // loop terminates when user enters a letter
        if (second == smallest){ // statement executes if user hasn't entered two distinct numbers before this iteration
            if (input < smallest){
                smallest = input; // input assigned to smallest if smaller than the first unique input
            }
            else if (input > second){
                second = input; // input assigned to second if larger than the first unique input
            }
        }
        else if (second != smallest){ // statment executes when second and smallest have unique values
            if (input < smallest){ // if the input is smaller than smallest
                second = smallest; // smallest is assigned to second
                smallest = input; // and the input is assigned to smalelst
            }
            else if (input > smallest && input < second){ // statment executes if the input is between smallest and second
                second = input; // input is assigned to second
            }
        }
    }
    cout << "Second smallest: "<<second<<endl;
    return 0;
}

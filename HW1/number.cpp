/*
 PIC 10A Homework 1, number.cpp
 Auhtor: Leroy Betterton Gage
 UID: 505794766
 Discussion Section: 5D
 Date: 01/01/2022
*/


#include <iostream>
using namespace std;

int main() {
    cout<<"Enter a postive number between 0-999"<<endl;
    int number, num1, num2, num3, reversed_number, tripled_number; //initializing variables
    cin>>number; //input is stored in the integer "number"
    num1 = number/100; //retrieves number in hundreds place
    num2 = (number%100)/10; //same for tens place
    num3 = (number%10); //and for ones place
    reversed_number = num3*100 + num2*10 + num1; //creates and stores our reversed number
    tripled_number = number*3; //triples and stores original number
    cout<<"The reverse of the number is: "<<reversed_number<<"."<<endl //prints reversed number
    <<"The triple of the number is: "<<tripled_number<<"."<<endl; //prints tripled number
    return 0;
}

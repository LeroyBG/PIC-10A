
#include <iostream>

using namespace std;
int main() {
  int number;
  cout << "Input a three-digit number (100 - 999):" << endl;;
  cin >> number;

  int ones = number % 10;      //calculates the ones place of the inputted number
  int tens = (number / 10) % 10;    //calculates the tens place of the inputted number
  int hundreds = (number / 100) % 10;   //calculates the hundreds place of the inputted number

  /* 
  calculates the reverse of the inputted number by muliplying the ones place 
  by one hundred, multiplying the tens place by ten, and the hundreds place by one, 
  and adding the results together
  */
  int reverse = (ones * 100) + (tens * 10) + hundreds; 
  int triple = number * 3;     //calculates the triple of the inputted number

  cout << "The reverse of the number is: " << reverse << "." << endl;
  cout << "The triple of the number is: " << triple << "." << endl;

  return 0;
}
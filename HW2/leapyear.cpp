#include <iostream>

using namespace std;
int main() {
  int year;
  cout << "Enter year strictly after 1581 AD: ";
  cin >> year;
  if (year % 100 == 0){
    // if year is divisible by 100, check whether divisible by 400
    if (year % 400 == 0){
      cout << "This is: A leap year" << endl;
    }else{
      cout << "This is: Not a leap year" << endl;
    }
  } else{
    // if year is not divisible by 100, check whether divisible by 4
    if (year % 4 == 0){
      cout << "This is: A leap year" << endl;
    }else{
      cout << "This is: Not a leap year" << endl;
    }
  }
  return 0;
}
#include <iostream>
#include <string>

using namespace std;
int main() {
  int month;
  cout << "Integer between 1 and 12: ";
  cin >> month;
  // A long string with spaces, such that each month name “takes up” the same length 9.
  // split into different lines to make the length clearer.
  string str =  "January  "
                "February "
                "March    "
                "April    "
                "May      "
                "June     "
                "July     "
                "August   "
                "September"
                "October  "
                "November "
                "December ";
  //extract the substring with length 9, starting from 9*(month-1).
  cout << "Month: " << str.substr(9 * (month-1), 9) << endl;
  return 0;
}
#include <iostream>
using namespace std;

int main(){
  int input;
  cout << "Enter integers (Q to quit): ";
  // read the first input
  cin >> input; 
  // initialize the first and the second smallest as the input
  int first = input;
  int second = input;
  // read the rest inputs
  while (cin >> input)
  {
    // two branches depending on whether first == second
    if (first == second)
    {
      if (input < first)
      {
        second = first;
        first = input;
      } else if (input > first) {
        second = input;
      }
    }else{
      if (input < first)
      {
        second = first;
        first = input;
      } else if (first < input && second  > input)
      {
        second = input;
      }else
      {
        // do nothing;
      }
    }
  }
  cout << "Second smallest: " << second << endl;
  return 0;
}

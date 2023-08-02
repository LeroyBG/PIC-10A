#include <iostream>

using namespace std;
int main() {
  int num;
  cout << "Input a positive integer greater than 1: ";
  cin >> num;
  cout << "Prime factors: ";
  // i <= num is very important, note that num actually changes in the loop
  for (int i = 2; i <= num; i++){
    // one prime factor may appear multiple times
    while (num % i == 0){
      cout << i << " "; 
      num = num / i;
    }
  }
  cout << endl; //optionally start a new line
  return 0;
}
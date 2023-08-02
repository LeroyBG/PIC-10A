#include <iostream>

using namespace std;

int get_smallest_factor(int num){
  // @params num the input integer >= 2
  // @return the smallest factor, which is also prime
  int i;
  for (i = 2; i <= num; i++){
    if (num%i == 0){
      break;
    }
  }
  return i;
}

int main() {
  int num;
  cout << "Input a positive integer greater than 1: ";
  cin >> num;
  cout << "Prime factors: ";
  while (num > 1){
    int factor = get_smallest_factor(num);
    cout << factor << " ";
    num = num/factor;
  }
  cout << endl; //optionally start a new line
  return 0;
}
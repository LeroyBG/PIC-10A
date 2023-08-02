#include <iostream>
#include <string>
using namespace std;

int main(){
  string str;
  cout << "Enter word: ";
  cin >> str;
  cout << "Backwards: ";
  // for loop over the characters
  for (int i = 1; i <= str.length(); i++){
    cout << str[str.length()-i];
  }
  cout << endl;
  return 0;
}

#include <iostream>
#include <vector>

using namespace std;


/*/
You can define other helper functions here if you want.
*/
bool isfactor(int n, const vector<int> & vec){
  for (int e: vec){
    if (e%n != 0){
      return false;
    }
  }
  return true;
}


int myMinimum(const vector<int> & vec){
  int out = vec[0];
  for (int e: vec){
    if (e < out){
      out = e;
    }
  }
  return out;
}


void myPermutation(vector<int> & vec){
  int last = vec[vec.size()-1];
  for (int i = vec.size()-1; i >=1; i--){
    vec[i] = vec[i-1];
  }
  vec[0] = last;
}


void mySimplify(vector<int> & vec){
  int i = myMinimum(vec);
  while(!isfactor(i, vec)){
    i--;
  }
  int max_common_factor = i;
  for (int i = 0; i < vec.size(); i++){
    vec[i] = vec[i]/max_common_factor;
  }
}


// DO NOT MODIFY THE CODE BELOW THIS LINE
//-----------------------------------------------

void print_vector(vector<int> & vec){
  for (int e : vec){
    cout << e << " ";
  }
  cout << endl;
}


int main(){
  int input;
  vector<int> myvector;
  cout << "Please input a sequence of postive integers, ending with Q:" << endl;
  while (cin >> input){
    myvector.push_back(input);
  }
  int min_element = myMinimum(myvector);
  cout << "min element: " << min_element << endl;
  myPermutation(myvector);
  print_vector(myvector);
  mySimplify(myvector);
  print_vector(myvector);

  return 0;
}
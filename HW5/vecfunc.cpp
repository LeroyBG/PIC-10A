/*
 PIC 10A Homework 4, vecfunc.cpp
 Author: Leroy Betterton Gage
 UID: 505794766
 Discussion Section: 5D
 Date: 10/28/2022
*/

#include <iostream>
#include <vector>

using namespace std;


bool isfactor(int n, const vector<int> & vec){
    for(int i : vec){ // iterates through vector
        if (i%n != 0){ // factors vector by smallest number
            return false; // if number can't be factor, return false, otherwise,
        }
    }
    return true; // return true
}



int myMinimum(const vector<int> & vec){
    int minimum = vec[0]; // sets minimum to first element
    for (int i: vec){ // iterates through vector
        if (i < minimum){ // if the element is smaller than the current min,
            minimum = i; // current min becomes the element
        }
    }
    return minimum; // returns minumum element
}


void myPermutation(vector<int> & vec){
    vector<int>permed(vec.size()); // creates a new vector with the same size as the input vector
    for (int i = 1; i < vec.size(); i++){ // iterates through vector beginning after first element
        permed[i] = vec[i-1]; //assigns each new element to the vector element that came in the space before it
    }
    permed[0] = vec[vec.size()-1]; // assigns first element to last element of vec
    vec = permed; //modifies vec to the permutated vec
}


void mySimplify(vector<int> & vec){
    int factor = myMinimum(vec); // find minimum / largest pos factor
    for (int g = 0; g < vec.size(); g++){ //iterate through vector
        for( ; factor > 1; factor--){ // iterates through element until factor reaches 2
            if (isfactor(factor, vec)){ // if the factor is a factor of the elemtent,
                break; // continue to next element
            }
        }
    }
    for(int i = 0; i < vec.size(); i++){ // iterates through vector (for some reason i couldn't get this to work with a range-based loop
        vec [i] = vec[i]/ factor; // modifies vector by dividing all elements by the factor
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

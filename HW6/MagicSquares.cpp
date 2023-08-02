/*
 PIC 10A Homework 6, MagicSquares.cpp
 Author: Leroy Betterton Gage
 UID: 505794766
 Discussion Section: 5D
 Date: 11/18/2022
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


/*
-----------------------------------------------
You can define other helper functions here if you want.
*/

bool input_valid(const vector<int> & vec){

    vector<int> sortedVec = vec;
    sort(sortedVec.begin(), sortedVec.end()); // sorts sortedVec from smallest to largest
    if (sortedVec[15] == 16 && sortedVec[0] == 1){ // checks that the min value is 1 and max is 16
        for (int i = 0; i < (sortedVec.size()-1); i++){ // iterates through vector
            if (sortedVec[i] != (sortedVec[i+1]-1)){ // checks if vector incremements by 1 from biggest to smallest, effectively checking if the original vector has values from 1 to 16
                return false; // if not, return false
            }
        }
        return true; // if the loop completes successfully, return true
    }
    return false; // if not, return false
}

vector<vector<int>> write_vector_to_square(const vector<int> & vec){
    vector<vector<int>> square;
    vector<int> col1(4); // initializing vectors for each column of the matrix
    vector<int> col2(4);
    vector<int> col3(4);
    vector<int> col4(4);
    square.push_back(col1); // adding the column vectors to main vector
    square.push_back(col2);
    square.push_back(col3);
    square.push_back(col4);
    for (int i = 0; i < 16; i++){ // loop adds elements of original vector to the new square vector
        int column = i/4; // splits the vector into 4 different rows
        int colMem = i%4; // ensures index doesn't exceed 4
        square[column][colMem] = vec[i]; // adds elements of original vector to column
    }
    return square;

}


bool is_magic_squares(const vector<vector<int>> & vec){
    int sum;
    
    sum = vec[0][0] + vec[1][0] + vec[2][0] + vec[3][0]; // sum of the first row of the matrix, which will be checked against all other sums
    for (int i = 1; i < 4; i++){ // checks sum against all other rows, if one is false, the whole function returns false
        if (sum != (vec[0][i] + vec[1][i] + vec[2][i] + vec[3][i])){
            return false;
        }
    }
    for (int g = 0; g < 4; g++){ // checks sum against all other columns, if one is false, the whole function returns false
        if (sum != vec[g][0] + vec[g][1] + vec[g][2] + vec[g][3]){
            return false;
        }
    }
    if (sum != vec[0][0] + vec[1][1] + vec[2][2] + vec[3][3]){ // checks sum against top left to bottom right diagonal sum
        return false;
    }
    
    if (sum != vec[3][0] + vec[2][1] + vec[1][2] + vec[0][3]){ // checks sum against top right to bottom left diagonal sum
        return false;
    }
    return true; // if none of these are false, AKA the sum is the same for all of these, return true
}




// DO NOT MODIFY THE CODE BELOW THIS LINE
//-----------------------------------------------

int main(){
  int input;
  vector<int> myvector;
  cout << "Please input a sequence of 16 postive integers, ending with Q:" << endl;
  while (cin >> input){
    myvector.push_back(input);
  }
    
  bool flag1 = input_valid(myvector);
  
  if (flag1 == 0){
    cout<<"invalid input!"<<endl;
  }else{
    vector<vector<int>> mag_square;
      mag_square = write_vector_to_square(myvector);
    bool flag2 = is_magic_squares(mag_square);
    if (flag2){
      cout << "This is a magic square."<<endl;
    }else{
      cout << "This is not a magic square." << endl;
    }
  }
  return 0;
}

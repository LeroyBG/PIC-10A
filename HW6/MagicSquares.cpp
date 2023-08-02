#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool input_valid(const vector<int> & vec){
  vector<int> v = vec;
  sort(v.begin(), v.end());
  if (v.size() != 16){
    return false;
  }
  for(int i = 0; i < v.size(); i++){
    if(v[i] != i+1){
        return false;
    }
  }
  return true;
}

vector<vector<int>> write_vector_to_square(const vector<int> & vec){
  vector<vector<int>> square(4); 
    for(int i = 0; i<4; i++){  // i represent the x-aixs
      for(int j = 0; j<4; j++){ // j represent the y-aixs
        square[i].push_back(vec[i*4+j]);
      }
    }
  return square;
}

bool is_magic_squares(const vector<vector<int>> & vec){
  //row
  for(int i = 0; i<4;i++){
    int row_sum = 0;
    for(int j = 0; j<4;j++){
      row_sum += vec[i][j];
    }
    if(row_sum !=34){
      return false;
    }
  }
  
  //columns
  for(int i =0; i<4; i++){
    int col_sum =0; 
    for(int j = 0; j<4;j++){
      col_sum += vec[j][i];
    }
    if(col_sum != 34){
      return false;
    }
  }
  
  //diagonal
  int dia_sum1 = 0;
  for(int i =0; i<4; i++){
    dia_sum1 += vec[i][i];
  }
  
  int dia_sum2 = 0;
  for(int i =0; i<4; i++){
    dia_sum2 += vec[i][3-i];
  }
  
  if (dia_sum1 != 34 || dia_sum2 != 34){
    return false;
  }
  
  return true;
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
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

bool hit_boundary(int x, int y){
  if (x==5 || x==-5 || y == 5 || y==-5){
    return 1;
  }
  return 0;
}

bool origin(int x, int y){
  if (x==0 && y == 0){
    return 1;
  } 
  return 0;
}

int main() {
  int x = 0, y = 0; //position
  srand(time(0)); //set random seed

  // use do-while because we will make at least one move
  do{
    int move = rand()%4; // random integer from 0 to 3
    switch (move){
      case 0://right
        x += 1; 
        cout << setw(10) << left << "Right" << "(" << x << "," << y << ")" << endl;
        break; // the break statement here corresponds to switch, not the while loop.
      case 1://left
        x -= 1; 
        cout << setw(10) << left << "Left" << "(" << x << "," << y << ")" << endl;
        break;
      case 2://up
        y += 1;
        cout << setw(10) << left << "Up" << "(" << x << "," << y << ")" << endl;
        break;
      case 3://down
        y -= 1; 
        cout << setw(10) << left << "Down" << "(" << x << "," << y << ")" << endl;
        break;
      default://impossible, but leaving it here is a good practice
        break;
    }
  } while (!hit_boundary(x,y) && !origin(x,y));

  if (hit_boundary(x,y)){
    cout << "Hit the boundary!" << endl;
  }
  if (origin(x,y)){
    cout << "Back to the origin!" << endl;
  }

  return 0;
}
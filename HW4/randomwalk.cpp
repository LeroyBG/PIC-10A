/*
 PIC 10A Homework 4, randomwalk.cpp
 Author: Leroy Betterton Gage
 UID: 505794766
 Discussion Section: 5D
 Date: 10/28/2022
 */

#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int rand1to4(){ // a function that returns a random number between 1-4 when called
    int rand1to4 = (rand() % 4) + 1;
    return rand1to4;
}

int main(){
    srand(time(0)); //makes rand() different every time it's called
    int x = 0, y = 0; //sets robot's initial position to (0, 0)
    string direction;
    do{
        int num_direction = rand1to4(); //creates variable with value of outcome of function rand1to4
        if (num_direction == 1){ //numbers 1 to 4 are each assigned to one of the cardinal directions, x or y, and direction all all reassigned accordingly depending on the outcome
            x += 1;
            direction = "Right";
        }
        if (num_direction == 2){
            x -= 1;
            direction = "Left";
        }
        if (num_direction == 3){
            y += 1;
            direction = "Up";
        }
        if (num_direction == 4){
            y -= 1;
            direction = "Down";
        }
        cout <<setw(10)<<left<<direction<<"("<<x<<", "<<y<<")"<<endl; // prints the updated position of the robot
        
        
    } while (x < 5 && x > -5 && y < 5 && y > -5 && ((y != 0) || (x != 0))); //loop repeats until robot hits the boundary or origin
    if ((y == 0) && (x == 0)){ // i
        cout<<"Back to the origin!"<<endl; // if robot hits origin, cout accordingly
    }
    if (x >= 5 || x <= -5 || y >= 5 || y <= -5){ // if robot his boundary, cout accordingly
        cout<<"Hit the boundary!"<<endl;
    }
}
    

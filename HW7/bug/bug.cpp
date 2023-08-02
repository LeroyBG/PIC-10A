/*
 PIC 10A Homework 7, bug.cpp
 Author: Leroy Betterton Gage
 UID: 505794766
 Discussion Section: 5D
 Date: 11/27/2022
 */

#include "bug.h"

Bug::Bug(){
    position = 0; //default constructor sets bug's initial position to 0
}
Bug::Bug(int pos){ //custom constructor allows you to input an initial position
    position = pos;
}
void Bug::move(){
    if (direction) {position -= 1;} // if direction is true, bug moves left (-1)
    else {position += 1;} // if direction is false, bug moves right (+1)
}
void Bug::turn(){ // reverses boolean value of direction variable
    if (direction) {direction = false;}
    else {direction = true;}
}
int Bug::get_position() const { //returns bug position
    return position;
}

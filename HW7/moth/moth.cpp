/*
 PIC 10A Homework 7, moth.cpp
 Author: Leroy Betterton Gage
 UID: 505794766
 Discussion Section: 5D
 Date: 11/27/2022
 */

#include "moth.h"

Moth::Moth(){ // default constructor sets moth and light position both to 0
    moth_position = 0;
    light_position = 0;
}

Moth::Moth(double mothPos){ //custom constructor assigns input to moth position
    moth_position = mothPos;
}

void Moth::move_to_light(double lightPos){ // moth position becomes midpoint between moth position and light position
    light_position = lightPos;
    moth_position = ((moth_position + light_position)/2);
}

double Moth::get_position(){ // returns moth position
    return moth_position;
}

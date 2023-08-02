/*
 PIC 10A Homework 7, moth.h
 Author: Leroy Betterton Gage
 UID: 505794766
 Discussion Section: 5D
 Date: 11/27/2022
 */

#ifndef MOTH_H
#define MOTH_H

class Moth {
    public:
    Moth(); //default constructor
    Moth(double mothPos); // custom constructor
    void move_to_light(double lightPos); // moves moth
    double get_position(); // returns moth position
    private:
    double moth_position; // stores moth position
    double light_position; // stores light position
};


#endif

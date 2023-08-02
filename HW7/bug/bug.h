/*
 PIC 10A Homework 7, bug.h
 Author: Leroy Betterton Gage
 UID: 505794766
 Discussion Section: 5D
 Date: 11/27/2022
 */

#ifndef BUG_H
#define BUG_H

class Bug {
public:
    Bug(); // default constructor
    Bug(int pos); // custom constructor
    void move(); // moves bug according to the direction it's facing
    void turn(); // switches bug direction
    int get_position() const; // returns bug position
private:
    int position; // stores bug position
    bool direction = false; // stores bug direction
};

#endif

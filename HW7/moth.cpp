#include "moth.h"

Moth::Moth(double initial_position) {
    position = initial_position;
}

void Moth::move_to_light(double light_position) {
    position = (light_position + position) / 2.0;
}

double Moth::get_position() const {
    return position;
}

// Edit only above this line.


#ifndef MOTH_H
#define MOTH_H

// Edit only below this line.

class Moth {
    public:
        Moth(double initial_position);
        void move_to_light(double light_position);
        double get_position() const;
    private:
        double position;

};


#endif

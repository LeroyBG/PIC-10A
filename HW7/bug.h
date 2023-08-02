#ifndef BUG_H
#define BUG_H

class Bug {
    public:
        Bug();
        Bug(int initial_position);
        void turn();
        void move();
        int get_position() const;
    private:
        int pos;
        bool is_facing_right;
};

#endif

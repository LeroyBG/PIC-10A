#include "findnum.h"


int* find_num(int* arr, int size, int num) {

    int* p = nullptr;

    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            p = arr + i;
            break;
        }
    }
    
    return p;

}

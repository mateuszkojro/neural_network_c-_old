#pragma once
#include <cmath>
#include "simple.h"


namespace toolchest {

template <typename t>
void fill_i(t *tab, int size) {
    for (int i = 0; i < size; i++) {
        tab[i] = i + 1;
    }
}
template <typename t>
void fill_random_int(t *tab,int size){
    for(int i = 0; i < size;i++){
        tab[i] = double(simple::random(1,9));
    }
}
template <typename t>
void fill_random_bool(t *tab,int size){
    for(int i = 0; i < size;i++){
        tab[i] = double(simple::random(0,1));
    }
}
template <typename t>
void fill_random_double(t *tab,int size){
    for(int i = 0; i < size;i++){
        tab[i] = double(simple::random(-9,9)) / double(simple::random(10,30));
    }
}



//double sigmoid(double x) { return 1 / (1 + exp(-1 * x)); }


} // namespace toolchest
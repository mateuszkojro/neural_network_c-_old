#pragma once
#include "matrix.h"

class vector {

    int size_x;
    matrix a;
    double *tab;
    double index(int x) { return a.index(x, 0) }

    void apply_function(double (*func)(double)) {
        for (int i = 0; i < vector::size_x; i++) {
            vector::tab[i] = func(vector::tab[i]);
        }
    }
    void init(int __size_x) {
        a.init(size_x,1);
        vector::tab = a.tab;
        size_x = __size_x;
    }
};

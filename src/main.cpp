#include "matrix.h"
#include "toolchest.h"
#include <iostream>

int main() {

    const int size = 3;

    matrix a(size, size);
    matrix b(size, size);
    matrix c(size, size);

    double var[size * size] = {0};

    c.init(var, size * size);

    toolchest::fill_i(a.tab,size*size);
    toolchest::fill_i(b.tab,size*size);
    //toolchest::fill_i(c.tab,size*size);

    b.show();

    c = multiply(a,b);

    c.show();

    return 0;
}
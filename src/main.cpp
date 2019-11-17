#include "matrix.h"
#include "toolchest.h"
#include <iostream>
int main() {

    const int size = 3;

    matrix a(size, size);
    matrix b(size, size);
    matrix c(size, size);

    //double var[size * size] = {1, 2, 3, 4, 4, 4, 4, 4, 4};

    // a.init(var, size * size);

    toolchest::fill_i(a.tab,size*size);

    c = dot_product(a,b);

    c.show();
    return 0;
}
#include "matrix.h"
#include <iostream>
int main() {

    const int size = 3;

    matrix a(size, size);
    matrix b(size, size);
    matrix c(size, size);

    double var[size * size] = {1, 2, 3, 4, 4, 4, 4, 4, 4};

    b.init(var, size * size);
    a.init(var, size * size);

    c = add(a, b);

    a.show();
    b.show();
    c.show();

    return 0;
}
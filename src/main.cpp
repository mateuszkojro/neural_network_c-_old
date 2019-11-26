#include "matrix.h"
#include "toolchest.h"
#include "net.h"
#include <iostream>


int main() {


    const int n_layers = 5;
    const int size = 3;

    matrix a;
    a.init(3,3);

    #if 0
    toolchest::fill_random_double(a.tab, size * size);
    toolchest::fill_random_double(b.tab, size * size);

    c = multiply(a, b);
    
    #endif 
    #if 1
    net siec(3,3,a);
    for (int i = 0 ; i < 100;i++){
        siec.feed_forward();
        siec.back_propagade();
        siec.guess().show();

    }
    #endif



    }


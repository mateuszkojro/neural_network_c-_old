#include "matrix.h"
#include "toolchest.h"
#include <iostream>

int main() {


    const int n_layers = 5;
    const int size = 3;

    // number of neurons in layer is detrmined in default constructor for a
    // matrix class
    matrix neurons[n_layers];
    matrix weights[n_layers];
    matrix biases[n_layers];
    double var[9] = {1,1,0,0,0,0,0,0,0};
    for (int i = 0; i < n_layers; ++i) {
        neurons[i].tab = var;
        toolchest::fill_random_double(weights[i].tab, size * size);
        toolchest::fill_random_int(biases[i].tab, size * size);
    }
    matrix a;
    matrix b;
    matrix c;


    
    
    #if 0
    toolchest::fill_random_double(a.tab, size * size);
    toolchest::fill_random_double(b.tab, size * size);

    c = multiply(a, b);
    #endif 



    neurons[n_layers -1 ].show();
    weights[0].show();
    biases[0].show();
    }
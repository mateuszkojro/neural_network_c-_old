#pragma once
#include "matrix.h"

class net {
  public:
    net(int __n_layers, int __n_neurons, matrix *__input) {

        // FIXME jak zrobic dynamiczne tablice z wartosciami innymi niz default
        // constructor
        matrix neurons = new matrix(n_neurons, 1)[n_layers];
        matrix weights = new matrix(n_neurons, n_neurons)[n_layers];
        matrix biases = new matrix(n_neurons, n_neurons)[n_layers];
        matrix errors = new matrix(n_neurons,1)[1];

        n_layers = __n_layers;
        n_neurons = __n_neurons;
        input = __input;

    }
    int n_layers;
    int n_neurons;

    double avg_error;
    
    matrix *input;
    matrix *neurons;
    matrix *errors;
    matrix *weights;
    matrix *biases;
    matrix *expected;

    matrix guess();
    
    void init();
    void feed_forward();
    void back_propagade();
    void calculate_error();
    void extract_net();
    void inport_net();

};


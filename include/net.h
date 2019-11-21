#pragma once
#include "matrix.h"

class net {
  public:
    net(int __n_layers, int __n_neurons, matrix __input) {

        // FIXME jak zrobic dynamiczne tablice z wartosciami innymi niz default
        // constructor rozwiazanie to przerobienie konstruktora na funckcje init
        matrix neurons[__n_layers];
        matrix weights[__n_layers];
        matrix biases[__n_layers];
        matrix errors[1];

      for (int i = 0; i < __n_layers;i++){
        neurons[i].init(__n_layers,1);
        weights[i].init(__n_layers,__n_layers);
        biases[i].init(__n_layers,__n_layers);
      }
      errors[0].init(n_layers,1);

        n_layers = __n_layers;
        n_neurons = __n_neurons;
        input = __input;

    }
    int n_layers;
    int n_neurons;

    double avg_error;
    
    matrix input;
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


#pragma once
#include "matrix.h"
#include <string>
#include "vector.h"

class net {
  public:
    net(int __n_layers, int __n_neurons, matrix __input) {

        n_layers = __n_layers;
        n_neurons = __n_neurons;
        input = __input;

        vector neurons[__n_layers];
        matrix weights[__n_layers];
        matrix biases[__n_layers];
        vector errors[1];

      for (int i = 0; i < __n_layers;i++){
        neurons[i].init(__n_layers);
        weights[i].init(__n_layers,__n_layers);
        biases[i].init(__n_layers,__n_layers);
      }
      errors[0].init(n_layers);



    }
    int n_layers;
    int n_neurons;

    double avg_error;
    
    matrix input;
    vector *neurons;
    vector *errors;
    matrix *weights;
    matrix *biases;
    vector *expected;

    vector guess();
    
    void init();
    void feed_forward();
    void back_propagade();
    void calculate_error();
    void extract_net();
    void import_net(std::string name);

};


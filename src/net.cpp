#include "net.h"
#include "toolchest.h"

void net::feed_forward() {
    for (int i = 1; i < n_layers; ++i) {
        net::neurons[i] = multiply(net::weights[i - 1], net::neurons[i - 1]);
        net::neurons[i] = add(net::biases[i - 1], net::neurons[i - 1]);
        net::neurons[i].apply_function(toolchest::sigmoid);
    }
}

void net::back_propagade() {}

matrix net::guess() {}

matrix net::calculate_error() {}



void net::init(){
        for (int i = 0; i < n_layers; ++i) {
        toolchest::fill_random_int(net::neurons[i].tab, size * size);
        toolchest::fill_random_double(net::weights[i].tab, size * size);
        toolchest::fill_random_int(net::biases[i].tab,);
    }

}
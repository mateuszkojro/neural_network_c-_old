#include <fstream>
#include "net.h"
#include "toolchest.h"
#include "matrix.h"
#include "vector.h"

double sigmoid(double x) { return 1 / (1 + exp(-1 * x)); }
void net::feed_forward() {
    for (int i = 1; i < n_layers; ++i) {
       net::neurons[i] = multiply_vector( net::neurons[i - 1],net::weights[i - 1]);
        //net::neurons[i] = add(net::biases[i - 1], net::neurons[i - 1]);
        //net::neurons[i].apply_function(sigmoid);
    }
}

double coeficient_function(double x){

    return x *0.05;

}

void net::back_propagade() {
    for(int i = 0; i < n_layers-1;i++){
//FIXME nie wiem jakie odejmowanie tam powinno byvvector sub(vector a, vector b) {

        //net::weights[i] = sub(net::weights[i],net::errors[i]);
        net::weights[i].apply_function(coeficient_function);
        //net::neurons[i] = multiply_vector()
        

    }
}

vector net::guess() {

    net::feed_forward();
    
    return net::neurons[n_layers - 1];
}



void net::calculate_error() {

    net::errors[net::n_layers - 1] = sub(net::expected[net::n_layers - 1], net::guess());

    for (int i = n_layers-1; i > 0; i++) {
        //FIXME nie jestem pewny wspolczynnikow 
        net::errors[i-1] = multiply_vector(net::errors[i],net::weights[i-1]);
    
    }
}


void net::init() {
    for (int i = 0; i < n_layers; ++i) {
        toolchest::fill_random_int(net::neurons[i].tab, n_neurons * n_neurons);
        toolchest::fill_random_double(net::weights[i].tab, n_neurons * n_neurons);
        toolchest::fill_random_int(net::biases[i].tab,n_neurons );
    }
}


void net::import_net(std::string name){
    
    std::fstream p;
    p.open(name,std::ios::out);

    //Pierwsza linia to rozmiary 
    //kolejne to kazda linia przecinek kazdej warstwy 


}


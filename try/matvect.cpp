#include <iostream>

int main() {

    const int a = 2;
    double matrix[a][a] = {{0.5,0.5},{0.5,0.5}} ;
    double vector[a] = {4,4};
    double wynik[a]={0};

    for(int x =0;x < a ;x++){
        for (int y = 0; y < a;y++){
                
                wynik[x] += vector[x] * matrix[y][x];
                std::cout << wynik[x] << "+=" << vector[x] << "*" << matrix[y][x]<<std::endl;
        }
    }

    for (int i = 0; i < a;i++){
        std::cout << wynik[i] << std::endl;
    }

}


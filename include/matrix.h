#pragma once
#include <deque>

class matrix {
  public:
    int size_x;
    int size_y;
    int size_l;
    double *tab;
    
    void show();
    int adress(int x, int y);
    double index(int x, int y);

    void init(int x, int y);
    double operator[](int adress);
    void apply_function(double (*func)(double));
    int size();
    // int operator * (const int&  adressX ,const int& adressY );

    // TODO zamienic konstruktor na funckcje init wywolywana dopiero po
    // zainicjalizowaniu wszytskich elementow tablicy
    #if 0
    matrix(int x = 3, int y = 3) {

    }
    #endif

  private:
};

matrix add(matrix a, matrix b);
matrix sub(matrix a, matrix b);
matrix multiply(matrix a, matrix b);

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

    void init(double *tab, int size);
    double operator[](int adress);
    void apply_function(double (*func)(double));
    int size();
    // int operator * (const int&  adressX ,const int& adressY );
    matrix(int x=3, int y=3) {
        size_x = x;
        size_y = y;
        size_l =  x*y;
        tab = new double[x * y];
    }
    ~matrix(){
      //delete [] tab;
    }

  private:
};

matrix add(matrix a, matrix b);
matrix sub(matrix a, matrix b);
matrix multiply(matrix a, matrix b);

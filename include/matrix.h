#pragma once
#include <deque>

class matrix {
 public:
  int size_x;
  int size_y;
  double* tab;
  int index(int x, int y);
  void show();
  void init(double* tab, int size);
  double operator [](int adress);
  //int operator * (const int&  adressX ,const int& adressY );
  matrix(int x, int y) {
    size_x = x;
    size_y = y;
    tab = new double[x * y];
  }

 private:
};

matrix add(matrix a, matrix b);
matrix sub(matrix a, matrix b);
matrix dot_product(matrix a, matrix b);

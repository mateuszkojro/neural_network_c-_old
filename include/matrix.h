#pragma once
#include <deque>

class matrix {
public:
  int size_x;
  int size_y;
  double *tab;
  int a(int x, int y);
  void show();
  void init(double *tab,int size);
  matrix(int x, int y) {
    size_x = x;
    size_y = y;
    tab = new double[x * y];
  }

private:
};

matrix add(matrix a, matrix b);
matrix sub(matrix a, matrix b);
matrix multiply_by_vector(matrix a, matrix b);

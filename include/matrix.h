#pragma once
#include <deque>

class matrix {
  matrix(int size_x, int size_y, double *input_tab) {
    x = size_x;
    y = size_y;
    *tab = new double [x * y];
  }

private:
public:
  int x;
  int y;
  double **tab;
  int a(int x, int y);
};

matrix add(matrix a, matrix b);
matrix sub(matrix a, matrix b);
matrix multiply_by_vector(matrix a, matrix b);

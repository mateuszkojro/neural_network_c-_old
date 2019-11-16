#include "matrix.h"
#include <iostream>
int main() {

  const int size = 2;

  matrix a(size, size);
  matrix b(size, size);
  matrix c(size, size);
  double var[size * size] = {1, 2, 3, 4};
  a.init(var, 4);

  c = add(a, b);
  a.show();
  c.show();
  return 0;
}
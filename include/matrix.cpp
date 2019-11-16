#include "matrix.h"

// TODO sprawdzic czy wzor dobrze dziala
int matrix::a(int x, int y) { return y * matrix::x + x; }

// TODO adding to matricies togheter
matrix add(matrix a, matrix b) {
  matrix wynik(a.size_x, a.size_y);

  for (int x = 0; x < a.size_x; x++) {
    for (int y = 0; y < a.size_y; y++) {
        wynik.tab[wynik.a(x,y)] = a.tab[a.a(x,y)] + b.tab[b.a(x,y)];
    }
  }

  return a;
}

// TODO multiply matrix by vector
matrix multiply_by_vector(matrix a, matrix b) { return a; }

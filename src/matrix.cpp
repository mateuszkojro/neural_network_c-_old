#include "matrix.h"
#include <iostream>
// TODO sprawdzic czy wzor dobrze dziala

//FIXME   nie poprawny wzor ew blad wyswietlania lub zapisywania danych do macierzy
int matrix::a(int x, int y) { return y * matrix::size_x + x; }
void matrix::show(){
    for (int x = 0; x < matrix::size_x; x++) {
    for (int y = 0; y < matrix::size_y; y++) {
       std::cout << matrix::tab[matrix::a(x,y)];
    }
    std::cout << std::endl;
  }
}

matrix add(matrix a, matrix b) {
  matrix wynik(a.size_x, a.size_y);

  for (int x = 0; x < a.size_x; x++) {
    for (int y = 0; y < a.size_y; y++) {
        wynik.tab[wynik.a(x,y)] = a.tab[a.a(x,y)] + b.tab[b.a(x,y)];
    }
  }

  return wynik;
}

void matrix::init(double *tab,int size){
  for (int i =0 ; i < size; i++){
    matrix::tab[i] = tab[i];
  }
}

// TODO multiply matrix by vector
matrix multiply_by_vector(matrix a, matrix b) { return a; }

#include "matrix.h"
#include <iostream>
// TODO sprawdzic czy wzor dobrze dziala

//FIXME   nie poprawny wzor ew blad wyswietlania lub zapisywania danych do macierzy
int matrix::index(int x, int y) { return (y * matrix::size_x) + x; }
void matrix::show(){
    for (int x = 0; x < matrix::size_x; x++) {
    for (int y = 0; y < matrix::size_y; y++) {
       std::cout << matrix::tab[matrix::a(x,y)];
    }
    std::cout << std::endl; 
  }
}
/*
int matrix::operator *(const int& adressX,const int& adressY){
  return adressY * matrix::size_x + adressX;
}
*/
double matrix::operator[](int adress){
  return matrix::tab[adress];
}

matrix add(matrix a, matrix b) {
  matrix wynik(a.size_x, a.size_y);

  for (int x = 0; x < a.size_x; x++) {
    for (int y = 0; y < a.size_y; y++) {
        wynik.tab[wynik.index(x,y)] = a[a.index(x,y)] + b[b.index(x,y)];
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
matrix dot_product(matrix a, matrix b) { return a; }

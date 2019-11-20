#include "matrix.h"
#include <cmath>
#include <exception>
#include <iomanip>
#include <iostream>


int convert(int x, int y, int size_x) { return (y * size_x) + x; }

// TODO adress jest zle zdeklarowny i zawsze zwraca 0
int adress(int x, int y) { return 0; }


// TODO poprawic wyrzucanay wyjatek
double matrix::index(int x, int y) {
    if (matrix::size_l > convert(x, y, matrix::size_x)) {
        return matrix::tab[convert(x, y, matrix::size_x)];
    } else {
        std::cout << "!!!!" << convert(x, y, matrix::size_x)
                  << " is out of index range !!!!!";
        throw "badd memory index";
        return 0;
    }
}

void matrix::apply_function(double (*func)(double)) {
    for (int i = 0; i < matrix::size_x * matrix::size_y; i++) {
        matrix::tab[i] = func(matrix::tab[i]);
    }
}
void matrix::show() {
    for (int i = 0; i < matrix::size_x * 2 + 1; i++) {
        std::cout << "-";
    }
    std::cout << std::endl;
    for (int x = 0; x < matrix::size_x; x++) {
        for (int y = 0; y < matrix::size_y; y++) {
            std::cout << "|" << std::setprecision(3) << matrix::index(x, y);
        }
        std::cout << "|" << std::endl;
    }
    for (int i = 0; i < matrix::size_x * 2 + 1; i++) {
        std::cout << "-";
    }
    std::cout << std::endl;
}
/*
Przeciazenie operatorw dodawania i odejmowania

int matrix::operator *(const int& adressX,const int& adressY){
  return adressY * matrix::size_x + adressX;
}
*/
double matrix::operator[](int adress) { return matrix::tab[adress]; }

matrix add(matrix a, matrix b) {
    matrix wynik(a.size_x, a.size_y);

    for (int x = 0; x < a.size_x; x++) {
        for (int y = 0; y < a.size_y; y++) {
            wynik.tab[convert(x, y, a.size_x)] = a.index(x, y) + b.index(x, y);
        }
    }

    return wynik;
}

matrix sub(matrix a ,matrix b){
        matrix wynik(a.size_x, a.size_y);

    for (int x = 0; x < a.size_x; x++) {
        for (int y = 0; y < a.size_y; y++) {
            wynik.tab[convert(x, y, a.size_x)] = a.index(x, y) - b.index(x, y);
        }
    }

    return wynik;
}

void matrix::init(double *tab, int size) {
    for (int i = 0; i < size; i++) {
        matrix::tab[i] = tab[i];
    }
}

// TODO sprawdzic czy odpowiednie paramtery do mnozenie razy wektor
matrix multiply(matrix a, matrix b) {
    matrix wynik(a.size_x, a.size_y);
    for (int x = 0; x < a.size_x; x++) {
        for (int y = 0; y < a.size_x; y++) {
            for (int z = 0; z < b.size_x; z++) {
                wynik.tab[convert(x, y, a.size_x)] +=
                    a.index(x, z) * b.index(z, y);
            }
        }
    }
    return wynik;
}



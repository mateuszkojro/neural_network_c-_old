#include "vector.h"

vector multiply_vector(vector a, matrix b) {
    vector wynik;
    wynik.init(a.size_x);

    for (int x = 0; x < a.size_x; x++) {
        for (int y = 0; y < a.size_x; y++) {

            wynik.tab[convert_addr(x, 1, a.size_x)] += a.index(x) * b.index(y, x);
        }
    }
    return wynik;
}

vector sub(vector a, vector b) {
    vector wynik;
    wynik.init(wynik.size_x);
    for (int x = 0; x < a.size_x; x++) {
            wynik.tab[x] = a.index(x) - b.index(x);
    }
    return wynik;
}

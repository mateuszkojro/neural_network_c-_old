#pragma once
#include <cmath>


namespace toolchest {

template <typename t>
void fill_i(t *tab, int size) {
    for (int i = 0; i < size; i++) {
        tab[i] = i;
    }
}

double sigmoid(double x) { return 1 / (1 + exp(-1 * x)); }

} // namespace toolchest
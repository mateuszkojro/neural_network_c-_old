#pragma once

#include <chrono>
#include <cstdlib>
#include <ctime>
#include <iostream>

namespace simple {

void init();
int random(int a, int b);
template <typename t> bool check_duplicates(t *tab, int size, int x);
template <typename t> void list_show(t *tab, int size);
template <typename t> void arr_show(t **arr, int sizeX, int sizeY);
template <typename t> void swap(t &a, t &b);
template <typename t> void sort(t *tab, int size);
template <typename t> void log(std::string nazwa, t data);

class measure_time {
private:
  std::chrono::time_point<std::chrono::high_resolution_clock> start;
  std::chrono::time_point<std::chrono::high_resolution_clock> stop;

public:
  int time;

  measure_time();
  ~measure_time();
};

} // namespace simple

template <typename t> bool check_duplicates(t *tab, int size, t x) {

  for (int j = 0; j < size; ++j) {
    if (tab[j] == x) {
      return false;
    }
  }

  return true;
}

template <typename t> void simple::list_show(t tab[], int size) {
  for (int i = 0; i < size; i++) {
    std::cout << tab[i] << ", ";
  }
}

#if 0

// TODO: Sprawdzic czy poprawna kolejnosc wyswietlania x i y
// TODO: how to pass 2d arr as a paramter
//znalezc sensowny sposob przekazywania 2d arrays

template <class t> void simple::arr_show(t **arr, int sizeX, int sizeY) {
  for (int x = 0; x < sizeX; x++) {
    for (int y = 0; y < sizeY; y++) {
      std::cout << arr[y][x];
    }
  }
}
#endif

template <class t> void simple::swap(t &a, t &b) {
  t temp = a;
  a = b;
  b = temp;
}

template <class t> void simple::sort(t tab[], int size) {
  bool flag;
  do {
    flag = false;
    for (int j = 0; j < size - 1; j++) {
      if (tab[j] > tab[j + 1]) {
        flag = true;
        swap(tab[j], tab[j + 1]);
      }
    }
  } while (flag);
}

template <typename t> void simple::log(std::string nazwa, t data) {
  std::cout << std::endl
            << "---------------LOG-------------------" << std::endl;
  std::cout << nazwa << " : " << data << std::endl << std::endl;
}

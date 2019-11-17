#include "simple.h"

void simple::init() { std::srand(time(NULL)); }

int simple::random(int a, int b) {
  // wymaga ziarna w postaci #include<ctime> std::srand(time(NULL))
  int rand = std::rand();

  return (rand % (b + 1 - a)) + a;
}

simple::measure_time::measure_time() {
  start = std::chrono::high_resolution_clock::now();
}
simple::measure_time::~measure_time() {

  stop = std::chrono::high_resolution_clock::now();

  auto duration =
      std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
  int time = duration.count();

  simple::log("czas wykonania ", time);
}

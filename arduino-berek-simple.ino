#include "setup.h"

void loop() {
  #include "loop.h"
}

bool over_the_line() {
  return digitalRead(CENTER_LINE_DETECTOR) == HIGH;
}

void go_back(int miliseconds) {
  wheels.backward(255, miliseconds);
}

int how_far_is_the_closest_object() {
  auto distance = proximity.ping_cm();

  if (distance == 0) {
    distance = 100000;
  }
  
  return distance;
}

void do_przodu(niech ile_sekund) {
  wheels.forward(255, 1000 * ile_sekund);
}

void obroc_w_lewo(niech ile_sekund) {
  wheels.turn_left(155, 1000 * ile_sekund);
}


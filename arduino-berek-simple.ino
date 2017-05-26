#include "setup.h"

void loop() {
  if (over_the_line()) {
    go_back(500);
    turn_left(250);
  } else {
    let distance = how_far_is_the_closest_object();
    let something_is_near = distance < 50;
    
    if (something_is_near) {
      go_forward(200);
    } else {
      turn_left(20);
    }
  }
}

bool over_the_line() {
  return digitalRead(CENTER_LINE_DETECTOR) == HIGH;
}

void go_back(int miliseconds) {
  wheels.backward(255, miliseconds);
}

int how_far_is_the_closest_object() {
  return proximity.ping_cm();
}

void go_forward(int miliseconds) {
  wheels.forward(255, miliseconds);
}

void turn_left(int miliseconds) {
  wheels.turn_left(155, miliseconds);
}


#include "sketch_may25a_setup.h"

void loop() {
  if (digitalRead(CENTER_LINE_DETECTOR) == HIGH) {
    wheels.backward(255, 500);
  } else {
    int distance = proximity.ping_cm();
    bool is_something_found = ( distance < 30 && distance > 0);
    
    if (is_something_found) {
      wheels.forward(255, 200);
    } else {
      wheels.turn_left(155, 20);
    }
  }
}

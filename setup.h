#include <L298N.h>
#include <NewPing.h>

#define LEFT_FORWARD 2
#define LEFT_BACKWARD 4
#define LEFT_SPEED 3
#define RIGHT_FORWARD 6
#define RIGHT_BACKWARD 7
#define RIGHT_SPEED 5

#define PROXIMITY_ECHO 10
#define PROXIMITY_TRIG 9

#define CENTER_LINE_DETECTOR 12

#define let auto

NewPing proximity(PROXIMITY_TRIG, PROXIMITY_ECHO, 200);
L298N wheels(LEFT_SPEED, LEFT_FORWARD, LEFT_BACKWARD, RIGHT_FORWARD, RIGHT_BACKWARD, RIGHT_SPEED);

void setup() {
  Serial.begin(9600);
  Serial.setTimeout(50);
}


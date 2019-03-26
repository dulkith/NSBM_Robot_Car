/*
LINE FOLLOW AND OBJECT MOVER
by Dulkith Bataduwa
*/

#include <Arduino.h>

#include "IRSensorArray.h"
#include "Drive.h"

float kP = 0.2;
float kD = 0.8;
int last_value;

void setup() {
  Serial.begin(115200);
  drive.SETUP();

  for (int i = 0; i < 50; i++) {
    iRSensorArray.getSensor().calibrate();
    drive.mdrive(-120, 120);
  }
  drive.mdrive(0, 0);
  delay(100);

  for (int i = 0; i < 100; i++) {
    iRSensorArray.getSensor().calibrate();
    drive.mdrive(120, -120);
  }
  drive.mdrive(0, 0);
  delay(100);
  for (int i = 0; i < 40; i++) {
    iRSensorArray.getSensor().calibrate();
    drive.mdrive(-120, 120);
  }
  drive.mdrive(0, 0);
  delay(1000);

}

void loop() {
  int err = iRSensorArray.getSensor().readSensor();
  Serial.println(err);
  int m1 =120;
  int m2 = 120;

  int diff = err * kP + (err - last_value) * kD;
  //int diff=err*kP;
  last_value = err;

  drive.mdrive(m1 - diff, m2+ diff);
}

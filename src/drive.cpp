
#include <Arduino.h>

#include "Drive.h"

#define L_MOTOR_PWM 10 //L PWM Pin
#define R_MOTOR_PWM 5 // R PWM Pin

#define L_MOTOR1 9
#define L_MOTOR2 8

#define R_MOTOR3 7
#define R_MOTOR4 6

Drive::Drive() {}

void Drive::SETUP() {
  pinMode(L_MOTOR_PWM, OUTPUT);
  pinMode(R_MOTOR_PWM, OUTPUT);
  pinMode(L_MOTOR1, OUTPUT);
  pinMode(L_MOTOR2, OUTPUT);
  pinMode(R_MOTOR3, OUTPUT);
  pinMode(R_MOTOR4, OUTPUT);
 }

void Drive::mdrive(int m1, int m2) {
  if (m1 > 0) {
    if (m1 > 255) {
      m1 = 255;
    }
    digitalWrite(M1, HIGH);
    analogWrite(M1pwm, 255 - m1);
  } else {
    if (m1 < -255) {
      m1 = -255;
    }
    digitalWrite(M1, LOW);
    analogWrite(M1pwm, m1 * -1);
  }

  if (m2 > 0) {
    if (m2 > 255) {
      m2 = 255;
    }
    digitalWrite(M2, HIGH);
    analogWrite(M2pwm, 255 - m2);
  } else {
    if (m2 < -255) {
      m2 = -255;
    }
    digitalWrite(M2, LOW);
    analogWrite(M2pwm, m2 * -1);
  }
}

Drive drive = Drive();

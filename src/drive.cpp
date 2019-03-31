
#include <Arduino.h>

#include "Drive.h"

#define L_MOTOR_PWM 4 //L PWM Pin
#define R_MOTOR_PWM 5 // R PWM Pin

#define L_MOTOR1 43
#define L_MOTOR2 45

#define R_MOTOR1 49
#define R_MOTOR2 47

#define M_OTOREN 17
#define M_OTOREN2 16


#define M1 4
#define M1pwm 5
#define M2 7
#define M2pwm 6

Drive::Drive() {}

void Drive::SETUP() {
  pinMode(M1, OUTPUT);
  pinMode(M1pwm, OUTPUT);
  pinMode(M2, OUTPUT);
  pinMode(M2pwm, OUTPUT);
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

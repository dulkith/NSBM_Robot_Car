
#include <Arduino.h>

#include "Buzzer.h"

#define BUZZER 5

Buzzer::Buzzer() {}

void Buzzer::SETUP() { pinMode(BUZZER, OUTPUT); }

void Buzzer::beep(int wait, int beepCount) {
  for (int count = 0; beepCount > count; count++) {
    beep(wait);
  }
}

void Buzzer::beep(int wait) {
  digitalWrite(BUZZER, HIGH);
  delay(wait);
  digitalWrite(BUZZER, LOW);
  delay(wait + 10);
}

Buzzer buzzer = Buzzer();

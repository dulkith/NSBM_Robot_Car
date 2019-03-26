
#include <Arduino.h>

#include "Ultrasonic.h"

// #define TRIG 3
// #define ECHO 1
#define TRIG 14
#define ECHO 12

double startDistance;

Ultrasonic::Ultrasonic() {}

void Ultrasonic::SETUP() {
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  startDistance = getDistance();
}

double Ultrasonic::getDistance() {
  // defines variables
  long duration;
  int distance;
  // Clears the trigPin
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(ECHO, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2;
  // Prints the distance on the Serial Monitor
  return distance;
}
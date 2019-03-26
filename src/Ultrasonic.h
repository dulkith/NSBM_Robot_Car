
#ifndef ULTRASONIC_H
#define ULTRASONIC_H

class Ultrasonic {
public:
  Ultrasonic();
  void SETUP();
  double getDistance();
  double getStartDistance();
};

extern Ultrasonic ultrasonic;

#endif
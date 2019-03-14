
#ifndef BUZZER_H
#define BUZZER_H

class Buzzer {
public:
  Buzzer();
  void SETUP();
  void beep(int wait);
  void beep(int wait, int beepCount);
};

extern Buzzer buzzer;

#endif

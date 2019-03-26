
#include <BeeLineSensorPro.h>

#ifndef IRSENSORARRAY_H
#define IRSENSORARRAY_H

class IRSensorArray {
public:
  IRSensorArray();
  void SETUP();
  BeeLineSensorPro getSensor();
};

extern IRSensorArray iRSensorArray;

#endif

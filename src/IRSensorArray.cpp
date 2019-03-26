
#include <Arduino.h>

#include "IRSensorArray.h"

#include <BeeLineSensorPro.h>

BeeLineSensorPro sensor = BeeLineSensorPro((unsigned char[]) {
  A0, A1, A2, A3, A4, A5, A6, A7
}, LINE_BLACK);

IRSensorArray::IRSensorArray() {}

void IRSensorArray::SETUP() {
 }

BeeLineSensorPro IRSensorArray::getSensor(){
    return sensor;
}

IRSensorArray iRSensorArray = IRSensorArray();
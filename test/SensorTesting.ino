#include <BeeLineSensorPro.h>
BeeLineSensorPro sensor = BeeLineSensorPro((unsigned char[]) {
  A0, A1, A2, A3, A4, A5, A6, A7
}, LINE_BLACK);
void setup() {
  Serial.begin(115200);
  Serial.println("Calibrating ON");
  for (int i = 0; i < 100; i++) {
    sensor.calibrate();
  }
  Serial.println("Calibrating Completed");
}

void loop() {
   int err = sensor.readSensor();
  Serial.println(err);
}

#define M1   4
#define M1pwm  5
#define M2 7
#define M2pwm 6

void setup() {
  pinMode(M1, OUTPUT);
  pinMode(M1pwm, OUTPUT);
  pinMode(M2, OUTPUT);
  pinMode(M2pwm, OUTPUT);
}

void loop() {
  mdrive(255, 255);
}

void mdrive(int m1, int m2) {
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

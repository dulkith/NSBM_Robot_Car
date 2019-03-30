
#ifndef RFID_H
#define RFID_H

class Rfid {
public:
  Rfid();
  void SETUP();
  void read();
};

extern Rfid rfid;

#endif

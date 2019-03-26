
#include <Arduino.h>

#include "ActionSwitch.h"

#define ACTION_SWITCH 16

static int switchState = 0;
static int systemActiveOrNot = 0; // is the system active = 1 or not active = 0

ActionSwitch::ActionSwitch() {}

void ActionSwitch::SETUP() { pinMode(ACTION_SWITCH, INPUT); }

void ActionSwitch::resetSystem() {
  switchState = digitalRead(ACTION_SWITCH);
  if (switchState == 1) // catch change
  {
      if (systemActiveOrNot == 1)
      {
        /*relayBulbs.onOff(1, false);
        relayBulbs.onOff(2, true);
        firebaseDatabase.bulbOnOff(1, 0);
        firebaseDatabase.bulbOnOff(2, 1);*/
      }
  }
}

ActionSwitch actionSwitch = ActionSwitch();

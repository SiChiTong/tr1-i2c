#ifndef INTERRUPT_H
#define INTERRUPT_H

int interruptBR_pulses, interruptFR_pulses, interruptBL_pulses, interruptFL_pulses;

void interruptBR() {
  int interruptBR_A = 19;
  int interruptBR_B = 26;
  if (digitalRead(interruptBR_B) == 0) {
    if (digitalRead(interruptBR_A) == 0) {
      interruptBR_pulses--;
    } else {
      interruptBR_pulses++;
    }
  } else {
    if (digitalRead(interruptBR_A) == 0) {
      interruptBR_pulses++;
    } else {
      interruptBR_pulses--;
    }
  }
}

void interruptFR() {
  int interruptFR_A = 18;
  int interruptFR_B = 28;
  if (digitalRead(interruptFR_B) == 0) {
    if (digitalRead(interruptFR_A) == 0) {
      interruptFR_pulses--;
    } else {
      interruptFR_pulses++;
    }
  } else {
    if (digitalRead(interruptFR_A) == 0) {
      interruptFR_pulses++;
    } else {
      interruptFR_pulses--;
    }
  }
}

void interruptBL() {
  int interruptBL_A = 3;
  int interruptBL_B = 30;
  if (digitalRead(interruptBL_B) == 0) {
    if (digitalRead(interruptBL_A) == 0) {
      interruptBL_pulses--;
    } else {
      interruptBL_pulses++;
    }
  } else {
    if (digitalRead(interruptBL_A) == 0) {
      interruptBL_pulses++;
    } else {
      interruptBL_pulses--;
    }
  }
}

void interruptFL() {
  int interruptFL_A = 2;
  int interruptFL_B = 29;
  if (digitalRead(interruptFL_B) == 0) {
    if (digitalRead(interruptFL_A) == 0) {
      interruptFL_pulses--;
    } else {
      interruptFL_pulses++;
    }
  } else {
    if (digitalRead(interruptFL_A) == 0) {
      interruptFL_pulses++;
    } else {
      interruptFL_pulses--;
    }
  }
}

#endif

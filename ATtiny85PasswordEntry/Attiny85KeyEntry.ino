#include "DigiKeyboard.h"

char password[] = "Password Example";

// could not find a delete key for this library
void wipe(){
  for (int i = 0; i < strlen(password); i++) {
    DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT, MOD_SHIFT_LEFT);
  }
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void setup() {
  DigiKeyboard.print(password);
  delay(2000);
  wipe();
}

void loop() {}

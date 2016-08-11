#include "LedControl.h"

/*
   Now we create a new LedControl.
   We use pins 12,11 and 10 on the Arduino for the SPI interface
   Pin 12 is connected to the DATA IN-pin of the first MAX7221
   Pin 11 is connected to the CLK-pin of the first MAX7221
   Pin 10 is connected to the LOAD(/CS)-pin of the first MAX7221
   There will only be a single MAX7221 attached to the arduino
*/

LedControl matrice = LedControl(12, 11, 10, 1);

void setup() {
  matrice.clearDisplay(0);
  matrice.shutdown(0, false);
  Serial.begin(9600);
}

void loop() {

  

}

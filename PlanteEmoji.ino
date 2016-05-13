#include "LedControl.h"

/*
   Now we create a new LedControl.
   We use pins 12,11 and 10 on the Arduino for the SPI interface
   Pin 12 is connected to the DATA IN-pin of the first MAX7221
   Pin 11 is connected to the CLK-pin of the first MAX7221
   Pin 10 is connected to the LOAD(/CS)-pin of the first MAX7221
   There will only be a single MAX7221 attached to the arduino
*/

LedControl leds = LedControl(12, 11, 10, 1);

void setup() {
  leds.clearDisplay(0);
  leds.shutdown(0, false);
  Serial.begin(9600);
}

void loop() {
  int humidity = analogRead(0);
  Serial.println(humidity);

  if(humidity > 300){
    leds.clearDisplay(0);
    // ================ BAD ================
    leds.setLed(0,1,1,true);
    
    leds.setLed(0,2,2,true);
    leds.setLed(0,3,2,true);
    leds.setLed(0,4,2,true);
    leds.setLed(0,5,2,true);
    
    leds.setLed(0,6,1,true);
  
  
    leds.setLed(0,1,5,true);
    leds.setLed(0,2,5,true);
    leds.setLed(0,2,6,true);
  
    leds.setLed(0,6,5,true);
    leds.setLed(0,5,5,true);
    leds.setLed(0,5,6,true);
  } else {
    // ================ SMILE ================
    leds.clearDisplay(0);
    leds.setLed(0,1,2,true);
    
    leds.setLed(0,2,1,true);
    leds.setLed(0,3,1,true);
    leds.setLed(0,4,1,true);
    leds.setLed(0,5,1,true);
    
    leds.setLed(0,6,2,true);
  
  
    leds.setLed(0,1,5,true);
    leds.setLed(0,2,5,true);
    leds.setLed(0,2,6,true);
    leds.setLed(0,1,6,true);
  
    leds.setLed(0,6,5,true);
    leds.setLed(0,6,6,true);
    leds.setLed(0,5,5,true);
    leds.setLed(0,5,6,true);
  }

 
  /*
  leds.setLed(0,1,2,true);
  
  leds.setLed(0,2,1,true);
  leds.setLed(0,3,1,true);
  leds.setLed(0,4,1,true);
  leds.setLed(0,5,1,true);
  
  leds.setLed(0,6,2,true);

  leds.setLed(0,2,4,true);
  leds.setLed(0,2,5,true);
  leds.setLed(0,2,6,true);

  leds.setLed(0,5,4,true);
  leds.setLed(0,5,5,true);
  leds.setLed(0,5,6,true);
  */
}


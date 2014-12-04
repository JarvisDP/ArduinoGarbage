/*
  Blink sketch for sFDW library
  Turns on an 4 LEDs on for one second in sequence, 
  then off all at once, then on all at once, after on all at once,
  and turn off all 4 LEDs separately. 
  And all this actions repeatedly.
  Functions of this library:
	- sPin(pin №, pin HIGH/LOW status <1/0> )
	- mPinsStateHigh(pins numbers for HIGH state switch, as array - separate by ",")
	- mPinsStateLow(pins numbers for LOW state switch, as array - separate by ",")
  Created by Dmitry Pogudo-Georgov, December 3, 2014.
  This example code is in the public domain.
 */
 
// Pins 6,7,8,9 has an LEDs connected on most Arduino boards.
#include <sFDW.h>

// the setup routine runs once when you press reset:
void setup() {}

// the loop routine runs over and over again forever:
void loop() {
  sFDW.sPin(6,1);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  sFDW.sPin(7,1);
  delay(1000);
  sFDW.sPin(8,1);
  delay(1000);
  sFDW.sPin(9,1);
  delay(1000);
  
  sFDW.mPinsStateLow(6,7,8,9);  // turn the LED off by making the voltage LOW in all ours pins
  delay(1000);                  // wait for a second
  
  sFDW.mPinsStateHigh(6,7,8,9); // turn the LED on by making the voltage HIGH in all ours pins
  delay(1000);                  // wait for a second
  
  sFDW.sPin(6,0);   // turn the LED off (LOW is the voltage level)
  delay(1000);               // wait for a second
  sFDW.sPin(7,0);
  delay(1000);
  sFDW.sPin(8,0);
  delay(1000);
  sFDW.sPin(9,0);
  delay(1000);
  
}

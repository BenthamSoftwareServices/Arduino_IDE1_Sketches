/*
  Blink Sketch

  Turns an LED on for one second, then off for one second, repeatedly.

  The built in blue LED on an ESP32 board is on IO2, GPIO2

  Constants must be defined before they are used or a compiler error will result e.g. line 10
  Constants are not variables and can not be changed by the program
  So declaring a fixed value using e.g. INT LED_BUILTIN = 2
    
*/
#define LED_BUILTIN 2

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a second
}

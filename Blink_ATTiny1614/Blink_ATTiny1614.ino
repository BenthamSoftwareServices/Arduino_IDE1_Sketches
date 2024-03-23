/*
  Blink an LED on PA2 on an ATTiny1614 MCU
*/

// Pin definitions
const int ledPin = A2;

// the setup function runs once when you press reset or power the board
void setup() {
  // Initialize pin as an output
  pinMode(ledPin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  // Flash the LED on PA2
  digitalWrite(ledPin, HIGH); // Turn the LED on
  delay(100);                // Wait for 1 second
  digitalWrite(ledPin, LOW);  // Turn the LED off
  delay(100);                // Wait for 1 second
}

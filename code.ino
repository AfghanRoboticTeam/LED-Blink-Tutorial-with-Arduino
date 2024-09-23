// LED Blinking Code for Pin 13

void setup() {
  // Initialize pin 13 as an output
  pinMode(13, OUTPUT);
}

void loop() {
  // Turn the LED on (HIGH is the voltage level)
  digitalWrite(13, HIGH);
  // Wait for a second
  delay(1000);
  // Turn the LED off by making the voltage LOW
  digitalWrite(13, LOW);
  // Wait for a second
  delay(1000);
}

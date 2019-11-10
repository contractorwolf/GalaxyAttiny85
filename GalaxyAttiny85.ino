
int pulseOut = 3;
int potentiometerIn = A2;
int pulseMicroSeconds = 42;
int maxIntervalValue = 540;
int count = 0;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(pulseOut, OUTPUT);
  pinMode(potentiometerIn, INPUT);
}

// the loop function runs over and over again forever
void loop() {
  int val = analogRead(potentiometerIn);
  val = map(val, 0, 1023, 0, maxIntervalValue);

  digitalWrite(pulseOut, HIGH);   // turn the LED on (HIGH is the voltage level)
  delayMicroseconds(pulseMicroSeconds);            // wait for a second
  digitalWrite(pulseOut, LOW);    // turn the LED off by making the voltage LOW

  delay(val);

}

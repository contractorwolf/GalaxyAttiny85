
int led = 4;
int potentiometer = 3;
int pulseMicroSeconds = 42;
int maxIntervalValue = 540;
int count = 0;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(led, OUTPUT);
  pinMode(potentiometer, INPUT);
}

// the loop function runs over and over again forever
void loop() {
  int val = analogRead(potentiometer);
  val = map(val, 0, 1023, 0, maxIntervalValue);

  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delayMicroseconds(pulseMicroSeconds);            // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW

  delay(val);

}

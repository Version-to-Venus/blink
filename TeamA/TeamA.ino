const int leftFwd = 9;
const int rightFwd = 7;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(leftFwd, OUTPUT);
  pinMode(rightFwd, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(leftFwd, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(rightFwd, LOW);
  delay(500);                       // wait for a second
  digitalWrite(leftFwd, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(rightFwd, HIGH);
  delay(500);                       // wait for a second
}

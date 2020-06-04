const int rightFwd = 7;
const int rightRev = 8;
const int rightEnb = 9;
const int leftEnb = 10;
const int leftRev = 11;
const int leftFwd = 12;


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(rightFwd, OUTPUT);
  pinMode(rightRev, OUTPUT);
  pinMode(rightEnb, OUTPUT);
  pinMode(leftEnb, OUTPUT);
  pinMode(leftRev, OUTPUT);
  pinMode(leftFwd, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(leftFwd, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(rightFwd, LOW);
  delay(1000);                       // wait for a second
  digitalWrite(leftFwd, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(rightFwd, HIGH);
  delay(1000);                       // wait for a second
}

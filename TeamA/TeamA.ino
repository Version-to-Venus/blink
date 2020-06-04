// Pin connections on rover
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
  // Drive forwards
  digitalWrite(leftEnb, HIGH);  
  digitalWrite(leftFwd, HIGH);                    
  digitalWrite(leftRev, LOW);
  digitalWrite(rightEnb, HIGH);  
  digitalWrite(rightFwd, HIGH);                    
  digitalWrite(rightRev, LOW); 
  delay(2000);

  // stop
  digitalWrite(leftEnb, HIGH);  
  digitalWrite(leftFwd, LOW);                    
  digitalWrite(leftRev, LOW);
  digitalWrite(rightEnb, HIGH);  
  digitalWrite(rightFwd, LOW);                    
  digitalWrite(rightRev, LOW); 
  delay(2000);
}

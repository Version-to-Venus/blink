
// Assign variables to pins
const int LED_RED = 12;
const int LED_GREEN = 13;

void setup()
{
  Serial.begin(115200);

  pinMode(LED_RED, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
}

void loop()
{
  // turn the red LED on, green LED off
  digitalWrite(LED_RED, HIGH);
  digitalWrite(LED_GREEN, LOW);
  Serial.println("Red on, greenoff");

  delay(250); // Wait for 1000 millisecond(s)
  // turn the red LED, green LED on
  digitalWrite(LED_GREEN, HIGH);
  digitalWrite(LED_RED, LOW);
  Serial.println("Red off, green on");
  delay(250); // Wait for 1000 millisecond(s)
}

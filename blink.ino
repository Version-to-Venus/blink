const int LED_RED = 12;
const int LED_GREEN = 13;

void setup()
{
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
}

void loop()
{
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_RED, HIGH);
  digitalWrite(LED_GREEN, LOW);
  delay(250); // Wait for 1000 millisecond(s)
  // turn the LED off by making the voltage LOW
  digitalWrite(LED_GREEN, HIGH);
  digitalWrite(LED_RED, LOW);
  delay(250); // Wait for 1000 millisecond(s)
}

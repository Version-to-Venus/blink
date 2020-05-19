
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
  red_on_green_off();
  delay(250); // Wait for 1000 millisecond(s)
  // turn the red LED, green LED on
  green_on_red_off();
  delay(250); // Wait for 1000 millisecond(s)
}

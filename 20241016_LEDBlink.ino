// Define the pin where the onboard LED is connected (usually GPIO 2 on ESP32)
const int ledPin = 2;

void setup() {
  // Initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Turn the LED on
  digitalWrite(ledPin, HIGH);
  delay(200);  // Wait for 1 second
  
  // Turn the LED off
  digitalWrite(ledPin, LOW);
  delay(200);  // Wait for 1 second
}

int pulsePin = A0;
int pulseValue = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  pulseValue = analogRead(pulsePin);  // Read fake heartbeat
  Serial.println(pulseValue);         // Print to Serial Monitor
  delay(10);                          // Small delay
}

// Automatic Street Light
// Sensor: LDR
// Board: Arduino Uno

const int ldrPin = A0;
const int ledPin = 13;

const int lightThreshold = 500;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int lightLevel = analogRead(ldrPin);

  Serial.print("Light Level: ");
  Serial.println(lightLevel);

  if (lightLevel < lightThreshold) {
    // Dark → turn light ON
    digitalWrite(ledPin, HIGH);
  } else {
    // Bright → turn light OFF
    digitalWrite(ledPin, LOW);
  }

  delay(500);
}

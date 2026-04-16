#define Buzzerpin 2

void setup() {
  Serial.begin(9600);       // Enable serial monitor
  pinMode(4, OUTPUT);       // LED pin
  pinMode(Buzzerpin, OUTPUT); // Buzzer pin (IMPORTANT FIX)
}

void loop() {
  int value = analogRead(A3);  // Read rain sensor value

  Serial.print("Value: ");
  Serial.println(value);

  if (value < 300) {  // Heavy rain condition
    digitalWrite(4, HIGH);        // LED ON
    digitalWrite(Buzzerpin, HIGH); // Buzzer ON
    Serial.println("Heavy rain detected - Wiper Activated");
  } else {
    digitalWrite(4, LOW);         // LED OFF
    digitalWrite(Buzzerpin, LOW); // Buzzer OFF
  }

  delay(500); // small delay for stability
}

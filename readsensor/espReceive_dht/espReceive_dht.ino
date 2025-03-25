void setup() {
  Serial.begin(115200);  // Match the baud rate with STM32
  Serial.println("Wemos Lolin32 - Temperature Receiver");
}

void loop() {
  if (Serial.available() > 0) {
    String data = Serial.readStringUntil('\n');  // Read until newline
    Serial.println(data);  // Display received data on Serial Monitor
  }
}
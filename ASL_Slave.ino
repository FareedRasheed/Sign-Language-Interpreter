#include <SoftwareSerial.h>

SoftwareSerial BTSerial(2, 3);  // HC-05 TX to pin 2, RX to pin 3

void setup() {
  Serial.begin(115200);   // Communication with the laptop
  BTSerial.begin(9600);   // Bluetooth module baud rate
}

void loop() {
  if (BTSerial.available()) {       // If data is received from Bluetooth
    String data = BTSerial.readStringUntil('\n');  
    Serial.println(data);           // Send data to the laptop via Serial
  }
}

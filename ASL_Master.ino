#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>
#include <SoftwareSerial.h>

Adafruit_MPU6050 mpu;
SoftwareSerial BTSerial(2, 3);  // HC-05 TX to pin 2, RX to pin 3

void setup() {
  Serial.begin(115200);   // For debugging via Serial Monitor
  BTSerial.begin(9600);   // Bluetooth module baud rate

  if (!mpu.begin()) {
    Serial.println("Failed to find MPU6050 chip");
    while (1) {
      delay(10);
    }
  }
  
  Serial.println("MPU6050 Found!");
  mpu.setAccelerometerRange(MPU6050_RANGE_8_G);
  mpu.setFilterBandwidth(MPU6050_BAND_21_HZ);
}

void loop() {
  sensors_event_t a, g, temp;
  mpu.getEvent(&a, &g, &temp);

  // Format: X,Y,Z
  String data = String(a.acceleration.x) + "," + 
                String(a.acceleration.y) + "," + 
                String(a.acceleration.z);

  Serial.println("Sending: " + data);  // Debugging
  BTSerial.println(data);              // Send data over Bluetooth

  delay(500);
}

// Include necessary libraries
#define BLYNK_PRINT Serial  // Enable debug prints to Serial Monitor
#include <WiFi.h>           // WiFi library for ESP32
#include <Adafruit_PWMServoDriver.h> // Library for Adafruit PCA9685 PWM driver
#include <Wire.h>           // I2C communication library
#include <BlynkSimpleEsp32.h> // Blynk library for ESP32

// Create an instance of the PWM driver with default I2C address (0x40)
Adafruit_PWMServoDriver struthobby = Adafruit_PWMServoDriver(0x40);

// Define min and max servo pulse lengths
#define servoMIN 150   // Minimum pulse length for servo (in microseconds)
#define servoMAX 600   // Maximum pulse length for servo (in microseconds)

// Blynk Authentication Token
char auth[] = "9d00be1f73b-2fVS3oBjj2IlrPk3flC3nDiE";  // Replace with your Blynk auth token

// Your WiFi credentials
char ssid[] = "Kismat";       // Replace with your WiFi SSID
char pass[] = "6888hhh";      // Replace with your WiFi password

void setup() {
  Serial.begin(9600);                      // Start serial communication
  struthobby.begin();                      // Initialize PCA9685
  struthobby.setPWMFreq(60);              // Set PWM frequency to 60Hz for servos
  Blynk.begin(auth, ssid, pass, "blynk.cloud", 80); // Connect to Blynk server
}

// This function is triggered when virtual pin V0 receives a value
BLYNK_WRITE(V0) {
  int value = param.asInt(); // Read the value from Blynk app (0-180)
  value = map(value, 0, 180, servoMIN, servoMAX); // Map angle to servo pulse range
  struthobby.setPWM(0, 0, value); // Set the servo position on channel 0
  delay(1); // Small delay for stability
}

BLYNK_WRITE(V1) {
  int value = param.asInt();
  value = map(value, 0, 180, servoMIN, servoMAX);
  struthobby.setPWM(1, 0, value); // Channel 1
  delay(1);
}

BLYNK_WRITE(V2) {
  int value = param.asInt();
  value = map(value, 0, 180, servoMIN, servoMAX);
  struthobby.setPWM(2, 0, value); // Channel 2
  delay(1);
}

BLYNK_WRITE(V3) {
  int value = param.asInt();
  value = map(value, 0, 180, servoMIN, servoMAX);
  struthobby.setPWM(3, 0, value); // Channel 3
  delay(1);
}

BLYNK_WRITE(V4) {
  int value = param.asInt();
  value = map(value, 0, 180, servoMIN, servoMAX);
  struthobby.setPWM(4, 0, value); // Channel 4
  delay(1);
}

void loop() {
  Blynk.run(); // Continuously run Blynk tasks
}

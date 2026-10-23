#include <Arduino.h>

const int RGB_PIN = 48;  // на деяких версіях плати 38

void setup() {
    Serial.begin(115200);
}

void loop() {
    neopixelWrite(RGB_PIN, 0, 0, 40);  // синій (R, G, B; 0–255)
    Serial.println("Hello, ESP32-S3! LED ON");
    delay(500);
    neopixelWrite(RGB_PIN, 0, 0, 0);   // вимкнено
    Serial.println("LED OFF");
    delay(500);

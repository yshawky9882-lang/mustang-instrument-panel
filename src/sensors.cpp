#include "sensors.h"
#include <Arduino.h>

// Example ESP32 analog input pins for 4 sensors
int sensorPins[4] = {34, 35, 32, 33};

void initSensors() {
    for (int i = 0; i < 4; i++) {
        pinMode(sensorPins[i], INPUT);
    }
}

void readSensors() {
    for (int i = 0; i < 4; i++) {
        int value = analogRead(sensorPins[i]);
        Serial.print("Sensor ");
        Serial.print(i + 1);
        Serial.print(": ");
        Serial.println(value);
    }
}
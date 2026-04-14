#include "sensors.h"
#include <Arduino.h>

int sensorPin = 34;  // example pin

void initSensors() {
    pinMode(sensorPin, INPUT);
}

void readSensors() {
    int value = analogRead(sensorPin);
    Serial.print("Sensor value: ");
    Serial.println(value);
}
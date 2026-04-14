#include "sensors.h"

void setup() {
    Serial.begin(115200);
    initSensors();
}

void loop() {
    readSensors();
    delay(1000);
}
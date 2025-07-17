#include <Wire.h>
#include <SFE_BMP180.h>

SFE_BMP180 bmp180;

void setup() {
  Serial.begin(9600);
  if (bmp180.begin()) {
    Serial.println("BMP180 init successfully");
  } else {
    Serial.println("BMP180 init failed");
    while(1); // Stop if sensor init fails
  }
}

void loop() {
  char status;
  double temperature, pressure;

  status = bmp180.startTemperature();
  if (status) {
    delay(500);
    status = bmp180.getTemperature(temperature);
    if (status) {
      status = bmp180.startPressure(3);
      if (status) {
        delay(status);
        status = bmp180.getPressure(pressure, temperature);
        if (status) {
          Serial.print("Temperature: ");
          Serial.print(temperature);
          Serial.println(" °C");

          Serial.print("Pressure: ");
          Serial.print(pressure);
          Serial.println(" hPa");
        } else {
          Serial.println("Error: Could not get pressure");
        }
      } else {
        Serial.println("Error: Could not start pressure measurement");
      }
    } else {
      Serial.println("Error: Could not get temperature");
    }
  } else {
    Serial.println("Error: Could not start temperature measurement");
  }

  delay(2000); // Wait before next reading
}

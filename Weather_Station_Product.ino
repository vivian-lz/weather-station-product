
/* The following videos/articles were used in direct parts of the 
iteration process of learning how to complete parts of this 
project (especially in coding)
https://www.youtube.com/watch?v=bB1RChYdR5A&t=560s
https://www.youtube.com/watch?v=_6_F6B0rd6M&t=421s 
https://www.youtube.com/watch?v=Y2HC3bdFoPw
https://www.instructables.com/RGB-LED-Temperature-Indicator/
https://howtomechatronics.com/tutorials/arduino/how-to-use-a-rgb-led-with-arduino/#:~:text=The%20RGB%20LED%20can%20emit,of%20the%20RGB%20LED%20type.
https://create.arduino.cc/projecthub/r4lph127/temperature-and-humidity-sensor-with-led-lights-bf4ce6 
*/


#include <LiquidCrystal_I2C.h>

#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BME280.h>

#define SEALEVELPRESSURE_HPA (1013.25)

LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

Adafruit_BME280 bme;

int redPin = 3;
int greenPin = 5;
int bluePin = 7;

void setup() {
  lcd.begin(20, 4);

  bme.begin(0x76);
  
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  
  setLCD();
  setRGB();
  
}

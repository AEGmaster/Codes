// generated by mBlock5 for <your product>
// codes make you happy

#include <Servo.h>
#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>

Servo servo_3;

void _delay(float seconds) {
  long endTime = millis() + seconds * 1000;
  while(millis() < endTime) _loop();
}

void setup() {
  servo_3.attach(3);
  while(1) {
      servo_3.write(0);
      _delay(1);
      servo_3.write(180);
      _delay(1);

      _loop();
  }

}

void _loop() {
}

void loop() {
  _loop();
}
#include <Servo.h>
int xPin = A5; 
Servo motor1; Servo motor2;
 
int xPozisyon = 0;
int yPozisyon = 0;
 
 
void setup() {
pinMode(xPin, INPUT);
motor1.attach(3);
}
 
void loop() {
xPozisyon = map(analogRead(xPin),0,1023,0,180);
motor1.write(xPozisyon);
}
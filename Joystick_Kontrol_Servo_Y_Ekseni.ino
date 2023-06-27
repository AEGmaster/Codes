#include <Servo.h>
int xPin = A5; 
int yPin = A1; 
Servo motor1; Servo motor2;
 
int xPozisyon = 0;
int yPozisyon = 0;
 
 
void setup() {
pinMode(xPin, INPUT);
pinMode(yPin, INPUT);
motor1.attach(3);
}
 
void loop() {
xPozisyon = map(analogRead(xPin),0,1023,0,180);
yPozisyon = map(analogRead(yPin),0,1023,0,180);
motor1.write(yPozisyon);
}
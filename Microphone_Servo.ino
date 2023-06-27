#include <Servo.h>

const int microphonePin = A4; // Mikrofon sensörü bağlı olan analog pin
Servo myServo;

void setup() {
  myServo.attach(3); // Servo motoru D9 pine bağla
  pinMode(microphonePin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int soundLevel = analogRead(microphonePin); // Ses seviyesini oku
  Serial.println(soundLevel); // Ses seviyesini seri port üzerinden gönder
  delay(1000);

  int angle = map(soundLevel, 0, 1023, 0, 180); // Ses seviyesini 0-1023 aralığından 0-180 aralığına dönüştür
  myServo.write(angle); // Servo motorun açısını ayarla
  delay(15); // Küçük bir gecikme ekle
}

#include <Arduino.h>
 int nilaiSensor=A0;
 const int relay=14;

void setup() {
  Serial.begin(115200);
  pinMode(relay,OUTPUT);
  delay(3000);
}

void loop() {
  int intensitasCahaya;
  intensitasCahaya=analogRead(nilaiSensor);
  Serial.print("Nilai Sensor = ");
  Serial.println(intensitasCahaya);

  if(intensitasCahaya<=512){
    digitalWrite(relay, LOW);
    Serial.println("Ruangan Cerah, Lampu Mati!");
    Serial.println("=============================");
  }
  else{
    digitalWrite(relay, HIGH);
    Serial.println("Ruangan Gelap, Lampu Hidup!");
    Serial.println("==============================");
  }
  delay(1000);
}
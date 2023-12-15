#include <SoftwareSerial.h>
SoftwareSerial bluetooth(2, 3);// TX,RX

float temperatura;
int lm35 = 0;

void setup() 
{
  
  Serial.begin(9600);
  bluetooth.begin(9600);
}

void loop() 
{
  /*if (bluetooth.available())
    Serial.write(bluetooth.read());
  if (Serial.available())
    bluetooth.write(Serial.read());*/

  temperatura = analogRead(lm35);
  temperatura = (temperatura * 5/ 1024) / 0.01;
  bluetooth.print("temperatura: ");
  bluetooth.print(temperatura);
  bluetooth.println(" ºGrados");
  delay(500);
}

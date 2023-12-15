#include <SoftwareSerial.h>
SoftwareSerial bluetooth(2, 3);// TX,RX

#define led 5
void setup() 
{
  Serial.begin(9600);
  bluetooth.begin(9600);
  pinMode(5,OUTPUT);
}

void loop() 
{
  /*if (bluetooth.available())
    Serial.write(bluetooth.read());
  if (Serial.available())
    bluetooth.write(Serial.read());*/

  bluetooth.print("hola desde el arduino");
  delay(500);
}

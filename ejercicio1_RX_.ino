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

  int dato=bluetooth.read();
  if(dato=='1')
    {
      if(digitalRead(led)==1)
        {digitalWrite(led,0);}
      else
        {digitalWrite(led,1);}
      delay(100);
    }
}

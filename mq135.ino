#include <MQUnifiedsensor.h>

int ledPin = 13;
int sensorPin = A0;
int value;

void setup()
{
Serial.begin(9600);
pinMode(ledPin,OUTPUT);
}
void loop() 
{
int Value = analogRead(sensorPin);
value = analogRead(A0);
Serial.println(value);
if (value-50 > 400)

{
    digitalWrite(ledPin,HIGH);
    Serial.println ("Alert");   
  } 
  
  else 
 
 {
    digitalWrite(ledPin,LOW);
    Serial.println("Normal");
  }

delay(4000);
}

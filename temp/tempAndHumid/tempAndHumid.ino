
#include "dht.h"

dht DHT;

#define DHT11_PIN A0

void setup(){
  Serial.begin(9600);
}

void loop()
{
  int chk = DHT.read11(DHT11_PIN);
  delay(2000);
  Serial.print("Temperature = ");
  Serial.println(DHT.temperature*9/5+32);
  delay(2000);
  Serial.print("Humidity = ");
  Serial.println(DHT.humidity);
  delay(2000);
}

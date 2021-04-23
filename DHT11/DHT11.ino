#include "DHT.h"
#include<LiquidCrystal.h>

const int DHTPIN = 7;
const int DHTTYPE = DHT11;
DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal lcd(12,11,5,4,3,2);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
    lcd.begin(16, 2);
  dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  float h=dht.readHumidity();
  float t=dht.readTemperature();
  lcd.setCursor( 0,0);
  lcd.print("Nhiet do: ");
  lcd.print(t);lcd.print(" ");
  lcd.setCursor(0,1);
  lcd.print("Do am: ");
  lcd.print(h);lcd.print("    ");
  Serial.println();
  delay(1000);
}

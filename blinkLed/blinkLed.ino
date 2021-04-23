int led = 13;
int del = 1000;

void setup() {
pinMode(led, OUTPUT);
}

void loop() {
digitalWrite(led, HIGH);
delay(del);
digitalWrite(led, LOW);
delay(del);
}

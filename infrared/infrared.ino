int infrared = 4;
int led = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(infrared, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(infrared) == 0)
    digitalWrite(led, HIGH);
   else digitalWrite(led, LOW);
}

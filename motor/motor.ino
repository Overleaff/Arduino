
#define in1 6
#define in2 7

int pressed = false;
void setup() {
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);

}
void loop() {
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);

}

const int aPin = 2;
const int bPin = 3;
const int cPin = 4;
const int dPin = 5;
const int ePin = 6;
const int fPin = 7;
const int gPin = 8;

unsigned char led7Hex[] = {0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
//0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F
//0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};

void Led_writeByte(unsigned char b)
{
  if (((b >> 0) & 0x01) == 1) {
    digitalWrite(aPin, LOW);
  } 
  else {
    digitalWrite(aPin, HIGH);
  }
  
  if (((b >> 1) & 0x01) == 1) {
    digitalWrite(bPin, LOW);
  } else {
    digitalWrite(bPin, HIGH);
  }
  
  if (((b >> 2) & 0x01) == 1) {
    digitalWrite(cPin, LOW);
  } else {
    digitalWrite(cPin, HIGH);
  }
  
    if (((b >> 3) & 0x01) == 1) {
    digitalWrite(dPin, LOW);
  } else {
    digitalWrite(dPin, HIGH);
  }
  
    if (((b >> 4) & 0x01) == 1) {
    digitalWrite(ePin, LOW);
  } else {
    digitalWrite(ePin, HIGH);
  }
  
    if (((b >> 5) & 0x01) == 1) {
    digitalWrite(fPin, LOW);
  } else {
    digitalWrite(fPin, HIGH);
  }
  if (((b >> 6) & 0x01) == 1) {
    digitalWrite(gPin, LOW);
  } else {
    digitalWrite(gPin, HIGH);
  }
}

void setup() {
  pinMode(aPin,OUTPUT);
  pinMode(bPin,OUTPUT);
  pinMode(cPin,OUTPUT);
  pinMode(dPin,OUTPUT);
  pinMode(ePin,OUTPUT);  
  pinMode(fPin,OUTPUT);
  pinMode(gPin,OUTPUT);
  pinMode(12,INPUT_PULLUP);
  pinMode(13,OUTPUT);
  Led_writeByte(led7Hex[0]);
}

int i=-1;
int val=0;

void loop(){
    if (val!=digitalRead(12)){
      i++;
      if (i==10) i=0;
      Led_writeByte(led7Hex[i]);
      delay(200);
    }
    val=digitalRead(12);

}

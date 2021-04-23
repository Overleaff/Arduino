String voice;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available()) {
      delay(10);
      char c=Serial.read();
        if(c=='#')
            {break; }
        voice += c;
  } 
        if (voice.length() > 0) {
        Serial.print(voice);
        if (voice=="turn on")
          digitalWrite(13,HIGH);
        if (voice=="turn off")
          digitalWrite(13,LOW);
        voice="";
      }
 }

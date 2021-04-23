int ledPin = 13; // chân led 13 
int inPin = 2; // button tại chân 2 
int val = 0; // biến "val" dùng để lưu tín hiệu từ digitalRead 

void setup() 
{ 
    pinMode(ledPin, OUTPUT); // đặt pin digital 13 là output 
    pinMode(inPin, INPUT_PULLUP); // đặt pin digital 2 là input 
} 

void loop() 
{
    val = digitalRead(inPin); // đọc tín hiệu từ digital2 
    digitalWrite(ledPin, val); // thay đổi giá trị của đèn LED là giá trị của digital 2 
}

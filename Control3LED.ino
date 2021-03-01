int green=3;
int yellow=6;
int red=9;
int PotentioRead=A0;
float Volt;
float readVal;

void setup() {
    Serial.begin(9600);
    pinMode(green,OUTPUT);
    pinMode(yellow,OUTPUT);
    pinMode(red,OUTPUT);
    pinMode(PotentioRead,INPUT);
}

void loop() {
    readVal = analogRead(PotentioRead);
    Volt = (5./1023.)*readVal;
    Serial.println(Volt);
    if(Volt<3.0) {
        digitalWrite(green,HIGH);
        digitalWrite(yellow,LOW);
        digitalWrite(red,LOW);
    }
    if(Volt>3.0 && Volt<4.0) {
        digitalWrite(green,LOW);
        digitalWrite(yellow,HIGH);
        digitalWrite(red,LOW);
    }
    if(Volt>4.0) {
        digitalWrite(green,LOW);
        digitalWrite(yellow,LOW);
        digitalWrite(red,HIGH);
    }
}
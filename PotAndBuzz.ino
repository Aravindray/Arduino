int potPin=A0;
int buzzPin=9;
int potVal;
int dt=500;

void setup() {
    Serial.begin(9600);
    pinMode(buzzPin,OUTPUT);
    pinMode(potPin,INPUT);
}

void loop() {
    potVal = analogRead(potPin);
    Serial.println(potVal);
    delay(dt);
    if(potVal>1000) {
        digitalWrite(buzzPin,HIGH);
        delay(dt);
        digitalWrite(buzzPin,LOW);
        delay(dt);
    }
}
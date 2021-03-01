int ledPin=7;
int buttonPin=2;
int buttonVal;
int dt=500;

void setup() {
    pinMode(ledPin,OUTPUT);
    pinMode(buttonPin,INPUT);
    Serial.begin(9600);
}

void loop() {
    buttonVal = digitalRead(buttonPin);
    Serial.println(buttonVal);
    delay(dt);
    if(buttonVal==1) {
        digitalWrite(ledPin,LOW);
    }
    if(buttonVal==0) {
        digitalWrite(ledPin,HIGH);
    }
}
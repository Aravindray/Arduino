int buttonpin=8;
int ledpin=6;
int dt=100;
int ledState=0;
int buttonOld=1;
int buttonNew;

void setup() {
    pinMode(buttonpin,INPUT);
    pinMode(ledpin,OUTPUT);
    Serial.begin(9600);
}

void loop() {
    buttonNew = digitalRead(buttonpin);
    Serial.println(buttonNew);
    if(buttonOld==0 && buttonNew==1){
        if(ledState==0) {
            digitalWrite(ledpin,HIGH);
            ledState=1;
        }
        else{
            digitalWrite(ledpin,LOW);
            ledState=0;
        }
    }
    buttonOld=buttonNew;
    delay(dt);
}
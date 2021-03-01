int Num;
String msg1="How many blinks do you want";
int led=2;
int x;
int blinkTime=500;
void setup() {
    pinMode(led,OUTPUT);
    Serial.begin(9600);
}
void loop() {
    Serial.println(msg1);
    while (Serial.available()==0) {

    }
    Num = Serial.parseInt();
    for(x=1;x<=Num;x=x+1) {
        digitalWrite(led,HIGH);
        delay(blinkTime);
        digitalWrite(led,LOW);
        delay(blinkTime);
    }
    
}
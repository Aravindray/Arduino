int gled=9;
int yled=3;
int rled=5;
int potentiometer=A4;
float potval;
float ledval;
void setup(){
    pinMode(gled,OUTPUT);
    pinMode(yled,OUTPUT);
    pinMode(rled,OUTPUT);
    pinMode(potentiometer,INPUT);
    Serial.begin(9600);
}
void loop() {
    potval = analogRead(potentiometer);
    ledval = (255./1024.)*potval;
    analogWrite(gled,ledval);
    analogWrite(yled,ledval);
    analogWrite(rled,ledval);
    Serial.println(ledval);
}
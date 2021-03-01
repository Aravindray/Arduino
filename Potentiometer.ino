int Voltpin=A0;
int WaitTime=750;
float V2;
int ReadVal;
void setup() {
    pinMode(Voltpin,INPUT);
    Serial.begin(9600);
}
void loop() {
    ReadVal = analogRead(Voltpin);
    // v2 = (5./1023.)*ReadVal;
    V2 = (255./1023.)*ReadVal;
    Serial.println(V2);
    delay(WaitTime);
}
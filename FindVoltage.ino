int Analogpin=A0;
int DelayTime=500;
int Value;
float Voltage;
void setup() {
    pinMode(Analogpin,INPUT);
    Serial.begin(9600);
}
void loop() {
    Value = analogRead(Analogpin);
    Voltage = (5./1023.)*Value;
    Serial.println(Voltage);
    delay(DelayTime);
}
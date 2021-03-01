int delayTime;
int LightVal;
int photopin=A0;
int buzzpin=9;
int dt=500;

void setup() {
    pinMode(photopin,INPUT);
    pinMode(buzzpin,OUTPUT);
    Serial.begin(9600);
}

void loop() {
    LightVal=analogRead(photopin);
    Serial.print("Light Value is: ");
    Serial.println(LightVal);
    delay(dt);
    // delayTime = (((9./550.)*LightVal)-3.6)+1;
    // delayTime = (9./550.)*LightVal-(9.*200./550.)+1.;
    /* The above formula is not working for me, because I used different range 
    of resistor(10k) but the above formula is for 5k resistor*/
    delayTime = (9./960.)*LightVal+1;
    Serial.print("Delay Time is: ");
    Serial.println(delayTime);
    delay(dt);
    digitalWrite(buzzpin,HIGH);
    delay(delayTime);
    digitalWrite(buzzpin,LOW);
    delay(delayTime);
}
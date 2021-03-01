int buzz=9;
int photopin=A0;
int photoval;
int dt=500;

void setup() {
    pinMode(buzz,OUTPUT);
    pinMode(photopin,INPUT);
    Serial.begin(9600);
}

void loop() {
    photoval = analogRead(photopin);
    Serial.println(photoval);
    delay(dt);
    analogWrite(buzz,photoval);
    delay(dt);
}
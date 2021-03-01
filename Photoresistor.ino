int photopin=A0;
int photoval;
int dt=500;
int gpin=8;
int ypin=3;

void setup() {
    Serial.begin(9600);
    pinMode(photopin,INPUT);
    pinMode(gpin,OUTPUT);
    pinMode(ypin,OUTPUT);
}

void loop() {
    photoval = analogRead(photopin);
    Serial.println(photoval);
    delay(dt);
    if (photoval>900) {
        digitalWrite(gpin,HIGH);
        digitalWrite(ypin,LOW);
    }
    if (photoval<100) {
        digitalWrite(gpin,LOW);
        digitalWrite(ypin,HIGH);
    }
}